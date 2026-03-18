/*
 * XREFs of sub_1406C5570 @ 0x1406C5570
 * Callers:
 *     SPCall2ServerInternal @ 0x14064A46C (SPCall2ServerInternal.c)
 *     sub_1406A3768 @ 0x1406A3768 (sub_1406A3768.c)
 *     sub_140780414 @ 0x140780414 (sub_140780414.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1406C5570(char a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6, unsigned int a7)
{
  return *(_DWORD *)(a6 + 4LL * (((a1 & 1) - 1) & 1)) - (a7 ^ *(_DWORD *)(a6 + 4LL * (a1 & 1)));
}
