/*
 * XREFs of sub_1406A3EA0 @ 0x1406A3EA0
 * Callers:
 *     sub_1405A1C1C @ 0x1405A1C1C (sub_1405A1C1C.c)
 *     sub_140685860 @ 0x140685860 (sub_140685860.c)
 *     sub_1407580B0 @ 0x1407580B0 (sub_1407580B0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1406A3EA0(char a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6, unsigned int a7)
{
  return *(_DWORD *)(a6 + 4LL * (((a1 & 1) - 1) & 1)) - (a7 ^ *(_DWORD *)(a6 + 4LL * (a1 & 1)));
}
