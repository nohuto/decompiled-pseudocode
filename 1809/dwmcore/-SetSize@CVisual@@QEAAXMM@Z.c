/*
 * XREFs of ?SetSize@CVisual@@QEAAXMM@Z @ 0x1800A5B60
 * Callers:
 *     ?SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1800A23C0 (-SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?ProcessSetSize@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETSIZE@@@Z @ 0x1801B7BDC (-ProcessSetSize@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETSIZE@@@Z.c)
 * Callees:
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x1800A5BF8 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?NotifyVector2PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector2@@@Z @ 0x1800A5C9C (-NotifyVector2PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector2@@@Z.c)
 *     ?OnOuterTransformChanged@CVisual@@AEAAXXZ @ 0x1800A5D9C (-OnOuterTransformChanged@CVisual@@AEAAXXZ.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x1800A9420 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 */

void __fastcall CVisual::SetSize(CVisual *this, float a2, float a3)
{
  float v4; // [rsp+50h] [rbp+8h] BYREF
  float v5; // [rsp+54h] [rbp+Ch]

  if ( *((float *)this + 31) != a2 || *((float *)this + 32) != a3 )
  {
    *((float *)this + 31) = a2;
    *((float *)this + 32) = a3;
    CVisual::PropagateFlags(this, 5LL);
    CVisual::OnOuterTransformChanged(this);
    v4 = a2;
    v5 = a3;
    CPropertyChangeResource::NotifyVector2PropertyChanged(this, 0x1Du, (const struct D2DVector2 *)&v4);
    CResource::InvalidateAnimationSources(this, 0x1Du);
  }
}
