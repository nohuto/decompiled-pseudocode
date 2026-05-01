/*
 * XREFs of ?RmRegisterResource@ResourceManagerProxy@@QAEJW4RmResourceType@@KH@Z @ 0x10007F6D
 * Callers:
 *     _RmRegisterResource@12 @ 0x10007F40 (_RmRegisterResource@12.c)
 * Callees:
 *     __SEH_prolog4 @ 0x1000CD8C (__SEH_prolog4.c)
 */

CLIENT_CALL_RETURN __thiscall ResourceManagerProxy::RmRegisterResource(_DWORD *this, int a2, int a3, int a4)
{
  return _NdrClientCall4(&stru_100015E8, &byte_10002C5E, this[1], a2, a3, a4);
}
