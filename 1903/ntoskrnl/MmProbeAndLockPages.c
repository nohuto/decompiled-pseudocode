/*
 * XREFs of MmProbeAndLockPages @ 0x14008E960
 * Callers:
 *     sub_1401B8440 @ 0x1401B8440 (sub_1401B8440.c)
 *     WbMakeUserDataPagesKernelWritable @ 0x1405B41A8 (WbMakeUserDataPagesKernelWritable.c)
 *     PspGetSetContextInternal @ 0x1405E7FD0 (PspGetSetContextInternal.c)
 *     NtReadFile @ 0x1405EF450 (NtReadFile.c)
 *     NtWriteFile @ 0x140629160 (NtWriteFile.c)
 *     MmProbeAndLockProcessPages @ 0x14064CCC0 (MmProbeAndLockProcessPages.c)
 *     MmCopyVirtualMemory @ 0x14064CFB0 (MmCopyVirtualMemory.c)
 *     CcMdlRead @ 0x14066D250 (CcMdlRead.c)
 *     FsRtlKernelFsControlFile @ 0x14069D260 (FsRtlKernelFsControlFile.c)
 *     ExLockUserBuffer @ 0x1406BF9BC (ExLockUserBuffer.c)
 *     MmRotatePhysicalView @ 0x1406BFCA0 (MmRotatePhysicalView.c)
 *     AlpcpInitializeCompletionList @ 0x1406C3DE8 (AlpcpInitializeCompletionList.c)
 *     MiAllocatePerSessionProtos @ 0x1406E8AF8 (MiAllocatePerSessionProtos.c)
 *     VslCallEnclave @ 0x14085174C (VslCallEnclave.c)
 *     VslObtainHotPatchUndoTable @ 0x140852B58 (VslObtainHotPatchUndoTable.c)
 *     IopSetFileObjectIosbRange @ 0x140854FE4 (IopSetFileObjectIosbRange.c)
 *     MiApplyImageHotPatch @ 0x14088DB44 (MiApplyImageHotPatch.c)
 *     MiCopyPagesIntoEnclave @ 0x140893384 (MiCopyPagesIntoEnclave.c)
 *     MiLoadDataIntoVsmEnclave @ 0x1408943C0 (MiLoadDataIntoVsmEnclave.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x140894788 (MiLoadSectionIntoVsmEnclave.c)
 *     NtLoadEnclaveData @ 0x1408956C0 (NtLoadEnclaveData.c)
 *     PopReadPagesFromHiberFile @ 0x1408A80FC (PopReadPagesFromHiberFile.c)
 *     PspCreateSecureThread @ 0x1408C8B90 (PspCreateSecureThread.c)
 *     SmProcessStatsRequest @ 0x1408E862C (SmProcessStatsRequest.c)
 *     NtStartProfile @ 0x140918170 (NtStartProfile.c)
 * Callees:
 *     MiProbeAndLockPages @ 0x14008E9A0 (MiProbeAndLockPages.c)
 */

void __stdcall MmProbeAndLockPages(PMDL MemoryDescriptorList, KPROCESSOR_MODE AccessMode, LOCK_OPERATION Operation)
{
  MiProbeAndLockPages(MemoryDescriptorList, AccessMode != 0, Operation != IoReadAccess);
}
