/*
 * XREFs of MiEmptyDecayClusterTimers @ 0x1400F0870
 * Callers:
 *     MiWorkingSetManager @ 0x1400EF634 (MiWorkingSetManager.c)
 * Callees:
 *     MiRemoveDecayClusterTimer @ 0x1400293F0 (MiRemoveDecayClusterTimer.c)
 *     MiUnlinkPageFromList @ 0x14003B930 (MiUnlinkPageFromList.c)
 *     KxWaitForLockOwnerShip @ 0x14007DF10 (KxWaitForLockOwnerShip.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14008CE50 (KiQueryUnbiasedInterruptTime.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     MiRelinkStandbyPage @ 0x1400F0AB8 (MiRelinkStandbyPage.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140290BF0 (KiAcquireQueuedSpinLockInstrumented.c)
 */

__int64 __fastcall MiEmptyDecayClusterTimers(__int64 a1)
{
  __int64 result; // rax
  char v3; // r15
  __int64 v4; // r15
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  _QWORD *v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rbx
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  ULONG_PTR v14; // rdi
  int v15; // eax
  struct _KPRCB *v16; // rcx
  struct _KPRCB *v17; // rcx
  volatile signed __int64 *v18[4]; // [rsp+20h] [rbp-48h] BYREF

  result = KiQueryUnbiasedInterruptTime();
  if ( (unsigned __int64)(result - *(_QWORD *)(a1 + 4768)) < 0x989680 )
    return result;
  v3 = *(_DWORD *)(a1 + 4760) + 1;
  *(_QWORD *)(a1 + 4768) = result;
  v4 = v3 & 3;
  result = *(_QWORD *)(8 * v4 + a1 + 4728) >> 33;
  if ( result == 0x7FFFFFFF )
    goto LABEL_3;
  while ( 1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    v18[0] = 0LL;
    v18[1] = (volatile signed __int64 *)(a1 + 2600);
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v15 = SchedulerAssist[5];
        SchedulerAssist[5] = v15 + 1;
        if ( v15 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(v18, a1 + 2600);
    }
    else
    {
      v8 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)(a1 + 2600), (__int64)v18);
      if ( v8 )
        KxWaitForLockOwnerShip((__int64)v18, v8, 0xFFFFFFFFFLL);
    }
    v9 = *(_QWORD *)(8 * v4 + a1 + 4728) >> 33;
    if ( v9 == 0x7FFFFFFF )
      break;
    v10 = v9 + qword_14043BB20;
    v11 = 48 * (v9 + qword_14043BB20) - 0x58000000000LL;
    v12 = *(_QWORD *)(v11 + 16);
    if ( qword_14043B180 && (v12 & 0x10) == 0 )
      v12 &= ~qword_14043B180;
    v13 = (v12 >> 12) & 0xFFFFFFFFFLL;
    if ( v13 == v10 )
    {
      MiUnlinkPageFromList(v11, 1);
      *(_BYTE *)(v11 + 35) &= ~8u;
      MiRemoveDecayClusterTimer(v11);
LABEL_21:
      KxReleaseQueuedSpinLock(v18);
      goto LABEL_17;
    }
    v14 = 48 * v13 - 0x58000000000LL;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) )
      goto LABEL_21;
    KxReleaseQueuedSpinLock(v18);
    MiRelinkStandbyPage(v14);
    _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_17:
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      v16 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v16->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v16);
    }
    __writecr8(CurrentIrql);
  }
  KxReleaseQueuedSpinLock(v18);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    v17 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v17->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v17);
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
LABEL_3:
  *(_DWORD *)(a1 + 4760) = v4;
  return result;
}
