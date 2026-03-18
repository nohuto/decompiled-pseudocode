/*
 * XREFs of ?PostMessageToClient@CInternalMilCmdConnection@@UEAAJPEBUUCE_RDP_HEADER@@@Z @ 0x1800AA6B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180055A08 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?ValidEntry@HANDLE_TABLE@@QEBAHI@Z @ 0x180056CF8 (-ValidEntry@HANDLE_TABLE@@QEBAHI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetMasterTableEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z @ 0x1800AA7C4 (-GetMasterTableEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z.c)
 *     ?PostMessageToChannel@CChannel@@QEAAJPEBUMIL_MESSAGE@@@Z @ 0x1800AA7FC (-PostMessageToChannel@CChannel@@QEAAJPEBUMIL_MESSAGE@@@Z.c)
 */

__int64 __fastcall CInternalMilCmdConnection::PostMessageToClient(
        CInternalMilCmdConnection *this,
        const struct UCE_RDP_HEADER *a2)
{
  int v4; // ebx
  __int64 v5; // rcx
  const struct MIL_MESSAGE *v6; // rdi
  unsigned int v7; // edx
  signed int MasterTableEntry; // eax
  __int64 v9; // rcx
  __int64 v10; // rcx
  signed int v11; // eax
  __int64 v12; // rcx
  unsigned int i; // r14d
  CChannel *v15; // rcx
  signed int v16; // eax
  __int64 v17; // rcx
  int v18; // r15d
  signed int LastError; // eax
  __int64 v20; // rcx
  unsigned int v21; // [rsp+20h] [rbp-10h]
  struct CLIENT_CHANNEL_HANDLE_ENTRY *v22; // [rsp+70h] [rbp+40h] BYREF
  struct CLIENT_CHANNEL_HANDLE_ENTRY *v23; // [rsp+80h] [rbp+50h] BYREF
  struct _RTL_CRITICAL_SECTION *v24; // [rsp+88h] [rbp+58h] BYREF

  v4 = 0;
  v24 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 144);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 144));
  if ( !*((_BYTE *)this + 56) )
    goto LABEL_12;
  v5 = *(unsigned int *)a2;
  if ( *((_DWORD *)a2 + 1) < 0x44u || (unsigned int)(v5 - 10) > 1 )
  {
    v4 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, 0x88980403, 0x75u, 0LL);
    v21 = 332;
    goto LABEL_36;
  }
  v6 = (const struct UCE_RDP_HEADER *)((char *)a2 + 40);
  if ( (_DWORD)v5 != 11 )
  {
    v7 = *((_DWORD *)a2 + 4);
    v22 = 0LL;
    MasterTableEntry = CChannelTable::GetMasterTableEntry((CInternalMilCmdConnection *)((char *)this + 64), v7, &v22);
    v4 = MasterTableEntry;
    if ( MasterTableEntry < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, MasterTableEntry, 0x169u, 0LL);
      v4 = 0;
      goto LABEL_12;
    }
    if ( *(_DWORD *)v6 != 1 )
    {
      if ( *(_DWORD *)v6 == 2 || *(_DWORD *)v6 == 17 )
      {
        v10 = *((_QWORD *)v22 + 1);
      }
      else
      {
        v10 = *((_QWORD *)v22 + 1);
        if ( *(_DWORD *)v6 != 19 )
        {
          v11 = CChannel::PostMessageToChannel((CChannel *)v10, (const struct UCE_RDP_HEADER *)((char *)a2 + 40));
          v4 = v11;
          if ( v11 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x1A0u, 0LL);
          goto LABEL_12;
        }
      }
      *(_OWORD *)(v10 + 128) = *(_OWORD *)v6;
      *(_QWORD *)(v10 + 144) = *((_QWORD *)a2 + 7);
      *(_DWORD *)(v10 + 152) = *((_DWORD *)a2 + 16);
      goto LABEL_12;
    }
    SetLastError(0);
    if ( SetEvent(*((HANDLE *)v22 + 2)) )
      goto LABEL_12;
    LastError = GetLastError();
    v4 = LastError;
    if ( LastError > 0 )
      v4 = (unsigned __int16)LastError | 0x80070000;
    if ( v4 >= 0 )
      v4 = -2003304445;
    v21 = 371;
LABEL_36:
    MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v4, v21, 0LL);
    goto LABEL_12;
  }
  for ( i = 1; i < *((_DWORD *)this + 19); ++i )
  {
    if ( HANDLE_TABLE::ValidEntry((CInternalMilCmdConnection *)((char *)this + 64), i) )
    {
      v23 = 0LL;
      if ( (int)CChannelTable::GetMasterTableEntry((CInternalMilCmdConnection *)((char *)this + 64), i, &v23) >= 0 )
      {
        v15 = (CChannel *)*((_QWORD *)v23 + 1);
        if ( *((_BYTE *)v15 + 210) )
        {
          v16 = CChannel::PostMessageToChannel(v15, v6);
          v18 = v16;
          if ( v16 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x15Eu, 0LL);
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
