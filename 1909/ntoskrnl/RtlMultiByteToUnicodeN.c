/*
 * XREFs of RtlMultiByteToUnicodeN @ 0x14063FC40
 * Callers:
 *     mbstowcs @ 0x1401A0FA0 (mbstowcs.c)
 *     RtlAnsiStringToUnicodeString @ 0x14063FB50 (RtlAnsiStringToUnicodeString.c)
 * Callees:
 *     RtlpIsUtf8Process @ 0x1406672F0 (RtlpIsUtf8Process.c)
 *     RtlUTF8ToUnicodeN @ 0x1406DEFF0 (RtlUTF8ToUnicodeN.c)
 */

NTSTATUS __stdcall RtlMultiByteToUnicodeN(
        PWCH UnicodeString,
        ULONG MaxBytesInUnicodeString,
        PULONG BytesInUnicodeString,
        const CHAR *MultiByteString,
        ULONG BytesInMultiByteString)
{
  ULONG v9; // edi
  ULONG v10; // ecx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rax
  ULONG *v15; // r8
  __int64 v16; // r10
  int v17; // r8d
  ULONG v18; // edx
  int v19; // eax
  __int64 v20; // rcx
  unsigned __int16 v21; // r9
  char v22; // [rsp+30h] [rbp-18h] BYREF

  if ( (unsigned __int8)RtlpIsUtf8Process(0LL) )
  {
    v15 = (ULONG *)&v22;
    if ( BytesInUnicodeString )
      v15 = BytesInUnicodeString;
    if ( BytesInMultiByteString )
      RtlUTF8ToUnicodeN(UnicodeString, MaxBytesInUnicodeString, v15, MultiByteString, BytesInMultiByteString);
    else
      *v15 = 0;
  }
  else
  {
    v9 = MaxBytesInUnicodeString >> 1;
    if ( (_BYTE)NlsMbCodePageTag )
    {
      v16 = NlsMbAnsiCodePageTables;
      v17 = (int)UnicodeString;
      if ( v9 )
      {
        v18 = BytesInMultiByteString;
        v19 = (int)UnicodeString;
        while ( v18 )
        {
          v20 = *(unsigned __int8 *)MultiByteString;
          --v9;
          --v18;
          v21 = NlsLeadByteInfoTable[v20];
          if ( v21 )
          {
            if ( !v18 )
            {
              *UnicodeString = 0;
              LODWORD(UnicodeString) = v19 + 2;
              break;
            }
            *UnicodeString++ = *(_WORD *)(v16 + 2 * (v21 + (unsigned __int64)*(unsigned __int8 *)++MultiByteString));
            --v18;
          }
          else
          {
            *UnicodeString++ = *(_WORD *)(NlsAnsiToUnicodeData + 2 * v20);
          }
          ++MultiByteString;
          v19 = (int)UnicodeString;
          if ( !v9 )
            break;
        }
      }
      if ( BytesInUnicodeString )
        *BytesInUnicodeString = (_DWORD)UnicodeString - v17;
    }
    else
    {
      v10 = BytesInMultiByteString;
      if ( v9 < BytesInMultiByteString )
        v10 = v9;
      if ( BytesInUnicodeString )
        *BytesInUnicodeString = 2 * v10;
      v11 = NlsAnsiToUnicodeData;
      if ( v10 )
      {
        v12 = v10;
        do
        {
          v13 = *(unsigned __int8 *)MultiByteString++;
          *UnicodeString++ = *(_WORD *)(v11 + 2 * v13);
          --v12;
        }
        while ( v12 );
      }
    }
  }
  return 0;
}
