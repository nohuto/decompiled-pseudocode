/*
 * XREFs of PopFxRegisterPluginEx @ 0x1402D9188
 * Callers:
 *     PoFxRegisterPluginEx @ 0x1402D74C0 (PoFxRegisterPluginEx.c)
 *     PoFxRegisterPlugin @ 0x14086A590 (PoFxRegisterPlugin.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     KeInitializeQueue @ 0x140121AA0 (KeInitializeQueue.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PopFxCreateEmergencyWorkerThread @ 0x14075C7C4 (PopFxCreateEmergencyWorkerThread.c)
 *     PopDiagTraceFxPluginRegistration @ 0x140873FB4 (PopDiagTraceFxPluginRegistration.c)
 */

__int64 __fastcall PopFxRegisterPluginEx(unsigned __int16 *a1, __int64 a2, unsigned __int16 *a3)
{
  unsigned __int16 v3; // ax
  int EmergencyWorkerThread; // ebx
  bool v8; // cf
  __int16 v10; // ax
  unsigned int v11; // ebx
  __int64 v12; // r12
  char *PoolWithTag; // rax
  char *v14; // rdi
  __int64 v15; // r8
  char *v16; // rcx
  char *v17; // rdx
  __int64 v18; // rax
  _QWORD *v19; // rax
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // [rsp+60h] [rbp+18h]

  v3 = *a3;
  if ( *a3 > 3u )
    return (unsigned int)-1073700860;
  switch ( v3 )
  {
    case 3u:
      v8 = a3[1] < 0x60u;
      break;
    case 2u:
      v8 = a3[1] < 0x58u;
      break;
    case 0u:
      return (unsigned int)-1073741811;
    default:
      goto LABEL_11;
  }
  if ( v8 )
    return (unsigned int)-1073741811;
LABEL_11:
  if ( a3[1] < 0x38u )
    return (unsigned int)-1073741811;
  v10 = *a1;
  if ( *a1 > 3u )
    return (unsigned int)-1073700859;
  if ( v10 == 3 )
  {
    if ( a1[1] < 0x20u || !*((_QWORD *)a1 + 1) && !*((_QWORD *)a1 + 3) )
      return (unsigned int)-1073741811;
  }
  else if ( v10 != 2 || a1[1] < 0x18u || !*((_QWORD *)a1 + 1) )
  {
    return (unsigned int)-1073741811;
  }
  v11 = (a2 & 1) != 0 ? 4 : 1;
  v12 = v11;
  v23 = 56 * v11 + 128;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 176LL * v11 + v23, 0x4D584650u);
  v14 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 176LL * v11 + v23);
    v15 = v11;
    v16 = &v14[v23];
    v17 = &v14[v23];
    v18 = (__int64)&v14[v23 + 24];
    do
    {
      *(_QWORD *)(v18 - 8) = 0LL;
      *(_BYTE *)(v18 - 8) = 8;
      *(_QWORD *)(v18 + 8) = v18;
      *(_QWORD *)v18 = v18;
      *(_QWORD *)(v18 + 48) = 0LL;
      *(_QWORD *)(v18 + 16) = 0LL;
      *(_QWORD *)(v18 + 88) = v17;
      v17 += 176;
      *(_DWORD *)(v18 + 56) = 275;
      *(_QWORD *)(v18 + 80) = PopFxWorkOrderWatchdog;
      *(_QWORD *)(v18 + 112) = 0LL;
      *(_QWORD *)(v18 + 72) = 0LL;
      v18 += 176LL;
      --v15;
    }
    while ( v15 );
    *((_DWORD *)v14 + 30) = v11;
    v19 = v14 + 128;
    do
    {
      v19[5] = v14;
      v19[2] = PopFxPluginWork;
      v19[3] = v19;
      *v19 = 0LL;
      v19[6] = v16;
      *((_QWORD *)v16 + 18) = v19;
      v16 += 176;
      v19 += 7;
      --v12;
    }
    while ( v12 );
    KeInitializeQueue((PRKQUEUE)(v14 + 32), 1u);
    EmergencyWorkerThread = PopFxCreateEmergencyWorkerThread(v14 + 32);
    if ( EmergencyWorkerThread >= 0 )
    {
      *((_DWORD *)v14 + 4) = *a1;
      *((_QWORD *)v14 + 3) = a2;
      *((_QWORD *)v14 + 12) = *((_QWORD *)a1 + 1);
      *((_QWORD *)v14 + 13) = *((_QWORD *)a1 + 2);
      if ( *a1 >= 3u )
        *((_QWORD *)v14 + 14) = *((_QWORD *)a1 + 3);
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopFxPluginLock, 0LL);
      v21 = (_QWORD *)PopFxDeviceRegisterHead;
      v22 = *(_QWORD *)PopFxDeviceRegisterHead;
      if ( *(_QWORD *)(*(_QWORD *)PopFxDeviceRegisterHead + 8LL) != PopFxDeviceRegisterHead )
        __fastfail(3u);
      *((_QWORD *)v14 + 1) = PopFxDeviceRegisterHead;
      *(_QWORD *)v14 = v22;
      *(_QWORD *)(v22 + 8) = v14;
      *v21 = v14;
      if ( (a2 & 0x80000000) != 0 )
        PopFxDeviceRegisterHead = (__int64)v14;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopFxPluginLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&PopFxPluginLock);
      KeAbPostRelease((ULONG_PTR)&PopFxPluginLock);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      PopDiagTraceFxPluginRegistration(v14, a2, 0LL);
      v8 = *a3 < 2u;
      *((_QWORD *)a3 + 2) = PopFxRequestWorker;
      *((_QWORD *)a3 + 6) = PopFxTransitionCriticalResource;
      *((_QWORD *)a3 + 1) = v14;
      *((_QWORD *)a3 + 4) = 0LL;
      *((_QWORD *)a3 + 5) = 0LL;
      *((_QWORD *)a3 + 3) = 0LL;
      if ( !v8 )
      {
        *((_QWORD *)a3 + 7) = PopFxProcessorIdleVeto;
        *((_QWORD *)a3 + 8) = PopFxPlatformIdleVeto;
        *((_QWORD *)a3 + 9) = PopFxUpdateProcessorIdleState;
        *((_QWORD *)a3 + 10) = PopFxUpdatePlatformIdleState;
      }
      if ( *a1 >= 3u )
      {
        *((_QWORD *)a3 + 11) = PopFxRequestCommon;
        if ( *a1 == 3 )
        {
          if ( *((_QWORD *)a1 + 3) )
            PopFxAcpiPepRegistered = 1;
        }
      }
      return 0;
    }
    else
    {
      ExFreePoolWithTag(v14, 0x4D584650u);
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)EmergencyWorkerThread;
}
