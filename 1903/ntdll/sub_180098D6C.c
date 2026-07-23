/*
 * XREFs of sub_180098D6C @ 0x180098D6C
 * Callers:
 *     sub_180099F5C @ 0x180099F5C (sub_180099F5C.c)
 * Callees:
 *     RtlAnsiCharToUnicodeChar @ 0x180063760 (RtlAnsiCharToUnicodeChar.c)
 */

__int64 __fastcall sub_180098D6C(WCHAR *a1, UCHAR *a2, __int64 a3)
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
