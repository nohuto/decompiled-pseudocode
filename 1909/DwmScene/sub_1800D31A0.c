/*
 * XREFs of sub_1800D31A0 @ 0x1800D31A0
 * Callers:
 *     sub_180038F50 @ 0x180038F50 (sub_180038F50.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_1800D31A0(__int64 a1, __int64 a2, int a3)
{
  if ( !a3 )
    return 0;
  *(_DWORD *)(a1 + 96) = a3;
  return 1;
}
