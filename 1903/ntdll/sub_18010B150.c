/*
 * XREFs of sub_18010B150 @ 0x18010B150
 * Callers:
 *     sub_18003AAA0 @ 0x18003AAA0 (sub_18003AAA0.c)
 *     sub_180040320 @ 0x180040320 (sub_180040320.c)
 *     sub_180040830 @ 0x180040830 (sub_180040830.c)
 *     sub_180040B50 @ 0x180040B50 (sub_180040B50.c)
 *     sub_180044E1C @ 0x180044E1C (sub_180044E1C.c)
 *     sub_180047370 @ 0x180047370 (sub_180047370.c)
 * Callees:
 *     sub_18010A580 @ 0x18010A580 (sub_18010A580.c)
 */

__int64 __fastcall sub_18010B150(__int64 a1, __int64 a2)
{
  __int64 v2; // r8

  v2 = a2 & *(_QWORD *)a1;
  if ( (a1 ^ v2 ^ qword_180163540 ^ *(_QWORD *)(v2 + 0x10)) == 0xA2E64EADA2E64EADuLL )
    return v2 + 32LL * ((unsigned int)(a2 - v2) >> *(_BYTE *)(a1 + 8));
  else
    return 0LL;
}
