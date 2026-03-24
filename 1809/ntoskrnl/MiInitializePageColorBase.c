/*
 * XREFs of MiInitializePageColorBase @ 0x14002C4C0
 * Callers:
 *     MiInitializeColorBaseEx @ 0x140028994 (MiInitializeColorBaseEx.c)
 *     MiAllocateMdlPagesByLists @ 0x140029924 (MiAllocateMdlPagesByLists.c)
 *     MiResolveMappedFileFault @ 0x14002BE50 (MiResolveMappedFileFault.c)
 *     MiWalkEntireImage @ 0x14002F290 (MiWalkEntireImage.c)
 *     MiResolvePrivateZeroFault @ 0x140047430 (MiResolvePrivateZeroFault.c)
 *     MiPfPutPagesInTransition @ 0x140064E70 (MiPfPutPagesInTransition.c)
 *     MiGetPageForHeader @ 0x1400934B8 (MiGetPageForHeader.c)
 *     MmCheckCachedPageStates @ 0x1400B02B0 (MmCheckCachedPageStates.c)
 *     MiAllocateKernelStackPages @ 0x1400B5660 (MiAllocateKernelStackPages.c)
 *     MiGetPoolPages @ 0x1400CB1C0 (MiGetPoolPages.c)
 *     MiInitializeColorBaseSession @ 0x1400E76F0 (MiInitializeColorBaseSession.c)
 *     MmAllocateIndependentPagesEx @ 0x140108FBC (MmAllocateIndependentPagesEx.c)
 *     MiMapPageFileHash @ 0x14014FCD8 (MiMapPageFileHash.c)
 *     MiMakeOutswappedPageResident @ 0x1402A4368 (MiMakeOutswappedPageResident.c)
 *     MmAllocateNonChargedSecurePages @ 0x1402AA30C (MmAllocateNonChargedSecurePages.c)
 *     MmAllocateSpecialPool @ 0x1402ACB64 (MmAllocateSpecialPool.c)
 *     MiSwitchToTransition @ 0x1402AF640 (MiSwitchToTransition.c)
 *     MiPruneStandbyPages @ 0x1402C0A94 (MiPruneStandbyPages.c)
 *     MiGetClusterPage @ 0x1402C67BC (MiGetClusterPage.c)
 *     MiIdealClusterPage @ 0x1402C6C14 (MiIdealClusterPage.c)
 *     MiBuildForkPte @ 0x1402C7BF0 (MiBuildForkPte.c)
 *     MiDoneWithThisPageGetAnother @ 0x1402C98E0 (MiDoneWithThisPageGetAnother.c)
 *     MiHandleForkTransitionPte @ 0x1402CA118 (MiHandleForkTransitionPte.c)
 *     MiPfPrepareReadList @ 0x1405DFDE0 (MiPfPrepareReadList.c)
 *     MiPfPrepareSequentialReadList @ 0x1405EBA20 (MiPfPrepareSequentialReadList.c)
 *     MiAllocateDriverPage @ 0x140653A14 (MiAllocateDriverPage.c)
 *     MiCombineIdenticalPages @ 0x1406D1578 (MiCombineIdenticalPages.c)
 *     MiAllocateTopLevelPage @ 0x1406D1BCC (MiAllocateTopLevelPage.c)
 *     MiMapNewSession @ 0x140715F38 (MiMapNewSession.c)
 *     MiFillPerSessionProtos @ 0x14085C3FC (MiFillPerSessionProtos.c)
 *     MiScrubNodeLargePages @ 0x14085F6F4 (MiScrubNodeLargePages.c)
 *     MiInitializeScrubPacket @ 0x14085F988 (MiInitializeScrubPacket.c)
 *     MxRelocatePageTables @ 0x1409BFC44 (MxRelocatePageTables.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall MiInitializePageColorBase(__int64 a1, int a2, __int64 a3)
{
  struct _KPRCB *CurrentPrcb; // r10
  __int16 NodeShiftedColor; // dx
  unsigned __int8 result; // al

  if ( a2 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    NodeShiftedColor = ((_WORD)a2 - 1) << byte_14043A049;
  }
  else
  {
    CurrentPrcb = (struct _KPRCB *)KiProcessorBlock[KeGetCurrentThread()->IdealProcessor];
    NodeShiftedColor = CurrentPrcb->NodeShiftedColor;
  }
  *(_WORD *)(a3 + 10) = NodeShiftedColor;
  *(_WORD *)(a3 + 8) = (1 << byte_14043A04A) - 1;
  if ( a1 && (result = *(_BYTE *)(a1 + 184) & 7, result < 2u) )
  {
    *(_QWORD *)a3 = a1;
  }
  else
  {
    result = (_BYTE)CurrentPrcb + 16;
    *(_QWORD *)a3 = &CurrentPrcb->PageColor;
  }
  return result;
}
