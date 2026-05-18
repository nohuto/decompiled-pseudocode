/*
 * XREFs of sub_180125AA0 @ 0x180125AA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180125A90 @ 0x180125A90 (sub_180125A90.c)
 *     sub_180125A98 @ 0x180125A98 (sub_180125A98.c)
 */

__int64 sub_180125AA0()
{
  _QWORD *v0; // rax
  _QWORD *v1; // rax

  v0 = sub_180125A90();
  *v0 |= 0x18uLL;
  v1 = sub_180125A98();
  *v1 |= 4uLL;
  return 0LL;
}
