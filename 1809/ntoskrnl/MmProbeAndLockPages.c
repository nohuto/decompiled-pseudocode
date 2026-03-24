/*
 * XREFs of MmProbeAndLockPages @ 0x140040380
 * Callers:
 *     sub_1401AD5C0 @ 0x1401AD5C0 (sub_1401AD5C0.c)
 *     WbMakeUserDataPagesKernelWritable @ 0x1405849A0 (WbMakeUserDataPagesKernelWritable.c)
 *     MmProbeAndLockProcessPages @ 0x1405D3FB0 (MmProbeAndLockProcessPages.c)
 *     IopXxxControlFile @ 0x1405E8BD0 (IopXxxControlFile.c)
 *     NtWriteFile @ 0x140638C40 (NtWriteFile.c)
 *     NtReadFile @ 0x14063A140 (NtReadFile.c)
 *     MmCopyVirtualMemory @ 0x140644790 (MmCopyVirtualMemory.c)
 *     CcMdlRead @ 0x140662B90 (CcMdlRead.c)
 *     MmRotatePhysicalView @ 0x14066B910 (MmRotatePhysicalView.c)
 *     ExLockUserBuffer @ 0x14069E918 (ExLockUserBuffer.c)
 *     FsRtlKernelFsControlFile @ 0x1406B2830 (FsRtlKernelFsControlFile.c)
 *     MiAllocatePerSessionProtos @ 0x1406C91F0 (MiAllocatePerSessionProtos.c)
 *     AlpcpInitializeCompletionList @ 0x1406D4BE0 (AlpcpInitializeCompletionList.c)
 *     ExInitializeLeapSecondData @ 0x140733FC0 (ExInitializeLeapSecondData.c)
 *     VslCallEnclave @ 0x140817CFC (VslCallEnclave.c)
 *     VslObtainHotPatchUndoTable @ 0x140818B74 (VslObtainHotPatchUndoTable.c)
 *     IopSetFileObjectIosbRange @ 0x14081B01C (IopSetFileObjectIosbRange.c)
 *     MiApplyImageHotPatch @ 0x140854688 (MiApplyImageHotPatch.c)
 *     MiCopyPagesIntoEnclave @ 0x14085948C (MiCopyPagesIntoEnclave.c)
 *     NtLoadEnclaveData @ 0x14085AFB0 (NtLoadEnclaveData.c)
 *     PspCreateSecureThread @ 0x14088AB4C (PspCreateSecureThread.c)
 *     SmProcessStatsRequest @ 0x1408AB3C0 (SmProcessStatsRequest.c)
 *     NtStartProfile @ 0x1408DA3E0 (NtStartProfile.c)
 * Callees:
 *     MiProbeAndLockPages @ 0x140040CF0 (MiProbeAndLockPages.c)
 */

void __stdcall MmProbeAndLockPages(PMDL MemoryDescriptorList, KPROCESSOR_MODE AccessMode, LOCK_OPERATION Operation)
{
  MiProbeAndLockPages(MemoryDescriptorList, AccessMode != 0, Operation != IoReadAccess);
}
