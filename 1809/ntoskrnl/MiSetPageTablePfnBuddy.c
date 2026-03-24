/*
 * XREFs of MiSetPageTablePfnBuddy @ 0x14013D9A8
 * Callers:
 *     KiInSwapProcesses @ 0x14010B340 (KiInSwapProcesses.c)
 *     MiInitializeUnusablePfns @ 0x14017F04C (MiInitializeUnusablePfns.c)
 *     MiMakeOutswappedPageResident @ 0x1402A4368 (MiMakeOutswappedPageResident.c)
 *     MiAllocateTopLevelPage @ 0x1406D1BCC (MiAllocateTopLevelPage.c)
 *     MiMapNewSession @ 0x140715F38 (MiMapNewSession.c)
 *     MiInitSystem @ 0x1409BC5A8 (MiInitSystem.c)
 *     MiInitializeBootProcess @ 0x1409DD13C (MiInitializeBootProcess.c)
 * Callees:
 *     MiLockPageInline @ 0x14002CE40 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AF8 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiSetPageTablePfnBuddy(__int64 a1, __int64 a2, int a3)
{
  unsigned __int8 v5; // di
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
