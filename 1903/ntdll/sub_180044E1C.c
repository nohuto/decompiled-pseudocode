/*
 * XREFs of sub_180044E1C @ 0x180044E1C
 * Callers:
 *     sub_180044B94 @ 0x180044B94 (sub_180044B94.c)
 *     sub_180044D74 @ 0x180044D74 (sub_180044D74.c)
 *     sub_180045D7C @ 0x180045D7C (sub_180045D7C.c)
 *     sub_1800465D0 @ 0x1800465D0 (sub_1800465D0.c)
 *     sub_180046C60 @ 0x180046C60 (sub_180046C60.c)
 *     sub_180046D7C @ 0x180046D7C (sub_180046D7C.c)
 *     sub_18004EFA4 @ 0x18004EFA4 (sub_18004EFA4.c)
 * Callees:
 *     sub_18010B150 @ 0x18010B150 (sub_18010B150.c)
 */

__int64 __fastcall sub_180044E1C(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // r8
  __int64 v5; // rdx
  char v6; // al

  if ( (dword_18016273C & 1) != 0 )
  {
    v5 = sub_18010B150(a1, a2);
  }
  else
  {
    v4 = a2 & *(_QWORD *)a1;
    if ( (a1 ^ v4 ^ qword_180163540 ^ *(_QWORD *)(v4 + 0x10)) == 0xA2E64EADA2E64EADuLL )
      v5 = v4 + 32 * ((unsigned __int64)(unsigned int)(a2 - v4) >> *(_BYTE *)(a1 + 8));
    else
      v5 = 0LL;
  }
  if ( !v5 )
    return 0LL;
  v6 = *(_BYTE *)(v5 + 24);
  if ( (v6 & 1) == 0 )
    return 0LL;
  if ( (v6 & 2) != 0 )
  {
    if ( (v6 & 0xCu) < 8 && (((1 << *(_BYTE *)(a1 + 8)) - 1) & a2) != 0 )
      return 0LL;
  }
  else
  {
    v5 += -32LL * *(unsigned __int8 *)(v5 + 31);
    if ( (*(_BYTE *)(v5 + 24) & 3) != 3 || (*(_BYTE *)(v5 + 24) & 0xCu) < 8 )
      return 0LL;
  }
  return v5;
}
