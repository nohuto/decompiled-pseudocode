/*
 * XREFs of MmProbeAndLockPages @ 0x140040380
 * Callers:
 *     sub_1401AD700 @ 0x1401AD700 (sub_1401AD700.c)
 *     WbMakeUserDataPagesKernelWritable @ 0x1405859A0 (WbMakeUserDataPagesKernelWritable.c)
 *     MmProbeAndLockProcessPages @ 0x1405D4FB0 (MmProbeAndLockProcessPages.c)
 *     IopXxxControlFile @ 0x1405E9BD0 (IopXxxControlFile.c)
 *     NtWriteFile @ 0x140639C60 (NtWriteFile.c)
 *     NtReadFile @ 0x14063B160 (NtReadFile.c)
 *     MmCopyVirtualMemory @ 0x1406457B0 (MmCopyVirtualMemory.c)
 *     CcMdlRead @ 0x140663D50 (CcMdlRead.c)
 *     MmRotatePhysicalView @ 0x14066CAD0 (MmRotatePhysicalView.c)
 *     ExLockUserBuffer @ 0x14069FBD8 (ExLockUserBuffer.c)
 *     FsRtlKernelFsControlFile @ 0x1406B3AD0 (FsRtlKernelFsControlFile.c)
 *     MiAllocatePerSessionProtos @ 0x1406CA490 (MiAllocatePerSessionProtos.c)
 *     AlpcpInitializeCompletionList @ 0x1406D5E80 (AlpcpInitializeCompletionList.c)
 *     ExInitializeLeapSecondData @ 0x1407351B0 (ExInitializeLeapSecondData.c)
 *     VslCallEnclave @ 0x140818EFC (VslCallEnclave.c)
 *     VslObtainHotPatchUndoTable @ 0x140819D74 (VslObtainHotPatchUndoTable.c)
 *     IopSetFileObjectIosbRange @ 0x14081C21C (IopSetFileObjectIosbRange.c)
 *     MiApplyImageHotPatch @ 0x1408558E8 (MiApplyImageHotPatch.c)
 *     MiCopyPagesIntoEnclave @ 0x14085A6EC (MiCopyPagesIntoEnclave.c)
 *     NtLoadEnclaveData @ 0x14085C210 (NtLoadEnclaveData.c)
 *     PspCreateSecureThread @ 0x14088BDAC (PspCreateSecureThread.c)
 *     SmProcessStatsRequest @ 0x1408AC620 (SmProcessStatsRequest.c)
 *     NtStartProfile @ 0x1408DB6A0 (NtStartProfile.c)
 * Callees:
 *     MiProbeAndLockPages @ 0x140040CF0 (MiProbeAndLockPages.c)
 */

void __stdcall MmProbeAndLockPages(PMDL MemoryDescriptorList, KPROCESSOR_MODE AccessMode, LOCK_OPERATION Operation)
{
  MiProbeAndLockPages(MemoryDescriptorList, AccessMode != 0, Operation != IoReadAccess);
}
