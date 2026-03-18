/*
 * XREFs of ?DestroyChannel@CInternalMilCmdConnection@@QEAAJI@Z @ 0x1801559C8
 * Callers:
 *     ?Destroy@CChannel@@UEAAJXZ @ 0x180156740 (-Destroy@CChannel@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetMasterTableEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z @ 0x1800AA7C4 (-GetMasterTableEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z.c)
 *     ??$ReleaseInterface@VCChannel@@@@YAXAEAPEAVCChannel@@@Z @ 0x1800E4CD4 (--$ReleaseInterface@VCChannel@@@@YAXAEAPEAVCChannel@@@Z.c)
 *     ?DestroyKernelChannel@CInternalMilCmdConnection@@AEAAJI@Z @ 0x180155A98 (-DestroyKernelChannel@CInternalMilCmdConnection@@AEAAJI@Z.c)
 *     ?DestroyHandle@CChannelTable@@QEAAXI@Z @ 0x180155BEC (-DestroyHandle@CChannelTable@@QEAAXI@Z.c)
 */

__int64 __fastcall CInternalMilCmdConnection::DestroyChannel(CInternalMilCmdConnection *this, unsigned int a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  CChannelTable *v3; // rbp
  signed int MasterTableEntry; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  CInternalMilCmdConnection *v8; // rcx
  signed int v9; // eax
  __int64 v10; // rcx
  struct CLIENT_CHANNEL_HANDLE_ENTRY *v12; // [rsp+40h] [rbp+8h] BYREF

  v12 = 0LL;
  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 144);
  v3 = (CInternalMilCmdConnection *)((char *)this + 64);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 144));
  MasterTableEntry = CChannelTable::GetMasterTableEntry(v3, a2, &v12);
  v7 = MasterTableEntry;
  if ( MasterTableEntry < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, MasterTableEntry, 0x95u, 0LL);
    LeaveCriticalSection(v2);
  }
  else
  {
    ReleaseInterface<CChannel>((CChannel **)v12 + 1);
    CChannelTable::DestroyHandle(v3, a2);
    LeaveCriticalSection(v2);
    v9 = CInternalMilCmdConnection::DestroyKernelChannel(v8, a2);
    v7 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0xA7u, 0LL);
  }
  return v7;
}
