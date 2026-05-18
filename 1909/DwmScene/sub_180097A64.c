/*
 * XREFs of sub_180097A64 @ 0x180097A64
 * Callers:
 *     sub_180012150 @ 0x180012150 (sub_180012150.c)
 *     sub_1800FBDCC @ 0x1800FBDCC (sub_1800FBDCC.c)
 *     sub_1800FBF88 @ 0x1800FBF88 (sub_1800FBF88.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_180097A64(__int64 a1, int a2)
{
  if ( !*(_DWORD *)(a1 + 124) )
    *(_DWORD *)(a1 + 124) = a2;
  *(_DWORD *)(a1 + 120) = a2;
}
