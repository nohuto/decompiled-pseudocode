/*
 * XREFs of sub_1800259EC @ 0x1800259EC
 * Callers:
 *     sub_1800259EC @ 0x1800259EC (sub_1800259EC.c)
 *     sub_180026314 @ 0x180026314 (sub_180026314.c)
 * Callees:
 *     sub_1800259EC @ 0x1800259EC (sub_1800259EC.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 */

__int64 __fastcall sub_1800259EC(__int64 a1, __int64 *a2)
{
  __int64 *v2; // rdi
  __int64 *i; // rbx
  __int64 result; // rax

  v2 = a2;
  for ( i = a2; !*((_BYTE *)i + 25); v2 = i )
  {
    sub_1800259EC(a1, i[2]);
    i = (__int64 *)*i;
    result = j_j__o_free(v2);
  }
  return result;
}
