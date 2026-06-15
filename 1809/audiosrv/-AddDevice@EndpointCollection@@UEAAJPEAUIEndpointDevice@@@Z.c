/*
 * XREFs of ?AddDevice@EndpointCollection@@UEAAJPEAUIEndpointDevice@@@Z @ 0x18005DA20
 * Callers:
 *     <none>
 * Callees:
 *     ?AddHead@?$CAtlList@V?$CComQIPtr@UIEndpointDevice@@$1?_GUID_04dcfacc_3f8f_4642_82f7_326ba5600a61@@3U__s_GUID@@B@ATL@@V?$CComQIPtrElementTraits@UIEndpointDevice@@$1?_GUID_04dcfacc_3f8f_4642_82f7_326ba5600a61@@3U__s_GUID@@B@2@@ATL@@QEAAPEAU__POSITION@@PEAUIEndpointDevice@@@Z @ 0x18005DA9C (-AddHead@-$CAtlList@V-$CComQIPtr@UIEndpointDevice@@$1-_GUID_04dcfacc_3f8f_4642_82f7_326ba5600a61.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall EndpointCollection::AddDevice(EndpointCollection *this, struct IEndpointDevice *a2)
{
  unsigned int v4; // ebx
  struct _RTL_CRITICAL_SECTION *v5; // rdi

  v4 = 0;
  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 72);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 72));
  if ( a2 )
    ATL::CAtlList<ATL::CComQIPtr<IEndpointDevice,&__s_GUID const _GUID_04dcfacc_3f8f_4642_82f7_326ba5600a61>,ATL::CComQIPtrElementTraits<IEndpointDevice,&__s_GUID const _GUID_04dcfacc_3f8f_4642_82f7_326ba5600a61>>::AddHead(
      (char *)this + 24,
      a2);
  else
    v4 = -2147024809;
  LeaveCriticalSection(v5);
  return v4;
}
