/*
 * XREFs of ?SetOffset@CVisual@@QEAAXMMM@Z @ 0x1800A3D0C
 * Callers:
 *     ?SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1800A23C0 (-SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?ProcessSetOffset@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETOFFSET@@@Z @ 0x1801B7A8C (-ProcessSetOffset@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETOFFSET@@@Z.c)
 * Callees:
 *     ?NotifyVector3PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector3@@@Z @ 0x1800A5A4C (-NotifyVector3PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector3@@@Z.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x1800A5BF8 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?OnOuterTransformChanged@CVisual@@AEAAXXZ @ 0x1800A5D9C (-OnOuterTransformChanged@CVisual@@AEAAXXZ.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x1800A9420 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
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
