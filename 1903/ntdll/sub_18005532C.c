/*
 * XREFs of sub_18005532C @ 0x18005532C
 * Callers:
 *     sub_18005521C @ 0x18005521C (sub_18005521C.c)
 *     sub_1800F74E0 @ 0x1800F74E0 (sub_1800F74E0.c)
 * Callees:
 *     sub_180055358 @ 0x180055358 (sub_180055358.c)
 */

bool __fastcall sub_18005532C(void *a1)
{
  char v2; // [rsp+38h] [rbp+10h]

  return (unsigned __int8)sub_180055358(a1) && (v2 & 3) == 2;
}
