/*
 * XREFs of sub_1406C6C90 @ 0x1406C6C90
 * Callers:
 *     SPCall2ServerInternal @ 0x1406844FC (SPCall2ServerInternal.c)
 *     sub_1406ACDB8 @ 0x1406ACDB8 (sub_1406ACDB8.c)
 *     sub_14077D9F4 @ 0x14077D9F4 (sub_14077D9F4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1406C6C90(char a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6, unsigned int a7)
{
  return *(_DWORD *)(a6 + 4LL * (((a1 & 1) - 1) & 1)) - (a7 ^ *(_DWORD *)(a6 + 4LL * (a1 & 1)));
}
