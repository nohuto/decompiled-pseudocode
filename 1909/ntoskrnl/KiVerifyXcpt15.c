/*
 * XREFs of KiVerifyXcpt15 @ 0x1409D02F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlImageNtHeader @ 0x14005EE50 (RtlImageNtHeader.c)
 *     RtlSectionTableFromVirtualAddress @ 0x1400E8BC0 (RtlSectionTableFromVirtualAddress.c)
 *     MmMapIoSpaceEx @ 0x1400F6BD0 (MmMapIoSpaceEx.c)
 *     KeExpandKernelStackAndCallout @ 0x14013D220 (KeExpandKernelStackAndCallout.c)
 *     RtlCaptureImageExceptionValues @ 0x14019C89C (RtlCaptureImageExceptionValues.c)
 *     KdDisableDebugger @ 0x14019E3C0 (KdDisableDebugger.c)
 *     MmAreBaseSystemImagesWriteProtected @ 0x14019EA80 (MmAreBaseSystemImagesWriteProtected.c)
 *     _local_unwind @ 0x1401A0030 (_local_unwind.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     KdEnableDebugger @ 0x1402A1DD0 (KdEnableDebugger.c)
 *     KiVerifyXcpt2 @ 0x140A14B80 (KiVerifyXcpt2.c)
 *     KiSwInterruptPresent @ 0x140A220DC (KiSwInterruptPresent.c)
 *     MmStrongCodeGuaranteesEnforced @ 0x140A226E0 (MmStrongCodeGuaranteesEnforced.c)
 */

void KiVerifyXcpt15()
{
  _QWORD v0[42]; // [rsp+0h] [rbp-198h] BYREF

  v0[21] = v0;
  KiVerifyXcpt2();
  local_unwind(v0, &loc_1409D0315);
}
