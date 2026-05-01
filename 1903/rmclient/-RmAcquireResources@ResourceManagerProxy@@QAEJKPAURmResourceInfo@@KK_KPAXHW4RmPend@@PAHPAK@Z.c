/*
 * XREFs of ?RmAcquireResources@ResourceManagerProxy@@QAEJKPAURmResourceInfo@@KK_KPAXHW4RmPend@@PAHPAK@Z @ 0x100076D5
 * Callers:
 *     _RmAcquireResources@40 @ 0x10007690 (_RmAcquireResources@40.c)
 * Callees:
 *     __SEH_prolog4 @ 0x1000CD8C (__SEH_prolog4.c)
 */

CLIENT_CALL_RETURN __thiscall ResourceManagerProxy::RmAcquireResources(
        _DWORD *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12)
{
  return _NdrClientCall4(&stru_100015E8, &byte_10002D22, this[1], a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
}
