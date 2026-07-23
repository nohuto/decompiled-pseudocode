/*
 * XREFs of SmKmStoreDelete @ 0x1406CA730
 * Callers:
 *     SmKmStoreDeleteWhenEmptyWorker @ 0x1401375C0 (SmKmStoreDeleteWhenEmptyWorker.c)
 *     SmProcessCreateRequest @ 0x14066BFB4 (SmProcessCreateRequest.c)
 *     SmProcessDeleteRequest @ 0x1408AC120 (SmProcessDeleteRequest.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExWaitForRundownProtectionRelease @ 0x140089880 (ExWaitForRundownProtectionRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     SmKmStoreRefFromStoreIndex @ 0x1400E12A8 (SmKmStoreRefFromStoreIndex.c)
 *     SmEtwEnabled @ 0x1400E3EA8 (SmEtwEnabled.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     SmKmEtwLogStoreChange @ 0x1408AD974 (SmKmEtwLogStoreChange.c)
 *     SmKmEtwLogStoreStats @ 0x1408ADAA8 (SmKmEtwLogStoreStats.c)
 */

__int64 __fastcall SmKmStoreDelete(__int64 a1, unsigned int a2, char a3)
{
  unsigned int v4; // r12d
  unsigned int v7; // edi
  _QWORD *v8; // r14
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v10; // rbp
  __int16 v11; // cx
  __int64 v12; // r15
  ULONGLONG *v13; // rax
  ULONGLONG *v14; // r13
  struct _KTHREAD *v15; // rax

  v4 = a2 & 0x3FF;
  v7 = 0;
  v8 = (_QWORD *)SmKmStoreRefFromStoreIndex(a1, v4);
  if ( !v8 )
    return (unsigned int)-1073741735;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v10 = v8 + 2;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(v8 + 2), 0LL);
  v11 = *((_WORD *)v8 + 16);
  if ( a2 >> 10 != (v11 & 0x3F) )
    goto LABEL_21;
  v12 = *v8;
  if ( (unsigned __int64)(*v8 - 1LL) > 0xFFFFFFFFFFFFFFFDuLL )
    goto LABEL_21;
  if ( !a3 )
  {
LABEL_5:
    (*(void (__fastcall **)(__int64, _QWORD, __int64))(a1 + 256))(a1, *v8, 7LL);
    ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)v8 + 1);
    v13 = SmEtwEnabled(0);
    v14 = v13;
    if ( v13 )
    {
      SmKmEtwLogStoreStats(v13, *v8);
      SmKmEtwLogStoreChange(v14, *v8, &SmEventStoreDelete);
    }
    (*(void (__fastcall **)(__int64, __int64, __int64))(a1 + 256))(a1, v12, 2LL);
    *v8 = 0LL;
    v15 = KeGetCurrentThread();
    --v15->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(a1 + 416, 0LL);
    if ( *(_DWORD *)(a1 + 432) == v4 )
      *(_DWORD *)(a1 + 432) = -1;
    if ( (*(_DWORD *)(a1 + 424))-- == 1 )
      (*(void (__fastcall **)(__int64, _QWORD, __int64))(a1 + 256))(a1, 0LL, 4LL);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 416), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 416));
    KeAbPostRelease(a1 + 416);
    KeLeaveCriticalRegion();
    if ( (_InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v10);
    KeAbPostRelease((ULONG_PTR)v10);
    KeLeaveCriticalRegion();
    (*(void (__fastcall **)(__int64, __int64, __int64))(a1 + 256))(a1, v12, 1LL);
    return v7;
  }
  if ( (v11 & 0x40) != 0 )
  {
LABEL_21:
    v7 = -1073741735;
  }
  else
  {
    if ( (v11 & 0x80u) == 0 )
      goto LABEL_5;
    v7 = -1073741790;
  }
  if ( (_InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v8 + 2);
  KeAbPostRelease((ULONG_PTR)(v8 + 2));
  KeLeaveCriticalRegion();
  return v7;
}
