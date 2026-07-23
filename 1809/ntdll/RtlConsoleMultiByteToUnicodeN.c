/*
 * XREFs of RtlConsoleMultiByteToUnicodeN @ 0x1800E61D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlMultiByteToUnicodeN @ 0x180058120 (RtlMultiByteToUnicodeN.c)
 */

NTSTATUS __cdecl RtlConsoleMultiByteToUnicodeN(
        PWCH UnicodeString,
        ULONG MaxBytesInUnicodeString,
        PULONG BytesInUnicodeString,
        PCCH MultiByteString,
        ULONG BytesInMultiByteString,
        PULONG pdwSpecialChar)
{
  int v6; // r10d
  bool v7; // zf
  PWCH v8; // r11
  PCCH i; // rax
  ULONG v11; // edx
  ULONG v12; // ecx
  __int64 v13; // r8
  __int64 v14; // rdx
  unsigned __int8 v15; // al
  __int64 v16; // r14
  __int64 v17; // r15
  ULONG v18; // ebx
  __int64 v19; // rax
  unsigned __int16 v20; // bp

  v6 = 0;
  v7 = NlsActiveCodePageIsUTF8 == 0;
  v8 = UnicodeString;
  *pdwSpecialChar = 0;
  if ( v7 )
  {
    v11 = MaxBytesInUnicodeString >> 1;
    if ( NlsMbCodePageTag )
    {
      v16 = NlsMbAnsiCodePageTables;
      if ( v11 )
      {
        v17 = NlsAnsiToUnicodeData;
        v18 = BytesInMultiByteString;
        while ( v18 )
        {
          v19 = *(unsigned __int8 *)MultiByteString;
          --v11;
          --v18;
          v20 = NlsLeadByteInfoTable[v19];
          if ( v20 )
          {
            if ( !v18 )
            {
              *v8 = 0;
              LODWORD(v8) = (_DWORD)v8 + 2;
              break;
            }
            ++MultiByteString;
            --v18;
            *v8 = *(_WORD *)(v16 + 2 * (v20 + (unsigned __int64)*(unsigned __int8 *)MultiByteString));
          }
          else
          {
            if ( (unsigned __int8)v19 < 0x20u )
            {
              *pdwSpecialChar = 1;
              LOBYTE(v19) = *MultiByteString;
            }
            *v8 = *(_WORD *)(v17 + 2LL * (unsigned __int8)v19);
          }
          ++v8;
          ++MultiByteString;
          if ( !v11 )
            break;
        }
      }
      if ( BytesInUnicodeString )
        *BytesInUnicodeString = (_DWORD)v8 - (_DWORD)UnicodeString;
    }
    else
    {
      v12 = BytesInMultiByteString;
      if ( v11 < BytesInMultiByteString )
        v12 = v11;
      if ( BytesInUnicodeString )
        *BytesInUnicodeString = 2 * v12;
      v13 = NlsAnsiToUnicodeData;
      if ( v12 )
      {
        v14 = v12;
        do
        {
          v15 = *MultiByteString;
          if ( *MultiByteString < 0x20u )
          {
            *pdwSpecialChar = 1;
            v15 = *MultiByteString;
          }
          ++MultiByteString;
          *v8++ = *(_WORD *)(v13 + 2LL * v15);
          --v14;
        }
        while ( v14 );
      }
    }
    return 0;
  }
  else
  {
    if ( BytesInMultiByteString )
    {
      for ( i = MultiByteString; *i >= 0x20u; ++i )
      {
        if ( ++v6 >= BytesInMultiByteString )
          return RtlMultiByteToUnicodeN(
                   UnicodeString,
                   MaxBytesInUnicodeString,
                   BytesInUnicodeString,
                   MultiByteString,
                   BytesInMultiByteString);
      }
      *pdwSpecialChar = 1;
    }
    return RtlMultiByteToUnicodeN(
             UnicodeString,
             MaxBytesInUnicodeString,
             BytesInUnicodeString,
             MultiByteString,
             BytesInMultiByteString);
  }
}
