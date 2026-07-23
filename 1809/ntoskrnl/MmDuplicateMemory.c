/*
 * XREFs of MmDuplicateMemory @ 0x14056D274
 * Callers:
 *     PopTransitionToSleep @ 0x14056D0F0 (PopTransitionToSleep.c)
 *     IopLiveDumpCaptureMemoryPages @ 0x140579508 (IopLiveDumpCaptureMemoryPages.c)
 *     IopLiveDumpEstimateMemoryPages @ 0x140579B0C (IopLiveDumpEstimateMemoryPages.c)
 *     PnprInitiateReplaceOperation @ 0x14057A814 (PnprInitiateReplaceOperation.c)
 *     MmCreateMirror @ 0x14084F6D0 (MmCreateMirror.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     MiUnlockDynamicMemoryExclusive @ 0x140090C58 (MiUnlockDynamicMemoryExclusive.c)
 *     MiLockDynamicMemoryExclusive @ 0x140090F90 (MiLockDynamicMemoryExclusive.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     MmUnlockPagableImageSection @ 0x140097E40 (MmUnlockPagableImageSection.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     ExQueueWorkItem @ 0x1400D1A80 (ExQueueWorkItem.c)
 *     MiMirrorPerformBrownWrites @ 0x140152494 (MiMirrorPerformBrownWrites.c)
 *     MiMirrorGatherBrownPages @ 0x140152660 (MiMirrorGatherBrownPages.c)
 *     MiLockAllMemoryLists @ 0x140152930 (MiLockAllMemoryLists.c)
 *     MiUnlockAllMemoryLists @ 0x140152968 (MiUnlockAllMemoryLists.c)
 *     MiResumeFromHibernate @ 0x1401529A0 (MiResumeFromHibernate.c)
 *     MiMirrorVerify @ 0x140152B0C (MiMirrorVerify.c)
 *     MiMirrorPerformBlackWrites @ 0x140152B54 (MiMirrorPerformBlackWrites.c)
 *     MiMirrorReduceBlackWrites @ 0x140152EE0 (MiMirrorReduceBlackWrites.c)
 *     CcNotifyWriteBehind @ 0x1401531C8 (CcNotifyWriteBehind.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     MiEmptyAllWorkingSets @ 0x1402B319C (MiEmptyAllWorkingSets.c)
 *     MiRemoveEnclavePagesFromMirror @ 0x14057D7F8 (MiRemoveEnclavePagesFromMirror.c)
 *     MmLockPagableSectionByHandle @ 0x140620240 (MmLockPagableSectionByHandle.c)
 *     MiUpdateMirrorBitmaps @ 0x1406E0D6C (MiUpdateMirrorBitmaps.c)
 *     MiActOnMirrorBitmap @ 0x1406E0DAC (MiActOnMirrorBitmap.c)
 */

