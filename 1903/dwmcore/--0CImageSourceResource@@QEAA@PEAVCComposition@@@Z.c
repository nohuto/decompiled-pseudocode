/*
 * XREFs of ??0CImageSourceResource@@QEAA@PEAVCComposition@@@Z @ 0x18019D328
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009C4F0 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     <none>
 */

CImageSourceResource *__fastcall CImageSourceResource::CImageSourceResource(
        CImageSourceResource *this,
        struct CComposition *a2)
{
  CImageSourceResource *result; // rax

  *((_QWORD *)this + 2) = a2;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CImageSourceResource::`vftable'{for `CResource'};
  *((_QWORD *)this + 7) = &CImageSourceResource::`vftable'{for `IImageSource'};
  result = this;
  *((_QWORD *)this + 8) = 0LL;
  return result;
}
