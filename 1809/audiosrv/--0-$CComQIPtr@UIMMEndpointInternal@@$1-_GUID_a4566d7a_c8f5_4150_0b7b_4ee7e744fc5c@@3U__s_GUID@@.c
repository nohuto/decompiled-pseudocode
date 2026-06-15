/*
 * XREFs of ??0?$CComQIPtr@UIMMEndpointInternal@@$1?_GUID_a4566d7a_c8f5_4150_0b7b_4ee7e744fc5c@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x1801074FC
 * Callers:
 *     ?GetDeviceByInterfacePath@EndpointCollection@@UEAAJPEBGPEAPEAUIEndpointDevice@@@Z @ 0x180142C80 (-GetDeviceByInterfacePath@EndpointCollection@@UEAAJPEBGPEAPEAUIEndpointDevice@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall ATL::CComQIPtr<IMMEndpointInternal,&__s_GUID const _GUID_a4566d7a_c8f5_4150_0b7b_4ee7e744fc5c>::CComQIPtr<IMMEndpointInternal,&__s_GUID const _GUID_a4566d7a_c8f5_4150_0b7b_4ee7e744fc5c>(
        _QWORD *a1,
        void (__fastcall ***a2)(_QWORD, GUID *, _QWORD *))
{
  *a1 = 0LL;
  if ( a2 )
    (**a2)(a2, &GUID_a4566d7a_c8f5_4150_0b7b_4ee7e744fc5c, a1);
  return a1;
}
