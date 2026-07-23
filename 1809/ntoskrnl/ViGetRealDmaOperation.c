/*
 * XREFs of ViGetRealDmaOperation @ 0x14092EB34
 * Callers:
 *     VfAllocateDomainCommonBuffer @ 0x14030A190 (VfAllocateDomainCommonBuffer.c)
 *     VfFlushDmaBuffer @ 0x14030A2C0 (VfFlushDmaBuffer.c)
 *     VfGetDmaDomain @ 0x14030A310 (VfGetDmaDomain.c)
 *     VfJoinDmaDomain @ 0x14030A340 (VfJoinDmaDomain.c)
 *     VfLeaveDmaDomain @ 0x14030A380 (VfLeaveDmaDomain.c)
 *     VfAllocateAdapterChannel @ 0x14092AAE0 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x14092AD10 (VfAllocateAdapterChannelEx.c)
 *     VfAllocateCommonBuffer @ 0x14092AF50 (VfAllocateCommonBuffer.c)
 *     VfAllocateCommonBufferEx @ 0x14092B000 (VfAllocateCommonBufferEx.c)
 *     VfAllocateCommonBufferWithBounds @ 0x14092B0E0 (VfAllocateCommonBufferWithBounds.c)
 *     VfBuildMdlFromScatterGatherList @ 0x14092B270 (VfBuildMdlFromScatterGatherList.c)
 *     VfBuildScatterGatherList @ 0x14092B430 (VfBuildScatterGatherList.c)
 *     VfBuildScatterGatherListEx @ 0x14092B770 (VfBuildScatterGatherListEx.c)
 *     VfCalculateScatterGatherListSize @ 0x14092B930 (VfCalculateScatterGatherListSize.c)
 *     VfCancelAdapterChannel @ 0x14092B9A0 (VfCancelAdapterChannel.c)
 *     VfCancelMappedTransfer @ 0x14092BA70 (VfCancelMappedTransfer.c)
 *     VfConfigureAdapterChannel @ 0x14092BAB0 (VfConfigureAdapterChannel.c)
 *     VfFlushAdapterBuffers @ 0x14092BB00 (VfFlushAdapterBuffers.c)
 *     VfFlushAdapterBuffersEx @ 0x14092BCB0 (VfFlushAdapterBuffersEx.c)
 *     VfFreeAdapterChannel @ 0x14092BD60 (VfFreeAdapterChannel.c)
 *     VfFreeAdapterObject @ 0x14092BE10 (VfFreeAdapterObject.c)
 *     VfFreeCommonBuffer @ 0x14092BF70 (VfFreeCommonBuffer.c)
 *     VfFreeMapRegisters @ 0x14092C040 (VfFreeMapRegisters.c)
 *     VfGetDmaAdapterInfo @ 0x14092C270 (VfGetDmaAdapterInfo.c)
 *     VfGetDmaAlignment @ 0x14092C2B0 (VfGetDmaAlignment.c)
 *     VfGetDmaTransferInfo @ 0x14092C2F0 (VfGetDmaTransferInfo.c)
 *     VfGetScatterGatherList @ 0x14092C360 (VfGetScatterGatherList.c)
 *     VfGetScatterGatherListEx @ 0x14092C6F0 (VfGetScatterGatherListEx.c)
 *     VfInitializeDmaTransferContext @ 0x14092C9F0 (VfInitializeDmaTransferContext.c)
 *     VfMapTransfer @ 0x14092CAB0 (VfMapTransfer.c)
 *     VfMapTransferEx @ 0x14092CC70 (VfMapTransferEx.c)
 *     VfPutDmaAdapter @ 0x14092CE70 (VfPutDmaAdapter.c)
 *     VfPutScatterGatherList @ 0x14092D170 (VfPutScatterGatherList.c)
 *     VfReadDmaCounter @ 0x14092D380 (VfReadDmaCounter.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x14030B008 (VfReportIssueWithOptions.c)
 *     ViGetAdapterInformationInternal @ 0x14092E868 (ViGetAdapterInformationInternal.c)
 *     ViHalPreprocessOptions @ 0x14092ED28 (ViHalPreprocessOptions.c)
 */

__int64 __fastcall ViGetRealDmaOperation(ULONG_PTR a1, unsigned int a2)
{
  __int64 v3; // rdi
  struct _LIST_ENTRY *AdapterInformationInternal; // rax
  struct _LIST_ENTRY *Flink; // rax

  v3 = a2;
  if ( ViVerifyDma && !a1 )
  {
    ViHalPreprocessOptions(byte_140406500, "DMA adapters aren't supposed to be NULL anymore", 25LL, 0LL);
    VfReportIssueWithOptions(0xE6u, (unsigned int)(a1 + 25), 0LL, 0LL, 0LL, byte_140406500);
  }
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1, 1);
  if ( AdapterInformationInternal )
    Flink = AdapterInformationInternal[3].Flink;
  else
    Flink = *(struct _LIST_ENTRY **)(a1 + 8);
  return *(__int64 *)((char *)&Flink->Flink + v3);
}
