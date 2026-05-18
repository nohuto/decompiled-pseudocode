/*
 * XREFs of sub_1801328D9 @ 0x1801328D9
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800177A0 @ 0x1800177A0 (sub_1800177A0.c)
 */

void __fastcall sub_1801328D9(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 48) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 48) &= ~2u;
    sub_1800177A0((__int64 *)(a2 + 64));
  }
}