__int64 __fastcall MmDuplicateMemory(__int64 a1)
{
  int v1; // edx
  char v3; // si
  unsigned int v4; // r13d
  struct _KTHREAD *CurrentThread; // rbp
  int v6; // r12d
  int v7; // r15d
  int v8; // edi
  __int64 v9; // rdx
  unsigned int v10; // r9d
  unsigned __int8 CurrentIrql; // bp
  unsigned __int8 v12; // di
  __int64 v13; // rdx
  int v14; // eax
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int8 v17; // cl
  struct _KPRCB *v18; // rcx
  __int64 v19; // [rsp+30h] [rbp-58h]
  unsigned __int64 v20[10]; // [rsp+38h] [rbp-50h] BYREF
  int v21; // [rsp+90h] [rbp+8h]
  int v22; // [rsp+98h] [rbp+10h]
  int v23; // [rsp+A0h] [rbp+18h]

  v1 = *(_DWORD *)(a1 + 32);
  if ( (*(_BYTE *)(a1 + 32) & 5) == 5 )
    return 3221225485LL;
  v3 = v1 & 0xFA;
  v4 = 8;
  if ( (v1 & 8) == 0 )
    v3 = *(_DWORD *)(a1 + 32);
  if ( (v3 & 0xA) == 0 )
    CcNotifyWriteBehind();
  CurrentThread = KeGetCurrentThread();
  v21 = 0;
  v19 = (__int64)CurrentThread;
  v6 = 0;
  v7 = 0;
  KeWaitForSingleObject(&stru_14043B830, WrVirtualMemory, 0, 0, 0LL);
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_14043B7C8, 0LL);
  MiLockDynamicMemoryExclusive((__int64)&MiSystemPartition, (__int64)CurrentThread);
  if ( (MiFlags & 4) == 0 )
    MmLockPagableSectionByHandle(ExPageLockHandle);
  _InterlockedIncrement(&dword_14043BF90);
  if ( (unsigned int)MiUpdateMirrorBitmaps() )
  {
    MiActOnMirrorBitmap(&qword_14043B880, 1LL);
    v23 = 0;
    v22 = 1;
    if ( (v3 & 1) != 0 )
    {
      v6 = 3;
    }
    else
    {
      if ( (v3 & 4) != 0 )
      {
        v4 = 7;
      }
      else
      {
        if ( (v3 & 8) == 0 )
          goto LABEL_14;
        v4 = 0;
      }
      v6 = 2;
    }
    v22 = 0;
LABEL_14:
    v8 = (*(__int64 (**)(void))a1)();
    if ( v8 < 0 )
    {
      v6 = 0;
    }
    else
    {
      while ( 1 )
      {
        MiActOnMirrorBitmap(&qword_14043B870, 2LL);
        if ( v23 == ((v3 & 0xA) == 0) )
        {
          v7 = 1;
          _InterlockedIncrement(&dword_14043BE68);
        }
        if ( (v3 & 4) != 0 )
        {
          v10 = v4;
        }
        else
        {
          if ( (v3 & 0x10) == 0 )
            MiEmptyAllWorkingSets((__int64)&MiSystemPartition);
          v10 = 0;
        }
        dword_14043B82C = 1;
        MiMirrorGatherBrownPages(a1, v9, v6, v10);
        v8 = MiMirrorPerformBrownWrites(a1, v3, v20);
        if ( v8 < 0 )
        {
          if ( v7 == 1 )
            _InterlockedAdd(&dword_14043BE68, 0xFFFFFFFF);
          dword_14043B82C = 0;
          goto LABEL_40;
        }
        if ( v7 == 1 || v20[0] < 0x400 )
          break;
        ++v23;
      }
      if ( (v3 & 2) == 0 && v7 == 1 )
      {
        _InterlockedAdd(&dword_14043BE68, 0xFFFFFFFF);
        v7 = 0;
      }
      CurrentIrql = KeGetCurrentIrql();
      v8 = (*(__int64 (__fastcall **)(_QWORD))(a1 + 8))(0LL);
      if ( v8 < 0 )
      {
        if ( v7 == 1 )
          _InterlockedAdd(&dword_14043BE68, 0xFFFFFFFF);
        dword_14043B82C = 0;
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
        goto LABEL_39;
      }
      v12 = KeGetCurrentIrql();
      if ( *(_QWORD *)(a1 + 24) )
        MiActOnMirrorBitmap(&qword_14043B870, 1LL);
      if ( v12 < 2u )
      {
        v17 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 && v17 < 2u )
            _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
        }
      }
      MiLockAllMemoryLists();
      qword_14043B868 = v19;
      if ( v7 == 1 )
        _InterlockedAdd(&dword_14043BE68, 0xFFFFFFFF);
      dword_14043B82C = 2;
      if ( qword_14043B248 )
        MiRemoveEnclavePagesFromMirror(a1);
      MiMirrorReduceBlackWrites(a1, v13, v3, v4);
      v8 = MiMirrorPerformBlackWrites(a1);
      if ( v8 < 0 || (v8 = MiMirrorVerify(a1), v8 < 0) )
      {
        qword_14043B868 = 0LL;
      }
      else
      {
        v14 = (*(__int64 (__fastcall **)(__int64))(a1 + 8))(1LL);
        qword_14043B868 = 0LL;
        v8 = v14;
        if ( v14 == 1073742484 && !v22 )
        {
          v8 = 0;
          MiResumeFromHibernate(v4);
          v21 = 1;
        }
      }
      dword_14043B82C = 0;
      if ( CurrentIrql != 17 )
      {
        MiUnlockAllMemoryLists();
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
        {
          v18 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v18->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick((__int64)v18);
        }
LABEL_39:
        __writecr8(CurrentIrql);
      }
LABEL_40:
      v6 = v21;
    }
    CurrentThread = (struct _KTHREAD *)v19;
    goto LABEL_42;
  }
  v8 = -1073741670;
LABEL_42:
  if ( (MiFlags & 4) == 0 )
    MmUnlockPagableImageSection(ExPageLockHandle);
  if ( v6 == 1 )
  {
    stru_14043B848.Parameter = (void *)v4;
    ExQueueWorkItem(&stru_14043B848, HyperCriticalWorkQueue);
  }
  else
  {
    _InterlockedAdd(&dword_14043BF90, 0xFFFFFFFF);
    KeSetEvent(&stru_14043B830, 0, 0);
  }
  MiUnlockDynamicMemoryExclusive((__int64)&MiSystemPartition, (__int64)CurrentThread);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14043B7C8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_14043B7C8);
  KeAbPostRelease((ULONG_PTR)&qword_14043B7C8);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return (unsigned int)v8;
}
