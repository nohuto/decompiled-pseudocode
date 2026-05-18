/*
 * XREFs of sub_18009E760 @ 0x18009E760
 * Callers:
 *     sub_18009DD94 @ 0x18009DD94 (sub_18009DD94.c)
 *     sub_18009DF60 @ 0x18009DF60 (sub_18009DF60.c)
 * Callees:
 *     sub_18009D2B4 @ 0x18009D2B4 (sub_18009D2B4.c)
 *     sub_18009E590 @ 0x18009E590 (sub_18009E590.c)
 */

__int64 __fastcall sub_18009E760(__int64 a1, int *a2, __int64 a3, unsigned __int64 a4)
{
  __int64 *v7; // rax
  __int64 v9[5]; // [rsp+20h] [rbp-28h] BYREF

  v7 = sub_18009E590(v9, a2, a4);
  sub_18009D2B4(a1, v7, a3, a4);
  return a1;
}
