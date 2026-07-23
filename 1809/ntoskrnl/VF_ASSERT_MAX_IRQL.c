/*
 * XREFs of VF_ASSERT_MAX_IRQL @ 0x14092A720
 * Callers:
 *     VfFlushAdapterBuffers @ 0x14092BB00 (VfFlushAdapterBuffers.c)
 *     VfFlushAdapterBuffersEx @ 0x14092BCB0 (VfFlushAdapterBuffersEx.c)
 *     VfFreeCommonBuffer @ 0x14092BF70 (VfFreeCommonBuffer.c)
 *     VfGetScatterGatherListEx @ 0x14092C6F0 (VfGetScatterGatherListEx.c)
 *     VfMapTransfer @ 0x14092CAB0 (VfMapTransfer.c)
 *     VfMapTransferEx @ 0x14092CC70 (VfMapTransferEx.c)
 *     VfPutDmaAdapter @ 0x14092CE70 (VfPutDmaAdapter.c)
 *     VfReadDmaCounter @ 0x14092D380 (VfReadDmaCounter.c)
 *     ViGetAdapterInformationInternal @ 0x14092E868 (ViGetAdapterInformationInternal.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x14030B008 (VfReportIssueWithOptions.c)
 *     ViHalPreprocessOptions @ 0x14092ED28 (ViHalPreprocessOptions.c)
 */

void VF_ASSERT_MAX_IRQL()
{
  unsigned __int8 CurrentIrql; // al
  ULONG_PTR v1; // rbx

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > 2u )
  {
    v1 = CurrentIrql;
    ViHalPreprocessOptions(byte_140406490, "Bad IRQL -- needed %x or less, got %x.", 268435475, 2);
    VfReportIssueWithOptions(0xE6u, 0x13uLL, 2uLL, 2uLL, v1, byte_140406490);
  }
}
