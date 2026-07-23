/*
 * XREFs of PspSetPicoThreadDescriptorBase @ 0x1402EACA0
 * Callers:
 *     <none>
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PspSetPicoThreadDescriptorBase(int a1, unsigned __int64 a2)
{
  struct _KTHREAD *CurrentThread; // r8
  unsigned __int8 CurrentIrql; // bl
  unsigned int v4; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  if ( a1 )
  {
    CurrentThread[1].WaitBlock[2].Thread = (struct _KTHREAD *)a2;
    v4 = -1073741566;
  }
  else
  {
    *(_QWORD *)&CurrentThread[1].WaitBlockFill11[112] = a2;
    v4 = -1073741568;
  }
  __writemsr(v4, a2);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
