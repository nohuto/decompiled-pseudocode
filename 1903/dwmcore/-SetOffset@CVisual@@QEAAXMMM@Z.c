/*
 * XREFs of ?SetOffset@CVisual@@QEAAXMMM@Z @ 0x18007F4D0
 * Callers:
 *     ?SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18007F310 (-SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?ProcessSetOffset@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETOFFSET@@@Z @ 0x1801C4280 (-ProcessSetOffset@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETOFFSET@@@Z.c)
 * Callees:
 *     ?NotifyVector3PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector3@@@Z @ 0x18007F5AC (-NotifyVector3PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector3@@@Z.c)
 *     ?OnOuterTransformChanged@CVisual@@AEAAXXZ @ 0x18007F808 (-OnOuterTransformChanged@CVisual@@AEAAXXZ.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x18008E9C0 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x1800919FC (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 */

void __fastcall CVisual::SetOffset(CVisual *this, float a2, float a3, float a4)
{
  _DWORD v5[4]; // [rsp+20h] [rbp-58h] BYREF

  if ( *((float *)this + 26) != a2 || *((float *)this + 27) != a3 || *((float *)this + 28) != a4 )
  {
    *((float *)this + 26) = a2;
    *((float *)this + 27) = a3;
    *((float *)this + 28) = a4;
    CVisual::PropagateFlags(this, 5LL);
    CVisual::OnOuterTransformChanged(this);
    *(float *)v5 = a2;
    *(float *)&v5[1] = a3;
    *(float *)&v5[2] = a4;
    CPropertyChangeResource::NotifyVector3PropertyChanged(this, 0x1Cu, (const struct D2DVector3 *)v5);
    CResource::InvalidateAnimationSources(this, 0x1Cu);
  }
}
