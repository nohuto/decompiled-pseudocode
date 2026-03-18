/*
 * XREFs of ??0CLegacyVisualCaptureRenderTarget@@AEAA@PEAVCComposition@@@Z @ 0x18019BBE0
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009AB08 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     <none>
 */

CLegacyVisualCaptureRenderTarget *__fastcall CLegacyVisualCaptureRenderTarget::CLegacyVisualCaptureRenderTarget(
        CLegacyVisualCaptureRenderTarget *this,
        struct CComposition *a2)
{
  *((_QWORD *)this + 2) = a2;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CLegacyVisualCaptureRenderTarget::`vftable';
  return this;
}
