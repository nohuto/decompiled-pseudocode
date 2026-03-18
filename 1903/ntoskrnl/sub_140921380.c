/*
 * XREFs of sub_140921380 @ 0x140921380
 * Callers:
 *     SPCall2ServerInternal @ 0x1406844FC (SPCall2ServerInternal.c)
 *     sub_1406ACDB8 @ 0x1406ACDB8 (sub_1406ACDB8.c)
 *     sub_14077D9F4 @ 0x14077D9F4 (sub_14077D9F4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140921380(
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
