/*
 * XREFs of KiVerifyXcpt15 @ 0x14098F2F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlImageNtHeader @ 0x14009DA20 (RtlImageNtHeader.c)
 *     MmMapIoSpaceEx @ 0x1400E5DE0 (MmMapIoSpaceEx.c)
 *     RtlSectionTableFromVirtualAddress @ 0x1400F34D0 (RtlSectionTableFromVirtualAddress.c)
 *     KeExpandKernelStackAndCallout @ 0x14013B1A0 (KeExpandKernelStackAndCallout.c)
 *     RtlCaptureImageExceptionValues @ 0x140193110 (RtlCaptureImageExceptionValues.c)
 *     KdDisableDebugger @ 0x140193810 (KdDisableDebugger.c)
 *     _local_unwind @ 0x140195300 (_local_unwind.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     KdEnableDebugger @ 0x14028C1D0 (KdEnableDebugger.c)
 *     sub_14034A4B8 @ 0x14034A4B8 (sub_14034A4B8.c)
 *     KiVerifyXcpt2 @ 0x1409D08B4 (KiVerifyXcpt2.c)
 *     KiSwInterruptPresent @ 0x1409DF434 (KiSwInterruptPresent.c)
 *     MmStrongCodeGuaranteesEnforced @ 0x1409DF8B8 (MmStrongCodeGuaranteesEnforced.c)
 */

void KiVerifyXcpt15()
{
  _QWORD v0[42]; // [rsp+0h] [rbp-198h] BYREF

  v0[21] = v0;
  KiVerifyXcpt2();
  local_unwind(v0, &loc_14098F315);
}
