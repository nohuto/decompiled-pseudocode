/*
 * XREFs of sub_1800966B0 @ 0x1800966B0
 * Callers:
 *     sub_1800936C0 @ 0x1800936C0 (sub_1800936C0.c)
 *     sub_180095914 @ 0x180095914 (sub_180095914.c)
 * Callees:
 *     RtlAnsiCharToUnicodeChar @ 0x180063760 (RtlAnsiCharToUnicodeChar.c)
 */

__int64 __fastcall sub_1800966B0(WCHAR *a1, UCHAR *a2, __int64 a3)
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
