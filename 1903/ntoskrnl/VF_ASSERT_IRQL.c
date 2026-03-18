/*
 * XREFs of VF_ASSERT_IRQL @ 0x140967D20
 * Callers:
 *     VfAllocateAdapterChannel @ 0x140968160 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x140968390 (VfAllocateAdapterChannelEx.c)
 *     VfAllocateCommonBuffer @ 0x1409685D0 (VfAllocateCommonBuffer.c)
 *     VfAllocateCrashDumpRegisters @ 0x1409688F0 (VfAllocateCrashDumpRegisters.c)
 *     VfBuildScatterGatherList @ 0x140968B50 (VfBuildScatterGatherList.c)
 *     VfBuildScatterGatherListEx @ 0x140968E90 (VfBuildScatterGatherListEx.c)
 *     VfFreeAdapterChannel @ 0x140969480 (VfFreeAdapterChannel.c)
 *     VfFreeMapRegisters @ 0x1409697F0 (VfFreeMapRegisters.c)
 *     VfGetDmaAdapter @ 0x140969950 (VfGetDmaAdapter.c)
 *     VfGetDmaAlignment @ 0x140969B20 (VfGetDmaAlignment.c)
 *     VfGetScatterGatherList @ 0x140969BD0 (VfGetScatterGatherList.c)
 *     VfPutScatterGatherList @ 0x14096A9E0 (VfPutScatterGatherList.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x140328B08 (VfReportIssueWithOptions.c)
 *     ViHalPreprocessOptions @ 0x14096C598 (ViHalPreprocessOptions.c)
 */

void __fastcall VF_ASSERT_IRQL(unsigned __int8 a1)
{
  unsigned __int8 CurrentIrql; // al
  unsigned int v2; // edi
  ULONG_PTR v3; // rbx

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != a1 )
  {
    v2 = a1;
    v3 = CurrentIrql;
    ViHalPreprocessOptions(byte_14042B8B0, "Bad IRQL -- needed %x, got %x.", 268435475, 1);
    VfReportIssueWithOptions(0xE6u, 0x13uLL, 1uLL, v2, v3, byte_14042B8B0);
  }
}
