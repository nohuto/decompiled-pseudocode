/*
 * XREFs of RtlMultiByteToUnicodeN @ 0x1405ABE90
 * Callers:
 *     mbstowcs @ 0x1401961D0 (mbstowcs.c)
 *     RtlAnsiStringToUnicodeString @ 0x1405ABDA0 (RtlAnsiStringToUnicodeString.c)
 * Callees:
 *     RtlUTF8ToUnicodeN @ 0x1406BEB10 (RtlUTF8ToUnicodeN.c)
 */

NTSTATUS __stdcall RtlMultiByteToUnicodeN(
        PWCH UnicodeString,
        ULONG MaxBytesInUnicodeString,
        PULONG BytesInUnicodeString,
        const CHAR *MultiByteString,
        ULONG BytesInMultiByteString)
{
  PWCH v5; // r10
  ULONG v6; // edx
  ULONG v7; // ecx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rax
  ULONG *v12; // rax
  __int64 v13; // rdi
  int v14; // ebx
  ULONG v15; // r11d
  __int64 v16; // rcx
  unsigned __int16 v17; // ax
  char v18; // [rsp+30h] [rbp-18h] BYREF

  v5 = UnicodeString;
  if ( BYTE1(NlsMbCodePageTag) )
  {
    v12 = (ULONG *)&v18;
    if ( BytesInUnicodeString )
      v12 = BytesInUnicodeString;
    if ( BytesInMultiByteString )
      RtlUTF8ToUnicodeN(UnicodeString, MaxBytesInUnicodeString, v12, MultiByteString, BytesInMultiByteString);
    else
      *v12 = 0;
  }
  else
  {
    v6 = MaxBytesInUnicodeString >> 1;
    if ( (_BYTE)NlsMbCodePageTag )
    {
      v13 = NlsMbAnsiCodePageTables;
      v14 = (int)UnicodeString;
      if ( v6 )
      {
        v15 = BytesInMultiByteString;
        while ( v15 )
        {
          v16 = *(unsigned __int8 *)MultiByteString;
          --v6;
          --v15;
          v17 = NlsLeadByteInfoTable[v16];
          if ( v17 )
          {
            if ( !v15 )
            {
              *v5 = 0;
              LODWORD(v5) = (_DWORD)v5 + 2;
              break;
            }
            ++MultiByteString;
            --v15;
            *v5 = *(_WORD *)(v13 + 2 * (v17 + (unsigned __int64)*(unsigned __int8 *)MultiByteString));
          }
          else
          {
            *v5 = *(_WORD *)(NlsAnsiToUnicodeData + 2 * v16);
          }
          ++v5;
          ++MultiByteString;
          if ( !v6 )
            break;
        }
      }
      if ( BytesInUnicodeString )
        *BytesInUnicodeString = (_DWORD)v5 - v14;
    }
    else
    {
      v7 = BytesInMultiByteString;
      if ( v6 < BytesInMultiByteString )
        v7 = v6;
      if ( BytesInUnicodeString )
        *BytesInUnicodeString = 2 * v7;
      v8 = NlsAnsiToUnicodeData;
      if ( v7 )
      {
        v9 = v7;
        do
        {
          v10 = *(unsigned __int8 *)MultiByteString++;
          *v5++ = *(_WORD *)(v8 + 2 * v10);
          --v9;
        }
        while ( v9 );
      }
    }
  }
  return 0;
}
