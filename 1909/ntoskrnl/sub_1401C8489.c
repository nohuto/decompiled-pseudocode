/*
 * XREFs of sub_1401C8489 @ 0x1401C8489
 * Callers:
 *     sub_1401C8492 @ 0x1401C8492 (sub_1401C8492.c)
 * Callees:
 *     sub_1401C8480 @ 0x1401C8480 (sub_1401C8480.c)
 */

// positive sp value has been detected, the output may be wrong!
__int64 sub_1401C8489()
{
  __int64 v0; // rdx
  __int64 v1; // rcx

  sub_1401C8480();
  return sub_1401C8492(v1, v0);
}
