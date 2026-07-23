/*
 * XREFs of RtlAnsiCharToUnicodeChar @ 0x14068E7B0
 * Callers:
 *     _safecrt_mbtowc @ 0x1401962B0 (_safecrt_mbtowc.c)
 *     toupper @ 0x140197650 (toupper.c)
 *     _mbstrlen @ 0x14019994C (_mbstrlen.c)
 * Callees:
 *     RtlUTF8ToUnicodeN @ 0x1406BEB10 (RtlUTF8ToUnicodeN.c)
 */

WCHAR __stdcall RtlAnsiCharToUnicodeChar(PUCHAR *SourceCharacter)
{
  const CHAR *v1; // rdx
  unsigned __int8 v3; // al
  int v4; // r8d
  ULONG UTF8StringByteCount; // ebx
  WCHAR *p_UnicodeStringDestination; // r9
  ULONG v7; // r10d
  __int64 v8; // r10
  __int64 v9; // r9
  WCHAR *v10; // r8
  __int64 v11; // rax
  __int64 v13; // r11
  __int64 v14; // rcx
  unsigned __int16 v15; // ax
  __int64 v16; // rcx
  WCHAR UnicodeStringDestination; // [rsp+40h] [rbp+8h] BYREF
  ULONG UnicodeStringActualByteCount; // [rsp+48h] [rbp+10h] BYREF

  v1 = (const CHAR *)*SourceCharacter;
  UnicodeStringDestination = 32;
  v3 = *v1;
  v4 = 1;
  if ( BYTE1(NlsMbCodePageTag) )
  {
    if ( v3 >= 0xC0u )
    {
      if ( v3 >= 0xE0u )
      {
        if ( v3 >= 0xF0u )
        {
          UTF8StringByteCount = 1;
          if ( v3 < 0xF8u )
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
    if ( NlsLeadByteInfoTable[v3] )
      UTF8StringByteCount = 2;
  }
  p_UnicodeStringDestination = &UnicodeStringDestination;
  v7 = UTF8StringByteCount;
  if ( BYTE1(NlsMbCodePageTag) )
  {
    RtlUTF8ToUnicodeN(&UnicodeStringDestination, 2u, &UnicodeStringActualByteCount, v1, UTF8StringByteCount);
  }
  else if ( (_BYTE)NlsMbCodePageTag )
  {
    v13 = NlsMbAnsiCodePageTables;
    while ( v7 )
    {
      --v4;
      --v7;
      v14 = *(unsigned __int8 *)v1;
      v15 = NlsLeadByteInfoTable[v14];
      if ( v15 )
      {
        if ( !v7 )
        {
          *p_UnicodeStringDestination = 0;
          break;
        }
        v16 = *(unsigned __int8 *)++v1;
        --v7;
        *p_UnicodeStringDestination = *(_WORD *)(v13 + 2 * (v15 + v16));
      }
      else
      {
        *p_UnicodeStringDestination = *(_WORD *)(v14 * 2 + NlsAnsiToUnicodeData);
      }
      ++p_UnicodeStringDestination;
      ++v1;
      if ( !v4 )
        break;
    }
  }
  else
  {
    v8 = NlsAnsiToUnicodeData;
    v9 = UTF8StringByteCount;
    if ( UTF8StringByteCount > 1 )
      v9 = 1LL;
    v10 = &UnicodeStringDestination;
    do
    {
      v11 = *(unsigned __int8 *)v1;
      ++v10;
      ++v1;
      *(v10 - 1) = *(_WORD *)(v8 + 2 * v11);
      --v9;
    }
    while ( v9 );
  }
  *SourceCharacter += UTF8StringByteCount;
  return UnicodeStringDestination;
}
