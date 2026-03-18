/*
 * XREFs of RtlAnsiCharToUnicodeChar @ 0x140667210
 * Callers:
 *     _safecrt_mbtowc @ 0x1401A1080 (_safecrt_mbtowc.c)
 *     toupper @ 0x1401A2430 (toupper.c)
 *     _mbstrlen @ 0x1401A4760 (_mbstrlen.c)
 * Callees:
 *     RtlpIsUtf8Process @ 0x1406672F0 (RtlpIsUtf8Process.c)
 *     RtlUTF8ToUnicodeN @ 0x1406DEFF0 (RtlUTF8ToUnicodeN.c)
 */

WCHAR __stdcall RtlAnsiCharToUnicodeChar(PUCHAR *SourceCharacter)
{
  char IsUtf8Process; // al
  const CHAR *v3; // rdi
  UCHAR v4; // cl
  int v5; // ebp
  ULONG UTF8StringByteCount; // ebx
  WCHAR *p_UnicodeStringDestination; // r14
  ULONG v8; // r15d
  __int64 v9; // r9
  WCHAR *v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned __int16 v16; // ax
  __int64 v17; // rcx
  WCHAR UnicodeStringDestination; // [rsp+70h] [rbp+8h] BYREF
  ULONG UnicodeStringActualByteCount; // [rsp+78h] [rbp+10h] BYREF

  UnicodeStringDestination = 32;
  IsUtf8Process = RtlpIsUtf8Process(0LL);
  v3 = (const CHAR *)*SourceCharacter;
  v4 = **SourceCharacter;
  v5 = 1;
  if ( IsUtf8Process )
  {
    if ( v4 >= 0xC0u )
    {
      if ( v4 >= 0xE0u )
      {
        if ( v4 >= 0xF0u )
        {
          UTF8StringByteCount = 1;
          if ( v4 < 0xF8u )
            UTF8StringByteCount = 4;
        }
        else
        {
          UTF8StringByteCount = 3;
        }
      }
      else
      {
        UTF8StringByteCount = 2;
      }
    }
    else
    {
      UTF8StringByteCount = 1;
    }
  }
  else
  {
    UTF8StringByteCount = 1;
    if ( NlsLeadByteInfoTable[v4] )
      UTF8StringByteCount = 2;
  }
  p_UnicodeStringDestination = &UnicodeStringDestination;
  v8 = UTF8StringByteCount;
  if ( (unsigned __int8)RtlpIsUtf8Process(0LL) )
  {
    RtlUTF8ToUnicodeN(&UnicodeStringDestination, 2u, &UnicodeStringActualByteCount, v3, UTF8StringByteCount);
  }
  else if ( (_BYTE)NlsMbCodePageTag )
  {
    v14 = NlsMbAnsiCodePageTables;
    while ( v8 )
    {
      --v5;
      --v8;
      v15 = *(unsigned __int8 *)v3;
      v16 = NlsLeadByteInfoTable[v15];
      if ( v16 )
      {
        if ( !v8 )
        {
          *p_UnicodeStringDestination = 0;
          break;
        }
        v17 = *(unsigned __int8 *)++v3;
        *p_UnicodeStringDestination++ = *(_WORD *)(v14 + 2 * (v16 + v17));
        --v8;
      }
      else
      {
        *p_UnicodeStringDestination++ = *(_WORD *)(v15 * 2 + NlsAnsiToUnicodeData);
      }
      ++v3;
      if ( !v5 )
        break;
    }
  }
  else
  {
    v9 = NlsAnsiToUnicodeData;
    v10 = &UnicodeStringDestination;
    v11 = UTF8StringByteCount;
    if ( UTF8StringByteCount > 1 )
      v11 = 1LL;
    do
    {
      v12 = *(unsigned __int8 *)v3;
      ++v10;
      ++v3;
      *(v10 - 1) = *(_WORD *)(v9 + 2 * v12);
      --v11;
    }
    while ( v11 );
  }
  *SourceCharacter += UTF8StringByteCount;
  return UnicodeStringDestination;
}
