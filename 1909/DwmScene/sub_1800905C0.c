/*
 * XREFs of sub_1800905C0 @ 0x1800905C0
 * Callers:
 *     sub_1800A89C0 @ 0x1800A89C0 (sub_1800A89C0.c)
 * Callees:
 *     sub_1800F5520 @ 0x1800F5520 (sub_1800F5520.c)
 */

__int64 __fastcall sub_1800905C0(__int64 a1, int a2)
{
  if ( *(_QWORD *)(a1 + 120) )
    sub_1800F5520();
  return sub_180064300(a1, a2);
}
