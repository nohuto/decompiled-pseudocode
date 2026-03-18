/*
 * XREFs of MmDuplicateMemory @ 0x14059D3EC
 * Callers:
 *     PopTransitionToSleep @ 0x14059D270 (PopTransitionToSleep.c)
 *     IopLiveDumpCaptureMemoryPages @ 0x1405A836C (IopLiveDumpCaptureMemoryPages.c)
 *     IopLiveDumpEstimateMemoryPages @ 0x1405A898C (IopLiveDumpEstimateMemoryPages.c)
 *     PnprInitiateReplaceOperation @ 0x1405A9630 (PnprInitiateReplaceOperation.c)
 *     MmCreateMirror @ 0x140889B40 (MmCreateMirror.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003EEB0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     ExQueueWorkItem @ 0x14005B1A0 (ExQueueWorkItem.c)
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 *     MiUnlockDynamicMemoryExclusive @ 0x1400C5490 (MiUnlockDynamicMemoryExclusive.c)
 *     MiLockDynamicMemoryExclusive @ 0x1400C57C0 (MiLockDynamicMemoryExclusive.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     MmUnlockPagableImageSection @ 0x14012A480 (MmUnlockPagableImageSection.c)
 *     MiMirrorPerformBrownWrites @ 0x1401601FC (MiMirrorPerformBrownWrites.c)
 *     MiMirrorPerformBlackWrites @ 0x1401604F8 (MiMirrorPerformBlackWrites.c)
 *     MiMirrorGatherBrownPages @ 0x140169CC8 (MiMirrorGatherBrownPages.c)
 *     MiLockAllMemoryLists @ 0x140169F84 (MiLockAllMemoryLists.c)
 *     MiUnlockAllMemoryLists @ 0x140169FBC (MiUnlockAllMemoryLists.c)
 *     MiResumeFromHibernate @ 0x140169FF4 (MiResumeFromHibernate.c)
 *     MiMirrorVerify @ 0x14016A160 (MiMirrorVerify.c)
 *     MiMirrorReduceBlackWrites @ 0x14016A3E0 (MiMirrorReduceBlackWrites.c)
 *     CcNotifyWriteBehind @ 0x14016A6C8 (CcNotifyWriteBehind.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     MiEmptyAllWorkingSets @ 0x1402C815C (MiEmptyAllWorkingSets.c)
 *     MiRemoveEnclavePagesFromMirror @ 0x1405AC688 (MiRemoveEnclavePagesFromMirror.c)
 *     MmLockPagableSectionByHandle @ 0x1406A14E0 (MmLockPagableSectionByHandle.c)
 *     MiUpdateMirrorBitmaps @ 0x14072B30C (MiUpdateMirrorBitmaps.c)
 *     MiActOnMirrorBitmap @ 0x14072B34C (MiActOnMirrorBitmap.c)
 */

