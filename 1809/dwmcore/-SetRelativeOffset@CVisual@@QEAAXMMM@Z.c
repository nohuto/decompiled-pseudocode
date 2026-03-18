/*
 * XREFs of ?SetRelativeOffset@CVisual@@QEAAXMMM@Z @ 0x18009EC60
 * Callers:
 *     ?SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1800A23C0 (-SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?ProcessSetRelativeOffset@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETRELATIVEOFFSET@@@Z @ 0x1801B7B7C (-ProcessSetRelativeOffset@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETRELATIVEOFFSET@.c)
 * Callees:
 *     ?SetRelativeOffsetInternal@CVisual@@QEAAXUD2D_VECTOR_3F@@@Z @ 0x18009ED64 (-SetRelativeOffsetInternal@CVisual@@QEAAXUD2D_VECTOR_3F@@@Z.c)
 *     ?GetRelativeOffsetInternal@CVisual@@QEBA?AUD2D_VECTOR_3F@@XZ @ 0x18009F378 (-GetRelativeOffsetInternal@CVisual@@QEBA-AUD2D_VECTOR_3F@@XZ.c)
 *     ?NotifyVector3PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector3@@@Z @ 0x1800A5A4C (-NotifyVector3PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector3@@@Z.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x1800A5BF8 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?OnOuterTransformChanged@CVisual@@AEAAXXZ @ 0x1800A5D9C (-OnOuterTransformChanged@CVisual@@AEAAXXZ.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x1800A9420 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
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
    CVisual::PropagateFlags(this, 5LL);
    CVisual::OnOuterTransformChanged(this);
    v6.x = *(FLOAT *)&a2;
    v6.y = *(FLOAT *)&a3;
    v6.z = a4;
    CPropertyChangeResource::NotifyVector3PropertyChanged(this, 0x1Eu, (const struct D2DVector3 *)&v6);
    CResource::InvalidateAnimationSources(this, 0x1Eu);
  }
}
