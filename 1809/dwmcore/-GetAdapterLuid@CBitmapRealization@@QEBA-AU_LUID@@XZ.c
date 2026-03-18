/*
 * XREFs of ?GetAdapterLuid@CBitmapRealization@@QEBA?AU_LUID@@XZ @ 0x18009AF04
 * Callers:
 *     ?AddRealization@CBindInfo@CCompositionSurfaceInfo@@AEAAJPEAVCBitmapRealization@@@Z @ 0x180097A14 (-AddRealization@CBindInfo@CCompositionSurfaceInfo@@AEAAJPEAVCBitmapRealization@@@Z.c)
 *     ?Initialize@CDxHandleBitmapRealization@@IEAAJXZ @ 0x18009809C (-Initialize@CDxHandleBitmapRealization@@IEAAJXZ.c)
 *     ?GetCurrentDXGIResource@CDirectFlipInfo@@IEAAJU_LUID@@PEAPEAUIDXGIResource@@@Z @ 0x180179178 (-GetCurrentDXGIResource@CDirectFlipInfo@@IEAAJU_LUID@@PEAPEAUIDXGIResource@@@Z.c)
 *     ?IsDirectFlipSupportedOnTarget@CBindInfo@CCompositionSurfaceInfo@@QEAA_NPEAVIRenderTarget@@@Z @ 0x1801BC6E4 (-IsDirectFlipSupportedOnTarget@CBindInfo@CCompositionSurfaceInfo@@QEAA_NPEAVIRenderTarget@@@Z.c)
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
