/*
 * XREFs of sub_180096DF0 @ 0x180096DF0
 * Callers:
 *     sub_180012150 @ 0x180012150 (sub_180012150.c)
 *     sub_1800FBDCC @ 0x1800FBDCC (sub_1800FBDCC.c)
 *     sub_1800FBF88 @ 0x1800FBF88 (sub_1800FBF88.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_180096DF0(__int64 a1, int a2)
{
  if ( !*(_DWORD *)(a1 + 116) )
    *(_DWORD *)(a1 + 116) = a2;
  *(_DWORD *)(a1 + 112) = a2;
}
