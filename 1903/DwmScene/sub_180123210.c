/*
 * XREFs of sub_180123210 @ 0x180123210
 * Callers:
 *     sub_1801347B9 @ 0x1801347B9 (sub_1801347B9.c)
 * Callees:
 *     <none>
 */

_QWORD **__fastcall sub_180123210(__int64 a1, _QWORD **a2)
{
  _QWORD **result; // rax

  *a2[1] = *a2;
  (*a2)[1] = a2[1];
  result = a2;
  --*(_QWORD *)(a1 + 8);
  return result;
}
