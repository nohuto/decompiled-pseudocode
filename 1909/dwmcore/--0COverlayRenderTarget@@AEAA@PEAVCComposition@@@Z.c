/*
 * XREFs of ??0COverlayRenderTarget@@AEAA@PEAVCComposition@@@Z @ 0x18019BD00
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009AB08 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     <none>
 */

COverlayRenderTarget *__fastcall COverlayRenderTarget::COverlayRenderTarget(
        COverlayRenderTarget *this,
        struct CComposition *a2)
{
  COverlayRenderTarget *result; // rax

  *((_QWORD *)this + 2) = a2;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &COverlayRenderTarget::`vftable';
  result = this;
  *((_QWORD *)this + 8) = 0LL;
  return result;
}
