/*
 * XREFs of VF_ASSERT_IRQL @ 0x1409296A0
 * Callers:
 *     VfAllocateAdapterChannel @ 0x140929AE0 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x140929D10 (VfAllocateAdapterChannelEx.c)
 *     VfAllocateCommonBuffer @ 0x140929F50 (VfAllocateCommonBuffer.c)
 *     VfAllocateCrashDumpRegisters @ 0x14092A1D0 (VfAllocateCrashDumpRegisters.c)
 *     VfBuildScatterGatherList @ 0x14092A430 (VfBuildScatterGatherList.c)
 *     VfBuildScatterGatherListEx @ 0x14092A770 (VfBuildScatterGatherListEx.c)
 *     VfFreeAdapterChannel @ 0x14092AD60 (VfFreeAdapterChannel.c)
 *     VfFreeMapRegisters @ 0x14092B040 (VfFreeMapRegisters.c)
 *     VfGetDmaAdapter @ 0x14092B140 (VfGetDmaAdapter.c)
 *     VfGetDmaAlignment @ 0x14092B2B0 (VfGetDmaAlignment.c)
 *     VfGetScatterGatherList @ 0x14092B360 (VfGetScatterGatherList.c)
 *     VfPutScatterGatherList @ 0x14092C170 (VfPutScatterGatherList.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x14030AD18 (VfReportIssueWithOptions.c)
 *     ViHalPreprocessOptions @ 0x14092DD28 (ViHalPreprocessOptions.c)
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
    ViHalPreprocessOptions(byte_140405480, "Bad IRQL -- needed %x, got %x.", 268435475, 1);
    VfReportIssueWithOptions(0xE6u, 0x13uLL, 1uLL, v2, v3, byte_140405480);
  }
}
