/*
 * XREFs of IoAllocateIrpEx @ 0x1400893F0
 * Callers:
 *     FsRtlGetFileExtents @ 0x140281E90 (FsRtlGetFileExtents.c)
 *     FsRtlSetFileSize @ 0x140625490 (FsRtlSetFileSize.c)
 *     FsRtlSetKernelEaFile @ 0x1406255B0 (FsRtlSetKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x140625750 (FsRtlKernelFsControlFile.c)
 *     FsRtlQueryKernelEaFile @ 0x140625A60 (FsRtlQueryKernelEaFile.c)
 *     FsRtlGetFileSize @ 0x1406507C0 (FsRtlGetFileSize.c)
 *     FsRtlGetDirectImageOriginalBase @ 0x14084D69C (FsRtlGetDirectImageOriginalBase.c)
 *     FsRtlQueryInformationFile @ 0x14084E8F0 (FsRtlQueryInformationFile.c)
 *     VfIrpSendSynchronousIrp @ 0x14096EDB0 (VfIrpSendSynchronousIrp.c)
 * Callees:
 *     IopAllocateIrpPrivate @ 0x1400375B0 (IopAllocateIrpPrivate.c)
 *     IopAllocateIrpWithExtension @ 0x1400F1600 (IopAllocateIrpWithExtension.c)
 *     IovAllocateIrp @ 0x140962970 (IovAllocateIrp.c)
 */

PVOID __fastcall IoAllocateIrpEx(__int64 a1, __int64 a2, __int64 a3)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( !IopDispatchAllocateIrp )
    return IopAllocateIrpPrivate(a1, a2, a3);
  if ( IopDispatchAllocateIrp == 2 )
    return (PVOID)IopAllocateIrpWithExtension(a1, a2, a3, retaddr);
  return (PVOID)IovAllocateIrp(a1, a2, a3, retaddr);
}
