/*
 * XREFs of KiVerifyXcpt15 @ 0x1409D02F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlImageNtHeader @ 0x14005EDB0 (RtlImageNtHeader.c)
 *     RtlSectionTableFromVirtualAddress @ 0x1400AFDA0 (RtlSectionTableFromVirtualAddress.c)
 *     MmMapIoSpaceEx @ 0x140118AB0 (MmMapIoSpaceEx.c)
 *     KeExpandKernelStackAndCallout @ 0x14013CC40 (KeExpandKernelStackAndCallout.c)
 *     RtlCaptureImageExceptionValues @ 0x14019C11C (RtlCaptureImageExceptionValues.c)
 *     KdDisableDebugger @ 0x14019DCA0 (KdDisableDebugger.c)
 *     MmAreBaseSystemImagesWriteProtected @ 0x14019E360 (MmAreBaseSystemImagesWriteProtected.c)
 *     _local_unwind @ 0x14019F910 (_local_unwind.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     KdEnableDebugger @ 0x1402A2070 (KdEnableDebugger.c)
 *     KiVerifyXcpt2 @ 0x140A143E0 (KiVerifyXcpt2.c)
 *     KiSwInterruptPresent @ 0x140A21FFC (KiSwInterruptPresent.c)
 *     MmStrongCodeGuaranteesEnforced @ 0x140A22600 (MmStrongCodeGuaranteesEnforced.c)
 */

void KiVerifyXcpt15()
{
  _QWORD v0[42]; // [rsp+0h] [rbp-198h] BYREF

  v0[21] = v0;
  KiVerifyXcpt2();
  local_unwind(v0, &loc_1409D0315);
}
