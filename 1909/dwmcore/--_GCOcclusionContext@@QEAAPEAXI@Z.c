/*
 * XREFs of ??_GCOcclusionContext@@QEAAPEAXI@Z @ 0x180024820
 * Callers:
 *     ?Create@COcclusionContext@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x180024980 (-Create@COcclusionContext@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ??$SAFE_DELETE@VCOcclusionContext@@@@YAXAEAPEAVCOcclusionContext@@@Z @ 0x180025664 (--$SAFE_DELETE@VCOcclusionContext@@@@YAXAEAPEAVCOcclusionContext@@@Z.c)
 *     ?CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z @ 0x180080FA0 (-CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z.c)
 * Callees:
 *     ??1COcclusionContext@@QEAA@XZ @ 0x18002484C (--1COcclusionContext@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18002F520 (--3@YAXPEAX_K@Z.c)
 */

COcclusionContext *__fastcall COcclusionContext::`scalar deleting destructor'(COcclusionContext *this)
{
  COcclusionContext::~COcclusionContext(this);
  operator delete(this, 0x4B8uLL);
  return this;
}
