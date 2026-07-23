/*
 * XREFs of RtlAnsiCharToUnicodeChar @ 0x18006C080
 * Callers:
 *     toupper @ 0x180095930 (toupper.c)
 *     _mbstrlen @ 0x180098F38 (_mbstrlen.c)
 *     mbtowc @ 0x180099E18 (mbtowc.c)
 *     _safecrt_mbtowc @ 0x18009C4E8 (_safecrt_mbtowc.c)
 * Callees:
 *     RtlUTF8ToUnicodeN @ 0x180068120 (RtlUTF8ToUnicodeN.c)
 */

WCHAR __cdecl RtlAnsiCharToUnicodeChar(PUCHAR *SourceCharacter)
{
  const CHAR *v1; // rdx
  unsigned __int8 v3; // al
  int v4; // ebx
  ULONG UTF8StringByteCount; // ebx
  WCHAR *p_UnicodeStringDestination; // r8
  __int64 v7; // r9
  int v8; // r10d
  __int64 v9; // r10
  WCHAR *v10; // r8
  __int64 v11; // rax
  __int64 v13; // r14
  __int64 v14; // rsi
  __int64 v15; // rax
  unsigned __int16 v16; // r11
  WCHAR v17; // ax
  WCHAR UnicodeStringDestination; // [rsp+60h] [rbp+8h] BYREF
  ULONG UnicodeStringActualByteCount; // [rsp+68h] [rbp+10h] BYREF

  v1 = (const CHAR *)*SourceCharacter;
  UnicodeStringDestination = 32;
  v3 = *v1;
  if ( !NlsActiveCodePageIsUTF8 )
  {
    v4 = NlsLeadByteInfoTable[v3] != 0;
LABEL_3:
    UTF8StringByteCount = v4 + 1;
    goto LABEL_4;
  }
  if ( v3 >= 0xC0u )
  {
    if ( v3 >= 0xE0u )
    {
      UTF8StringByteCount = 3;
      if ( v3 >= 0xF0u )
      {
        v4 = v3 < 0xF8u ? 3 : 0;
        goto LABEL_3;
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
LABEL_4:
  p_UnicodeStringDestination = &UnicodeStringDestination;
  v7 = UTF8StringByteCount;
  if ( NlsActiveCodePageIsUTF8 )
  {
    RtlUTF8ToUnicodeN(&UnicodeStringDestination, 2u, &UnicodeStringActualByteCount, v1, UTF8StringByteCount);
  }
  else
  {
    v8 = 1;
    if ( NlsMbCodePageTag )
    {
      v13 = NlsMbAnsiCodePageTables;
      v14 = NlsAnsiToUnicodeData;
      while ( (_DWORD)v7 )
      {
        v15 = *(unsigned __int8 *)v1;
        --v8;
        LODWORD(v7) = v7 - 1;
        v16 = NlsLeadByteInfoTable[v15];
        if ( v16 )
        {
          if ( !(_DWORD)v7 )
          {
            *p_UnicodeStringDestination = 0;
            break;
          }
          ++v1;
          LODWORD(v7) = v7 - 1;
          v17 = *(_WORD *)(v13 + 2 * (v16 + (unsigned __int64)*(unsigned __int8 *)v1));
        }
        else
        {
          v17 = *(_WORD *)(v14 + 2 * v15);
        }
        *p_UnicodeStringDestination = v17;
        ++v1;
        ++p_UnicodeStringDestination;
        if ( !v8 )
          break;
      }
    }
    else
    {
      v9 = NlsAnsiToUnicodeData;
      v10 = &UnicodeStringDestination;
      if ( UTF8StringByteCount > 1 )
        v7 = 1LL;
      do
      {
        v11 = *(unsigned __int8 *)v1++;
        *v10++ = *(_WORD *)(v9 + 2 * v11);
        --v7;
      }
      while ( v7 );
    }
  }
  *SourceCharacter += UTF8StringByteCount;
  return UnicodeStringDestination;
}
