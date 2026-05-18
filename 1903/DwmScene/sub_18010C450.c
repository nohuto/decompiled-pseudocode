/*
 * XREFs of sub_18010C450 @ 0x18010C450
 * Callers:
 *     sub_18010BF2C @ 0x18010BF2C (sub_18010BF2C.c)
 *     sub_18010C084 @ 0x18010C084 (sub_18010C084.c)
 *     sub_18010C148 @ 0x18010C148 (sub_18010C148.c)
 * Callees:
 *     sub_1800B894C @ 0x1800B894C (sub_1800B894C.c)
 */

char __fastcall sub_18010C450(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 v4; // rdi
  char v5; // bl

  v4 = *a2;
  v5 = sub_1800B894C(*a3);
  if ( sub_1800B894C(v4) == v5 )
    return 0;
  else
    return sub_1800B894C(*a2);
}
