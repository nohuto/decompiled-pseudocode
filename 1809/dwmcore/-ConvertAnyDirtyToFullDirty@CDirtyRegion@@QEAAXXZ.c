/*
 * XREFs of ?ConvertAnyDirtyToFullDirty@CDirtyRegion@@QEAAXXZ @ 0x180176668
 * Callers:
 *     ?AddInvalidRects@CHwndRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@@@Z @ 0x1800317B0 (-AddInvalidRects@CHwndRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@.c)
 * Callees:
 *     ?IsEmpty@CDirtyRegion@@QEBA_NXZ @ 0x180048EC8 (-IsEmpty@CDirtyRegion@@QEBA_NXZ.c)
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
