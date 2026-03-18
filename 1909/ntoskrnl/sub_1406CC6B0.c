/*
 * XREFs of sub_1406CC6B0 @ 0x1406CC6B0
 * Callers:
 *     SPCall2ServerInternal @ 0x14064A46C (SPCall2ServerInternal.c)
 *     sub_1406A3768 @ 0x1406A3768 (sub_1406A3768.c)
 *     sub_140780414 @ 0x140780414 (sub_140780414.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1406CC6B0(
        char a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        int a5,
        __int64 a6,
        int a7)
{
  return (unsigned int)*(unsigned __int16 *)(a6 + 2LL * (a1 & 3))
       * __ROL4__(
           a7 ^ *(unsigned __int16 *)(a6 + 2LL * (((a1 & 3) + (unsigned __int8)(a2 / 3) + (_BYTE)a2 + 1) & 3)),
           a3 % 7 + 1)
       - __ROR4__(a7, a4 % 0x1F + 1);
}
