/*
 * XREFs of NdisWriteEventLogEntry @ 0x1C005E540
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x1C00260B0 (WPP_SF_.c)
 *     memmove @ 0x1C0026E40 (memmove.c)
 *     WPP_SF_qdD @ 0x1C003A814 (WPP_SF_qdD.c)
 */

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
  PVOID v12; // r10
  __int16 **v13; // r15
  _WORD **v14; // rdx
  __int64 v15; // r8
  _WORD *v16; // rax
  int v17; // ecx
  ULONG v18; // esi
  unsigned int v19; // ecx
  char v20; // al
  _WORD *ErrorLogEntry; // rax
  _WORD *v22; // rdi
  unsigned __int16 v23; // ax
  _WORD *v24; // rcx
  __int64 v25; // r8
  __int16 *v26; // rdx
  __int16 v27; // ax

  v7 = 0;
  v9 = 0;
  v12 = LogHandle;
  if ( (unsigned __int8)byte_1C00A025C >= 4u )
  {
    WPP_SF_qdD(0x2Eu, &WPP_5a25d62004233057cf64a29056d8f8be_Traceguids, (__int64)LogHandle, EventCode, UniqueEventValue);
    v12 = LogHandle;
  }
  v13 = (__int16 **)StringsList;
  if ( NumStrings )
  {
    v14 = (_WORD **)StringsList;
    v15 = NumStrings;
    do
    {
      v16 = *v14;
      v17 = 2;
      while ( *v16 )
      {
        ++v16;
        v17 += 2;
      }
      v9 += v17;
      ++v14;
      --v15;
    }
    while ( v15 );
  }
  v18 = DataSize;
  if ( (DataSize & 3) != 0 )
    v18 = DataSize - (DataSize & 3) + 4;
  v19 = v18 + v9;
  if ( v18 + v9 <= 0xC4 )
  {
    v20 = 44;
    if ( v19 <= 4 )
      v20 = 48;
    ErrorLogEntry = IoAllocateErrorLogEntry(v12, (unsigned __int8)v19 + v20);
    v22 = ErrorLogEntry;
    if ( ErrorLogEntry )
    {
      *((_DWORD *)ErrorLogEntry + 4) = UniqueEventValue;
      *((_DWORD *)ErrorLogEntry + 3) = EventCode;
      ErrorLogEntry[2] = NumStrings;
      v23 = v18 + 44;
      v22[1] = v18;
      v22[3] = v18 + 44;
      if ( DataSize )
      {
        memmove(v22 + 20, Data, DataSize);
        v23 = v22[3];
      }
      v24 = (_WORD *)((char *)v22 + v23);
      if ( NumStrings )
      {
        v25 = NumStrings;
        do
        {
          v26 = *v13;
          do
          {
            v27 = *v26++;
            *v24++ = v27;
          }
          while ( v27 );
          ++v13;
          --v25;
        }
        while ( v25 );
      }
      IoWriteErrorLogEntry(v22);
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
  if ( (unsigned __int8)byte_1C00A025C >= 4u )
    WPP_SF_(0x2Fu, &WPP_5a25d62004233057cf64a29056d8f8be_Traceguids);
  return v7;
}
