/*
 * XREFs of sub_180125A70 @ 0x180125A70
 * Callers:
 *     <none>
 * Callees:
 *     sub_180125A90 @ 0x180125A90 (sub_180125A90.c)
 *     sub_180125A98 @ 0x180125A98 (sub_180125A98.c)
 */

__int64 sub_180125A70()
{
  _QWORD *v0; // rax
  _QWORD *v1; // rax

  v0 = (_QWORD *)sub_180125A90();
  *v0 |= 4uLL;
  v1 = (_QWORD *)sub_180125A98();
  *v1 |= 2uLL;
  return 0LL;
}
