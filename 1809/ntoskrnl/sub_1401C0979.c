/*
 * XREFs of sub_1401C0979 @ 0x1401C0979
 * Callers:
 *     sub_1401C0982 @ 0x1401C0982 (sub_1401C0982.c)
 * Callees:
 *     sub_1401C0970 @ 0x1401C0970 (sub_1401C0970.c)
 */

// positive sp value has been detected, the output may be wrong!
__int64 sub_1401C0979()
{
  __int64 v0; // rdx
  __int64 v1; // rcx

  sub_1401C0970();
  return sub_1401C0982(v1, v0);
}
