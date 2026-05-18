/*
 * XREFs of sub_1800D3090 @ 0x1800D3090
 * Callers:
 *     sub_180038E40 @ 0x180038E40 (sub_180038E40.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_1800D3090(__int64 a1, __int64 a2, int a3)
{
  if ( !a3 )
    return 0;
  *(_DWORD *)(a1 + 96) = a3;
  return 1;
}
