/*
 * XREFs of MiAttachThreadDone @ 0x1400EEB1C
 * Callers:
 *     MiSharePages @ 0x1400846D0 (MiSharePages.c)
 *     MiTrimSharedPageFromViews @ 0x1400EB48C (MiTrimSharedPageFromViews.c)
 *     MiUnlockStealVm @ 0x1400ECDE4 (MiUnlockStealVm.c)
 *     MmQueryCommitReleaseState @ 0x140130A24 (MmQueryCommitReleaseState.c)
 *     MmReleaseCommitForMemResetPages @ 0x1402A5774 (MmReleaseCommitForMemResetPages.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     KeSignalGate @ 0x140127780 (KeSignalGate.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiAttachThreadDone(__int64 a1)
{
  __int64 v2; // rcx
  unsigned __int8 OldIrql; // bl
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE v6; // [rsp+20h] [rbp-28h] BYREF
  int v7; // [rsp+50h] [rbp+8h]

  memset(&v6, 0, sizeof(v6));
  KeAcquireInStackQueuedSpinLock(&qword_14043BF40, &v6);
  v7 = *(_DWORD *)(a1 + 184);
  BYTE1(v7) = BYTE1(v7) & 0xF | (16 * ((BYTE1(v7) >> 4) - 1));
  *(_WORD *)(a1 + 184) = v7;
  v2 = *(_QWORD *)(a1 + 104);
  if ( v2 )
    KeSignalGate(v2, 1LL);
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&v6);
  OldIrql = v6.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v6.OldIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  result = OldIrql;
  __writecr8(OldIrql);
  return result;
}
