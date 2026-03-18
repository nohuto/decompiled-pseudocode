/*
 * XREFs of ??0CYCbCrSurface@@IEAA@PEAVCComposition@@@Z @ 0x18019C654
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009AB08 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     <none>
 */

CYCbCrSurface *__fastcall CYCbCrSurface::CYCbCrSurface(CYCbCrSurface *this, struct CComposition *a2)
{
  *((_QWORD *)this + 2) = a2;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CYCbCrSurface::`vftable';
  return this;
}
