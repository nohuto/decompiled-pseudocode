/*
 * XREFs of sub_180003B08 @ 0x180003B08
 * Callers:
 *     sub_180003B8C @ 0x180003B8C (sub_180003B8C.c)
 *     sub_180003BBC @ 0x180003BBC (sub_180003BBC.c)
 * Callees:
 *     sub_18000390C @ 0x18000390C (sub_18000390C.c)
 */

__int64 __fastcall sub_180003B08(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  int v5; // [rsp+20h] [rbp-28h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  return sub_18000390C(
           a1,
           a2,
           (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",
           a4,
           v5,
           retaddr,
           3);
}
