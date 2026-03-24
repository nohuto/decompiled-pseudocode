/*
 * XREFs of IoGetIrpExtraCreateParameter @ 0x14063ED90
 * Callers:
 *     FsRtlpAttachOplockKey @ 0x140018B74 (FsRtlpAttachOplockKey.c)
 *     FsRtlCheckOplockEx @ 0x1400B7C80 (FsRtlCheckOplockEx.c)
 *     IopParseDevice @ 0x14063CCE0 (IopParseDevice.c)
 *     IopSymlinkUpdateECP @ 0x1406ABCB0 (IopSymlinkUpdateECP.c)
 *     IopSymlinkAllocateAndAddECP @ 0x1406AC144 (IopSymlinkAllocateAndAddECP.c)
 *     IopGraftName @ 0x1406AC26C (IopGraftName.c)
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
