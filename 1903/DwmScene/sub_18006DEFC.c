/*
 * XREFs of sub_18006DEFC @ 0x18006DEFC
 * Callers:
 *     sub_18006DEFC @ 0x18006DEFC (sub_18006DEFC.c)
 *     sub_18006E080 @ 0x18006E080 (sub_18006E080.c)
 * Callees:
 *     sub_180011388 @ 0x180011388 (sub_180011388.c)
 *     sub_18006DEFC @ 0x18006DEFC (sub_18006DEFC.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 */

__int64 __fastcall sub_18006DEFC(__int64 a1, __int64 *a2)
{
  __int64 *v2; // rbx
  __int64 *i; // rdi
  __int64 result; // rax

  v2 = a2;
  for ( i = a2; !*((_BYTE *)i + 25); v2 = i )
  {
    sub_18006DEFC(a1, i[2]);
    i = (__int64 *)*i;
    sub_180011388(v2 + 5);
    result = j_j__o_free(v2);
  }
  return result;
}
