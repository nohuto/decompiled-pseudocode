/*
 * XREFs of ?DrawImageResource_TileMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NPEAVCImageSource@@MAEBUMilPoint2F@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18005BA70
 * Callers:
 *     ?TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryBuilder@@_NIV?$span@$$CBE$0?0@gsl@@PEA_N@Z @ 0x1800BC560 (-TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawLi.c)
 * Callees:
 *     ?DrawImageResource_FillMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NPEAVCImageSource@@PEBUD2D_RECT_F@@4M4@Z @ 0x18005C00C (-DrawImageResource_FillMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEnt_ea_18005C00C.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     fmodf_0 @ 0x1800F001B (fmodf_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderData::DrawImageResource_TileMode(
        CRenderData *this,
        struct CDrawingContext *a2,
        struct CDrawListEntryBuilder *a3,
        bool a4,
        struct CImageSource *a5,
        float a6,
        float *a7,
        float *a8)
{
  int v11; // eax
  unsigned int v12; // ecx
  unsigned int v13; // ebx
  float right; // xmm11_4
  float bottom; // xmm9_4
  float v16; // xmm0_4
  float v17; // xmm10_4
  float v18; // xmm0_4
  float v19; // xmm8_4
  float v20; // xmm13_4
  float v21; // xmm1_4
  float v22; // xmm12_4
  float v23; // xmm1_4
  float v24; // xmm7_4
  float v25; // xmm6_4
  float v26; // xmm2_4
  float v27; // xmm3_4
  float v28; // xmm1_4
  bool v29; // zf
  float v30; // xmm1_4
  float v31; // xmm0_4
  float v32; // xmm0_4
  float v33; // xmm2_4
  float v34; // xmm3_4
  float v35; // xmm2_4
  int v36; // eax
  unsigned int v37; // ecx
  float v38; // xmm0_4
  float v39; // xmm0_4
  struct D2D_RECT_F v42; // [rsp+58h] [rbp-A8h] BYREF
  struct D2D_RECT_F v43; // [rsp+68h] [rbp-98h] BYREF
  struct D2D_RECT_F v44; // [rsp+78h] [rbp-88h] BYREF
  struct D2D_RECT_F v45; // [rsp+88h] [rbp-78h] BYREF

  v11 = (*(__int64 (__fastcall **)(char *, _QWORD, _QWORD, struct D2D_RECT_F *))(*((_QWORD *)a5 + 1) + 120LL))(
          (char *)a5 + 8,
          0LL,
          0LL,
          &v45);
  v13 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x397u);
  }
  else
  {
    right = v45.right;
    bottom = v45.bottom;
    v42 = v45;
    v43 = v45;
    v16 = fmodf_0(*a7, v45.right);
    v17 = v16;
    if ( v16 < 0.0 )
      v17 = v16 + right;
    v18 = fmodf_0(a7[1], bottom);
    v19 = v18;
    if ( v18 < 0.0 )
      v19 = v18 + bottom;
    v20 = right - v17;
    v21 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(right - v17)) & _xmm);
    if ( v21 < 0.0000011920929 )
      v20 = right;
    v22 = bottom - v19;
    v23 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(bottom - v19)) & _xmm);
    if ( v23 < 0.0000011920929 )
      v22 = bottom;
    v24 = a8[1];
    if ( a8[3] > v24 )
    {
      while ( 1 )
      {
        v25 = *a8;
        v26 = a8[2];
        if ( v26 > *a8 )
          break;
LABEL_29:
        if ( v24 == a8[1] )
          v39 = v22;
        else
          v39 = bottom;
        v24 = v24 + v39;
        if ( a8[3] <= v24 )
          return v13;
      }
      v27 = *a8;
      while ( 1 )
      {
        v44.left = v25;
        v44.top = v24;
        if ( v25 == v27 )
          v28 = v20;
        else
          v28 = right;
        v29 = v24 == a8[1];
        v30 = v28 + v25;
        v44.right = v30;
        if ( v29 )
          v31 = v22;
        else
          v31 = bottom;
        v32 = v31 + v24;
        v44.bottom = v32;
        if ( v26 <= v30 )
        {
          v44.right = v26;
          v30 = v26;
        }
        v33 = a8[3];
        if ( v33 <= v32 )
        {
          v44.bottom = a8[3];
          v32 = v33;
        }
        v34 = v25 == v27 ? v17 : 0.0;
        v29 = v24 == a8[1];
        v42.left = v34;
        v35 = v29 ? v19 : 0.0;
        v42.top = v35;
        v42.right = (float)(v30 - v25) + v34;
        v42.bottom = (float)(v32 - v24) + v35;
        v36 = CRenderData::DrawImageResource_FillMode(this, a2, a3, a4, a5, &v42, &v44, a6, &v43);
        v13 = v36;
        if ( v36 < 0 )
          break;
        v27 = *a8;
        if ( v25 == *a8 )
          v38 = v20;
        else
          v38 = right;
        v26 = a8[2];
        v25 = v25 + v38;
        if ( v26 <= v25 )
          goto LABEL_29;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v37, 0LL, 0, v36, 0x3E2u);
    }
  }
  return v13;
}
