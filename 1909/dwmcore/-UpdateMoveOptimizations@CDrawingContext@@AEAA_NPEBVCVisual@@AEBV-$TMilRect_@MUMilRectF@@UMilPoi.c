/*
 * XREFs of ?UpdateMoveOptimizations@CDrawingContext@@AEAA_NPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800DDACC
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005DCD0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?IsRectEmptyOrInvalid@@YA_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18004FC88 (-IsRectEmptyOrInvalid@@YA_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquen.c)
 *     ?Release@CGdiSpriteBitmap@@UEAAKXZ @ 0x1800AC000 (-Release@CGdiSpriteBitmap@@UEAAKXZ.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     ?RemoveAt@?$DynArray@PEAUTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@$0A@@@QEAAJI@Z @ 0x1800EC85C (-RemoveAt@-$DynArray@PEAUTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@$0A@@@QEAAJI@Z.c)
 *     ?ClipRect@CDwmMetaRegion@@SAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x1801801D4 (-ClipRect@CDwmMetaRegion@@SAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqu.c)
 */

char __fastcall CDrawingContext::UpdateMoveOptimizations(__int64 a1, __int64 a2, float *a3)
{
  int v4; // ebx
  _QWORD *v6; // r14
  __int64 v7; // rdi
  float v8; // xmm0_4
  __int64 v9; // r15
  float v10; // xmm4_4
  float v11; // xmm1_4
  float v12; // xmm2_4
  float v13; // xmm3_4
  float v14; // xmm0_4
  float v15; // xmm0_4
  float v16; // xmm0_4
  float v17; // xmm3_4
  float v18; // xmm2_4
  __m128i v19; // [rsp+20h] [rbp-30h] BYREF
  __int128 v20; // [rsp+30h] [rbp-20h] BYREF

  v4 = *(_DWORD *)(a1 + 6168) - 1;
  if ( v4 >= 0 )
  {
    v6 = (_QWORD *)(a1 + 6144);
    v7 = 8LL * v4;
    do
    {
      v8 = *a3;
      v9 = *(_QWORD *)(v7 + *v6);
      v19 = _mm_loadu_si128((const __m128i *)(v9 + 32));
      v10 = *(float *)v19.m128i_i32 + *(float *)(v9 + 24);
      v11 = *(float *)&v19.m128i_i32[1] + *(float *)(v9 + 28);
      v12 = *(float *)&v19.m128i_i32[2] + *(float *)(v9 + 24);
      v13 = *(float *)&v19.m128i_i32[3] + *(float *)(v9 + 28);
      v19.m128i_i64[0] = __PAIR64__(LODWORD(v11), LODWORD(v10));
      v19.m128i_i64[1] = __PAIR64__(LODWORD(v13), LODWORD(v12));
      *((_QWORD *)&v20 + 1) = __PAIR64__(LODWORD(v13), LODWORD(v12));
      *(_QWORD *)&v20 = __PAIR64__(LODWORD(v11), LODWORD(v10));
      if ( v8 > v10 )
      {
        *(float *)v19.m128i_i32 = v8;
        v10 = v8;
      }
      v14 = a3[1];
      if ( v14 > v11 )
      {
        v19.m128i_i32[1] = (__int32)a3[1];
        v11 = v14;
      }
      v15 = a3[2];
      if ( v12 > v15 )
      {
        v19.m128i_i32[2] = (__int32)a3[2];
        v12 = v15;
      }
      v16 = a3[3];
      if ( v13 > v16 )
      {
        v19.m128i_i32[3] = (__int32)a3[3];
        v13 = v16;
      }
      if ( v12 > v10 && v13 > v11 )
      {
        CDwmMetaRegion::ClipRect(&v20, &v19);
        if ( IsRectEmptyOrInvalid((float *)&v20) )
        {
          CGdiSpriteBitmap::Release(*(CGdiSpriteBitmap **)(*v6 + v7));
          DynArray<CTelemetryTouchLatencyAnalysis::TouchUpdateInfo *,0>::RemoveAt(v6, (unsigned int)v4);
        }
        else
        {
          LODWORD(v17) = *(_DWORD *)(v9 + 28) ^ _xmm;
          LODWORD(v18) = *(_DWORD *)(v9 + 24) ^ _xmm;
          *((float *)&v20 + 1) = *((float *)&v20 + 1) + v17;
          *(float *)&v20 = *(float *)&v20 + v18;
          *((float *)&v20 + 3) = *((float *)&v20 + 3) + v17;
          *((float *)&v20 + 2) = *((float *)&v20 + 2) + v18;
          *(_OWORD *)(v9 + 32) = v20;
        }
      }
      v7 -= 8LL;
      --v4;
    }
    while ( v4 >= 0 );
  }
  return 0;
}
