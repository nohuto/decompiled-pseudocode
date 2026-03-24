/*
 * XREFs of sub_1408E53C0 @ 0x1408E53C0
 * Callers:
 *     sub_1405A1C1C @ 0x1405A1C1C (sub_1405A1C1C.c)
 *     sub_140685840 @ 0x140685840 (sub_140685840.c)
 *     sub_140758090 @ 0x140758090 (sub_140758090.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1408E53C0(
        char a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        int a7)
{
  return *(unsigned __int16 *)(a6 + 2LL * (a1 & 3))
       * (a7 ^ (unsigned int)*(unsigned __int16 *)(a6
                                                 + 2LL * (((a1 & 3) + (unsigned __int8)(a2 / 3) + (_BYTE)a2 + 1) & 3)))
       - __ROR4__(a7, a3 % 0xF + 1);
}
