/*
 * XREFs of IoAllocateIrpEx @ 0x1400EB290
 * Callers:
 *     FsRtlGetFileExtents @ 0x140282130 (FsRtlGetFileExtents.c)
 *     FsRtlGetFileSize @ 0x14068A6A0 (FsRtlGetFileSize.c)
 *     FsRtlSetFileSize @ 0x14069CFA0 (FsRtlSetFileSize.c)
 *     FsRtlSetKernelEaFile @ 0x14069D0C0 (FsRtlSetKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x14069D260 (FsRtlKernelFsControlFile.c)
 *     FsRtlQueryKernelEaFile @ 0x14069D570 (FsRtlQueryKernelEaFile.c)
 *     FsRtlGetDirectImageOriginalBase @ 0x14084DF9C (FsRtlGetDirectImageOriginalBase.c)
 *     FsRtlQueryInformationFile @ 0x14084F1F0 (FsRtlQueryInformationFile.c)
 *     VfIrpSendSynchronousIrp @ 0x14096EDB0 (VfIrpSendSynchronousIrp.c)
 * Callees:
 *     IopAllocateIrpPrivate @ 0x1400371B0 (IopAllocateIrpPrivate.c)
 *     IopAllocateIrpWithExtension @ 0x1400B54F8 (IopAllocateIrpWithExtension.c)
 *     IovAllocateIrp @ 0x140962970 (IovAllocateIrp.c)
 */

_QWORD *__fastcall IoAllocateIrpEx(__int64 a1, __int64 a2, __int64 a3)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( !IopDispatchAllocateIrp )
    return IopAllocateIrpPrivate(a1, a2, a3);
  if ( IopDispatchAllocateIrp == 2 )
    return IopAllocateIrpWithExtension(a1, a2, a3);
  return (_QWORD *)IovAllocateIrp(a1, a2, a3, retaddr);
}
