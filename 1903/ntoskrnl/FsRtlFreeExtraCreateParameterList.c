/*
 * XREFs of FsRtlFreeExtraCreateParameterList @ 0x140617DA0
 * Callers:
 *     NtCreateUserProcess @ 0x140615E10 (NtCreateUserProcess.c)
 *     FsRtlpCleanupEcps @ 0x140616EBC (FsRtlpCleanupEcps.c)
 *     PspCreateUserProcessEcp @ 0x1406181DC (PspCreateUserProcessEcp.c)
 *     IopSymlinkAllocateAndAddECP @ 0x1406CEDB0 (IopSymlinkAllocateAndAddECP.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140084098 (ExFreeToNPagedLookasideList.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     FsRtlFreeExtraCreateParameter @ 0x140617E20 (FsRtlFreeExtraCreateParameter.c)
 */

void __stdcall FsRtlFreeExtraCreateParameterList(PECP_LIST EcpList)
{
  _LIST_ENTRY *p_EcpList; // rdi
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *v4; // rax

  p_EcpList = &EcpList->EcpList;
  while ( 1 )
  {
    Flink = p_EcpList->Flink;
    if ( p_EcpList->Flink == p_EcpList )
      break;
    if ( Flink->Blink != p_EcpList || (v4 = Flink->Flink, Flink->Flink->Blink != Flink) )
      __fastfail(3u);
    p_EcpList->Flink = v4;
    v4->Blink = p_EcpList;
    Flink->Blink = 0LL;
    Flink->Flink = 0LL;
    FsRtlFreeExtraCreateParameter(&Flink[4]);
  }
  if ( (EcpList->Flags & 4) != 0 )
    ExFreeToNPagedLookasideList((PNPAGED_LOOKASIDE_LIST)&FsRtlEcpListLookaside, EcpList);
  else
    ExFreePoolWithTag(EcpList, 0);
}
