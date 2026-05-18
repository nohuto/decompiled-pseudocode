/*
 * XREFs of sub_1801333E9 @ 0x1801333E9
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800BD2E0 @ 0x1800BD2E0 (sub_1800BD2E0.c)
 */

void __fastcall sub_1801333E9(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 152) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 152) &= ~1u;
    sub_1800BD2E0(*(void **)(a2 + 256));
  }
}
