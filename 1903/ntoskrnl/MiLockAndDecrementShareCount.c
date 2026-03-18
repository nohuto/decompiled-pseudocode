/*
 * XREFs of MiLockAndDecrementShareCount @ 0x14010DC9C
 * Callers:
 *     MiIssueHardFault @ 0x140007100 (MiIssueHardFault.c)
 *     MmOutSwapProcess @ 0x140074470 (MmOutSwapProcess.c)
 *     MiMakeSystemCachePteValid @ 0x140096AFC (MiMakeSystemCachePteValid.c)
 *     MiCompletePrivateZeroFault @ 0x1400CD960 (MiCompletePrivateZeroFault.c)
 *     MiCompleteProtoPteFault @ 0x1400D04D0 (MiCompleteProtoPteFault.c)
 *     MiResolveTransitionFault @ 0x1400D23E0 (MiResolveTransitionFault.c)
 *     MiOutPageSingleKernelStack @ 0x1400DEE10 (MiOutPageSingleKernelStack.c)
 *     MiCreateSharedZeroPages @ 0x1400EFE70 (MiCreateSharedZeroPages.c)
 *     MiReleaseInPageRefs @ 0x14010DA44 (MiReleaseInPageRefs.c)
 *     MmFreeIndependentPages @ 0x14010DB20 (MmFreeIndependentPages.c)
 *     MiConvertStandbyToProto @ 0x140140900 (MiConvertStandbyToProto.c)
 *     MiDemoteCombinedPte @ 0x140141270 (MiDemoteCombinedPte.c)
 *     MiResolveProtoCombine @ 0x140141F74 (MiResolveProtoCombine.c)
 *     MiDecommitLargePoolVa @ 0x1401464F0 (MiDecommitLargePoolVa.c)
 *     MiUnmapRetpolineStubs @ 0x14017FF6C (MiUnmapRetpolineStubs.c)
 *     MiHandleForkTransitionPte @ 0x1402E4458 (MiHandleForkTransitionPte.c)
 *     MiMarkBootGuardPage @ 0x14074D994 (MiMarkBootGuardPage.c)
 *     MiDeletePfnBitMaps @ 0x14089BD50 (MiDeletePfnBitMaps.c)
 *     MiFreeBootDriverPages @ 0x1409EFB3C (MiFreeBootDriverPages.c)
 * Callees:
 *     MiDecrementShareCount @ 0x1400DBB10 (MiDecrementShareCount.c)
 *     MiLockPageInline @ 0x1400F0710 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
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
