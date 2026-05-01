/*
 * XREFs of ?RmAccessCheck@ResourceManagerProxy@@QAEJW4RmResourceType@@@Z @ 0x10011E40
 * Callers:
 *     _RmAccessCheckOnSelf@4 @ 0x10011F90 (_RmAccessCheckOnSelf@4.c)
 * Callees:
 *     __SEH_prolog4 @ 0x1000CD8C (__SEH_prolog4.c)
 */

CLIENT_CALL_RETURN __thiscall ResourceManagerProxy::RmAccessCheck(_DWORD *this, int a2)
{
  return _NdrClientCall4(&stru_100015E8, &byte_10002CC0, this[1], a2);
}
