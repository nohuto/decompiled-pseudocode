/*
 * XREFs of ?SyncFlush@CChannel@@UEAAJXZ @ 0x180055FB0
 * Callers:
 *     ?SendSyncCommand@CChannel@@AEAAJPEBXIPEAUMIL_MESSAGE@@@Z @ 0x180055F18 (-SendSyncCommand@CChannel@@AEAAJPEBXIPEAUMIL_MESSAGE@@@Z.c)
 * Callees:
 *     ?SynchronizeChannel@CConnection@@QEAAJI@Z @ 0x180055FF4 (-SynchronizeChannel@CConnection@@QEAAJI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CChannel::SyncFlush(CChannel *this)
{
  unsigned int v1; // edx
  int v3; // eax
  unsigned int v4; // ecx
  unsigned int v5; // edi

  v1 = *((_DWORD *)this + 14);
  *((_BYTE *)this + 208) = 1;
  v3 = CConnection::SynchronizeChannel(*((CConnection **)this + 6), v1);
  v5 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0x251u);
  *((_BYTE *)this + 208) = 0;
  return v5;
}
