/*
 * XREFs of IoGetIrpExtraCreateParameter @ 0x140601F50
 * Callers:
 *     FsRtlpAttachOplockKey @ 0x140007708 (FsRtlpAttachOplockKey.c)
 *     FsRtlCheckOplockEx @ 0x140046520 (FsRtlCheckOplockEx.c)
 *     IopParseDevice @ 0x1405FFEA0 (IopParseDevice.c)
 *     IopSymlinkUpdateECP @ 0x1406CE888 (IopSymlinkUpdateECP.c)
 *     IopSymlinkAllocateAndAddECP @ 0x1406CEDB0 (IopSymlinkAllocateAndAddECP.c)
 *     IopGraftName @ 0x1406CEEB8 (IopGraftName.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall IoGetIrpExtraCreateParameter(PIRP Irp, struct _ECP_LIST **ExtraCreateParameter)
{
  if ( (Irp->Flags & 0x80u) == 0 )
    return -1073741811;
  *ExtraCreateParameter = (struct _ECP_LIST *)Irp->UserBuffer;
  return 0;
}
