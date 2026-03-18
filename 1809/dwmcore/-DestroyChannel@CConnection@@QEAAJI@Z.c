/*
 * XREFs of ?DestroyChannel@CConnection@@QEAAJI@Z @ 0x180145594
 * Callers:
 *     ?Destroy@CChannel@@UEAAJXZ @ 0x180146130 (-Destroy@CChannel@@UEAAJXZ.c)
 * Callees:
 *     ??$ReleaseInterface@VCChannel@@@@YAXAEAPEAVCChannel@@@Z @ 0x180078094 (--$ReleaseInterface@VCChannel@@@@YAXAEAPEAVCChannel@@@Z.c)
 *     ?GetMasterTableEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z @ 0x18009C9D0 (-GetMasterTableEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?DestroyKernelChannel@CConnection@@AEAAJI@Z @ 0x180145658 (-DestroyKernelChannel@CConnection@@AEAAJI@Z.c)
 *     ?DestroyHandle@CChannelTable@@QEAAXI@Z @ 0x18014583C (-DestroyHandle@CChannelTable@@QEAAXI@Z.c)
 */

__int64 __fastcall CConnection::DestroyChannel(CConnection *this, unsigned int a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  CChannelTable *v3; // rbp
  int MasterTableEntry; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  CConnection *v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  struct CLIENT_CHANNEL_HANDLE_ENTRY *v12; // [rsp+40h] [rbp+8h] BYREF

  v12 = 0LL;
  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 112);
  v3 = (CConnection *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 112));
  MasterTableEntry = CChannelTable::GetMasterTableEntry(v3, a2, &v12);
  v7 = MasterTableEntry;
  if ( MasterTableEntry < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, MasterTableEntry, 0xD9u);
    LeaveCriticalSection(v2);
  }
  else
  {
    ReleaseInterface<CChannel>((CChannel **)v12 + 1);
    CChannelTable::DestroyHandle(v3, a2);
    LeaveCriticalSection(v2);
    v9 = CConnection::DestroyKernelChannel(v8, a2);
    v7 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0xF2u);
  }
  return v7;
}
