/*
 * XREFs of MiLockAndDecrementShareCount @ 0x140118088
 * Callers:
 *     MmFreeIndependentPages @ 0x140001010 (MmFreeIndependentPages.c)
 *     MiIssueHardFault @ 0x14001BCD0 (MiIssueHardFault.c)
 *     MiResolveTransitionFault @ 0x14003AC00 (MiResolveTransitionFault.c)
 *     MiCompletePrivateZeroFault @ 0x140047940 (MiCompletePrivateZeroFault.c)
 *     MiCompleteProtoPteFault @ 0x14004A4B0 (MiCompleteProtoPteFault.c)
 *     MiDemoteCombinedPte @ 0x14006C200 (MiDemoteCombinedPte.c)
 *     MiResolveProtoCombine @ 0x14007BF74 (MiResolveProtoCombine.c)
 *     MiOutPageSingleKernelStack @ 0x14007FAB0 (MiOutPageSingleKernelStack.c)
 *     MiMakeSystemCachePteValid @ 0x1400D7A60 (MiMakeSystemCachePteValid.c)
 *     MiCreateSharedZeroPages @ 0x1401091A0 (MiCreateSharedZeroPages.c)
 *     KiOutSwapProcesses @ 0x14010B430 (KiOutSwapProcesses.c)
 *     MiReleaseInPageRefs @ 0x140117F88 (MiReleaseInPageRefs.c)
 *     MiDecommitLargePoolVa @ 0x14015B2C0 (MiDecommitLargePoolVa.c)
 *     MiHandleForkTransitionPte @ 0x1402CA018 (MiHandleForkTransitionPte.c)
 *     MiMarkBootGuardPage @ 0x140729A8C (MiMarkBootGuardPage.c)
 *     MiDeletePfnBitMaps @ 0x14085F530 (MiDeletePfnBitMaps.c)
 *     MiFreeBootDriverPage @ 0x1409B83FC (MiFreeBootDriverPage.c)
 *     MiReturnDriverLoadPages @ 0x1409F7790 (MiReturnDriverLoadPages.c)
 * Callees:
 *     MiLockPageInline @ 0x14002CE40 (MiLockPageInline.c)
 *     MiDecrementShareCount @ 0x140081EA0 (MiDecrementShareCount.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AD8 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiLockAndDecrementShareCount(ULONG_PTR a1, char a2)
{
  unsigned __int8 v4; // si
  unsigned int v5; // ebx
  struct _KPRCB *CurrentPrcb; // rcx

  v4 = MiLockPageInline(a1);
  if ( (a2 & 1) != 0 )
    *(_QWORD *)(a1 + 24) |= 0x4000000000000000uLL;
  v5 = MiDecrementShareCount(a1);
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v4 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(v4);
  return v5;
}