NTSTATUS __fastcall MmDuplicateMemory(__int64 a1)
{
  int v1; // edx
  NTSTATUS result; // eax
  __int16 v4; // si
  unsigned int v5; // r13d
  struct _KTHREAD *CurrentThread; // rbp
  int v7; // r12d
  int v8; // r15d
  int v9; // edi
  __int64 v10; // rdx
  unsigned int v11; // r9d
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int8 v14; // di
  unsigned __int8 v15; // cl
  __int64 v16; // rdx
  int v17; // eax
  struct _KPRCB *v18; // rcx
  __int64 v19; // [rsp+30h] [rbp-68h]
  __int64 v20; // [rsp+38h] [rbp-60h] BYREF
  unsigned __int64 v21[11]; // [rsp+40h] [rbp-58h] BYREF
  int v22; // [rsp+A0h] [rbp+8h]
  int v23; // [rsp+A8h] [rbp+10h]
  int v24; // [rsp+B0h] [rbp+18h]

  v1 = *(_DWORD *)(a1 + 32);
  v20 = 0LL;
  if ( (v1 & 5) == 5 )
    return -1073741811;
  v4 = v1 & 0xFFFA;
  v5 = 8;
  if ( (v1 & 8) == 0 )
    v4 = v1;
  if ( (v4 & 0xA) == 0 )
    CcNotifyWriteBehind();
  CurrentThread = KeGetCurrentThread();
  v22 = 0;
  v7 = 0;
  v19 = (__int64)CurrentThread;
  v8 = 0;
  result = KeWaitForSingleObject(
             &stru_140465F10,
             WrVirtualMemory,
             0,
             0,
             (PLARGE_INTEGER)((unsigned __int64)&v20 & -(__int64)((v4 & 0x200) != 0)));
  if ( result >= 0 )
  {
    if ( result == 258 )
      return 258;
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140465E48, 0LL);
    MiLockDynamicMemoryExclusive((__int64)&MiSystemPartition, (__int64)CurrentThread);
    if ( (MiFlags & 4) == 0 )
      MmLockPagableSectionByHandle(ExPageLockHandle);
    _InterlockedIncrement(&dword_140466650);
    if ( !(unsigned int)MiUpdateMirrorBitmaps() )
    {
      v9 = -1073741670;
LABEL_48:
      if ( (MiFlags & 4) == 0 )
        MmUnlockPagableImageSection(ExPageLockHandle);
      if ( v7 == 1 )
      {
        stru_140465F28.Parameter = (void *)v5;
        ExQueueWorkItem(&stru_140465F28, HyperCriticalWorkQueue);
      }
      else
      {
        _InterlockedAdd(&dword_140466650, 0xFFFFFFFF);
        KeSetEvent(&stru_140465F10, 0, 0);
      }
      MiUnlockDynamicMemoryExclusive((__int64)&MiSystemPartition, (__int64)CurrentThread);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140465E48, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&qword_140465E48);
      KeAbPostRelease((ULONG_PTR)&qword_140465E48);
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
      return v9;
    }
    MiActOnMirrorBitmap(&qword_140465F60, 1LL);
    v24 = 0;
    v23 = 1;
    if ( (v4 & 1) != 0 )
    {
      v7 = 3;
    }
    else
    {
      if ( (v4 & 4) != 0 )
      {
        v5 = 7;
      }
      else
      {
        if ( (v4 & 8) == 0 )
        {
LABEL_22:
          v9 = (*(__int64 (**)(void))a1)();
          if ( v9 < 0 )
          {
            v7 = 0;
          }
          else
          {
            while ( 1 )
            {
              MiActOnMirrorBitmap(&qword_140465F50, 2LL);
              if ( v24 == ((v4 & 0xA) == 0) )
              {
                v8 = 1;
                _InterlockedIncrement(&dword_140466528);
              }
              if ( (v4 & 4) != 0 )
              {
                v11 = v5;
              }
              else
              {
                if ( (v4 & 0x10) == 0 )
                  MiEmptyAllWorkingSets((__int64)&MiSystemPartition);
                v11 = 0;
              }
              dword_140465F0C = 1;
              MiMirrorGatherBrownPages(a1, v10, v7, v11);
              v9 = MiMirrorPerformBrownWrites(a1, v4, v21);
              if ( v9 < 0 )
              {
                if ( v8 == 1 )
                  _InterlockedAdd(&dword_140466528, 0xFFFFFFFF);
                dword_140465F0C = 0;
                goto LABEL_46;
              }
              if ( v8 == 1 || v21[0] < 0x400 )
                break;
              ++v24;
            }
            if ( (v4 & 2) == 0 && v8 == 1 )
            {
              _InterlockedAdd(&dword_140466528, 0xFFFFFFFF);
              v8 = 0;
            }
            CurrentIrql = KeGetCurrentIrql();
            v9 = (*(__int64 (__fastcall **)(_QWORD))(a1 + 8))(0LL);
            if ( v9 < 0 )
            {
              if ( v8 == 1 )
                _InterlockedAdd(&dword_140466528, 0xFFFFFFFF);
              dword_140465F0C = 0;
              if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
                KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
              }
LABEL_45:
              __writecr8(CurrentIrql);
              goto LABEL_46;
            }
            v14 = KeGetCurrentIrql();
            if ( *(_QWORD *)(a1 + 24) )
              MiActOnMirrorBitmap(&qword_140465F50, 1LL);
            if ( v14 < 2u )
            {
              v15 = KeGetCurrentIrql();
              __writecr8(2uLL);
              if ( KiIrqlFlags )
              {
                if ( (KiIrqlFlags & 1) != 0 && v15 < 2u )
                  _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
              }
            }
            MiLockAllMemoryLists();
            qword_140465F48 = v19;
            if ( v8 == 1 )
              _InterlockedAdd(&dword_140466528, 0xFFFFFFFF);
            dword_140465F0C = 2;
            if ( qword_1404658C8 )
              MiRemoveEnclavePagesFromMirror(a1);
            MiMirrorReduceBlackWrites(a1, v16, v4, v5);
            v9 = MiMirrorPerformBlackWrites(a1);
            if ( v9 < 0 || (v9 = MiMirrorVerify(a1), v9 < 0) )
            {
              qword_140465F48 = 0LL;
            }
            else
            {
              v17 = (*(__int64 (__fastcall **)(__int64))(a1 + 8))(1LL);
              qword_140465F48 = 0LL;
              v9 = v17;
              if ( v17 == 1073742484 && !v23 )
              {
                v9 = 0;
                MiResumeFromHibernate(v5);
                v22 = 1;
              }
            }
            dword_140465F0C = 0;
            if ( CurrentIrql != 17 )
            {
              MiUnlockAllMemoryLists();
              if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
              {
                v18 = KeGetCurrentPrcb();
                _InterlockedAnd((volatile signed __int32 *)v18->SchedulerAssist, 0xFFFEFFFF);
                KiRemoveSystemWorkPriorityKick((__int64)v18);
              }
              goto LABEL_45;
            }
LABEL_46:
            v7 = v22;
          }
          CurrentThread = (struct _KTHREAD *)v19;
          goto LABEL_48;
        }
        v5 = 0;
      }
      v7 = 2;
    }
    v23 = 0;
    goto LABEL_22;
  }
  return result;
}
