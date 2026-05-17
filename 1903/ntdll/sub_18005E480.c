/*
 * XREFs of sub_18005E480 @ 0x18005E480
 * Callers:
 *     <none>
 * Callees:
 *     sub_18005E4E0 @ 0x18005E4E0 (sub_18005E4E0.c)
 *     sub_180108BF4 @ 0x180108BF4 (sub_180108BF4.c)
 */

__int64 __fastcall sub_18005E480(__int16 a1, int a2, int a3, int a4, int a5, __int64 a6, __int64 a7, __int64 a8)
{
  __int64 v9; // [rsp+30h] [rbp-28h]
  __int64 v10; // [rsp+38h] [rbp-20h]

  if ( !a1 )
    return sub_18005E4E0(a2, a3, a4, a5, a7, (a8 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
  if ( a1 == 256 )
    return sub_180108BF4(a2, a3, a4, a5, a7, (void *)((a8 + 7) & 0xFFFFFFFFFFFFFFF8uLL), v9, v10, a3);
  return 3221225659LL;
}
