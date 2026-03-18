/*
 * XREFs of ??0CCompositionGlyphRun@@QEAA@PEAVCComposition@@@Z @ 0x1801CF480
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009AB08 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     memset_0 @ 0x1800E8D0E (memset_0.c)
 */

CCompositionGlyphRun *__fastcall CCompositionGlyphRun::CCompositionGlyphRun(
        CCompositionGlyphRun *this,
        struct CComposition *a2)
{
  *((_QWORD *)this + 2) = a2;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 7) = 0LL;
  *(_QWORD *)this = &CCompositionGlyphRun::`vftable';
  memset_0((char *)this + 64, 0, 0x20uLL);
  return this;
}
