/*
 * XREFs of _safecrt_mbtowc @ 0x18009C4E8
 * Callers:
 *     _woutput_s @ 0x18009D674 (_woutput_s.c)
 * Callees:
 *     RtlAnsiCharToUnicodeChar @ 0x18006C080 (RtlAnsiCharToUnicodeChar.c)
 */

__int64 __fastcall safecrt_mbtowc(WCHAR *a1, UCHAR *a2, __int64 a3)
{
  __int64 result; // rax
  int v4; // ebx
  PUCHAR SourceCharacter; // [rsp+38h] [rbp+10h] BYREF

  result = 0LL;
  v4 = (int)a2;
  if ( a2 && a3 )
  {
    if ( *a2 )
    {
      SourceCharacter = a2;
      *a1 = RtlAnsiCharToUnicodeChar(&SourceCharacter);
      return (unsigned int)((_DWORD)SourceCharacter - v4);
    }
    else if ( a1 )
    {
      *a1 = 0;
    }
  }
  return result;
}
