/*
 * XREFs of PopPepRegisterComponentPerfStates @ 0x1402DDDEC
 * Callers:
 *     PopFxRegisterComponentPerfStates @ 0x14086B4E4 (PopFxRegisterComponentPerfStates.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14009D050 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x14009D700 (ExAcquireSpinLockShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PopPepRegisterComponentPerfStates(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v5; // rbx
  KIRQL v6; // al
  KIRQL v7; // si
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 result; // rax

  v5 = a1 + 200LL * a2;
  v6 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 64));
  *(_BYTE *)(v5 + 368) = 1;
  v7 = v6;
  *(_QWORD *)(v5 + 208) = a3;
  if ( (a3 & 2) != 0 )
    *(_BYTE *)(a1 + 176) = 1;
  if ( (a3 & 4) != 0 )
    *(_BYTE *)(a1 + 177) = 1;
  ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v7 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  result = v7;
  __writecr8(v7);
  return result;
}
