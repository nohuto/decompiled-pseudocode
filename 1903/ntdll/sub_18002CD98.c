/*
 * XREFs of sub_18002CD98 @ 0x18002CD98
 * Callers:
 *     sub_18002C750 @ 0x18002C750 (sub_18002C750.c)
 *     sub_18002CB3C @ 0x18002CB3C (sub_18002CB3C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18002CD98(unsigned int a1, _QWORD *a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( a1 <= 4 )
  {
    *a2 = (char *)&unk_180118270 + 32 * (int)a1;
    return 1LL;
  }
  return result;
}
