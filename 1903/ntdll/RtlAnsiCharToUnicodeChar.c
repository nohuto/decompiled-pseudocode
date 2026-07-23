/*
 * XREFs of RtlAnsiCharToUnicodeChar @ 0x180063760
 * Callers:
 *     toupper @ 0x1800921C0 (toupper.c)
 *     sub_1800957D8 @ 0x1800957D8 (sub_1800957D8.c)
 *     sub_1800966B0 @ 0x1800966B0 (sub_1800966B0.c)
 *     sub_180098D6C @ 0x180098D6C (sub_180098D6C.c)
 * Callees:
 *     RtlUTF8ToUnicodeN @ 0x18005F3A0 (RtlUTF8ToUnicodeN.c)
 */

WCHAR __cdecl RtlAnsiCharToUnicodeChar(PUCHAR *SourceCharacter)
{
  PUCHAR v2; // rdx
  UCHAR v3; // al
  int v4; // ebx
  ULONG UTF8StringByteCount; // ebx
  WCHAR *p_UnicodeStringDestination; // r8
  __int64 v7; // r9
  int v8; // r10d
  __int64 v9; // r10
  WCHAR *v10; // r8
  __int64 v11; // rax
  __int64 v13; // rsi
  __int64 v14; // r11
  __int64 v15; // rax
  unsigned __int16 v16; // cx
  WCHAR v17; // ax
  WCHAR UnicodeStringDestination; // [rsp+60h] [rbp+8h] BYREF
  ULONG UnicodeStringActualByteCount; // [rsp+68h] [rbp+10h] BYREF

  UnicodeStringDestination = 32;
  v2 = *SourceCharacter;
  v3 = **SourceCharacter;
  if ( !byte_180162797 )
  {
    v4 = word_180163EE0[v3] != 0;
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
  if ( byte_180162797 )
  {
    RtlUTF8ToUnicodeN(
      &UnicodeStringDestination,
      2u,
      &UnicodeStringActualByteCount,
      (PCCH)*SourceCharacter,
      UTF8StringByteCount);
  }
  else
  {
    v8 = 1;
    if ( NlsMbCodePageTag )
    {
      v13 = qword_180166540;
      v14 = qword_180166530;
      while ( (_DWORD)v7 )
      {
        v15 = *v2;
        --v8;
        LODWORD(v7) = v7 - 1;
        v16 = word_180163EE0[v15];
        if ( v16 )
        {
          if ( !(_DWORD)v7 )
          {
            *p_UnicodeStringDestination = 0;
            break;
          }
          ++v2;
          LODWORD(v7) = v7 - 1;
          v17 = *(_WORD *)(v13 + 2 * (*v2 + (unsigned __int64)v16));
        }
        else
        {
          v17 = *(_WORD *)(v14 + 2 * v15);
        }
        *p_UnicodeStringDestination = v17;
        ++v2;
        ++p_UnicodeStringDestination;
        if ( !v8 )
          break;
      }
    }
    else
    {
      v9 = qword_180166530;
      v10 = &UnicodeStringDestination;
      if ( UTF8StringByteCount > 1 )
        v7 = 1LL;
      do
      {
        v11 = *v2++;
        *v10++ = *(_WORD *)(v9 + 2 * v11);
        --v7;
      }
      while ( v7 );
    }
  }
  *SourceCharacter += UTF8StringByteCount;
  return UnicodeStringDestination;
}
