/*
 * XREFs of IoAllocateIrpEx @ 0x1400B91B0
 * Callers:
 *     FsRtlGetFileExtents @ 0x14026E868 (FsRtlGetFileExtents.c)
 *     FsRtlGetFileSize @ 0x14061C4A0 (FsRtlGetFileSize.c)
 *     FsRtlQueryKernelEaFile @ 0x1406A6380 (FsRtlQueryKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x1406B3AD0 (FsRtlKernelFsControlFile.c)
 *     FsRtlSetKernelEaFile @ 0x1406C9170 (FsRtlSetKernelEaFile.c)
 *     FsRtlSetFileSize @ 0x1406CBD00 (FsRtlSetFileSize.c)
 *     FsRtlGetDirectImageOriginalBase @ 0x140815730 (FsRtlGetDirectImageOriginalBase.c)
 *     FsRtlQueryInformationFile @ 0x1408168F0 (FsRtlQueryInformationFile.c)
 *     VfIrpSendSynchronousIrp @ 0x140931534 (VfIrpSendSynchronousIrp.c)
 * Callees:
 *     IopAllocateIrpWithExtension @ 0x14000EB44 (IopAllocateIrpWithExtension.c)
 *     IopAllocateIrpPrivate @ 0x1400B9250 (IopAllocateIrpPrivate.c)
 *     IovAllocateIrp @ 0x140924810 (IovAllocateIrp.c)
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
