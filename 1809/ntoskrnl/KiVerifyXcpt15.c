/*
 * XREFs of KiVerifyXcpt15 @ 0x14098E2F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlImageNtHeader @ 0x14009DAE0 (RtlImageNtHeader.c)
 *     MmMapIoSpaceEx @ 0x1400E5D60 (MmMapIoSpaceEx.c)
 *     RtlSectionTableFromVirtualAddress @ 0x1400F3450 (RtlSectionTableFromVirtualAddress.c)
 *     KeExpandKernelStackAndCallout @ 0x14013B0A0 (KeExpandKernelStackAndCallout.c)
 *     RtlCaptureImageExceptionValues @ 0x140192FD0 (RtlCaptureImageExceptionValues.c)
 *     KdDisableDebugger @ 0x1401936D0 (KdDisableDebugger.c)
 *     _local_unwind @ 0x1401951C0 (_local_unwind.c)
 *     KeBugCheckEx @ 0x1401BBBC0 (KeBugCheckEx.c)
 *     KdEnableDebugger @ 0x14028BFE0 (KdEnableDebugger.c)
 *     sub_1403494B8 @ 0x1403494B8 (sub_1403494B8.c)
 *     KiVerifyXcpt2 @ 0x1409CF8B4 (KiVerifyXcpt2.c)
 *     KiSwInterruptPresent @ 0x1409DE434 (KiSwInterruptPresent.c)
 *     MmStrongCodeGuaranteesEnforced @ 0x1409DE8B8 (MmStrongCodeGuaranteesEnforced.c)
 */

void KiVerifyXcpt15()
{
  _QWORD v0[42]; // [rsp+0h] [rbp-198h] BYREF

  v0[21] = v0;
  KiVerifyXcpt2();
  local_unwind(v0, &loc_14098E315);
}
