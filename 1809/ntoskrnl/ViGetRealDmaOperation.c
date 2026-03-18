/*
 * XREFs of ViGetRealDmaOperation @ 0x14092DB34
 * Callers:
 *     VfAllocateDomainCommonBuffer @ 0x140309EA0 (VfAllocateDomainCommonBuffer.c)
 *     VfFlushDmaBuffer @ 0x140309FD0 (VfFlushDmaBuffer.c)
 *     VfGetDmaDomain @ 0x14030A020 (VfGetDmaDomain.c)
 *     VfJoinDmaDomain @ 0x14030A050 (VfJoinDmaDomain.c)
 *     VfLeaveDmaDomain @ 0x14030A090 (VfLeaveDmaDomain.c)
 *     VfAllocateAdapterChannel @ 0x140929AE0 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x140929D10 (VfAllocateAdapterChannelEx.c)
 *     VfAllocateCommonBuffer @ 0x140929F50 (VfAllocateCommonBuffer.c)
 *     VfAllocateCommonBufferEx @ 0x14092A000 (VfAllocateCommonBufferEx.c)
 *     VfAllocateCommonBufferWithBounds @ 0x14092A0E0 (VfAllocateCommonBufferWithBounds.c)
 *     VfBuildMdlFromScatterGatherList @ 0x14092A270 (VfBuildMdlFromScatterGatherList.c)
 *     VfBuildScatterGatherList @ 0x14092A430 (VfBuildScatterGatherList.c)
 *     VfBuildScatterGatherListEx @ 0x14092A770 (VfBuildScatterGatherListEx.c)
 *     VfCalculateScatterGatherListSize @ 0x14092A930 (VfCalculateScatterGatherListSize.c)
 *     VfCancelAdapterChannel @ 0x14092A9A0 (VfCancelAdapterChannel.c)
 *     VfCancelMappedTransfer @ 0x14092AA70 (VfCancelMappedTransfer.c)
 *     VfConfigureAdapterChannel @ 0x14092AAB0 (VfConfigureAdapterChannel.c)
 *     VfFlushAdapterBuffers @ 0x14092AB00 (VfFlushAdapterBuffers.c)
 *     VfFlushAdapterBuffersEx @ 0x14092ACB0 (VfFlushAdapterBuffersEx.c)
 *     VfFreeAdapterChannel @ 0x14092AD60 (VfFreeAdapterChannel.c)
 *     VfFreeAdapterObject @ 0x14092AE10 (VfFreeAdapterObject.c)
 *     VfFreeCommonBuffer @ 0x14092AF70 (VfFreeCommonBuffer.c)
 *     VfFreeMapRegisters @ 0x14092B040 (VfFreeMapRegisters.c)
 *     VfGetDmaAdapterInfo @ 0x14092B270 (VfGetDmaAdapterInfo.c)
 *     VfGetDmaAlignment @ 0x14092B2B0 (VfGetDmaAlignment.c)
 *     VfGetDmaTransferInfo @ 0x14092B2F0 (VfGetDmaTransferInfo.c)
 *     VfGetScatterGatherList @ 0x14092B360 (VfGetScatterGatherList.c)
 *     VfGetScatterGatherListEx @ 0x14092B6F0 (VfGetScatterGatherListEx.c)
 *     VfInitializeDmaTransferContext @ 0x14092B9F0 (VfInitializeDmaTransferContext.c)
 *     VfMapTransfer @ 0x14092BAB0 (VfMapTransfer.c)
 *     VfMapTransferEx @ 0x14092BC70 (VfMapTransferEx.c)
 *     VfPutDmaAdapter @ 0x14092BE70 (VfPutDmaAdapter.c)
 *     VfPutScatterGatherList @ 0x14092C170 (VfPutScatterGatherList.c)
 *     VfReadDmaCounter @ 0x14092C380 (VfReadDmaCounter.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x14030AD18 (VfReportIssueWithOptions.c)
 *     ViGetAdapterInformationInternal @ 0x14092D868 (ViGetAdapterInformationInternal.c)
 *     ViHalPreprocessOptions @ 0x14092DD28 (ViHalPreprocessOptions.c)
 */

__int64 __fastcall ViGetRealDmaOperation(ULONG_PTR a1, unsigned int a2)
{
  __int64 v3; // rdi
  struct _LIST_ENTRY *AdapterInformationInternal; // rax
  struct _LIST_ENTRY *Flink; // rax

  v3 = a2;
  if ( ViVerifyDma && !a1 )
  {
    ViHalPreprocessOptions(byte_1404054EC, "DMA adapters aren't supposed to be NULL anymore", 25LL, 0LL);
    VfReportIssueWithOptions(0xE6u, (unsigned int)(a1 + 25), 0LL, 0LL, 0LL, byte_1404054EC);
  }
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1, 1);
  if ( AdapterInformationInternal )
    Flink = AdapterInformationInternal[3].Flink;
  else
    Flink = *(struct _LIST_ENTRY **)(a1 + 8);
  return *(__int64 *)((char *)&Flink->Flink + v3);
}
