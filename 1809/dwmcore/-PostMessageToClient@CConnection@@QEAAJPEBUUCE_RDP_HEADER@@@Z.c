/*
 * XREFs of ?PostMessageToClient@CConnection@@QEAAJPEBUUCE_RDP_HEADER@@@Z @ 0x18009CA88
 * Callers:
 *     ?PostMessageToChannel@CChannelContext@@QEAAJPEBUMIL_MESSAGE@@@Z @ 0x18009CB9C (-PostMessageToChannel@CChannelContext@@QEAAJPEBUMIL_MESSAGE@@@Z.c)
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180099D60 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?ValidEntry@HANDLE_TABLE@@QEBAHI@Z @ 0x18009A708 (-ValidEntry@HANDLE_TABLE@@QEBAHI@Z.c)
 *     ?GetMasterTableEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z @ 0x18009C9D0 (-GetMasterTableEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z.c)
 *     ?PostMessageToChannel@CChannel@@QEAAJPEBUMIL_MESSAGE@@@Z @ 0x18009CF1C (-PostMessageToChannel@CChannel@@QEAAJPEBUMIL_MESSAGE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CConnection::PostMessageToClient(CConnection *this, const struct UCE_RDP_HEADER *a2)
{
  signed int v4; // ebx
  unsigned int v5; // ecx
  const struct MIL_MESSAGE *v6; // rdi
  unsigned int v7; // edx
  int MasterTableEntry; // eax
  unsigned int v9; // ecx
  int v10; // eax
  unsigned int v11; // ecx
  __int64 v13; // rcx
  unsigned int i; // esi
  CChannel *v15; // rcx
  int v16; // eax
  unsigned int v17; // ecx
  int v18; // r15d
  signed int LastError; // eax
  unsigned int v20; // ecx
  unsigned int v21; // [rsp+20h] [rbp-10h]
  struct CLIENT_CHANNEL_HANDLE_ENTRY *v22; // [rsp+70h] [rbp+40h] BYREF
  struct CLIENT_CHANNEL_HANDLE_ENTRY *v23; // [rsp+80h] [rbp+50h] BYREF
  struct _RTL_CRITICAL_SECTION *v24; // [rsp+88h] [rbp+58h] BYREF

  v4 = 0;
  v24 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 112);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 112));
  if ( !*((_BYTE *)this + 160) )
    goto LABEL_12;
  v5 = *(_DWORD *)a2;
  if ( *((_DWORD *)a2 + 1) < 0x44u || (unsigned int)(*(_DWORD *)a2 - 10) > 1 )
  {
    v4 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, -2003303421, 0x78u);
    v21 = 438;
    goto LABEL_35;
  }
  v6 = (const struct UCE_RDP_HEADER *)((char *)a2 + 40);
  if ( v5 != 11 )
  {
    v7 = *((_DWORD *)a2 + 4);
    v22 = 0LL;
    MasterTableEntry = CChannelTable::GetMasterTableEntry((CConnection *)((char *)this + 16), v7, &v22);
    v4 = MasterTableEntry;
    if ( MasterTableEntry < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, MasterTableEntry, 0x1D3u);
      v4 = 0;
      goto LABEL_12;
    }
    if ( *(_DWORD *)v6 != 1 )
    {
      if ( *(_DWORD *)v6 == 2 || *(_DWORD *)v6 == 17 || *(_DWORD *)v6 == 19 )
      {
        v13 = *((_QWORD *)v22 + 1);
        *(_OWORD *)(v13 + 128) = *(_OWORD *)v6;
        *(_QWORD *)(v13 + 144) = *((_QWORD *)a2 + 7);
        *(_DWORD *)(v13 + 152) = *((_DWORD *)a2 + 16);
      }
      else
      {
        v10 = CChannel::PostMessageToChannel(*((CChannel **)v22 + 1), (const struct UCE_RDP_HEADER *)((char *)a2 + 40));
        v4 = v10;
        if ( v10 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x20Au);
      }
      goto LABEL_12;
    }
    SetLastError(0);
    if ( SetEvent(*((HANDLE *)v22 + 2)) )
      goto LABEL_12;
    LastError = GetLastError();
    v4 = LastError;
    if ( LastError > 0 )
      v4 = (unsigned __int16)LastError | 0x80070000;
    v21 = 477;
    if ( v4 >= 0 )
      v4 = -2003304445;
LABEL_35:
    MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v4, v21);
    goto LABEL_12;
  }
  for ( i = 1; i < *((_DWORD *)this + 7); ++i )
  {
    if ( HANDLE_TABLE::ValidEntry((CConnection *)((char *)this + 16), i) )
    {
      v23 = 0LL;
      if ( (int)CChannelTable::GetMasterTableEntry((CConnection *)((char *)this + 16), i, &v23) >= 0 )
      {
        v15 = (CChannel *)*((_QWORD *)v23 + 1);
        if ( *((_BYTE *)v15 + 210) )
        {
          v16 = CChannel::PostMessageToChannel(v15, v6);
          v18 = v16;
          if ( v16 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x1C8u);
          if ( !v4 || v4 >= 0 && v18 < 0 )
            v4 = v18;
        }
      }
    }
  }
LABEL_12:
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v24);
  return (unsigned int)v4;
}
