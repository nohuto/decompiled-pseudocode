/*
 * XREFs of ExEnableHandleTracing @ 0x1408CEF34
 * Callers:
 *     PsSetProcessHandleTracingInformation @ 0x1408899B4 (PsSetProcessHandleTracingInformation.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x140051600 (KeLeaveCriticalRegionThread.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x140068560 (PsReturnProcessNonPagedPoolQuota.c)
 *     PsChargeProcessNonPagedPoolQuota @ 0x140076C00 (PsChargeProcessNonPagedPoolQuota.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     KeInitializeEvent @ 0x1400B8DB0 (KeInitializeEvent.c)
 *     MmGetMaximumNonPagedPoolInBytes @ 0x14013B914 (MmGetMaximumNonPagedPoolInBytes.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExDereferenceHandleDebugInfo @ 0x1408CEED4 (ExDereferenceHandleDebugInfo.c)
 */

__int64 __fastcall ExEnableHandleTracing(__int64 a1, unsigned int a2)
{
  unsigned int v2; // ebx
  int i; // eax
  struct _KPROCESS *v5; // rbp
  __int64 MaximumNonPagedPoolInBytes; // rax
  int v7; // r8d
  __int64 v8; // rdx
  char *PoolWithTag; // rax
  char *v11; // rsi
  struct _KTHREAD *CurrentThread; // r15
  _DWORD *v13; // r14

  v2 = a2;
  if ( a2 )
  {
    if ( a2 >= ExHandleTraceDbMinStacks )
    {
      if ( a2 > ExHandleTraceDbMaxStacks )
        v2 = ExHandleTraceDbMaxStacks;
    }
    else
    {
      v2 = ExHandleTraceDbMinStacks;
    }
    for ( i = v2 - 1; (i & v2) != 0; v2 = i + 1 )
      i = v2 | (v2 - 1);
  }
  else
  {
    v2 = ExHandleTraceDbDefaultStacks;
  }
  _InterlockedExchangeAdd(&ExpTotalTraceBuffers, v2);
  v5 = 0LL;
  MaximumNonPagedPoolInBytes = MmGetMaximumNonPagedPoolInBytes();
  if ( 160 * v8 <= (unsigned __int64)(5 * MaximumNonPagedPoolInBytes) >> 4 )
  {
    v5 = *(struct _KPROCESS **)(a1 + 16);
    if ( v5 )
      v7 = PsChargeProcessNonPagedPoolQuota(*(_QWORD *)(a1 + 16), 160LL * v2 + 80);
  }
  else
  {
    v7 = -1073741670;
  }
  if ( v7 < 0 )
  {
    _InterlockedExchangeAdd(&ExpTotalTraceBuffers, -v2);
    return (unsigned int)v7;
  }
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 160LL * v2 + 80, 0x6474624Fu);
  v11 = PoolWithTag;
  if ( !PoolWithTag )
  {
    _InterlockedExchangeAdd(&ExpTotalTraceBuffers, -v2);
    if ( v5 )
      PsReturnProcessNonPagedPoolQuota(v5, 160LL * v2 + 80);
    return 3221225626LL;
  }
  memset(PoolWithTag, 0, 160LL * v2 + 80);
  *((_DWORD *)v11 + 1) = v2;
  *(_DWORD *)v11 = 1;
  *((_QWORD *)v11 + 3) = 0LL;
  *((_DWORD *)v11 + 8) = 0;
  *((_DWORD *)v11 + 4) = 1;
  KeInitializeEvent((PRKEVENT)(v11 + 40), SynchronizationEvent, 0);
  if ( v5 )
    *(_BYTE *)(a1 + 44) |= 1u;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(a1 + 56, 0LL);
  v13 = *(_DWORD **)(a1 + 96);
  *(_QWORD *)(a1 + 96) = v11;
  if ( v13 )
  {
    if ( (v13[2] & 8) == 0 )
      goto LABEL_27;
    goto LABEL_26;
  }
  if ( (*(_BYTE *)(a1 + 44) & 2) != 0 )
LABEL_26:
    *((_DWORD *)v11 + 2) = 8;
LABEL_27:
  *(_BYTE *)(a1 + 44) |= 2u;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 56), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 56));
  KeAbPostRelease(a1 + 56);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( v13 )
    ExDereferenceHandleDebugInfo(a1, v13);
  return 0LL;
}
