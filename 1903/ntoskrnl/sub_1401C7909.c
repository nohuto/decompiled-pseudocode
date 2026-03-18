/*
 * XREFs of sub_1401C7909 @ 0x1401C7909
 * Callers:
 *     sub_1401C7912 @ 0x1401C7912 (sub_1401C7912.c)
 * Callees:
 *     sub_1401C7900 @ 0x1401C7900 (sub_1401C7900.c)
 */

// positive sp value has been detected, the output may be wrong!
__int64 sub_1401C7909()
{
  __int64 v0; // rdx
  __int64 v1; // rcx

  sub_1401C7900();
  return sub_1401C7912(v1, v0);
}
