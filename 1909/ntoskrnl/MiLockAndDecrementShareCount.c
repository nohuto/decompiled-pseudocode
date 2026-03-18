/*
 * XREFs of MiLockAndDecrementShareCount @ 0x14010D38C
 * Callers:
 *     MiIssueHardFault @ 0x140007190 (MiIssueHardFault.c)
 *     MmOutSwapProcess @ 0x1400746E0 (MmOutSwapProcess.c)
 *     MiCompletePrivateZeroFault @ 0x1400AD7E0 (MiCompletePrivateZeroFault.c)
 *     MiCompleteProtoPteFault @ 0x1400B0350 (MiCompleteProtoPteFault.c)
 *     MiResolveTransitionFault @ 0x1400B2260 (MiResolveTransitionFault.c)
 *     MiOutPageSingleKernelStack @ 0x1400BEC90 (MiOutPageSingleKernelStack.c)
 *     MiMakeSystemCachePteValid @ 0x1400D3E1C (MiMakeSystemCachePteValid.c)
 *     MiCreateSharedZeroPages @ 0x1400DD580 (MiCreateSharedZeroPages.c)
 *     MiReleaseInPageRefs @ 0x14010D134 (MiReleaseInPageRefs.c)
 *     MmFreeIndependentPages @ 0x14010D210 (MmFreeIndependentPages.c)
 *     MiConvertStandbyToProto @ 0x140140E3C (MiConvertStandbyToProto.c)
 *     MiDemoteCombinedPte @ 0x1401417B0 (MiDemoteCombinedPte.c)
 *     MiResolveProtoCombine @ 0x1401424B4 (MiResolveProtoCombine.c)
 *     MiDecommitLargePoolVa @ 0x140146B90 (MiDecommitLargePoolVa.c)
 *     MiUnmapRetpolineStubs @ 0x14018065C (MiUnmapRetpolineStubs.c)
 *     MiHandleForkTransitionPte @ 0x1402E41B8 (MiHandleForkTransitionPte.c)
 *     MiMarkBootGuardPage @ 0x14074E424 (MiMarkBootGuardPage.c)
 *     MiDeletePfnBitMaps @ 0x14089B570 (MiDeletePfnBitMaps.c)
 *     MiFreeBootDriverPages @ 0x1409EFA54 (MiFreeBootDriverPages.c)
 * Callees:
 *     MiDecrementShareCount @ 0x1400BB990 (MiDecrementShareCount.c)
 *     MiLockPageInline @ 0x1400DDE20 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
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
