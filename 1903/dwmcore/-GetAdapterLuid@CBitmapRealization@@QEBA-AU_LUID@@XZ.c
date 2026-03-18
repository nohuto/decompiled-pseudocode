/*
 * XREFs of ?GetAdapterLuid@CBitmapRealization@@QEBA?AU_LUID@@XZ @ 0x18003DB94
 * Callers:
 *     ?AddRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@AEAAJPEAVCBitmapRealization@@@Z @ 0x18003D7C8 (-AddRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@AEAAJPEAVCBitmapRealization@@@Z.c)
 *     ?Initialize@CDxHandleBitmapRealization@@IEAAJXZ @ 0x18003DAC4 (-Initialize@CDxHandleBitmapRealization@@IEAAJXZ.c)
 *     ?GetCurrentDXGIResource@CDirectFlipInfo@@IEAAJU_LUID@@PEAPEAUIDXGIResource@@@Z @ 0x180194784 (-GetCurrentDXGIResource@CDirectFlipInfo@@IEAAJU_LUID@@PEAPEAUIDXGIResource@@@Z.c)
 *     ?IsDirectFlipSupportedOnTarget@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAA_NPEAVIRenderTarget@@@Z @ 0x18025D034 (-IsDirectFlipSupportedOnTarget@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAA_NPEAVIRenderTarget@.c)
 * Callees:
 *     <none>
 */

struct _LUID __fastcall CBitmapRealization::GetAdapterLuid(CBitmapRealization *this, struct _LUID *a2)
{
  struct _LUID v2; // rax

  if ( (unsigned int)(*((_DWORD *)this + 68) - 2) > 2 )
    v2 = g_luidZero;
  else
    v2 = (struct _LUID)*((_QWORD *)this + 36);
  *a2 = v2;
  return (struct _LUID)a2;
}
