/*
 * XREFs of sub_180128AAC @ 0x180128AAC
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000A7E0 @ 0x18000A7E0 (sub_18000A7E0.c)
 */

void __fastcall sub_180128AAC(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 48) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 48) &= ~1u;
    sub_18000A7E0(*(__int64 **)(a2 + 72));
  }
}
