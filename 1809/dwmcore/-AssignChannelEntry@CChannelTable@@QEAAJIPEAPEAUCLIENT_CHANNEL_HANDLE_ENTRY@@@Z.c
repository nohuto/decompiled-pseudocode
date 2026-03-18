/*
 * XREFs of ?AssignChannelEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z @ 0x18007818C
 * Callers:
 *     ?CreateKernelChannel@CConnection@@AEAAJPEAPEAVCChannel@@@Z @ 0x180077F38 (-CreateKernelChannel@CConnection@@AEAAJPEAPEAVCChannel@@@Z.c)
 * Callees:
 *     ?GetMasterTableEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z @ 0x18009C9D0 (-GetMasterTableEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AssignEntry@HANDLE_TABLE@@QEAAJIK@Z @ 0x1800CFC64 (-AssignEntry@HANDLE_TABLE@@QEAAJIK@Z.c)
 */

__int64 __fastcall CChannelTable::AssignChannelEntry(
        CChannelTable *this,
        unsigned int a2,
        struct CLIENT_CHANNEL_HANDLE_ENTRY **a3)
{
  int MasterTableEntry; // eax
  unsigned int v7; // ecx
  unsigned int v8; // ebx
  struct CLIENT_CHANNEL_HANDLE_ENTRY *v9; // rsi
  HANDLE EventW; // rax
  signed int LastError; // eax
  int v13; // r9d
  unsigned int v14; // [rsp+20h] [rbp-18h]
  struct CLIENT_CHANNEL_HANDLE_ENTRY *v15; // [rsp+58h] [rbp+20h] BYREF

  v15 = 0LL;
  MasterTableEntry = HANDLE_TABLE::AssignEntry(this, a2, 1u);
  v8 = MasterTableEntry;
  if ( MasterTableEntry < 0 )
  {
    v14 = 56;
    goto LABEL_13;
  }
  MasterTableEntry = CChannelTable::GetMasterTableEntry(this, a2, &v15);
  v8 = MasterTableEntry;
  if ( MasterTableEntry < 0 )
  {
    v14 = 58;
LABEL_13:
    v13 = MasterTableEntry;
LABEL_14:
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v13, v14);
    return v8;
  }
  v9 = v15;
  *((_QWORD *)v15 + 1) = 0LL;
  SetLastError(0);
  EventW = CreateEventW(0LL, 0, 0, 0LL);
  *((_QWORD *)v9 + 2) = EventW;
  if ( !EventW )
  {
    LastError = GetLastError();
    v8 = LastError;
    if ( LastError > 0 )
      v8 = (unsigned __int16)LastError | 0x80070000;
    v14 = 61;
    if ( (v8 & 0x80000000) == 0 )
      v8 = -2003304445;
    v13 = v8;
    goto LABEL_14;
  }
  ++*((_DWORD *)this + 8);
  *a3 = v9;
  return v8;
}
