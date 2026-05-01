/*
 * XREFs of ?SetExternalResourcePriorities@ResourceSetClientProxy@@UAGJKQAU_ResourceInfo@ExecutionModel@@@Z @ 0x10014DF0
 * Callers:
 *     <none>
 * Callees:
 *     __SEH_prolog4 @ 0x1000CD8C (__SEH_prolog4.c)
 */

CLIENT_CALL_RETURN __stdcall ResourceSetClientProxy::SetExternalResourcePriorities(
        ResourceSetClientProxy *this,
        unsigned int a2,
        struct ExecutionModel::_ResourceInfo *const a3)
{
  return _NdrClientCall4(
           &stru_100016E8,
           &byte_10003838,
           *((_DWORD *)this + 2),
           *((_DWORD *)this + 4),
           *((_DWORD *)this + 5),
           a2,
           a3);
}
