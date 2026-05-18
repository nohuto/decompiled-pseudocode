/*
 * XREFs of sub_1800D5EAC @ 0x1800D5EAC
 * Callers:
 *     sub_1800D5EAC @ 0x1800D5EAC (sub_1800D5EAC.c)
 *     sub_1800D6124 @ 0x1800D6124 (sub_1800D6124.c)
 * Callees:
 *     sub_1800D4F78 @ 0x1800D4F78 (sub_1800D4F78.c)
 *     sub_1800D5EAC @ 0x1800D5EAC (sub_1800D5EAC.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 */

__int64 __fastcall sub_1800D5EAC(__int64 a1, __int64 *a2)
{
  __int64 *v2; // rbx
  __int64 *i; // rdi
  __int64 result; // rax

  v2 = a2;
  for ( i = a2; !*((_BYTE *)i + 25); v2 = i )
  {
    sub_1800D5EAC(a1, i[2]);
    i = (__int64 *)*i;
    sub_1800D4F78(v2 + 4);
    result = j_j__o_free(v2);
  }
  return result;
}
