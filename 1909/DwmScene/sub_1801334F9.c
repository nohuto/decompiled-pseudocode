/*
 * XREFs of sub_1801334F9 @ 0x1801334F9
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800BD3F0 @ 0x1800BD3F0 (sub_1800BD3F0.c)
 */

void __fastcall sub_1801334F9(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 152) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 152) &= ~1u;
    sub_1800BD3F0(*(void **)(a2 + 256));
  }
}
