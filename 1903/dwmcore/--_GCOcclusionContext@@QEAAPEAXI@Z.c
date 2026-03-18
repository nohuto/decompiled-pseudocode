/*
 * XREFs of ??_GCOcclusionContext@@QEAAPEAXI@Z @ 0x1800CBC8C
 * Callers:
 *     ??$SAFE_DELETE@VCOcclusionContext@@@@YAXAEAPEAVCOcclusionContext@@@Z @ 0x180046F24 (--$SAFE_DELETE@VCOcclusionContext@@@@YAXAEAPEAVCOcclusionContext@@@Z.c)
 *     ?CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z @ 0x180055110 (-CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z.c)
 *     ?Create@COcclusionContext@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800B5338 (-Create@COcclusionContext@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??1COcclusionContext@@QEAA@XZ @ 0x1800CBCB8 (--1COcclusionContext@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800CEFE0 (--3@YAXPEAX_K@Z.c)
 */

COcclusionContext *__fastcall COcclusionContext::`scalar deleting destructor'(COcclusionContext *this)
{
  COcclusionContext::~COcclusionContext(this);
  operator delete(this, 0x4B8uLL);
  return this;
}
