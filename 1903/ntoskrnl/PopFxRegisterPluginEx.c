/*
 * XREFs of PopFxRegisterPluginEx @ 0x1402F463C
 * Callers:
 *     PoFxRegisterPluginEx @ 0x1402F1E60 (PoFxRegisterPluginEx.c)
 *     PoFxRegisterPlugin @ 0x1408A57F0 (PoFxRegisterPlugin.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14003ED30 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14003F0E0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14003F4F0 (MmGetSessionIdEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     KiAbEntryRemoveFromTree @ 0x140061160 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x14009B920 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     KeInitializeQueue @ 0x140123920 (KeInitializeQueue.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PopFxCreateEmergencyWorkerThread @ 0x140782198 (PopFxCreateEmergencyWorkerThread.c)
 *     PopDiagTraceFxPluginRegistration @ 0x1408AFA78 (PopDiagTraceFxPluginRegistration.c)
 */

__int64 __fastcall PopFxRegisterPluginEx(unsigned __int16 *a1, __int64 a2, unsigned __int16 *a3)
{
  unsigned __int16 v3; // ax
  int EmergencyWorkerThread; // ebx
  bool v7; // cf
  __int16 v9; // ax
  unsigned int v10; // ebx
  __int64 v11; // r12
  __int64 v12; // r13
  char *PoolWithTag; // rax
  char *v14; // rsi
  char *v15; // rcx
  __int64 v16; // r8
  char *v17; // rdx
  __int64 v18; // rax
  _QWORD *v19; // rax
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v21; // rax
  __int64 v22; // rdx
  struct _KTHREAD *v23; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v25; // r13
  unsigned int v26; // r8d
  bool v27; // zf
  __int64 v28; // rcx
  __int64 v29; // rbp
  int v30; // eax
  unsigned int v31; // ecx
  __int64 v32; // rdx
  __int64 v33; // rcx
  int v35; // [rsp+80h] [rbp+18h] BYREF
  int v36; // [rsp+88h] [rbp+20h]

  v3 = *a3;
  if ( *a3 > 3u )
    return (unsigned int)-1073700860;
  switch ( v3 )
  {
    case 3u:
      v7 = a3[1] < 0x60u;
      break;
    case 2u:
      v7 = a3[1] < 0x58u;
      break;
    case 0u:
      return (unsigned int)-1073741811;
    default:
      goto LABEL_11;
  }
  if ( v7 )
    return (unsigned int)-1073741811;
LABEL_11:
  if ( a3[1] < 0x38u )
    return (unsigned int)-1073741811;
  v9 = *a1;
  if ( *a1 > 3u )
    return (unsigned int)-1073700859;
  if ( v9 == 3 )
  {
    if ( a1[1] < 0x20u || !*((_QWORD *)a1 + 1) && !*((_QWORD *)a1 + 3) )
      return (unsigned int)-1073741811;
  }
  else if ( v9 != 2 || a1[1] < 0x18u || !*((_QWORD *)a1 + 1) )
  {
    return (unsigned int)-1073741811;
  }
  v10 = (a2 & 1) != 0 ? 4 : 1;
  v11 = v10;
  v12 = 56 * v10 + 128;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 176LL * v10 + v12, 0x4D584650u);
  v14 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 176LL * v10 + 56 * v10 + 128);
    v15 = &v14[v12];
    v16 = v10;
    v17 = &v14[v12];
    v18 = (__int64)&v14[v12 + 24];
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
      --v16;
    }
    while ( v16 );
    *((_DWORD *)v14 + 30) = v10;
    v19 = v14 + 128;
    do
    {
      v19[5] = v14;
      v19[2] = PopFxPluginWork;
      v19[3] = v19;
      *v19 = 0LL;
      v19[6] = v15;
      *((_QWORD *)v15 + 18) = v19;
      v15 += 176;
      v19 += 7;
      --v11;
    }
    while ( v11 );
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
      v23 = KeGetCurrentThread();
      v35 = 0;
      if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&PopFxPluginLock) == 1 )
        SessionId = MmGetSessionIdEx((__int64)v23->ApcState.Process);
      else
        SessionId = -1;
      --v23->SpecialApcDisable;
      v25 = ++v23->AbAllocationRegionCount;
      v26 = ((char)v23->AbEntrySummary | (char)v23->AbOrphanedEntrySummary) ^ 0x3F;
      while ( 1 )
      {
        v27 = !_BitScanReverse((unsigned int *)&v28, v26);
        v36 = v28;
        if ( v27 )
          break;
        v29 = (__int64)&v23->LockEntries[v28];
        v26 &= ~(1 << v28);
        if ( (*(_BYTE *)(v29 + 26) & 1) != 0
          && (*(_DWORD *)(v29 + 32) & 1) == 0
          && (*(_QWORD *)(v29 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&PopFxPluginLock & 0x7FFFFFFFFFFFFFFCLL)
          && *(_DWORD *)(v29 + 40) == SessionId )
        {
          *(_BYTE *)(v29 + 26) &= ~1u;
          if ( *(_QWORD *)(v29 + 32) )
          {
            if ( v29 )
            {
              *(_BYTE *)(v29 + 32) |= 2u;
              if ( *(__int64 *)(v29 + 32) < 0 )
                KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v29);
              v30 = *(_DWORD *)(v29 + 88) & 0x1FFFF;
              v31 = *(_DWORD *)(v29 + 88) & 0xFFFE0000;
              *(_BYTE *)(v29 + 25) &= ~1u;
              v35 = v30;
              *(_DWORD *)(v29 + 88) = v31;
              *(_QWORD *)(v29 + 32) = 0LL;
              v32 = (v29 - (__int64)v23 - 800) / 96;
              if ( v25 == 1 )
                v23->AbEntrySummary |= 1 << v32;
              else
                _InterlockedOr8((volatile signed __int8 *)&v23->AbOrphanedEntrySummary, 1 << v32);
              goto LABEL_54;
            }
            break;
          }
        }
      }
      if ( (*((_DWORD *)&v23->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v23, (ULONG_PTR)&PopFxPluginLock, SessionId, 0LL);
LABEL_54:
      --v23->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v23, (__int64)&PopFxPluginLock, &v35);
      v27 = v23->SpecialApcDisable++ == -1;
      if ( v27 && ($6EAC78A6FCFADE0A5FA44F358736B38F *)v23->ApcState.ApcListHead[0].Flink != &v23->152 )
        KiCheckForKernelApcDelivery(v33);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      PopDiagTraceFxPluginRegistration(v14, a2, 0LL);
      v7 = *a3 < 2u;
      *((_QWORD *)a3 + 2) = PopFxRequestWorker;
      *((_QWORD *)a3 + 6) = PopFxTransitionCriticalResource;
      *((_QWORD *)a3 + 1) = v14;
      *((_QWORD *)a3 + 4) = 0LL;
      *((_QWORD *)a3 + 5) = 0LL;
      *((_QWORD *)a3 + 3) = 0LL;
      if ( !v7 )
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
