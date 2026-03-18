/*
 * XREFs of ?SuppressPrimayUpdatesForVisual@CCompositionSurfaceBitmap@@UEBA_NPEBVCVisual@@@Z @ 0x180017BF0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsOverlayOrDirectFlipAssigned@CRenderTargetManager@@QEAA_NPEBVCVisual@@PEBVISwapChainContent@@@Z @ 0x180015E3C (-IsOverlayOrDirectFlipAssigned@CRenderTargetManager@@QEAA_NPEBVCVisual@@PEBVISwapChainContent@@@.c)
 */

char __fastcall CCompositionSurfaceBitmap::SuppressPrimayUpdatesForVisual(
        unsigned __int64 this,
        const struct CVisual *a2)
{
  char v2; // bl

  v2 = 0;
  if ( *(_DWORD *)(this + 96) <= 1u )
    return CRenderTargetManager::IsOverlayOrDirectFlipAssigned(
             *(CRenderTargetManager **)(*(_QWORD *)(this - 40) + 64LL),
             a2,
             (const struct ISwapChainContent *)(this & -(__int64)(this != 56))) != 0;
  return v2;
}
