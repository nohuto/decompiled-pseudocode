/*
 * XREFs of sub_1406CDB80 @ 0x1406CDB80
 * Callers:
 *     SPCall2ServerInternal @ 0x1406844FC (SPCall2ServerInternal.c)
 *     sub_1406ACDB8 @ 0x1406ACDB8 (sub_1406ACDB8.c)
 *     sub_14077D9F4 @ 0x14077D9F4 (sub_14077D9F4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1406CDB80(char a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6, int a7)
{
  return a7 ^ (unsigned int)(*(_DWORD *)(a6 + 4LL * (a1 & 1)) ^ *(_DWORD *)(a6 + 4LL * (((a1 & 1) - 1) & 1)));
}
