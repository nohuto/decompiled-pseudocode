/*
 * XREFs of sub_1401C0819 @ 0x1401C0819
 * Callers:
 *     sub_1401C0822 @ 0x1401C0822 (sub_1401C0822.c)
 * Callees:
 *     sub_1401C0810 @ 0x1401C0810 (sub_1401C0810.c)
 */

// positive sp value has been detected, the output may be wrong!
__int64 sub_1401C0819()
{
  __int64 v0; // rdx
  __int64 v1; // rcx

  sub_1401C0810();
  return sub_1401C0822(v1, v0);
}
