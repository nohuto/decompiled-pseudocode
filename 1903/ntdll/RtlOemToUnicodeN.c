/*
 * XREFs of RtlOemToUnicodeN @ 0x180061F00
 * Callers:
 *     RtlCreateEnvironmentEx @ 0x18005CB80 (RtlCreateEnvironmentEx.c)
 *     RtlOemStringToUnicodeString @ 0x180061CE0 (RtlOemStringToUnicodeString.c)
 * Callees:
 *     RtlUTF8ToUnicodeN @ 0x18005F3A0 (RtlUTF8ToUnicodeN.c)
 *     sub_1800621C4 @ 0x1800621C4 (sub_1800621C4.c)
 */

NTSTATUS __cdecl RtlOemToUnicodeN(
        PWSTR UnicodeString,
        ULONG MaxBytesInUnicodeString,
        PULONG BytesInUnicodeString,
        PCCH OemString,
        ULONG BytesInOemString)
{
  ULONG v5; // edx
  ULONG *v6; // r8
  const CHAR *v7; // r9
  WCHAR *v8; // r10
  unsigned int v9; // r11d
  NTSTATUS v10; // ebx
  ULONG v11; // edx
  ULONG v12; // r11d
  ULONG v13; // ecx
  __int64 v14; // rdi
  __int64 v15; // r8
  __int64 v16; // rax
  ULONG *v18; // rax
  NTSTATUS v19; // eax
  __int64 v20; // r14
  int v21; // esi
  __int64 v22; // r15
  __int64 v23; // rax
  unsigned __int16 v24; // di
  WCHAR v25; // ax
  char v26; // [rsp+30h] [rbp-18h] BYREF

  LOBYTE(UnicodeString) = 1;
  v10 = 0;
  if ( (unsigned __int8)sub_1800621C4(UnicodeString, MaxBytesInUnicodeString, BytesInUnicodeString) )
  {
    v18 = (ULONG *)&v26;
    if ( v6 )
      v18 = v6;
    if ( BytesInOemString )
    {
      v19 = RtlUTF8ToUnicodeN(v8, v5, v18, v7, BytesInOemString);
    }
    else
    {
      *v18 = 0;
      v19 = 0;
    }
    if ( v19 == -1073741789 )
      return -2147483643;
    return v10;
  }
  else
  {
    v11 = BytesInOemString;
    v12 = v9 >> 1;
    if ( NlsMbOemCodePageTag )
    {
      v20 = qword_180166940;
      v21 = (int)v8;
      if ( v12 )
      {
        v22 = qword_180166538;
        while ( v11 )
        {
          v23 = *(unsigned __int8 *)v7;
          --v12;
          --v11;
          v24 = word_1801640E0[v23];
          if ( v24 )
          {
            if ( !v11 )
            {
              *v8 = 0;
              LODWORD(v8) = (_DWORD)v8 + 2;
              break;
            }
            ++v7;
            --v11;
            v25 = *(_WORD *)(v20 + 2 * (v24 + (unsigned __int64)*(unsigned __int8 *)v7));
          }
          else
          {
            v25 = *(_WORD *)(v22 + 2 * v23);
          }
          *v8 = v25;
          ++v7;
          ++v8;
          if ( !v12 )
            break;
        }
      }
      if ( v6 )
        *v6 = (_DWORD)v8 - v21;
    }
    else
    {
      v13 = BytesInOemString;
      if ( v12 < BytesInOemString )
        v13 = v12;
      if ( v6 )
        *v6 = 2 * v13;
      v14 = qword_180166538;
      if ( v13 )
      {
        v15 = v13;
        do
        {
          v16 = *(unsigned __int8 *)v7++;
          *v8++ = *(_WORD *)(v14 + 2 * v16);
          --v15;
        }
        while ( v15 );
      }
    }
    return v12 < v11 ? 0x80000005 : 0;
  }
}
