/*
 * XREFs of sub_1800515E8 @ 0x1800515E8
 * Callers:
 *     sub_18003AAA0 @ 0x18003AAA0 (sub_18003AAA0.c)
 *     sub_180040320 @ 0x180040320 (sub_180040320.c)
 *     sub_180040830 @ 0x180040830 (sub_180040830.c)
 *     sub_180040B50 @ 0x180040B50 (sub_180040B50.c)
 *     sub_180044B94 @ 0x180044B94 (sub_180044B94.c)
 *     sub_180044EDC @ 0x180044EDC (sub_180044EDC.c)
 *     sub_180046C60 @ 0x180046C60 (sub_180046C60.c)
 *     sub_180046E04 @ 0x180046E04 (sub_180046E04.c)
 *     sub_18004EFA4 @ 0x18004EFA4 (sub_18004EFA4.c)
 *     sub_180050F9C @ 0x180050F9C (sub_180050F9C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800515E8(__int64 a1, unsigned __int64 a2)
{
  int v2; // eax

  v2 = 0;
  if ( _bittest64((const signed __int64 *)(a1 + 56), a2 >> 30) )
    v2 = (_bittest64(*(const signed __int64 **)a1, a2 >> 15) != 0) + 1;
  if ( v2 == 2 )
    return (*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * (a2 >> 6)) >> (a2 & 0x3F)) & 3LL;
  else
    return 0LL;
}
