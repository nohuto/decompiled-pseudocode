/*
 * XREFs of sub_1406CAAD0 @ 0x1406CAAD0
 * Callers:
 *     sub_1405A2C1C @ 0x1405A2C1C (sub_1405A2C1C.c)
 *     sub_140686A00 @ 0x140686A00 (sub_140686A00.c)
 *     sub_140759280 @ 0x140759280 (sub_140759280.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1406CAAD0(
        unsigned __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        int a5,
        __int64 a6,
        int a7)
{
  return __ROR4__(a7, a4 % 0x1F + 1) ^ ((unsigned int)*(unsigned __int16 *)(a6 + 2 * (a1 & 3))
                                      * __ROR4__(
                                          *(_DWORD *)(a6 + 4LL * (((unsigned __int8)(a1 >> 1) - 1) & 1)) - a7,
                                          a3 % 0x1F + 1));
}
