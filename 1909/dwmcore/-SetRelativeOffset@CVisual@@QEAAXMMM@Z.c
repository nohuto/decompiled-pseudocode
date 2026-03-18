/*
 * XREFs of ?SetRelativeOffset@CVisual@@QEAAXMMM@Z @ 0x1800A0844
 * Callers:
 *     ?SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1800A2E90 (-SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?ProcessSetRelativeOffset@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETRELATIVEOFFSET@@@Z @ 0x1801C2BA4 (-ProcessSetRelativeOffset@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETRELATIVEOFFS.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x18006C430 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?SetRelativeOffsetInternal@CVisual@@QEAAXUD2D_VECTOR_3F@@@Z @ 0x1800A07F8 (-SetRelativeOffsetInternal@CVisual@@QEAAXUD2D_VECTOR_3F@@@Z.c)
 *     ?GetRelativeOffsetInternal@CVisual@@QEBA?AUD2D_VECTOR_3F@@XZ @ 0x1800A0980 (-GetRelativeOffsetInternal@CVisual@@QEBA-AUD2D_VECTOR_3F@@XZ.c)
 *     ?NotifyVector3PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector3@@@Z @ 0x1800A32AC (-NotifyVector3PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector3@@@Z.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x1800A3F88 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?OnOuterTransformChanged@CVisual@@AEAAXXZ @ 0x1800A41E4 (-OnOuterTransformChanged@CVisual@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 */

// local variable allocation has failed, the output may be wrong!
void __fastcall CVisual::SetRelativeOffset(CVisual *this, double a2, double a3, FLOAT a4)
{
  struct D2D_VECTOR_3F v5; // [rsp+28h] [rbp-19h] BYREF
  struct D2D_VECTOR_3F v6; // [rsp+38h] [rbp-9h] BYREF

  CVisual::GetRelativeOffsetInternal(this, &v6);
  if ( v6.x != *(float *)&a2 || v6.y != *(float *)&a3 || v6.z != a4 )
  {
    v6.z = a4;
    *(_QWORD *)&v5.x = _mm_unpacklo_ps(*(__m128 *)&a2, *(__m128 *)&a3).m128_u64[0];
    v5.z = a4;
    CVisual::SetRelativeOffsetInternal(this, &v5);
    CVisual::PropagateFlags((__int64)this, 5u, 1);
    CVisual::OnOuterTransformChanged(this);
    v6.x = *(FLOAT *)&a2;
    v6.y = *(FLOAT *)&a3;
    v6.z = a4;
    CPropertyChangeResource::NotifyVector3PropertyChanged(this, 0x1Eu, (const struct D2DVector3 *)&v6);
    CResource::InvalidateAnimationSources(this, 0x1Eu);
  }
}
