/*
 * XREFs of IoGetIrpExtraCreateParameter @ 0x140603980
 * Callers:
 *     FsRtlpAttachOplockKey @ 0x140007798 (FsRtlpAttachOplockKey.c)
 *     FsRtlCheckOplockEx @ 0x1400465C0 (FsRtlCheckOplockEx.c)
 *     IopParseDevice @ 0x1406018D0 (IopParseDevice.c)
 *     IopSymlinkUpdateECP @ 0x1406CD628 (IopSymlinkUpdateECP.c)
 *     IopSymlinkAllocateAndAddECP @ 0x1406CDB50 (IopSymlinkAllocateAndAddECP.c)
 *     IopGraftName @ 0x1406CDC58 (IopGraftName.c)
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
