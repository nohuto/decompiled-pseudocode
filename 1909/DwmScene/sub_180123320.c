/*
 * XREFs of sub_180123320 @ 0x180123320
 * Callers:
 *     sub_1801348C9 @ 0x1801348C9 (sub_1801348C9.c)
 * Callees:
 *     <none>
 */

_QWORD **__fastcall sub_180123320(__int64 a1, _QWORD **a2)
{
  _QWORD **result; // rax

  *a2[1] = *a2;
  (*a2)[1] = a2[1];
  result = a2;
  --*(_QWORD *)(a1 + 8);
  return result;
}
