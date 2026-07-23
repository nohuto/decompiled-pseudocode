/*
 * XREFs of sub_1800F74B0 @ 0x1800F74B0
 * Callers:
 *     sub_18005521C @ 0x18005521C (sub_18005521C.c)
 *     sub_1800F74E0 @ 0x1800F74E0 (sub_1800F74E0.c)
 * Callees:
 *     sub_180055358 @ 0x180055358 (sub_180055358.c)
 */

char __fastcall sub_1800F74B0(void *a1)
{
  char v2; // [rsp+38h] [rbp+10h] BYREF

  if ( sub_180055358(a1, &v2) )
    return v2 & 1;
  else
    return 0;
}
