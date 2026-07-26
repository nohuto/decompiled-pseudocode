/*
 * XREFs of NdisWriteEventLogEntry @ 0x1C0093450
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0011C88 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qdL @ 0x1C00158A0 (WPP_RECORDER_SF_qdL.c)
 *     memmove @ 0x1C0041100 (memmove.c)
 */

// local variable allocation has failed, the output may be wrong!
NDIS_STATUS __stdcall NdisWriteEventLogEntry(
        PVOID LogHandle,
        NDIS_STATUS EventCode,
        ULONG UniqueEventValue,
        USHORT NumStrings,
        PVOID StringsList,
        ULONG DataSize,
        PVOID Data)
{
  NDIS_STATUS v7; // ebx
  int v9; // edi
  NDIS_STATUS v11; // r13d
  PVOID v12; // r10
  __int16 **v13; // r15
  __int64 v14; // r8
  _WORD *v15; // rax
  int v16; // ecx
  ULONG v17; // esi
  unsigned int v18; // ecx
  char v19; // al
  _WORD *ErrorLogEntry; // rax
  _WORD *v21; // rdi
  unsigned __int16 v22; // ax
  _WORD *v23; // rcx
  __int64 v24; // r8
  __int16 *v25; // rdx
  __int16 v26; // ax

  v7 = 0;
  v9 = 0;
  v11 = EventCode;
  v12 = LogHandle;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_qdL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      EventCode,
      0xDu,
      0x2Eu,
      (struct _GUID *)&WPP_8eff094606dc365e3cd879b7a6c5bbc9_Traceguids,
      (char)LogHandle,
      EventCode,
      UniqueEventValue);
    v12 = LogHandle;
  }
  v13 = (__int16 **)StringsList;
  if ( NumStrings )
  {
    *(_QWORD *)&EventCode = StringsList;
    v14 = NumStrings;
    do
    {
      v15 = **(_WORD ***)&EventCode;
      v16 = 2;
      while ( *v15 )
      {
        ++v15;
        v16 += 2;
      }
      v9 += v16;
      *(_QWORD *)&EventCode += 8LL;
      --v14;
    }
    while ( v14 );
  }
  v17 = DataSize;
  if ( (DataSize & 3) != 0 )
    v17 = DataSize - (DataSize & 3) + 4;
  v18 = v17 + v9;
  if ( v17 + v9 <= 0xC4 )
  {
    v19 = 44;
    if ( v18 <= 4 )
      v19 = 48;
    ErrorLogEntry = IoAllocateErrorLogEntry(v12, (unsigned __int8)v18 + v19);
    v21 = ErrorLogEntry;
    if ( ErrorLogEntry )
    {
      *((_DWORD *)ErrorLogEntry + 4) = UniqueEventValue;
      *((_DWORD *)ErrorLogEntry + 3) = v11;
      ErrorLogEntry[2] = NumStrings;
      v22 = v17 + 44;
      v21[1] = v17;
      v21[3] = v17 + 44;
      if ( DataSize )
      {
        memmove(v21 + 20, Data, DataSize);
        v22 = v21[3];
      }
      v23 = (_WORD *)((char *)v21 + v22);
      if ( NumStrings )
      {
        v24 = NumStrings;
        do
        {
          v25 = *v13;
          do
          {
            v26 = *v25++;
            *v23++ = v26;
          }
          while ( v26 );
          ++v13;
          --v24;
        }
        while ( v24 );
      }
      IoWriteErrorLogEntry(v21);
    }
    else
    {
      v7 = -1073741670;
    }
  }
  else
  {
    v7 = -1073676266;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(EventCode) = 4;
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      EventCode,
      13,
      47,
      (struct _GUID *)&WPP_8eff094606dc365e3cd879b7a6c5bbc9_Traceguids);
  }
  return v7;
}
