/*
 * XREFs of sub_1801297AF @ 0x1801297AF
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000A7E0 @ 0x18000A7E0 (sub_18000A7E0.c)
 */

void __fastcall sub_1801297AF(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 48) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 48) &= ~1u;
    sub_18000A7E0(*(__int64 **)(a2 + 64));
  }
}
