/*
 * XREFs of ?SetAutoRelease@ResourceSetClientProxy@@UAGX_N@Z @ 0x10014D80
 * Callers:
 *     <none>
 * Callees:
 *     __SEH_prolog4 @ 0x1000CD8C (__SEH_prolog4.c)
 */

void __stdcall ResourceSetClientProxy::SetAutoRelease(ResourceSetClientProxy *this, bool a2)
{
  _NdrClientCall4(
    &stru_100016E8,
    &byte_1000386C,
    *((_DWORD *)this + 2),
    *((_DWORD *)this + 4),
    *((_DWORD *)this + 5),
    a2);
}
