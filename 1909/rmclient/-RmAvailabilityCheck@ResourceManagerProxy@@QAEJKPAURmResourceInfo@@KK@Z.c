/*
 * XREFs of ?RmAvailabilityCheck@ResourceManagerProxy@@QAEJKPAURmResourceInfo@@KK@Z @ 0x10011EAB
 * Callers:
 *     _RmAvailabilityCheck@16 @ 0x10011FC0 (_RmAvailabilityCheck@16.c)
 * Callees:
 *     __SEH_prolog4 @ 0x1000CD8C (__SEH_prolog4.c)
 */

CLIENT_CALL_RETURN __thiscall ResourceManagerProxy::RmAvailabilityCheck(
        ResourceManagerProxy *this,
        unsigned int a2,
        struct RmResourceInfo *a3,
        unsigned int a4,
        unsigned int a5)
{
  return _NdrClientCall4(&stru_100015E8, &byte_10002CE8, *((_DWORD *)this + 1), a2, a3, a4, a5);
}
