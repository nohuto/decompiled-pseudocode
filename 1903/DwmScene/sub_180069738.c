/*
 * XREFs of sub_180069738 @ 0x180069738
 * Callers:
 *     sub_180069738 @ 0x180069738 (sub_180069738.c)
 *     sub_180069B60 @ 0x180069B60 (sub_180069B60.c)
 * Callees:
 *     sub_180067620 @ 0x180067620 (sub_180067620.c)
 *     sub_180069738 @ 0x180069738 (sub_180069738.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 */

__int64 __fastcall sub_180069738(__int64 a1, __int64 *a2)
{
  __int64 *v2; // rbx
  __int64 *i; // rdi
  __int64 result; // rax

  v2 = a2;
  for ( i = a2; !*((_BYTE *)i + 25); v2 = i )
  {
    sub_180069738(a1, i[2]);
    i = (__int64 *)*i;
    sub_180067620(v2 + 4, 0);
    result = j_j__o_free(v2);
  }
  return result;
}
