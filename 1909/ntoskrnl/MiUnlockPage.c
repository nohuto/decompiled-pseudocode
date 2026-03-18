/*
 * XREFs of MiUnlockPage @ 0x1402D8D58
 * Callers:
 *     MiWriteComplete @ 0x1400BDA10 (MiWriteComplete.c)
 *     MiSharePages @ 0x14013F5C0 (MiSharePages.c)
 *     MiGatherPagefilePages @ 0x14014B04C (MiGatherPagefilePages.c)
 *     MiScanPagefileSpace @ 0x14088C940 (MiScanPagefileSpace.c)
 *     MiMapUserLargePages @ 0x140899CBC (MiMapUserLargePages.c)
 *     MmAreMdlPagesLocked @ 0x140963E58 (MmAreMdlPagesLocked.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiUnlockPage(__int64 a1, unsigned __int8 a2)
{
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 result; // rax

  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && a2 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  result = a2;
  __writecr8(a2);
  return result;
}
