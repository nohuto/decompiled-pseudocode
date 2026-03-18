/*
 * XREFs of ??0CCompositionMipmapSurface@@QEAA@PEAVCComposition@@@Z @ 0x1801CFC88
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009AB08 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     <none>
 */

CCompositionMipmapSurface *__fastcall CCompositionMipmapSurface::CCompositionMipmapSurface(
        CCompositionMipmapSurface *this,
        struct CComposition *a2)
{
  CCompositionMipmapSurface *result; // rax

  *((_QWORD *)this + 2) = a2;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CCompositionMipmapSurface::`vftable'{for `CPropertyChangeResource'};
  *((_QWORD *)this + 9) = &CCompositionMipmapSurface::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 10) = &CCompositionMipmapSurface::`vftable'{for `ISceneNotificationListener'};
  result = this;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  return result;
}
