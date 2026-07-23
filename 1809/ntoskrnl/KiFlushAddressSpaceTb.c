/*
 * XREFs of KiFlushAddressSpaceTb @ 0x140293EEC
 * Callers:
 *     KeFlushTb @ 0x1400755A0 (KeFlushTb.c)
 *     KeFlushEntireTb @ 0x140187960 (KeFlushEntireTb.c)
 * Callees:
 *     KxSetTimeStampBusy @ 0x140117CC0 (KxSetTimeStampBusy.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     HvlFlushAddressSpaceTb @ 0x1402797CC (HvlFlushAddressSpaceTb.c)
 */

__int64 __fastcall KiFlushAddressSpaceTb(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  unsigned __int8 CurrentIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 result; // rax

  if ( a1 || a2 || !a4 )
    return HvlFlushAddressSpaceTb(a1, a2);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  if ( KxSetTimeStampBusy(&KiTbFlushTimeStamp, 0LL, a3) )
  {
    HvlFlushAddressSpaceTb(0LL, 0LL);
    _InterlockedIncrement(&KiTbFlushTimeStamp);
  }
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
