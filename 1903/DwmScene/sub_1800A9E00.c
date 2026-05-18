/*
 * XREFs of sub_1800A9E00 @ 0x1800A9E00
 * Callers:
 *     sub_18010F854 @ 0x18010F854 (sub_18010F854.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_1800A9E00(__int64 *a1, __int64 a2)
{
  bool v2; // zf

  v2 = (a2 & ((*a1 | ~a2) + 1)) == 0;
  *a1 = a2 & ((*a1 | ~a2) + 1);
  return !v2;
}
