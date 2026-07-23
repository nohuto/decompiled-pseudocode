/*
 * XREFs of RtlUnicodeToMultiByteN @ 0x140699260
 * Callers:
 *     wcstombs @ 0x140197B00 (wcstombs.c)
 *     _wctomb_s_l @ 0x140197E34 (_wctomb_s_l.c)
 *     _safecrt_wctomb_s @ 0x14019CA00 (_safecrt_wctomb_s.c)
 * Callees:
 *     RtlUnicodeToUTF8N @ 0x1406C08F0 (RtlUnicodeToUTF8N.c)
 */

NTSTATUS __stdcall RtlUnicodeToMultiByteN(
        PCHAR MultiByteString,
        ULONG MaxBytesInMultiByteString,
        PULONG BytesInMultiByteString,
        PCWCH UnicodeString,
        ULONG BytesInUnicodeString)
{
  ULONG v6; // r11d
  ULONG v7; // r8d
  __int64 v8; // r10
  __int64 v9; // r8
  __int64 v10; // rax
  ULONG *v12; // r8
  int i; // ebx
  __int64 v14; // rdx
  __int16 v15; // di
  unsigned int v16; // eax
  char v17; // [rsp+30h] [rbp-18h] BYREF

  v6 = MaxBytesInMultiByteString;
  if ( BYTE1(NlsMbCodePageTag) )
  {
    v12 = (ULONG *)&v17;
    if ( BytesInMultiByteString )
      v12 = BytesInMultiByteString;
    if ( BytesInUnicodeString )
      RtlUnicodeToUTF8N(MultiByteString, MaxBytesInMultiByteString, v12, UnicodeString, BytesInUnicodeString);
    else
      *v12 = 0;
  }
  else
  {
    v7 = BytesInUnicodeString >> 1;
    if ( (_BYTE)NlsMbCodePageTag )
    {
      for ( i = (int)MultiByteString; v7; --v7 )
      {
        if ( !v6 )
          break;
        v14 = *UnicodeString++;
        v15 = *(_WORD *)(NlsUnicodeToMbAnsiData + 2 * v14);
        if ( HIBYTE(v15) )
        {
          v16 = v6--;
          if ( v16 < 2 )
            break;
          *MultiByteString++ = HIBYTE(v15);
        }
        *MultiByteString = v15;
        --v6;
        ++MultiByteString;
      }
      if ( BytesInMultiByteString )
        *BytesInMultiByteString = (_DWORD)MultiByteString - i;
    }
    else
    {
      if ( v7 < MaxBytesInMultiByteString )
        v6 = BytesInUnicodeString >> 1;
      if ( BytesInMultiByteString )
        *BytesInMultiByteString = v6;
      v8 = NlsUnicodeToAnsiData;
      if ( v6 )
      {
        v9 = v6;
        do
        {
          v10 = *UnicodeString;
          ++MultiByteString;
          ++UnicodeString;
          *(MultiByteString - 1) = *(_BYTE *)(v10 + v8);
          --v9;
        }
        while ( v9 );
      }
    }
  }
  return 0;
}
