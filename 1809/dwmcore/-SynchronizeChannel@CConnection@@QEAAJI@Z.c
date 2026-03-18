/*
 * XREFs of ?SynchronizeChannel@CConnection@@QEAAJI@Z @ 0x180055FF4
 * Callers:
 *     ?SyncFlush@CChannel@@UEAAJXZ @ 0x180055FB0 (-SyncFlush@CChannel@@UEAAJXZ.c)
 * Callees:
 *     ?SynchronizedCommit@CChannel@@UEAAJPEAX@Z @ 0x180056100 (-SynchronizedCommit@CChannel@@UEAAJPEAX@Z.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18009ABB0 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     ?GetMasterTableEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z @ 0x18009C9D0 (-GetMasterTableEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CConnection::SynchronizeChannel(CConnection *this, unsigned int a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  unsigned int v5; // ecx
  char v6; // al
  int MasterTableEntry; // eax
  unsigned int v8; // ecx
  signed int v9; // ebx
  CChannel *v10; // rdi
  int v11; // eax
  unsigned int v12; // ecx
  signed int LastError; // eax
  int v15; // r9d
  unsigned int v16; // [rsp+20h] [rbp-48h]
  __m128i v17; // [rsp+30h] [rbp-38h]
  HANDLE hHandle; // [rsp+50h] [rbp-18h]
  int v19; // [rsp+70h] [rbp+8h] BYREF
  struct CLIENT_CHANNEL_HANDLE_ENTRY *v20; // [rsp+80h] [rbp+18h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 112);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 112));
  v6 = *((_BYTE *)this + 160);
  v20 = 0LL;
  v19 = 57;
  if ( !v6 )
  {
    v9 = -2003303402;
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, -2003303402, 0x129u);
LABEL_10:
    LeaveCriticalSection(v2);
    return (unsigned int)v9;
  }
  MasterTableEntry = CChannelTable::GetMasterTableEntry((CConnection *)((char *)this + 16), a2, &v20);
  v9 = MasterTableEntry;
  if ( MasterTableEntry < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, MasterTableEntry, 0x12Du);
  if ( v9 < 0 )
    goto LABEL_10;
  v17 = *(__m128i *)v20;
  hHandle = (HANDLE)*((_QWORD *)v20 + 2);
  LeaveCriticalSection(v2);
  v10 = (CChannel *)_mm_srli_si128(v17, 8).m128i_u64[0];
  v11 = CChannel::SendCommand(v10, &v19, 4u);
  v9 = v11;
  if ( v11 < 0 )
  {
    v16 = 313;
    goto LABEL_18;
  }
  v11 = CChannel::SynchronizedCommit(v10, 0LL);
  v9 = v11;
  if ( v11 < 0 )
  {
    v16 = 318;
LABEL_18:
    v15 = v11;
LABEL_19:
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v15, v16);
    return (unsigned int)v9;
  }
  SetLastError(0);
  if ( WaitForSingleObject(hHandle, 0xFFFFFFFF) == -1 )
  {
    LastError = GetLastError();
    v9 = LastError;
    if ( LastError > 0 )
      v9 = (unsigned __int16)LastError | 0x80070000;
    v16 = 329;
    if ( v9 >= 0 )
      v9 = -2003304445;
    v15 = v9;
    goto LABEL_19;
  }
  return (unsigned int)v9;
}
