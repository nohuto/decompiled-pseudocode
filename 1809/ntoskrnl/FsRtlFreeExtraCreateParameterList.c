/*
 * XREFs of FsRtlFreeExtraCreateParameterList @ 0x14060DEF0
 * Callers:
 *     NtCreateUserProcess @ 0x14060B950 (NtCreateUserProcess.c)
 *     FsRtlpCleanupEcps @ 0x14060C7E4 (FsRtlpCleanupEcps.c)
 *     NtQueryAttributesFile @ 0x14060DC30 (NtQueryAttributesFile.c)
 *     PspCreateUserProcessEcp @ 0x14060E368 (PspCreateUserProcessEcp.c)
 *     IopSymlinkAllocateAndAddECP @ 0x1406AD3E4 (IopSymlinkAllocateAndAddECP.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1401C5570 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     FsRtlFreeExtraCreateParameter @ 0x14060DFB0 (FsRtlFreeExtraCreateParameter.c)
 */

void __stdcall FsRtlFreeExtraCreateParameterList(PECP_LIST EcpList)
{
  _LIST_ENTRY *p_EcpList; // rbx
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
  {
    ++dword_1404C76DC;
    if ( LOWORD(FsRtlEcpListLookaside.Alignment) >= (unsigned __int16)word_1404C76D0 )
    {
      ++dword_1404C76E0;
      ((void (__fastcall *)(PECP_LIST))qword_1404C76F8)(EcpList);
    }
    else
    {
      RtlpInterlockedPushEntrySList(&FsRtlEcpListLookaside, (PSLIST_ENTRY)EcpList);
    }
  }
  else
  {
    ExFreePoolWithTag(EcpList, 0);
  }
}
