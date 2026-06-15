/*
 * XREFs of ??0?$CComQIPtr@UIMMEndpointInternal@@$1?_GUID_c537ee8d_5574_454a_9354_aaa4e421d31e@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x180114C54
 * Callers:
 *     ?GetDeviceByInterfacePath@EndpointCollection@@UEAAJPEBGPEAPEAUIEndpointDevice@@@Z @ 0x180146830 (-GetDeviceByInterfacePath@EndpointCollection@@UEAAJPEBGPEAPEAUIEndpointDevice@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall ATL::CComQIPtr<IMMEndpointInternal,&__s_GUID const _GUID_c537ee8d_5574_454a_9354_aaa4e421d31e>::CComQIPtr<IMMEndpointInternal,&__s_GUID const _GUID_c537ee8d_5574_454a_9354_aaa4e421d31e>(
        _QWORD *a1,
        void (__fastcall ***a2)(_QWORD, GUID *, _QWORD *))
{
  *a1 = 0LL;
  if ( a2 )
    (**a2)(a2, &GUID_c537ee8d_5574_454a_9354_aaa4e421d31e, a1);
  return a1;
}
