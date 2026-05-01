/*
 * XREFs of ?ReleaseResourcesImpl@ResourceSetClientProxy@@IAEJK@Z @ 0x10014B4D
 * Callers:
 *     ?ForceReleaseResources@ResourceSetClientProxy@@UAGJXZ @ 0x10014670 (-ForceReleaseResources@ResourceSetClientProxy@@UAGJXZ.c)
 *     ?ReleaseResources@ResourceSetClientProxy@@UAGJXZ @ 0x10014B30 (-ReleaseResources@ResourceSetClientProxy@@UAGJXZ.c)
 * Callees:
 *     __SEH_prolog4 @ 0x1000CD8C (__SEH_prolog4.c)
 *     ?ReleaseCallback@ResourceSetClientProxy@@IAEXXZ @ 0x10014A93 (-ReleaseCallback@ResourceSetClientProxy@@IAEXXZ.c)
 *     ?RemoveProxyResourceSet@ResourceManagerClientProxy@@QAEJ_K@Z @ 0x10014C71 (-RemoveProxyResourceSet@ResourceManagerClientProxy@@QAEJ_K@Z.c)
 */

CLIENT_CALL_RETURN __thiscall ResourceSetClientProxy::ReleaseResourcesImpl(
        ResourceSetClientProxy *this,
        unsigned int a2)
{
  CLIENT_CALL_RETURN v4; // [esp+18h] [ebp-1Ch]

  if ( *((_DWORD *)this + 112) == 2 || (*((_DWORD *)this + 5) & *((_DWORD *)this + 4)) == -1 )
  {
    v4.Simple = 0;
  }
  else
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(*((_DWORD *)this + 105) + 552));
    v4.Pointer = _NdrClientCall4(
                   &stru_100016E8,
                   &byte_100037DC,
                   *((_DWORD *)this + 2),
                   *((_DWORD *)this + 4),
                   *((_DWORD *)this + 5),
                   a2).Pointer;
    if ( v4.Simple < 0 && *((_DWORD *)this + 103) )
    {
      LeaveCriticalSection((LPCRITICAL_SECTION)(*((_DWORD *)this + 105) + 552));
    }
    else
    {
      *((_DWORD *)this + 102) = 0;
      *((_DWORD *)this + 112) = 2;
      ResourceManagerClientProxy::RemoveProxyResourceSet(
        *((ResourceManagerClientProxy **)this + 105),
        *((_QWORD *)this + 2));
      LeaveCriticalSection((LPCRITICAL_SECTION)(*((_DWORD *)this + 105) + 552));
      ResourceSetClientProxy::ReleaseCallback(this);
    }
  }
  return v4;
}
