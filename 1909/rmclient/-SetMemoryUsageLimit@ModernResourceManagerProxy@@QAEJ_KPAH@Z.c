/*
 * XREFs of ?SetMemoryUsageLimit@ModernResourceManagerProxy@@QAEJ_KPAH@Z @ 0x100120C6
 * Callers:
 *     ?TrySetAppMemoryUsageLimit@CMemoryManager@System@Windows@@UAGJ_KPAE@Z @ 0x10011160 (-TrySetAppMemoryUsageLimit@CMemoryManager@System@Windows@@UAGJ_KPAE@Z.c)
 * Callees:
 *     __SEH_prolog4 @ 0x1000CD8C (__SEH_prolog4.c)
 */

CLIENT_CALL_RETURN __thiscall ModernResourceManagerProxy::SetMemoryUsageLimit(
        ModernResourceManagerProxy *this,
        unsigned __int64 a2,
        int *a3)
{
  return _NdrClientCall4(&stru_100015E8, &byte_10002C30, *((_DWORD *)this + 2), a2, a3);
}
