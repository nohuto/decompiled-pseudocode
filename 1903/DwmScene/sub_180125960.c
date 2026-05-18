/*
 * XREFs of sub_180125960 @ 0x180125960
 * Callers:
 *     <none>
 * Callees:
 *     sub_180125980 @ 0x180125980 (sub_180125980.c)
 *     sub_180125988 @ 0x180125988 (sub_180125988.c)
 */

__int64 sub_180125960()
{
  _QWORD *v0; // rax
  _QWORD *v1; // rax

  v0 = (_QWORD *)sub_180125980();
  *v0 |= 4uLL;
  v1 = (_QWORD *)sub_180125988();
  *v1 |= 2uLL;
  return 0LL;
}
