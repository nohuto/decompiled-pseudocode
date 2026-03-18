/*
 * XREFs of sub_1406BEC60 @ 0x1406BEC60
 * Callers:
 *     SPCall2ServerInternal @ 0x1406844FC (SPCall2ServerInternal.c)
 *     sub_1406ACDB8 @ 0x1406ACDB8 (sub_1406ACDB8.c)
 *     sub_14077D9F4 @ 0x14077D9F4 (sub_14077D9F4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1406BEC60(
        char a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        int a7)
{
  return (__ROR4__(a7, a2 % 0xF + 1) - *(unsigned __int16 *)(a6 + 2LL * (a1 & 3)))
       * (unsigned int)*(unsigned __int16 *)(a6 + 2LL * (((a1 & 3) + (unsigned __int8)(a3 / 3) + (_BYTE)a3 + 1) & 3));
}
