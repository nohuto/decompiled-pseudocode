/*
 * XREFs of sub_180096CE0 @ 0x180096CE0
 * Callers:
 *     sub_180012100 @ 0x180012100 (sub_180012100.c)
 *     sub_1800FBCBC @ 0x1800FBCBC (sub_1800FBCBC.c)
 *     sub_1800FBE78 @ 0x1800FBE78 (sub_1800FBE78.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_180096CE0(__int64 a1, int a2)
{
  if ( !*(_DWORD *)(a1 + 116) )
    *(_DWORD *)(a1 + 116) = a2;
  *(_DWORD *)(a1 + 112) = a2;
}
