/*
 * XREFs of sub_180069678 @ 0x180069678
 * Callers:
 *     sub_180069678 @ 0x180069678 (sub_180069678.c)
 *     sub_180069A30 @ 0x180069A30 (sub_180069A30.c)
 * Callees:
 *     sub_1800675A8 @ 0x1800675A8 (sub_1800675A8.c)
 *     sub_180069678 @ 0x180069678 (sub_180069678.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 */

__int64 __fastcall sub_180069678(__int64 a1, __int64 *a2)
{
  __int64 *v2; // rbx
  __int64 *i; // rdi
  __int64 result; // rax

  v2 = a2;
  for ( i = a2; !*((_BYTE *)i + 25); v2 = i )
  {
    sub_180069678(a1, i[2]);
    i = (__int64 *)*i;
    sub_1800675A8(v2 + 4, 0);
    result = j_j__o_free(v2);
  }
  return result;
}
