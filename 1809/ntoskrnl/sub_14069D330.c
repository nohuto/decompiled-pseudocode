/*
 * XREFs of sub_14069D330 @ 0x14069D330
 * Callers:
 *     sub_1405A2C1C @ 0x1405A2C1C (sub_1405A2C1C.c)
 *     sub_140686A00 @ 0x140686A00 (sub_140686A00.c)
 *     sub_140759280 @ 0x140759280 (sub_140759280.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14069D330(
        char a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        int a7)
{
  return __ROR4__(a7, a3 % 0xF + 1) ^ (*(unsigned __int16 *)(a6 + 2LL * (a1 & 3))
                                     * (a7 ^ (unsigned int)*(unsigned __int16 *)(a6
                                                                               + 2LL
                                                                               * (((a1 & 3)
                                                                                 + (unsigned __int8)(a2 / 3)
                                                                                 + (_BYTE)a2
                                                                                 + 1) & 3))));
}
