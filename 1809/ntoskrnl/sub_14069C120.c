/*
 * XREFs of sub_14069C120 @ 0x14069C120
 * Callers:
 *     sub_1405A1C1C @ 0x1405A1C1C (sub_1405A1C1C.c)
 *     sub_140685860 @ 0x140685860 (sub_140685860.c)
 *     sub_1407580B0 @ 0x1407580B0 (sub_1407580B0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14069C120(
        char a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        unsigned int a7)
{
  return (a7 - *(unsigned __int16 *)(a6 + 2LL * (((a1 & 3) + (unsigned __int8)(a2 / 3) + (_BYTE)a2 + 1) & 3)))
       * *(unsigned __int16 *)(a6 + 2LL * (a1 & 3))
       - (a7 >> (a3 % 0xF + 1));
}
