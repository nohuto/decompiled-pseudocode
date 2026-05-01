/*
 * XREFs of ?RmAccessCheck@ResourceManagerProxy@@QAEJW4RmResourceType@@K@Z @ 0x1000A07B
 * Callers:
 *     _RmAccessCheck@8 @ 0x1000A030 (_RmAccessCheck@8.c)
 * Callees:
 *     __SEH_prolog4 @ 0x1000CD8C (__SEH_prolog4.c)
 */

CLIENT_CALL_RETURN __thiscall ResourceManagerProxy::RmAccessCheck(_DWORD *this, int a2, int a3)
{
  return _NdrClientCall4(&stru_100015E8, &byte_10002C92, this[1], a2, a3);
}
