/*
 * XREFs of ?SetOpacity@CVisual@@QEAAXM@Z @ 0x18007F3AC
 * Callers:
 *     ?SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18007F310 (-SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?ProcessSetOpacity@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETOPACITY@@@Z @ 0x1801C42A8 (-ProcessSetOpacity@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETOPACITY@@@Z.c)
 * Callees:
 *     ?NotifyScalarPropertyChanged@CPropertyChangeResource@@IEBAJIM@Z @ 0x18007F49C (-NotifyScalarPropertyChanged@CPropertyChangeResource@@IEBAJIM@Z.c)
 *     ?SetOpacityInternal@CVisual@@QEAAXM@Z @ 0x18007F90C (-SetOpacityInternal@CVisual@@QEAAXM@Z.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x18008E9C0 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x1800919FC (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 */

void __fastcall CVisual::SetOpacity(CVisual *this, float a2)
{
  __int64 v3; // rcx
  float v5; // xmm6_4
  float v6; // xmm1_4
  __int64 i; // rcx

  v3 = *((_QWORD *)this + 27);
  if ( (*(_DWORD *)(v3 + 4) & 0x8000000) != 0 )
  {
    for ( i = v3 + 12; (*(_DWORD *)i & 0x7F000000) != 0x5000000; i += (*(_DWORD *)i & 0xFFFFFF) + 4LL )
      ;
    v5 = *(float *)(i + 4);
  }
  else
  {
    v5 = *(float *)&FLOAT_1_0;
  }
  if ( v5 != a2 )
  {
    CVisual::SetOpacityInternal(this, a2);
    v6 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v5) & _xmm);
    CVisual::PropagateFlags(
      this,
      (((float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(a2) & _xmm) < 0.0000011920929) ^ (unsigned int)(v6 < 0.0000011920929))
    + 4);
    CPropertyChangeResource::NotifyScalarPropertyChanged(this, 0x1Au, a2);
    CResource::InvalidateAnimationSources(this, 0x1Au);
  }
}
