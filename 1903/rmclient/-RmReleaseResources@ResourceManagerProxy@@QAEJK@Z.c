/*
 * XREFs of ?RmReleaseResources@ResourceManagerProxy@@QAEJK@Z @ 0x10007764
 * Callers:
 *     _RmReleaseResources@4 @ 0x10007740 (_RmReleaseResources@4.c)
 * Callees:
 *     __SEH_prolog4 @ 0x1000CD8C (__SEH_prolog4.c)
 */

CLIENT_CALL_RETURN __thiscall ResourceManagerProxy::RmReleaseResources(ResourceManagerProxy *this, unsigned int a2)
{
  unsigned int v3; // [esp+18h] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+1Ch] [ebp-18h]

  v3 = a2;
  ms_exc.registration.TryLevel = 0;
  return _NdrClientCall4(&stru_100015E8, &byte_10002DB0, &v3);
}
