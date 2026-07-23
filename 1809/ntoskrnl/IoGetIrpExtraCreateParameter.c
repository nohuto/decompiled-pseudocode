/*
 * XREFs of IoGetIrpExtraCreateParameter @ 0x14063FDB0
 * Callers:
 *     FsRtlpAttachOplockKey @ 0x140018B74 (FsRtlpAttachOplockKey.c)
 *     FsRtlCheckOplockEx @ 0x1400B7BC0 (FsRtlCheckOplockEx.c)
 *     IopParseDevice @ 0x14063DD00 (IopParseDevice.c)
 *     IopSymlinkUpdateECP @ 0x1406ACF50 (IopSymlinkUpdateECP.c)
 *     IopSymlinkAllocateAndAddECP @ 0x1406AD3E4 (IopSymlinkAllocateAndAddECP.c)
 *     IopGraftName @ 0x1406AD50C (IopGraftName.c)
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
