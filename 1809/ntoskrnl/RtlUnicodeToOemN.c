/*
 * XREFs of RtlUnicodeToOemN @ 0x14067D520
 * Callers:
 *     RtlUnicodeStringToCountedOemString @ 0x14067D080 (RtlUnicodeStringToCountedOemString.c)
 *     RtlUnicodeStringToOemString @ 0x1406D1730 (RtlUnicodeStringToOemString.c)
 * Callees:
 *     RtlUnicodeToUTF8N @ 0x1406C08F0 (RtlUnicodeToUTF8N.c)
 */

NTSTATUS __stdcall RtlUnicodeToOemN(
        PCHAR OemString,
        ULONG MaxBytesInOemString,
        PULONG BytesInOemString,
        PCWCH UnicodeString,
        ULONG BytesInUnicodeString)
{
  NTSTATUS v5; // ebx
  ULONG v6; // r11d
  PCHAR v7; // r10
  ULONG v8; // edx
  ULONG v9; // eax
  __int64 v10; // rdi
  __int64 v11; // r8
  __int64 v12; // rax
  ULONG *v14; // rax
  NTSTATUS v15; // eax
  int i; // edi
  __int64 v17; // rcx
  __int16 v18; // si
  unsigned int v19; // eax
  char v20; // [rsp+30h] [rbp-18h] BYREF

  v5 = 0;
  v6 = MaxBytesInOemString;
  v7 = OemString;
  if ( BYTE4(NlsMbCodePageTag) )
  {
    v14 = (ULONG *)&v20;
    if ( BytesInOemString )
      v14 = BytesInOemString;
    if ( BytesInUnicodeString )
    {
      v15 = RtlUnicodeToUTF8N(OemString, MaxBytesInOemString, v14, UnicodeString, BytesInUnicodeString);
    }
    else
    {
      *v14 = 0;
      v15 = 0;
    }
    if ( v15 == -1073741789 )
      return -2147483643;
    return v5;
  }
  else
  {
    v8 = BytesInUnicodeString >> 1;
    if ( (_BYTE)NlsMbOemCodePageTag )
    {
      for ( i = (int)OemString; v8; --v8 )
      {
        if ( !v6 )
          break;
        v17 = *UnicodeString++;
        v18 = *(_WORD *)(NlsUnicodeToMbOemData + 2 * v17);
        if ( HIBYTE(v18) )
        {
          v19 = v6--;
          if ( v19 < 2 )
            break;
          *v7++ = HIBYTE(v18);
        }
        *v7 = v18;
        --v6;
        ++v7;
      }
      if ( BytesInOemString )
        *BytesInOemString = (_DWORD)v7 - i;
    }
    else
    {
      v9 = v6;
      if ( v8 < v6 )
        v9 = BytesInUnicodeString >> 1;
      if ( BytesInOemString )
        *BytesInOemString = v9;
      v10 = NlsUnicodeToOemData;
      if ( v9 )
      {
        v11 = v9;
        do
        {
          v12 = *UnicodeString++;
          *v7++ = *(_BYTE *)(v12 + v10);
          --v11;
        }
        while ( v11 );
      }
    }
    return v6 < v8 ? 0x80000005 : 0;
  }
}
