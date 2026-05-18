/*
 * XREFs of sub_180097954 @ 0x180097954
 * Callers:
 *     sub_180012100 @ 0x180012100 (sub_180012100.c)
 *     sub_1800FBCBC @ 0x1800FBCBC (sub_1800FBCBC.c)
 *     sub_1800FBE78 @ 0x1800FBE78 (sub_1800FBE78.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_180097954(__int64 a1, int a2)
{
  if ( !*(_DWORD *)(a1 + 124) )
    *(_DWORD *)(a1 + 124) = a2;
  *(_DWORD *)(a1 + 120) = a2;
}
