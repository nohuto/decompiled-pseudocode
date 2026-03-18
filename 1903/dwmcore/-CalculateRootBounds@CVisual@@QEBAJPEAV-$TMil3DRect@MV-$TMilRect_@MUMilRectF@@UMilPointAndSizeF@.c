/*
 * XREFs of ?CalculateRootBounds@CVisual@@QEBAJPEAV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800EA99C
 * Callers:
 *     ?ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@@Z @ 0x180066580 (-ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@@Z.c)
 *     ?SetVisualTree@CVisual@@IEAAJPEAVCVisualTree@@@Z @ 0x1800EACEC (-SetVisualTree@CVisual@@IEAAJPEAVCVisualTree@@@Z.c)
 * Callees:
 *     ?GetBoundsSafe@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180004788 (-GetBoundsSafe@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UN.c)
 *     ?IsAutomaticBoundsToLocalSpaceEnabled@CLayerVisual@@QEBA_NXZ @ 0x1800130DC (-IsAutomaticBoundsToLocalSpaceEnabled@CLayerVisual@@QEBA_NXZ.c)
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z @ 0x18006E200 (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z.c)
 *     ??$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x18006FCB0 (--$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180071C38 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?GetTransform3DEffectNoRef@CVisual@@QEBAPEAVCTransform3D@@XZ @ 0x18008CC34 (-GetTransform3DEffectNoRef@CVisual@@QEBAPEAVCTransform3D@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Intersect@?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800B4F44 (-Intersect@-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::CalculateRootBounds(CLayerVisual *this, __m128 *a2)
{
  unsigned int v3; // esi
  bool IsAutomaticBoundsToLocalSpaceEnabled; // di
  void (__fastcall *v6)(CLayerVisual *, char *, __int128 *); // rax
  __int128 v7; // xmm0
  unsigned __int64 v8; // xmm1_8
  CTransform3D *Transform3DEffectNoRef; // rax
  const struct CMILMatrix *Matrix; // rax
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  CGeometry *v14; // rcx
  signed int BoundsSafe; // eax
  __int64 v16; // rcx
  _OWORD v18[4]; // [rsp+30h] [rbp-89h] BYREF
  __int16 v19; // [rsp+70h] [rbp-49h]
  _OWORD v20[4]; // [rsp+80h] [rbp-39h] BYREF
  int v21; // [rsp+C0h] [rbp+7h]
  __int128 v22; // [rsp+D0h] [rbp+17h] BYREF
  __int128 v23; // [rsp+E0h] [rbp+27h] BYREF

  v3 = 0;
  IsAutomaticBoundsToLocalSpaceEnabled = 0;
  if ( (*(unsigned __int8 (__fastcall **)(CLayerVisual *, __int64))(*(_QWORD *)this + 48LL))(this, 91LL)
    && ((*(unsigned __int8 (__fastcall **)(CLayerVisual *))(*(_QWORD *)this + 216LL))(this) || *((_QWORD *)this + 70)) )
  {
    IsAutomaticBoundsToLocalSpaceEnabled = CLayerVisual::IsAutomaticBoundsToLocalSpaceEnabled(this);
  }
  v6 = *(void (__fastcall **)(CLayerVisual *, char *, __int128 *))(*(_QWORD *)this + 328LL);
  v22 = *(_OWORD *)((char *)this + 164);
  v6(this, (char *)this + 164, &v22);
  v7 = v22;
  v8 = _mm_unpacklo_ps((__m128)*((unsigned int *)this + 45), (__m128)*((unsigned int *)this + 46)).m128_u64[0];
  *a2 = (__m128)v22;
  a2[1].m128_u64[0] = v8;
  v23 = v7;
  Transform3DEffectNoRef = CVisual::GetTransform3DEffectNoRef(this);
  if ( Transform3DEffectNoRef )
  {
    Matrix = CTransform3D::GetMatrix(Transform3DEffectNoRef, (const struct D2D_SIZE_F *)((char *)this + 132));
    v11 = *((_OWORD *)Matrix + 1);
    v20[0] = *(_OWORD *)Matrix;
    v12 = *((_OWORD *)Matrix + 2);
    v20[1] = v11;
    v13 = *((_OWORD *)Matrix + 3);
    LODWORD(Matrix) = *((_DWORD *)Matrix + 16);
    v20[2] = v12;
    v20[3] = v13;
    v21 = (int)Matrix;
    if ( !*((_DWORD *)this + 25) || *((_DWORD *)this + 25) == 3 || IsAutomaticBoundsToLocalSpaceEnabled )
    {
      v18[0] = _xmm;
      v18[2] = 0LL;
      v18[1] = _xmm;
      v18[3] = _xmm;
      v19 = 32095;
      CMILMatrix::Multiply((CMILMatrix *)v20, (const struct CMILMatrix *)v18);
    }
    CMILMatrix::Transform3DBoundsHelper<0>((__int64)v20, a2->m128_f32, a2);
  }
  v14 = (CGeometry *)*((_QWORD *)this + 31);
  if ( v14 && (!*((_DWORD *)this + 25) || *((_DWORD *)this + 25) == 3) )
  {
    BoundsSafe = CGeometry::GetBoundsSafe(v14, (const struct D2D_SIZE_F *)((char *)this + 132), &v23);
    v3 = BoundsSafe;
    if ( BoundsSafe < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, BoundsSafe, 0x72Bu, 0LL);
    else
      TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::Intersect(
        (__int64)a2,
        &v23);
  }
  return v3;
}
