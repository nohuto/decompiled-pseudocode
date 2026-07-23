/*
 * XREFs of HvcallInitiateHypercall @ 0x140322740
 * Callers:
 *     HvlpCommitLpIndices @ 0x1401B3B5C (HvlpCommitLpIndices.c)
 *     HvlpCreateRootVirtualProcessor @ 0x140818AD0 (HvlpCreateRootVirtualProcessor.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x14013E7A0 (HvcallpNoHypervisorPresent.c)
 */

__int64 HvcallInitiateHypercall()
{
  return HvcallCodeVa();
}
