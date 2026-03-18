/*
 * XREFs of ?AddInvalidRects@CRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@@@Z @ 0x18005CB30
 * Callers:
 *     <none>
 * Callees:
 *     ?SetFullDirty@CDirtyRegion@@QEAAXXZ @ 0x18005CB5C (-SetFullDirty@CDirtyRegion@@QEAAXXZ.c)
 */

void __fastcall CRenderTarget::AddInvalidRects(
        CRenderTarget *this,
        const struct CVisualTree *a2,
        struct CDirtyRegion *a3,
        struct CBackdropRegion *a4)
{
  if ( *((_BYTE *)this + 89) )
  {
    CDirtyRegion::SetFullDirty(a3);
    *((_BYTE *)this + 89) = 0;
  }
}
