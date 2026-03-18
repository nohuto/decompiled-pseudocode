/*
 * XREFs of ViGetRealDmaOperation @ 0x14096C3A4
 * Callers:
 *     VfAllocateDomainCommonBuffer @ 0x140327660 (VfAllocateDomainCommonBuffer.c)
 *     VfFlushDmaBuffer @ 0x140327790 (VfFlushDmaBuffer.c)
 *     VfGetDmaDomain @ 0x1403277E0 (VfGetDmaDomain.c)
 *     VfJoinDmaDomain @ 0x140327810 (VfJoinDmaDomain.c)
 *     VfLeaveDmaDomain @ 0x140327850 (VfLeaveDmaDomain.c)
 *     VfAllocateAdapterChannel @ 0x140968160 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x140968390 (VfAllocateAdapterChannelEx.c)
 *     VfAllocateCommonBuffer @ 0x1409685D0 (VfAllocateCommonBuffer.c)
 *     VfAllocateCommonBufferEx @ 0x140968680 (VfAllocateCommonBufferEx.c)
 *     VfAllocateCommonBufferVector @ 0x140968760 (VfAllocateCommonBufferVector.c)
 *     VfAllocateCommonBufferWithBounds @ 0x140968800 (VfAllocateCommonBufferWithBounds.c)
 *     VfBuildMdlFromScatterGatherList @ 0x140968990 (VfBuildMdlFromScatterGatherList.c)
 *     VfBuildScatterGatherList @ 0x140968B50 (VfBuildScatterGatherList.c)
 *     VfBuildScatterGatherListEx @ 0x140968E90 (VfBuildScatterGatherListEx.c)
 *     VfCalculateScatterGatherListSize @ 0x140969050 (VfCalculateScatterGatherListSize.c)
 *     VfCancelAdapterChannel @ 0x1409690C0 (VfCancelAdapterChannel.c)
 *     VfCancelMappedTransfer @ 0x140969190 (VfCancelMappedTransfer.c)
 *     VfConfigureAdapterChannel @ 0x1409691D0 (VfConfigureAdapterChannel.c)
 *     VfFlushAdapterBuffers @ 0x140969220 (VfFlushAdapterBuffers.c)
 *     VfFlushAdapterBuffersEx @ 0x1409693D0 (VfFlushAdapterBuffersEx.c)
 *     VfFreeAdapterChannel @ 0x140969480 (VfFreeAdapterChannel.c)
 *     VfFreeAdapterObject @ 0x140969530 (VfFreeAdapterObject.c)
 *     VfFreeCommonBuffer @ 0x140969690 (VfFreeCommonBuffer.c)
 *     VfFreeCommonBufferFromVector @ 0x140969760 (VfFreeCommonBufferFromVector.c)
 *     VfFreeCommonBufferVector @ 0x1409697B0 (VfFreeCommonBufferVector.c)
 *     VfFreeMapRegisters @ 0x1409697F0 (VfFreeMapRegisters.c)
 *     VfGetCommonBufferFromVectorByIndex @ 0x1409698F0 (VfGetCommonBufferFromVectorByIndex.c)
 *     VfGetDmaAdapterInfo @ 0x140969AE0 (VfGetDmaAdapterInfo.c)
 *     VfGetDmaAlignment @ 0x140969B20 (VfGetDmaAlignment.c)
 *     VfGetDmaTransferInfo @ 0x140969B60 (VfGetDmaTransferInfo.c)
 *     VfGetScatterGatherList @ 0x140969BD0 (VfGetScatterGatherList.c)
 *     VfGetScatterGatherListEx @ 0x140969F60 (VfGetScatterGatherListEx.c)
 *     VfInitializeDmaTransferContext @ 0x14096A260 (VfInitializeDmaTransferContext.c)
 *     VfMapTransfer @ 0x14096A320 (VfMapTransfer.c)
 *     VfMapTransferEx @ 0x14096A4E0 (VfMapTransferEx.c)
 *     VfPutDmaAdapter @ 0x14096A6E0 (VfPutDmaAdapter.c)
 *     VfPutScatterGatherList @ 0x14096A9E0 (VfPutScatterGatherList.c)
 *     VfReadDmaCounter @ 0x14096ABF0 (VfReadDmaCounter.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x140328558 (VfReportIssueWithOptions.c)
 *     ViGetAdapterInformationInternal @ 0x14096C0D8 (ViGetAdapterInformationInternal.c)
 *     ViHalPreprocessOptions @ 0x14096C598 (ViHalPreprocessOptions.c)
 */

__int64 __fastcall ViGetRealDmaOperation(ULONG_PTR a1, unsigned int a2)
{
  __int64 v3; // rdi
  struct _LIST_ENTRY *AdapterInformationInternal; // rax
  struct _LIST_ENTRY *Flink; // rax

  v3 = a2;
  if ( ViVerifyDma && !a1 )
  {
    ViHalPreprocessOptions(byte_14042B91C, "DMA adapters aren't supposed to be NULL anymore", 25LL, 0LL);
    VfReportIssueWithOptions(0xE6u, (unsigned int)(a1 + 25), 0LL, 0LL, 0LL, byte_14042B91C);
  }
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1, 1);
  if ( AdapterInformationInternal )
    Flink = AdapterInformationInternal[3].Flink;
  else
    Flink = *(struct _LIST_ENTRY **)(a1 + 8);
  return *(__int64 *)((char *)&Flink->Flink + v3);
}
