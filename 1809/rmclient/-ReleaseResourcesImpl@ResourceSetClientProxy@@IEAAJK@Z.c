/*
 * XREFs of ?ReleaseResourcesImpl@ResourceSetClientProxy@@IEAAJK@Z @ 0x180011920
 * Callers:
 *     ?ForceReleaseResources@ResourceSetClientProxy@@UEAAJXZ @ 0x1800113E0 (-ForceReleaseResources@ResourceSetClientProxy@@UEAAJXZ.c)
 *     ?ReleaseResources@ResourceSetClientProxy@@UEAAJXZ @ 0x180011900 (-ReleaseResources@ResourceSetClientProxy@@UEAAJXZ.c)
 * Callees:
 *     ?ReleaseCallback@ResourceSetClientProxy@@IEAAXXZ @ 0x180011828 (-ReleaseCallback@ResourceSetClientProxy@@IEAAXXZ.c)
 *     ?RemoveProxyResourceSet@ResourceManagerClientProxy@@QEAAJ_K@Z @ 0x180011A50 (-RemoveProxyResourceSet@ResourceManagerClientProxy@@QEAAJ_K@Z.c)
 */

__int64 __fastcall ResourceSetClientProxy::ReleaseResourcesImpl(ResourceSetClientProxy *this, int a2)
{
  int v5; // [rsp+28h] [rbp-20h]
  int Pointer; // [rsp+30h] [rbp-18h]

  if ( *((_DWORD *)this + 120) == 2 || *((_QWORD *)this + 3) == -1LL )
  {
    return 0;
  }
  else
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(*((_QWORD *)this + 54) + 576LL));
    v5 = a2;
    Pointer = (unsigned int)NdrClientCall3(
                              (MIDL_STUBLESS_PROXY_INFO *)&stru_180013CC0,
                              4u,
                              0LL,
                              *((_QWORD *)this + 2),
                              *((_QWORD *)this + 3),
                              v5).Pointer;
    if ( Pointer < 0 && *((_DWORD *)this + 105) )
    {
      LeaveCriticalSection((LPCRITICAL_SECTION)(*((_QWORD *)this + 54) + 576LL));
    }
    else
    {
      *((_DWORD *)this + 104) = 0;
      *((_DWORD *)this + 120) = 2;
      ResourceManagerClientProxy::RemoveProxyResourceSet(
        *((ResourceManagerClientProxy **)this + 54),
        *((_QWORD *)this + 3));
      LeaveCriticalSection((LPCRITICAL_SECTION)(*((_QWORD *)this + 54) + 576LL));
      ResourceSetClientProxy::ReleaseCallback(this);
    }
  }
  return (unsigned int)Pointer;
}
