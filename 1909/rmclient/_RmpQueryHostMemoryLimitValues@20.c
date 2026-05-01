/*
 * XREFs of _RmpQueryHostMemoryLimitValues@20 @ 0x10011BA8
 * Callers:
 *     _RmQueryHostMemoryLimitValues@16 @ 0x10011370 (_RmQueryHostMemoryLimitValues@16.c)
 * Callees:
 *     __SEH_prolog4 @ 0x1000CD8C (__SEH_prolog4.c)
 */

CLIENT_CALL_RETURN __fastcall RmpQueryHostMemoryLimitValues(int a1, int a2, int a3, int a4, int a5)
{
  return _NdrClientCall4(&stru_10001928, &byte_10004034, a1, a3, a4, a2, a5);
}
