/*
 * XREFs of sub_18007E228 @ 0x18007E228
 * Callers:
 *     sub_18007E228 @ 0x18007E228 (sub_18007E228.c)
 *     sub_18007E728 @ 0x18007E728 (sub_18007E728.c)
 *     sub_180130A6B @ 0x180130A6B (sub_180130A6B.c)
 * Callees:
 *     sub_1800675A8 @ 0x1800675A8 (sub_1800675A8.c)
 *     sub_18007E228 @ 0x18007E228 (sub_18007E228.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 */

__int64 __fastcall sub_18007E228(__int64 a1, __int64 *a2)
{
  __int64 *v2; // rbx
  __int64 *i; // rdi
  __int64 result; // rax

  v2 = a2;
  for ( i = a2; !*((_BYTE *)i + 25); v2 = i )
  {
    sub_18007E228(a1, i[2]);
    i = (__int64 *)*i;
    sub_1800675A8(v2 + 4, 0);
    result = j_j__o_free(v2);
  }
  return result;
}
