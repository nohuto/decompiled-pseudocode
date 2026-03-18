/*
 * XREFs of HvcallInitiateHypercall @ 0x140322450
 * Callers:
 *     HvlpCommitLpIndices @ 0x1401B3C9C (HvlpCommitLpIndices.c)
 *     HvlpCreateRootVirtualProcessor @ 0x1408178F0 (HvlpCreateRootVirtualProcessor.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x14013E680 (HvcallpNoHypervisorPresent.c)
 */

__int64 HvcallInitiateHypercall()
{
  return HvcallCodeVa();
}
