/*
 * XREFs of sub_1406A4FA0 @ 0x1406A4FA0
 * Callers:
 *     sub_1405A2C1C @ 0x1405A2C1C (sub_1405A2C1C.c)
 *     sub_140686A00 @ 0x140686A00 (sub_140686A00.c)
 *     sub_140759280 @ 0x140759280 (sub_140759280.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1406A4FA0(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6, int a7)
{
  return *(_DWORD *)(a6 + 4LL * (((unsigned __int8)(a1 >> 1) - 1) & 1)) ^ (a7
                                                                         - (unsigned int)*(unsigned __int16 *)(a6 + 2 * (a1 & 3)));
}
