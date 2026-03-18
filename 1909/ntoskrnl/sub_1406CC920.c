/*
 * XREFs of sub_1406CC920 @ 0x1406CC920
 * Callers:
 *     SPCall2ServerInternal @ 0x14064A46C (SPCall2ServerInternal.c)
 *     sub_1406A3768 @ 0x1406A3768 (sub_1406A3768.c)
 *     sub_140780414 @ 0x140780414 (sub_140780414.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1406CC920(char a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6, int a7)
{
  return a7 ^ (unsigned int)(*(_DWORD *)(a6 + 4LL * (a1 & 1)) ^ *(_DWORD *)(a6 + 4LL * (((a1 & 1) - 1) & 1)));
}
