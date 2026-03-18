/*
 * XREFs of MiInitializePageColorBase @ 0x1400938D8
 * Callers:
 *     MiAllocateKernelStackPages @ 0x14002CE10 (MiAllocateKernelStackPages.c)
 *     MiWalkEntireImage @ 0x140053AF0 (MiWalkEntireImage.c)
 *     MiGetPoolPages @ 0x14007C1AC (MiGetPoolPages.c)
 *     MiInitializeColorBase @ 0x140091860 (MiInitializeColorBase.c)
 *     MiGetPageForHeader @ 0x140091D8C (MiGetPageForHeader.c)
 *     MiPfPutPagesInTransition @ 0x140092240 (MiPfPutPagesInTransition.c)
 *     MiResolveMappedFileFault @ 0x1400931C0 (MiResolveMappedFileFault.c)
 *     MiResolvePrivateZeroFault @ 0x1400AD2E0 (MiResolvePrivateZeroFault.c)
 *     MmCheckCachedPageStates @ 0x1400B6670 (MmCheckCachedPageStates.c)
 *     MmAllocateIndependentPagesEx @ 0x1400DD368 (MmAllocateIndependentPagesEx.c)
 *     MiMapPageFileHash @ 0x14014D76C (MiMapPageFileHash.c)
 *     MiAllocateMdlPagesByLists @ 0x140157054 (MiAllocateMdlPagesByLists.c)
 *     MiMakeOutswappedPageResident @ 0x1402BB4A8 (MiMakeOutswappedPageResident.c)
 *     MiHugePageOperation @ 0x1402C1F30 (MiHugePageOperation.c)
 *     MmAllocateNonChargedSecurePages @ 0x1402C2AAC (MmAllocateNonChargedSecurePages.c)
 *     MiSwitchToTransition @ 0x1402C7218 (MiSwitchToTransition.c)
 *     MiPruneStandbyPages @ 0x1402DA158 (MiPruneStandbyPages.c)
 *     MiGetClusterPage @ 0x1402E0684 (MiGetClusterPage.c)
 *     MiIdealClusterPage @ 0x1402E0ADC (MiIdealClusterPage.c)
 *     MiBuildForkPte @ 0x1402E1BC0 (MiBuildForkPte.c)
 *     MiDoneWithThisPageGetAnother @ 0x1402E3994 (MiDoneWithThisPageGetAnother.c)
 *     MiHandleForkTransitionPte @ 0x1402E41B8 (MiHandleForkTransitionPte.c)
 *     MiPfPrepareSequentialReadList @ 0x140607B90 (MiPfPrepareSequentialReadList.c)
 *     MiAllocateTopLevelPage @ 0x140646B08 (MiAllocateTopLevelPage.c)
 *     MiPfPrepareReadList @ 0x14064E070 (MiPfPrepareReadList.c)
 *     MiAllocateDriverPage @ 0x140650F8C (MiAllocateDriverPage.c)
 *     MiCombineIdenticalPages @ 0x1406F8B84 (MiCombineIdenticalPages.c)
 *     MiMapNewSession @ 0x14074270C (MiMapNewSession.c)
 *     MiFillPerSessionProtos @ 0x1408987B4 (MiFillPerSessionProtos.c)
 *     MiScrubNodeLargePages @ 0x14089B754 (MiScrubNodeLargePages.c)
 *     MiInitializeScrubPacket @ 0x14089C92C (MiInitializeScrubPacket.c)
 *     MxRelocatePageTables @ 0x1409FC0C0 (MxRelocatePageTables.c)
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
    NodeShiftedColor = (a2 - 1) << byte_14046574D;
  }
  else
  {
    CurrentPrcb = (struct _KPRCB *)KiProcessorBlock[KeGetCurrentThread()->IdealProcessor];
    NodeShiftedColor = CurrentPrcb->NodeShiftedColor;
  }
  *(_DWORD *)(a3 + 12) = NodeShiftedColor;
  v6 = (1 << byte_14046574E) - 1;
  *(_DWORD *)(a3 + 8) = v6;
  if ( !a1 || (LOBYTE(v6) = *(_BYTE *)(a1 + 184) & 7, (unsigned __int8)v6 >= 2u) )
    p_PageColor = &CurrentPrcb->PageColor;
  *(_QWORD *)a3 = p_PageColor;
  return v6;
}
