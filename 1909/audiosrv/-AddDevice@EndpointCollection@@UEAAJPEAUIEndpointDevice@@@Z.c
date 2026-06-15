/*
 * XREFs of ?AddDevice@EndpointCollection@@UEAAJPEAUIEndpointDevice@@@Z @ 0x180061E10
 * Callers:
 *     <none>
 * Callees:
 *     ?NewNode@?$CAtlList@V?$CComQIPtr@UIEndpointDevice@@$1?_GUID_04dcfacc_3f8f_4642_82f7_326ba5600a61@@3U__s_GUID@@B@ATL@@V?$CComQIPtrElementTraits@UIEndpointDevice@@$1?_GUID_04dcfacc_3f8f_4642_82f7_326ba5600a61@@3U__s_GUID@@B@2@@ATL@@AEAAPEAVCNode@12@PEAUIEndpointDevice@@PEAV312@1@Z @ 0x18005E8C0 (-NewNode@-$CAtlList@V-$CComQIPtr@UIEndpointDevice@@$1-_GUID_04dcfacc_3f8f_4642_82f7_326ba5600a61.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall EndpointCollection::AddDevice(EndpointCollection *this, struct IEndpointDevice *a2)
{
  unsigned int v4; // ebx
  struct _RTL_CRITICAL_SECTION *v5; // rsi
  __int64 v6; // r8
  _QWORD *v7; // rax
  __int64 v8; // rcx

  v4 = 0;
  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 72);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 72));
  if ( a2 )
  {
    v7 = ATL::CAtlList<ATL::CComQIPtr<IEndpointDevice,&__s_GUID const _GUID_04dcfacc_3f8f_4642_82f7_326ba5600a61>,ATL::CComQIPtrElementTraits<IEndpointDevice,&__s_GUID const _GUID_04dcfacc_3f8f_4642_82f7_326ba5600a61>>::NewNode(
           (__int64)this + 24,
           (__int64)a2,
           v6,
           *((_QWORD *)this + 3));
    v8 = *((_QWORD *)this + 3);
    if ( v8 )
      *(_QWORD *)(v8 + 8) = v7;
    else
      *((_QWORD *)this + 4) = v7;
    *((_QWORD *)this + 3) = v7;
  }
  else
  {
    v4 = -2147024809;
  }
  LeaveCriticalSection(v5);
  return v4;
}
