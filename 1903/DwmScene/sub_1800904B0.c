/*
 * XREFs of sub_1800904B0 @ 0x1800904B0
 * Callers:
 *     sub_1800A88B0 @ 0x1800A88B0 (sub_1800A88B0.c)
 * Callees:
 *     sub_1800F5410 @ 0x1800F5410 (sub_1800F5410.c)
 */

__int64 __fastcall sub_1800904B0(__int64 a1, int a2)
{
  if ( *(_QWORD *)(a1 + 120) )
    sub_1800F5410();
  return sub_1800641F0(a1, a2);
}
