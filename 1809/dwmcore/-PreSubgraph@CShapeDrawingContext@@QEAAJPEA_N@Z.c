/*
 * XREFs of ?PreSubgraph@CShapeDrawingContext@@QEAAJPEA_N@Z @ 0x1802236D4
 * Callers:
 *     ??$Walk@VCShapeDrawingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeDrawingContext@@@Z @ 0x180222A78 (--$Walk@VCShapeDrawingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeDrawingCont.c)
 * Callees:
 *     ?DoesIntersectUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800AA600 (-DoesIntersectUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800DC0B0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?CreateRenderTasks@CSpriteVectorShape@@QEAAJPEAVCShapeDrawingContext@@@Z @ 0x1801B32A8 (-CreateRenderTasks@CSpriteVectorShape@@QEAAJPEAVCShapeDrawingContext@@@Z.c)
 *     ??$_Emplace_reallocate@AEBVCShapeRenderTask@@@?$vector@VCShapeRenderTask@@V?$allocator@VCShapeRenderTask@@@std@@@std@@QEAAPEAVCShapeRenderTask@@QEAV2@AEBV2@@Z @ 0x180222D2C (--$_Emplace_reallocate@AEBVCShapeRenderTask@@@-$vector@VCShapeRenderTask@@V-$allocator@VCShapeRe.c)
 *     ?GetShapeToWorldTransform@CShapeDrawingContext@@AEAAAEBVCMILMatrix@@XZ @ 0x18022320C (-GetShapeToWorldTransform@CShapeDrawingContext@@AEAAAEBVCMILMatrix@@XZ.c)
 *     ?Push@CMatrixStack2D@@QEAAJAEBUD2D_MATRIX_3X2_F@@@Z @ 0x180234408 (-Push@CMatrixStack2D@@QEAAJAEBUD2D_MATRIX_3X2_F@@@Z.c)
 */

__int64 __fastcall CShapeDrawingContext::PreSubgraph(CShapeDrawingContext *this, bool *a2)
{
  CSpriteVectorShape *v3; // rsi
  unsigned int v5; // edi
  bool DoesIntersectUnsafe; // r12
  __int64 *v7; // r14
  char v8; // r13
  CMILMatrix *ShapeToWorldTransform; // rax
  unsigned __int64 v10; // xmm0_8
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // xmm1_8
  __int64 v18; // rdx
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  int RenderTasks; // eax
  __int64 v22; // rcx
  __int128 v24; // [rsp+30h] [rbp-49h] BYREF
  __m256i v25; // [rsp+40h] [rbp-39h] BYREF
  __int128 v26; // [rsp+60h] [rbp-19h]
  __int64 v27; // [rsp+70h] [rbp-9h]
  struct D2D_MATRIX_3X2_F v28; // [rsp+78h] [rbp-1h] BYREF

  *a2 = 1;
  v3 = (CSpriteVectorShape *)*((_QWORD *)this + 1);
  v5 = 0;
  DoesIntersectUnsafe = 0;
  v7 = (__int64 *)*((_QWORD *)v3 + 7);
  v8 = (*(__int64 (__fastcall **)(CSpriteVectorShape *, __int64))(*(_QWORD *)v3 + 48LL))(v3, 143LL);
  if ( v8 )
  {
    *a2 = 0;
    v24 = *((_OWORD *)v3 + 4);
    if ( *((_BYTE *)v3 + 81) )
    {
      ShapeToWorldTransform = CShapeDrawingContext::GetShapeToWorldTransform(this);
      CMILMatrix::Transform2DBoundsHelper<0>(ShapeToWorldTransform, (__int64)&v24, (float *)&v24);
      DoesIntersectUnsafe = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe(
                              (float *)&v24,
                              (float *)this + 88);
    }
  }
  if ( v7 )
  {
    if ( *((_QWORD *)this + 2) )
      v10 = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
    else
      v10 = *((_QWORD *)this + 43);
    v11 = *v7;
    *(_QWORD *)&v24 = v10;
    (*(void (__fastcall **)(__int64 *, __int128 *, struct D2D_MATRIX_3X2_F *))(v11 + 176))(v7, &v24, &v28);
    v12 = CMatrixStack2D::Push((CShapeDrawingContext *)((char *)this + 64), &v28);
    v5 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x137u);
      return v5;
    }
    *((_BYTE *)this + 536) = 1;
    if ( !v8 )
      *((_BYTE *)this + 537) = 1;
  }
  if ( DoesIntersectUnsafe )
  {
    if ( *((_BYTE *)this + 536) )
    {
      v14 = (unsigned int)(*((_DWORD *)this + 22) - 1);
      v25.m256i_i32[0] = 1;
      v15 = 3 * v14;
      v16 = *((_QWORD *)this + 8);
      v17 = *(_QWORD *)(v16 + 8 * v15 + 16);
      v18 = *((_QWORD *)this + 65);
      *(_OWORD *)&v25.m256i_u64[1] = *(_OWORD *)(v16 + 8 * v15);
      v25.m256i_i64[3] = v17;
      if ( *((_QWORD *)this + 66) == v18 )
      {
        std::vector<CShapeRenderTask>::_Emplace_reallocate<CShapeRenderTask const &>(
          (__int64 *)this + 64,
          v18,
          (__int64)&v25);
      }
      else
      {
        v19 = *(_OWORD *)&v25.m256i_u64[2];
        *(_OWORD *)v18 = *(_OWORD *)v25.m256i_i8;
        v20 = v26;
        *(_OWORD *)(v18 + 16) = v19;
        *(_QWORD *)&v19 = v27;
        *(_OWORD *)(v18 + 32) = v20;
        *(_QWORD *)(v18 + 48) = v19;
        *((_QWORD *)this + 65) += 56LL;
      }
      *((_BYTE *)this + 536) = 0;
    }
    RenderTasks = CSpriteVectorShape::CreateRenderTasks(v3, this);
    v5 = RenderTasks;
    if ( RenderTasks < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, RenderTasks, 0x14Bu);
  }
  return v5;
}
