/*
 * XREFs of HvcallInitiateHypercall @ 0x140322550
 * Callers:
 *     HvlpCommitLpIndices @ 0x1401B3CBC (HvlpCommitLpIndices.c)
 *     HvlpCreateRootVirtualProcessor @ 0x1408178D0 (HvlpCreateRootVirtualProcessor.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x14013E6A0 (HvcallpNoHypervisorPresent.c)
 */

__int64 HvcallInitiateHypercall()
{
  return HvcallCodeVa();
}
