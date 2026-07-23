/*
 * XREFs of KeFlushEntireTb @ 0x140187960
 * Callers:
 *     MiRebaseDynamicRelocationRegions @ 0x1409D341C (MiRebaseDynamicRelocationRegions.c)
 * Callees:
 *     KxFlushEntireTb @ 0x140187998 (KxFlushEntireTb.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KiFlushAddressSpaceTb @ 0x140293EEC (KiFlushAddressSpaceTb.c)
 *     ExFlushTb @ 0x14031D4E8 (ExFlushTb.c)
 */

__int64 __fastcall KeFlushEntireTb(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx

  if ( (HvlEnlightenments & 4) != 0
    && ((HvlEnlightenments & 2) != 0
     || (HvlEnlightenments & 0x800000) != 0 && !KiFlushPcid
     || (_DWORD)KeNumberProcessors_0 != 1) )
  {
    LOBYTE(a4) = 1;
    LOBYTE(a3) = 1;
    result = KiFlushAddressSpaceTb(0LL, 0LL, a3, a4);
  }
  else
  {
    result = KxFlushEntireTb(2LL);
  }
  if ( ExTbFlushActive )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    ExFlushTb(0LL, 0LL, 3LL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
