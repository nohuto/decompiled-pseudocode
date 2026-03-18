/*
 * XREFs of MmProbeAndLockPages @ 0x1400CBF50
 * Callers:
 *     sub_1401B8B60 @ 0x1401B8B60 (sub_1401B8B60.c)
 *     WbMakeUserDataPagesKernelWritable @ 0x1405B4584 (WbMakeUserDataPagesKernelWritable.c)
 *     PspGetSetContextInternal @ 0x1405E87A0 (PspGetSetContextInternal.c)
 *     NtReadFile @ 0x1405EFC20 (NtReadFile.c)
 *     MmCopyVirtualMemory @ 0x1405FE630 (MmCopyVirtualMemory.c)
 *     FsRtlKernelFsControlFile @ 0x140625750 (FsRtlKernelFsControlFile.c)
 *     NtWriteFile @ 0x14062CFB0 (NtWriteFile.c)
 *     CcMdlRead @ 0x140646CB0 (CcMdlRead.c)
 *     MmProbeAndLockProcessPages @ 0x140660A20 (MmProbeAndLockProcessPages.c)
 *     ExLockUserBuffer @ 0x1406A49BC (ExLockUserBuffer.c)
 *     MmRotatePhysicalView @ 0x1406A4CA0 (MmRotatePhysicalView.c)
 *     AlpcpInitializeCompletionList @ 0x1406C2F48 (AlpcpInitializeCompletionList.c)
 *     MiAllocatePerSessionProtos @ 0x1406E9D44 (MiAllocatePerSessionProtos.c)
 *     VslCallEnclave @ 0x140850E4C (VslCallEnclave.c)
 *     VslObtainHotPatchUndoTable @ 0x140852258 (VslObtainHotPatchUndoTable.c)
 *     IopSetFileObjectIosbRange @ 0x1408546E4 (IopSetFileObjectIosbRange.c)
 *     MiApplyImageHotPatch @ 0x14088D364 (MiApplyImageHotPatch.c)
 *     MiCopyPagesIntoEnclave @ 0x140892BA4 (MiCopyPagesIntoEnclave.c)
 *     MiLoadDataIntoVsmEnclave @ 0x140893BE0 (MiLoadDataIntoVsmEnclave.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x140893FA8 (MiLoadSectionIntoVsmEnclave.c)
 *     NtLoadEnclaveData @ 0x140894EE0 (NtLoadEnclaveData.c)
 *     PopReadPagesFromHiberFile @ 0x1408A795C (PopReadPagesFromHiberFile.c)
 *     PspCreateSecureThread @ 0x1408C8470 (PspCreateSecureThread.c)
 *     SmProcessStatsRequest @ 0x1408E7F34 (SmProcessStatsRequest.c)
 *     NtStartProfile @ 0x140917BD0 (NtStartProfile.c)
 * Callees:
 *     MiProbeAndLockPages @ 0x1400CBF90 (MiProbeAndLockPages.c)
 */

void __stdcall MmProbeAndLockPages(PMDL MemoryDescriptorList, KPROCESSOR_MODE AccessMode, LOCK_OPERATION Operation)
{
  MiProbeAndLockPages(MemoryDescriptorList, AccessMode != 0, Operation != IoReadAccess);
}
