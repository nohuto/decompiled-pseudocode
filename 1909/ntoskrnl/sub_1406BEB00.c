/*
 * XREFs of sub_1406BEB00 @ 0x1406BEB00
 * Callers:
 *     SPCall2ServerInternal @ 0x14064A46C (SPCall2ServerInternal.c)
 *     sub_1406A3768 @ 0x1406A3768 (sub_1406A3768.c)
 *     sub_140780414 @ 0x140780414 (sub_140780414.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1406BEB00(
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
