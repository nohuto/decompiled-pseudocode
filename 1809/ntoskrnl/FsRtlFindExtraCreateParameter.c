/*
 * XREFs of FsRtlFindExtraCreateParameter @ 0x14063A850
 * Callers:
 *     FsRtlpAttachOplockKey @ 0x140018B74 (FsRtlpAttachOplockKey.c)
 *     FsRtlCheckOplockEx @ 0x1400B7BC0 (FsRtlCheckOplockEx.c)
 *     IopSymlinkGetECP @ 0x140125948 (IopSymlinkGetECP.c)
 *     IopCheckTopDeviceHint @ 0x1405DDC9C (IopCheckTopDeviceHint.c)
 *     IopSymlinkEnforceEnabledTypes @ 0x140763AD0 (IopSymlinkEnforceEnabledTypes.c)
 *     IopCheckAndUpdateStopOnSymlinkEcp @ 0x14081DF78 (IopCheckAndUpdateStopOnSymlinkEcp.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall FsRtlFindExtraCreateParameter(
        PECP_LIST EcpList,
        LPCGUID EcpType,
        PVOID *EcpContext,
        ULONG *EcpContextSize)
{
  struct _LIST_ENTRY *Flink; // rax
  char *v6; // rdx

  if ( EcpContext )
    *EcpContext = 0LL;
  if ( EcpContextSize )
    *EcpContextSize = 0;
  Flink = EcpList->EcpList.Flink;
  if ( Flink == &EcpList->EcpList )
    return -1073741275;
  while ( 1 )
  {
    v6 = (char *)Flink[1].Flink - *(_QWORD *)&EcpType->Data1;
    if ( !v6 )
      v6 = (char *)Flink[1].Blink - *(_QWORD *)EcpType->Data4;
    if ( !v6 )
      break;
    Flink = Flink->Flink;
    if ( Flink == &EcpList->EcpList )
      return -1073741275;
  }
  LODWORD(Flink[2].Blink) |= 4u;
  if ( EcpContext )
    *EcpContext = &Flink[4];
  if ( EcpContextSize )
    *EcpContextSize = HIDWORD(Flink[2].Blink) - 72;
  return 0;
}
