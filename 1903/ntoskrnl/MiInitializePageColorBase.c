/*
 * XREFs of MiInitializePageColorBase @ 0x1400A60A8
 * Callers:
 *     MiAllocateKernelStackPages @ 0x14002CA20 (MiAllocateKernelStackPages.c)
 *     MiWalkEntireImage @ 0x140053A50 (MiWalkEntireImage.c)
 *     MiGetPoolPages @ 0x14007BDAC (MiGetPoolPages.c)
 *     MiGetPageForHeader @ 0x1400A2988 (MiGetPageForHeader.c)
 *     MiPfPutPagesInTransition @ 0x1400A4A10 (MiPfPutPagesInTransition.c)
 *     MiResolveMappedFileFault @ 0x1400A5990 (MiResolveMappedFileFault.c)
 *     MiResolvePrivateZeroFault @ 0x1400CD460 (MiResolvePrivateZeroFault.c)
 *     MmCheckCachedPageStates @ 0x1400D67F0 (MmCheckCachedPageStates.c)
 *     MmAllocateIndependentPagesEx @ 0x1400EFC58 (MmAllocateIndependentPagesEx.c)
 *     MiInitializeColorBase @ 0x14012D120 (MiInitializeColorBase.c)
 *     MiMapPageFileHash @ 0x14014D0CC (MiMapPageFileHash.c)
 *     MiAllocateMdlPagesByLists @ 0x1401569B4 (MiAllocateMdlPagesByLists.c)
 *     MiMakeOutswappedPageResident @ 0x1402BB748 (MiMakeOutswappedPageResident.c)
 *     MiHugePageOperation @ 0x1402C21D0 (MiHugePageOperation.c)
 *     MmAllocateNonChargedSecurePages @ 0x1402C2D4C (MmAllocateNonChargedSecurePages.c)
 *     MiSwitchToTransition @ 0x1402C74B8 (MiSwitchToTransition.c)
 *     MiPruneStandbyPages @ 0x1402DA3F8 (MiPruneStandbyPages.c)
 *     MiGetClusterPage @ 0x1402E0924 (MiGetClusterPage.c)
 *     MiIdealClusterPage @ 0x1402E0D7C (MiIdealClusterPage.c)
 *     MiBuildForkPte @ 0x1402E1E60 (MiBuildForkPte.c)
 *     MiDoneWithThisPageGetAnother @ 0x1402E3C34 (MiDoneWithThisPageGetAnother.c)
 *     MiHandleForkTransitionPte @ 0x1402E4458 (MiHandleForkTransitionPte.c)
 *     MiPfPrepareSequentialReadList @ 0x140606080 (MiPfPrepareSequentialReadList.c)
 *     MiAllocateDriverPage @ 0x14066D148 (MiAllocateDriverPage.c)
 *     MiPfPrepareReadList @ 0x140687EA0 (MiPfPrepareReadList.c)
 *     MiAllocateTopLevelPage @ 0x14068D6D8 (MiAllocateTopLevelPage.c)
 *     MiCombineIdenticalPages @ 0x1406F6DC4 (MiCombineIdenticalPages.c)
 *     MiMapNewSession @ 0x14074080C (MiMapNewSession.c)
 *     MiFillPerSessionProtos @ 0x140898F94 (MiFillPerSessionProtos.c)
 *     MiScrubNodeLargePages @ 0x14089BF34 (MiScrubNodeLargePages.c)
 *     MiInitializeScrubPacket @ 0x14089D10C (MiInitializeScrubPacket.c)
 *     MxRelocatePageTables @ 0x1409FBBA4 (MxRelocatePageTables.c)
 * Callees:
 *     <none>
 */

char __fastcall MiInitializePageColorBase(__int64 a1, int a2, __int64 a3)
{
  unsigned int *p_PageColor; // r9
  struct _KPRCB *CurrentPrcb; // r10
  int NodeShiftedColor; // edx
  int v6; // eax

  p_PageColor = (unsigned int *)a1;
  if ( a2 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    NodeShiftedColor = (a2 - 1) << byte_140465A4D;
  }
  else
  {
    CurrentPrcb = (struct _KPRCB *)KiProcessorBlock[KeGetCurrentThread()->IdealProcessor];
    NodeShiftedColor = CurrentPrcb->NodeShiftedColor;
  }
  *(_DWORD *)(a3 + 12) = NodeShiftedColor;
  v6 = (1 << byte_140465A4E) - 1;
  *(_DWORD *)(a3 + 8) = v6;
  if ( !a1 || (LOBYTE(v6) = *(_BYTE *)(a1 + 184) & 7, (unsigned __int8)v6 >= 2u) )
    p_PageColor = &CurrentPrcb->PageColor;
  *(_QWORD *)a3 = p_PageColor;
  return v6;
}
