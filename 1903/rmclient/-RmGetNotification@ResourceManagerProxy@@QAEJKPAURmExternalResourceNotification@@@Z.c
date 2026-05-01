/*
 * XREFs of ?RmGetNotification@ResourceManagerProxy@@QAEJKPAURmExternalResourceNotification@@@Z @ 0x10011F1F
 * Callers:
 *     _RmGetNotification@8 @ 0x10012000 (_RmGetNotification@8.c)
 * Callees:
 *     __SEH_prolog4 @ 0x1000CD8C (__SEH_prolog4.c)
 */

CLIENT_CALL_RETURN __thiscall ResourceManagerProxy::RmGetNotification(
        ResourceManagerProxy *this,
        unsigned int a2,
        struct RmExternalResourceNotification *a3)
{
  return _NdrClientCall4(&stru_100015E8, &byte_10002D80, a2, a3);
}
