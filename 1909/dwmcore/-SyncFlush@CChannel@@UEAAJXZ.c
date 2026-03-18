/*
 * XREFs of ?SyncFlush@CChannel@@UEAAJXZ @ 0x1800D3310
 * Callers:
 *     ?SendSyncCommand@CChannel@@AEAAJPEBXIPEAUMIL_MESSAGE@@@Z @ 0x1800D3274 (-SendSyncCommand@CChannel@@AEAAJPEBXIPEAUMIL_MESSAGE@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SynchronizeChannel@CInternalMilCmdConnection@@QEAAJI@Z @ 0x1800D3354 (-SynchronizeChannel@CInternalMilCmdConnection@@QEAAJI@Z.c)
 */

__int64 __fastcall CChannel::SyncFlush(CChannel *this)
{
  unsigned int v1; // edx
  signed int v3; // eax
  __int64 v4; // rcx
  unsigned int v5; // edi

  v1 = *((_DWORD *)this + 14);
  *((_BYTE *)this + 208) = 1;
  v3 = CInternalMilCmdConnection::SynchronizeChannel(*((CInternalMilCmdConnection **)this + 6), v1);
  v5 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0x251u, 0LL);
  *((_BYTE *)this + 208) = 0;
  return v5;
}
