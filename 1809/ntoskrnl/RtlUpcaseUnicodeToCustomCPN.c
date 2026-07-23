/*
 * XREFs of RtlUpcaseUnicodeToCustomCPN @ 0x1408923A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlUpcaseUnicodeToCustomCPN(
        PCPTABLEINFO CustomCP,
        PCH CustomCPString,
        ULONG MaxBytesInCustomCPString,
        PULONG BytesInCustomCPString,
        PWCH UnicodeString,
        ULONG BytesInUnicodeString)
{
  ULONG v6; // ebx
  ULONG v7; // r11d
  PCH v9; // r10
  ULONG v11; // eax
  _BYTE *v12; // rbp
  PWCH v13; // rsi
  __int64 v14; // r14
  USHORT v15; // r9
  PUSHORT DBCSOffsets; // r14
  int v17; // r13d
  _WORD *WideCharTable; // r12
  PWCH v19; // rbp
  __int64 v20; // rax
  unsigned __int16 v21; // dx
  USHORT v22; // cx
  USHORT v23; // r9
  __int16 v24; // dx
  unsigned int v25; // eax

  v6 = MaxBytesInCustomCPString;
  v7 = BytesInUnicodeString >> 1;
  v9 = CustomCPString;
  if ( CustomCP->DBCSCodePage )
  {
    DBCSOffsets = CustomCP->DBCSOffsets;
    v17 = (int)CustomCPString;
    WideCharTable = CustomCP->WideCharTable;
    if ( v7 )
    {
      v19 = UnicodeString;
      do
      {
        if ( !v6 )
          break;
        v20 = *v19++;
        v21 = WideCharTable[v20];
        v22 = DBCSOffsets[(unsigned __int64)v21 >> 8];
        if ( v22 )
          v23 = DBCSOffsets[(unsigned __int8)v21 + (unsigned __int64)v22];
        else
          v23 = CustomCP->MultiByteTable[(unsigned __int8)v21];
        if ( v23 >= 0x61u )
        {
          if ( v23 > 0x7Au )
            v23 += *(_WORD *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 6))[2 * (v23 & 0xF)
                                                                           + 2
                                                                           * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 6))[2 * ((v23 >> 4) & 0xF) + 2 * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 6))[2 * ((unsigned __int64)v23 >> 8)]]];
          else
            v23 -= 32;
        }
        v24 = WideCharTable[v23];
        if ( HIBYTE(v24) )
        {
          v25 = v6--;
          if ( v25 < 2 )
            break;
          *v9++ = HIBYTE(v24);
        }
        *v9 = v24;
        --v6;
        ++v9;
        --v7;
      }
      while ( v7 );
    }
    if ( BytesInCustomCPString )
      *BytesInCustomCPString = (_DWORD)v9 - v17;
  }
  else
  {
    v11 = MaxBytesInCustomCPString;
    if ( v7 < MaxBytesInCustomCPString )
      v11 = BytesInUnicodeString >> 1;
    if ( BytesInCustomCPString )
      *BytesInCustomCPString = v11;
    v12 = CustomCP->WideCharTable;
    if ( v11 )
    {
      v13 = UnicodeString;
      v14 = v11;
      do
      {
        v15 = CustomCP->MultiByteTable[(unsigned __int8)v12[*v13]];
        if ( v15 >= 0x61u )
        {
          if ( v15 > 0x7Au )
            v15 += *(_WORD *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 6))[2 * (v15 & 0xF)
                                                                           + 2
                                                                           * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 6))[2 * ((v15 >> 4) & 0xF) + 2 * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 6))[2 * ((unsigned __int64)v15 >> 8)]]];
          else
            v15 -= 32;
        }
        ++v13;
        *v9++ = v12[v15];
        --v14;
      }
      while ( v14 );
    }
  }
  return v6 < v7 ? 0x80000005 : 0;
}
