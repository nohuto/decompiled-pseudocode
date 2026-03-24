/*
 * XREFs of sub_14069B2C0 @ 0x14069B2C0
 * Callers:
 *     sub_1405A1C1C @ 0x1405A1C1C (sub_1405A1C1C.c)
 *     sub_140685840 @ 0x140685840 (sub_140685840.c)
 *     sub_140758090 @ 0x140758090 (sub_140758090.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14069B2C0(
        char a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        int a5,
        __int64 a6,
        int a7)
{
  return __ROR4__(a7, a4 % 0x1F + 1) ^ ((unsigned int)*(unsigned __int16 *)(a6 + 2LL * (a1 & 3))
                                      * __ROL4__(
                                          a7 ^ *(unsigned __int16 *)(a6
                                                                   + 2LL
                                                                   * (((a1 & 3)
                                                                     + (unsigned __int8)(a2 / 3)
                                                                     + (_BYTE)a2
                                                                     + 1) & 3)),
                                          a3 % 7 + 1));
}
