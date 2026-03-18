/*
 * XREFs of MiSetPageTablePfnBuddy @ 0x140090FDC
 * Callers:
 *     KiInSwapProcesses @ 0x140074BE8 (KiInSwapProcesses.c)
 *     MiInitializeUnusablePfns @ 0x140188FE4 (MiInitializeUnusablePfns.c)
 *     MiMakeOutswappedPageResident @ 0x1402BB4A8 (MiMakeOutswappedPageResident.c)
 *     MiAllocateTopLevelPage @ 0x140646B08 (MiAllocateTopLevelPage.c)
 *     MiMapNewSession @ 0x14074270C (MiMapNewSession.c)
 *     MiInitSystem @ 0x1409F0D98 (MiInitSystem.c)
 *     MiInitializeBootProcess @ 0x140A204D0 (MiInitializeBootProcess.c)
 * Callees:
 *     MiLockPageInline @ 0x1400DDE20 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiSetPageTablePfnBuddy(__int64 a1, __int64 a2, int a3)
{
  unsigned __int8 v5; // bl
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx

  if ( a3 )
    v5 = 17;
  else
    v5 = MiLockPageInline(a1);
  result = 0xFFFFFFFFFFE0000LL;
  *(_QWORD *)a1 ^= (*(_QWORD *)a1 ^ (a2 << 13)) & 0xFFFFFFFFFFE0000LL;
  if ( v5 != 17 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v5 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    result = v5;
    __writecr8(v5);
  }
  return result;
}
