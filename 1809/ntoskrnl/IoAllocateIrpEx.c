/*
 * XREFs of IoAllocateIrpEx @ 0x1400B9250
 * Callers:
 *     FsRtlGetFileExtents @ 0x14026E578 (FsRtlGetFileExtents.c)
 *     FsRtlGetFileSize @ 0x14061B4A0 (FsRtlGetFileSize.c)
 *     FsRtlQueryKernelEaFile @ 0x1406A5100 (FsRtlQueryKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x1406B2850 (FsRtlKernelFsControlFile.c)
 *     FsRtlSetKernelEaFile @ 0x1406C7EF0 (FsRtlSetKernelEaFile.c)
 *     FsRtlSetFileSize @ 0x1406CAA80 (FsRtlSetFileSize.c)
 *     FsRtlGetDirectImageOriginalBase @ 0x140814550 (FsRtlGetDirectImageOriginalBase.c)
 *     FsRtlQueryInformationFile @ 0x140815710 (FsRtlQueryInformationFile.c)
 *     VfIrpSendSynchronousIrp @ 0x140930534 (VfIrpSendSynchronousIrp.c)
 * Callees:
 *     IopAllocateIrpWithExtension @ 0x14000EB44 (IopAllocateIrpWithExtension.c)
 *     IopAllocateIrpPrivate @ 0x1400B92F0 (IopAllocateIrpPrivate.c)
 *     IovAllocateIrp @ 0x140923810 (IovAllocateIrp.c)
 */

__int64 __fastcall IoAllocateIrpEx(__int64 a1, __int64 a2, __int64 a3)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( !IopDispatchAllocateIrp )
    return IopAllocateIrpPrivate(a1, a2);
  if ( IopDispatchAllocateIrp == 2 )
    return IopAllocateIrpWithExtension(a1, a2);
  return IovAllocateIrp(a1, a2, a3, retaddr);
}
