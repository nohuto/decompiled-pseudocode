/*
 * XREFs of sub_1406A3E80 @ 0x1406A3E80
 * Callers:
 *     sub_1405A1C1C @ 0x1405A1C1C (sub_1405A1C1C.c)
 *     sub_140685840 @ 0x140685840 (sub_140685840.c)
 *     sub_140758090 @ 0x140758090 (sub_140758090.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1406A3E80(char a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6, unsigned int a7)
{
  return *(_DWORD *)(a6 + 4LL * (((a1 & 1) - 1) & 1)) - (a7 ^ *(_DWORD *)(a6 + 4LL * (a1 & 1)));
}
