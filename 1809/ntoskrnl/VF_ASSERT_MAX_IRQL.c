/*
 * XREFs of VF_ASSERT_MAX_IRQL @ 0x140929720
 * Callers:
 *     VfFlushAdapterBuffers @ 0x14092AB00 (VfFlushAdapterBuffers.c)
 *     VfFlushAdapterBuffersEx @ 0x14092ACB0 (VfFlushAdapterBuffersEx.c)
 *     VfFreeCommonBuffer @ 0x14092AF70 (VfFreeCommonBuffer.c)
 *     VfGetScatterGatherListEx @ 0x14092B6F0 (VfGetScatterGatherListEx.c)
 *     VfMapTransfer @ 0x14092BAB0 (VfMapTransfer.c)
 *     VfMapTransferEx @ 0x14092BC70 (VfMapTransferEx.c)
 *     VfPutDmaAdapter @ 0x14092BE70 (VfPutDmaAdapter.c)
 *     VfReadDmaCounter @ 0x14092C380 (VfReadDmaCounter.c)
 *     ViGetAdapterInformationInternal @ 0x14092D868 (ViGetAdapterInformationInternal.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x14030AD18 (VfReportIssueWithOptions.c)
 *     ViHalPreprocessOptions @ 0x14092DD28 (ViHalPreprocessOptions.c)
 */

void VF_ASSERT_MAX_IRQL()
{
  unsigned __int8 CurrentIrql; // al
  ULONG_PTR v1; // rbx

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > 2u )
  {
    v1 = CurrentIrql;
    ViHalPreprocessOptions(byte_140405484, "Bad IRQL -- needed %x or less, got %x.", 268435475, 2);
    VfReportIssueWithOptions(0xE6u, 0x13uLL, 2uLL, 2uLL, v1, byte_140405484);
  }
}
