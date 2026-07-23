/*
 * XREFs of sub_1406ADD80 @ 0x1406ADD80
 * Callers:
 *     sub_1405A2C1C @ 0x1405A2C1C (sub_1405A2C1C.c)
 *     sub_140686A00 @ 0x140686A00 (sub_140686A00.c)
 *     sub_140759280 @ 0x140759280 (sub_140759280.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1406ADD80(char a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6, int a7)
{
  return a7 ^ (unsigned int)(*(_DWORD *)(a6 + 4LL * (a1 & 1)) ^ *(_DWORD *)(a6 + 4LL * (((a1 & 1) - 1) & 1)));
}
