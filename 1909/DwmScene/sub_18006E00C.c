/*
 * XREFs of sub_18006E00C @ 0x18006E00C
 * Callers:
 *     sub_18006E00C @ 0x18006E00C (sub_18006E00C.c)
 *     sub_18006E190 @ 0x18006E190 (sub_18006E190.c)
 * Callees:
 *     sub_1800113D8 @ 0x1800113D8 (sub_1800113D8.c)
 *     sub_18006E00C @ 0x18006E00C (sub_18006E00C.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

__int64 __fastcall sub_18006E00C(__int64 a1, __int64 *a2)
{
  __int64 *v2; // rbx
  __int64 *i; // rdi
  __int64 result; // rax

  v2 = a2;
  for ( i = a2; !*((_BYTE *)i + 25); v2 = i )
  {
    sub_18006E00C(a1, i[2]);
    i = (__int64 *)*i;
    sub_1800113D8(v2 + 5);
    result = j_j__o_free(v2);
  }
  return result;
}
