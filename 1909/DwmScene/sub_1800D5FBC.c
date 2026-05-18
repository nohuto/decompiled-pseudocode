/*
 * XREFs of sub_1800D5FBC @ 0x1800D5FBC
 * Callers:
 *     sub_1800D5FBC @ 0x1800D5FBC (sub_1800D5FBC.c)
 *     sub_1800D6234 @ 0x1800D6234 (sub_1800D6234.c)
 * Callees:
 *     sub_1800D5088 @ 0x1800D5088 (sub_1800D5088.c)
 *     sub_1800D5FBC @ 0x1800D5FBC (sub_1800D5FBC.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

__int64 __fastcall sub_1800D5FBC(__int64 a1, __int64 *a2)
{
  __int64 *v2; // rbx
  __int64 *i; // rdi
  __int64 result; // rax

  v2 = a2;
  for ( i = a2; !*((_BYTE *)i + 25); v2 = i )
  {
    sub_1800D5FBC(a1, i[2]);
    i = (__int64 *)*i;
    sub_1800D5088(v2 + 4);
    result = j_j__o_free(v2);
  }
  return result;
}
