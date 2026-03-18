/*
 * XREFs of ?SetSize@CVisual@@QEAAXMM@Z @ 0x1800A3370
 * Callers:
 *     ?SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1800A2E90 (-SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?ProcessSetSize@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETSIZE@@@Z @ 0x1801C2BF0 (-ProcessSetSize@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETSIZE@@@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x18006C430 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x1800A3F88 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?NotifyVector2PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector2@@@Z @ 0x1800A40E4 (-NotifyVector2PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector2@@@Z.c)
 *     ?OnOuterTransformChanged@CVisual@@AEAAXXZ @ 0x1800A41E4 (-OnOuterTransformChanged@CVisual@@AEAAXXZ.c)
 */

void __fastcall CVisual::SetSize(CVisual *this, float a2, float a3)
{
  float v4; // [rsp+50h] [rbp+8h] BYREF
  float v5; // [rsp+54h] [rbp+Ch]

  if ( *((float *)this + 31) != a2 || *((float *)this + 32) != a3 )
  {
    *((float *)this + 31) = a2;
    *((float *)this + 32) = a3;
    CVisual::PropagateFlags((__int64)this, 5u, 0);
    CVisual::OnOuterTransformChanged(this);
    v4 = a2;
    v5 = a3;
    CPropertyChangeResource::NotifyVector2PropertyChanged(this, 0x1Du, (const struct D2DVector2 *)&v4);
    CResource::InvalidateAnimationSources(this, 0x1Du);
  }
}
