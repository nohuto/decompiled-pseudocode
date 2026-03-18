/*
 * XREFs of ?GetResampleMode@CVisual@@QEBA?AW4Enum@CompositionResampleMode@@XZ @ 0x18016FC54
 * Callers:
 *     ?GetEffects@CDrawingContext@@AEAAXPEAVCVisual@@PEBVCVisualTree@@PEAUNodeEffects@1@@Z @ 0x18005FBE0 (-GetEffects@CDrawingContext@@AEAAXPEAVCVisual@@PEBVCVisualTree@@PEAUNodeEffects@1@@Z.c)
 *     ?Render@COffScreenRenderTarget@@UEAAJPEA_N@Z @ 0x18019AF70 (-Render@COffScreenRenderTarget@@UEAAJPEA_N@Z.c)
 *     ?Render@COverlayRenderTargetEngine@@UEAAJPEA_N@Z @ 0x1801A4F80 (-Render@COverlayRenderTargetEngine@@UEAAJPEA_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CVisual::GetResampleMode(__int64 a1)
{
  __int64 v1; // rcx
  _DWORD *i; // rcx

  v1 = *(_QWORD *)(a1 + 216);
  if ( (*(_DWORD *)(v1 + 4) & 0x2000000) == 0 )
    return 0LL;
  for ( i = (_DWORD *)(v1 + 12); (*i & 0x7F000000) != 0x7000000; i = (_DWORD *)((char *)i + (*i & 0xFFFFFF) + 4) )
    ;
  return (unsigned int)i[1];
}
