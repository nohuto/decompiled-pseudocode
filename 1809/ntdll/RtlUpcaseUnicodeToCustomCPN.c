/*
 * XREFs of RtlUpcaseUnicodeToCustomCPN @ 0x1800E6960
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlUpcaseUnicodeToCustomCPN(
        PCPTABLEINFO CustomCP,
        PCH CustomCPString,
        ULONG MaxBytesInCustomCPString,
        PULONG BytesInCustomCPString,
        PWCH UnicodeString,
        ULONG BytesInUnicodeString)
{
  ULONG v6; // r11d
  ULONG v7; // ebx
  PCH v8; // r10
  ULONG v9; // eax
  _BYTE *v10; // rsi
  PWCH v11; // r9
  __int64 v12; // r14
  __int64 v13; // rbp
  USHORT v14; // r8
  PUSHORT DBCSOffsets; // r14
  int v16; // esi
  _WORD *WideCharTable; // r12
  __int64 v18; // r13
  PWCH v19; // rbp
  __int64 v20; // rax
  unsigned __int16 v21; // dx
  unsigned __int64 v22; // rax
  USHORT v23; // r8
  __int16 v24; // dx
  unsigned int v25; // eax
  int v27; // [rsp+30h] [rbp+8h]

  v6 = BytesInUnicodeString >> 1;
  v7 = MaxBytesInCustomCPString;
  v8 = CustomCPString;
  if ( CustomCP->DBCSCodePage )
  {
    DBCSOffsets = CustomCP->DBCSOffsets;
    v16 = (int)CustomCPString;
    WideCharTable = CustomCP->WideCharTable;
    v27 = (int)CustomCPString;
    if ( v6 )
    {
      v18 = Nls844UnicodeUpcaseTable;
      v19 = UnicodeString;
      do
      {
        if ( !v7 )
          break;
        v20 = *v19++;
        v21 = WideCharTable[v20];
        v22 = (unsigned __int64)v21 >> 8;
        if ( DBCSOffsets[v22] )
          v23 = DBCSOffsets[(unsigned __int8)v21 + (unsigned __int64)DBCSOffsets[v22]];
        else
          v23 = CustomCP->MultiByteTable[(unsigned __int8)v21];
        if ( v23 >= 0x61u )
        {
          if ( v23 > 0x7Au )
            v23 += *(_WORD *)(v18
                            + 2LL
                            * ((v23 & 0xF)
                             + (unsigned int)*(unsigned __int16 *)(v18
                                                                 + 2LL
                                                                 * (((v23 >> 4) & 0xF)
                                                                  + (unsigned int)*(unsigned __int16 *)(v18 + 2 * ((unsigned __int64)v23 >> 8))))));
          else
            v23 -= 32;
        }
        v24 = WideCharTable[v23];
        if ( HIBYTE(v24) )
        {
          v25 = v7--;
          if ( v25 < 2 )
            break;
          *v8++ = HIBYTE(v24);
        }
        *v8 = v24;
        --v7;
        ++v8;
        --v6;
      }
      while ( v6 );
      v16 = v27;
    }
    if ( BytesInCustomCPString )
      *BytesInCustomCPString = (_DWORD)v8 - v16;
  }
  else
  {
    v9 = MaxBytesInCustomCPString;
    if ( v6 < MaxBytesInCustomCPString )
      v9 = BytesInUnicodeString >> 1;
    if ( BytesInCustomCPString )
      *BytesInCustomCPString = v9;
    v10 = CustomCP->WideCharTable;
    if ( v9 )
    {
      v11 = UnicodeString;
      v12 = Nls844UnicodeUpcaseTable;
      v13 = v9;
      do
      {
        v14 = CustomCP->MultiByteTable[(unsigned __int8)v10[*v11]];
        if ( v14 >= 0x61u )
        {
          if ( v14 > 0x7Au )
            v14 += *(_WORD *)(v12
                            + 2LL
                            * ((v14 & 0xF)
                             + (unsigned int)*(unsigned __int16 *)(v12
                                                                 + 2LL
                                                                 * (((v14 >> 4) & 0xF)
                                                                  + (unsigned int)*(unsigned __int16 *)(v12 + 2 * ((unsigned __int64)v14 >> 8))))));
          else
            v14 -= 32;
        }
        ++v11;
        *v8++ = v10[v14];
        --v13;
      }
      while ( v13 );
    }
  }
  return v7 < v6 ? 0x80000005 : 0;
}
