/*
 * XREFs of sub_180109300 @ 0x180109300
 * Callers:
 *     <none>
 * Callees:
 *     sub_180109398 @ 0x180109398 (sub_180109398.c)
 *     sub_1801099E0 @ 0x1801099E0 (sub_1801099E0.c)
 */

__int64 __fastcall sub_180109300(__int16 a1, int a2, int a3, int a4, int a5, __int64 a6, __int64 a7, __int64 a8)
{
  __int64 v9; // [rsp+30h] [rbp-28h]
  __int64 v10; // [rsp+38h] [rbp-20h]

  if ( !a1 )
    return sub_1801099E0(a2, a3, a4, a5, a7, (a8 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
  if ( a1 == 256 )
    return sub_180109398(a2, a3, a4, a5, a7, (void *)((a8 + 7) & 0xFFFFFFFFFFFFFFF8uLL), v9, v10, a3);
  return 3221225659LL;
}
