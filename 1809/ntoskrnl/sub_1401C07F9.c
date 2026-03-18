/*
 * XREFs of sub_1401C07F9 @ 0x1401C07F9
 * Callers:
 *     sub_1401C0802 @ 0x1401C0802 (sub_1401C0802.c)
 * Callees:
 *     sub_1401C07F0 @ 0x1401C07F0 (sub_1401C07F0.c)
 */

// positive sp value has been detected, the output may be wrong!
__int64 sub_1401C07F9()
{
  __int64 v0; // rdx
  __int64 v1; // rcx

  sub_1401C07F0();
  return sub_1401C0802(v1, v0);
}
