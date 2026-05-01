/*
 * XREFs of _RmpClientSetHostLimits@16 @ 0x10011AA1
 * Callers:
 *     _RmSetHostLimit@16 @ 0x10011490 (_RmSetHostLimit@16.c)
 * Callees:
 *     __SEH_prolog4 @ 0x1000CD8C (__SEH_prolog4.c)
 */

CLIENT_CALL_RETURN __thiscall RmpClientSetHostLimits(void *this, int a2, int a3, int a4)
{
  return _NdrClientCall4(&stru_10001928, &byte_10003FFE, *(_DWORD *)(a2 + 8), a3, a4, this);
}
