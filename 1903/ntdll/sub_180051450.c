/*
 * XREFs of sub_180051450 @ 0x180051450
 * Callers:
 *     sub_180038C70 @ 0x180038C70 (sub_180038C70.c)
 *     sub_180039740 @ 0x180039740 (sub_180039740.c)
 *     sub_18004FB14 @ 0x18004FB14 (sub_18004FB14.c)
 *     sub_18010BEF4 @ 0x18010BEF4 (sub_18010BEF4.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall sub_180051450(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // r9
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // rcx

  v3 = a2 ^ *(_QWORD *)a2;
  v4 = a2 ^ *(_QWORD *)(a2 + 8);
  if ( (v3 ^ *(_QWORD *)(v3 + 8)) != a2 || (v4 ^ *(_QWORD *)v4) != a2 )
    __fastfail(3u);
  *(_QWORD *)v4 = v3 ^ v4;
  *(_QWORD *)(v3 + 8) = v3 ^ v4;
  v5 = *(_QWORD *)(a2 + 16) - ((*(_QWORD *)(a2 + 16) >> 1) & 0x5555555555555555LL);
  return _InterlockedExchangeAdd64(
           (volatile signed __int64 *)(a1 + 48),
           -((unsigned int)((0x101010101010101LL
                           * (((v5 & 0x3333333333333333LL)
                             + ((v5 >> 2) & 0x3333333333333333LL)
                             + (((v5 & 0x3333333333333333LL) + ((v5 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24));
}
