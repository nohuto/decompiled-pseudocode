/*
 * XREFs of sub_1406DFAC0 @ 0x1406DFAC0
 * Callers:
 *     SPCall2ServerInternal @ 0x1406844FC (SPCall2ServerInternal.c)
 *     sub_1406ACDB8 @ 0x1406ACDB8 (sub_1406ACDB8.c)
 *     sub_14077D9F4 @ 0x14077D9F4 (sub_14077D9F4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1406DFAC0(
        unsigned __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        int a5,
        __int64 a6,
        int a7)
{
  return __ROR4__(a7, a4 % 0x1F + 1)
       + (unsigned int)*(unsigned __int16 *)(a6 + 2 * (a1 & 3))
       * __ROR4__(*(_DWORD *)(a6 + 4LL * (((unsigned __int8)(a1 >> 1) - 1) & 1)) - a7, a3 % 0x1F + 1);
}
