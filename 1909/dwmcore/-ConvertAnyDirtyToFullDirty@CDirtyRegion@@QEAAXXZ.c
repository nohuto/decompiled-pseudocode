/*
 * XREFs of ?ConvertAnyDirtyToFullDirty@CDirtyRegion@@QEAAXXZ @ 0x1801767F4
 * Callers:
 *     ?AddInvalidRects@CHwndRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@@@Z @ 0x180035450 (-AddInvalidRects@CHwndRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@.c)
 * Callees:
 *     ?IsEmpty@CDirtyRegion@@QEBA_NXZ @ 0x180058DE4 (-IsEmpty@CDirtyRegion@@QEBA_NXZ.c)
 */

void __fastcall CDirtyRegion::ConvertAnyDirtyToFullDirty(CDirtyRegion *this)
{
  CDirtyRegion *v1; // r11

  if ( !*((_BYTE *)this + 2883) )
  {
    if ( CDirtyRegion::IsEmpty(this) )
      *((_BYTE *)v1 + 2884) = 1;
    else
      CDirtyRegion::SetFullDirty(v1);
  }
}
