/*
 * XREFs of sub_1401C0802 @ 0x1401C0802
 * Callers:
 *     KiSetSpecCtrlNmi @ 0x1401C06A0 (KiSetSpecCtrlNmi.c)
 * Callees:
 *     sub_1401C07F9 @ 0x1401C07F9 (sub_1401C07F9.c)
 */

// positive sp value has been detected, the output may be wrong!
__int64 sub_1401C0802()
{
  sub_1401C07F9();
  return sub_1401C080B();
}
