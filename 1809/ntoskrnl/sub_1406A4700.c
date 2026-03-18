/*
 * XREFs of sub_1406A4700 @ 0x1406A4700
 * Callers:
 *     sub_1405A1C1C @ 0x1405A1C1C (sub_1405A1C1C.c)
 *     sub_140685860 @ 0x140685860 (sub_140685860.c)
 *     sub_1407580B0 @ 0x1407580B0 (sub_1407580B0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1406A4700(
        unsigned __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        int a5,
        __int64 a6,
        int a7)
{
  return (unsigned int)*(unsigned __int16 *)(a6 + 2 * (a1 & 3))
       * __ROR4__(a7 - *(_DWORD *)(a6 + 4LL * (((unsigned __int8)(a1 >> 1) - 1) & 1)), a3 % 0x1F + 1)
       - __ROR4__(a7, a4 % 0x1F + 1);
}
