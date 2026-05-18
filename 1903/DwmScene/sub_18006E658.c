/*
 * XREFs of sub_18006E658 @ 0x18006E658
 * Callers:
 *     sub_18006F248 @ 0x18006F248 (sub_18006F248.c)
 * Callees:
 *     sub_180026168 @ 0x180026168 (sub_180026168.c)
 *     memset @ 0x1801271C8 (memset.c)
 */

_QWORD *__fastcall sub_18006E658(_QWORD *a1, _QWORD **a2)
{
  _QWORD *v2; // rbx

  v2 = a1 + 1;
  *a1 = **a2;
  memset(a1 + 1, 0, 0x38uLL);
  *(_DWORD *)v2 = -8388609;
  v2[2] = 0LL;
  *(_QWORD *)((char *)v2 + 4) = 2139095039LL;
  v2[5] = 0LL;
  v2[6] = 7LL;
  *((_WORD *)v2 + 12) = 0;
  sub_180026168((char *)v2 + 24, &unk_1801E26D8, 0LL);
  return a1;
}
