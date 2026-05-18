/*
 * XREFs of sub_180125990 @ 0x180125990
 * Callers:
 *     <none>
 * Callees:
 *     sub_180125980 @ 0x180125980 (sub_180125980.c)
 *     sub_180125988 @ 0x180125988 (sub_180125988.c)
 */

__int64 sub_180125990()
{
  _QWORD *v0; // rax
  _QWORD *v1; // rax

  v0 = sub_180125980();
  *v0 |= 0x18uLL;
  v1 = sub_180125988();
  *v1 |= 4uLL;
  return 0LL;
}
