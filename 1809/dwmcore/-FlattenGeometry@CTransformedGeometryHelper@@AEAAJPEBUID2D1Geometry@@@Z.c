/*
 * XREFs of ?FlattenGeometry@CTransformedGeometryHelper@@AEAAJPEBUID2D1Geometry@@@Z @ 0x18021FF78
 * Callers:
 *     ?GetD2DGeometry@CTransformedGeometryHelper@@AEAAJPEBUID2D1Geometry@@PEAPEAU2@@Z @ 0x180220200 (-GetD2DGeometry@CTransformedGeometryHelper@@AEAAJPEBUID2D1Geometry@@PEAPEAU2@@Z.c)
 * Callees:
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800288A0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?IsInfinite@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18002F61C (-IsInfinite@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z @ 0x1800DC524 (-Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     sqrtf_0 @ 0x1800F004B (sqrtf_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTransformedGeometryHelper::FlattenGeometry(CMILMatrix **this, const struct ID2D1Geometry *a2)
{
  unsigned int v2; // edi
  float left; // xmm11_4
  float top; // xmm10_4
  float right; // xmm13_4
  float bottom; // xmm12_4
  float v9; // xmm2_4
  float v10; // xmm1_4
  float v11; // xmm3_4
  float v12; // xmm4_4
  float v13; // xmm9_4
  float v14; // xmm8_4
  float v15; // xmm11_4
  int v16; // eax
  __int64 v17; // rcx
  FLOAT v19; // [rsp+38h] [rbp-89h] BYREF
  FLOAT v20; // [rsp+3Ch] [rbp-85h]
  float v21; // [rsp+40h] [rbp-81h]
  float v22; // [rsp+44h] [rbp-7Dh]
  FLOAT v23; // [rsp+48h] [rbp-79h]
  FLOAT v24; // [rsp+4Ch] [rbp-75h]
  float v25; // [rsp+50h] [rbp-71h]
  float v26; // [rsp+54h] [rbp-6Dh]
  struct D2D_RECT_F v27; // [rsp+58h] [rbp-69h] BYREF
  struct D2D_RECT_F v28; // [rsp+68h] [rbp-59h] BYREF

  v2 = 0;
  if ( this[3] )
  {
    v28 = (struct D2D_RECT_F)0LL;
    (*(void (__fastcall **)(const struct ID2D1Geometry *, _QWORD, struct D2D_RECT_F *))(*(_QWORD *)a2 + 32LL))(
      a2,
      0LL,
      &v28);
    left = v28.left;
    top = v28.top;
    right = v28.right;
    bottom = v28.bottom;
    v27 = v28;
    if ( IsEmpty(&v27) )
      return v2;
    CMILMatrix::Transform2DRectToPerspective(this[3], (const struct MilRectF *)&v27, (struct MilPoint2F *const)&v19);
    v9 = v19;
    v10 = v20;
    v11 = v23;
    v27.left = v19;
    v27.top = v20;
    v27.right = v23;
    v27.bottom = v24;
    if ( IsEmpty(&v27) || TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsInfinite(&v27.left) )
      return v2;
    v13 = v22 - v26;
    v14 = v21 - v25;
    v15 = left - right;
    sqrtf_0((float)((float)(v10 - v12) * (float)(v10 - v12)) + (float)((float)(v9 - v11) * (float)(v9 - v11)));
    sqrtf_0((float)((float)(top - bottom) * (float)(top - bottom)) + (float)(v15 * v15));
    sqrtf_0((float)(v13 * v13) + (float)(v14 * v14));
    sqrtf_0((float)(v15 * v15) + (float)((float)(bottom - top) * (float)(bottom - top)));
  }
  v16 = (*(__int64 (__fastcall **)(const struct ID2D1Geometry *, __int64))(*(_QWORD *)a2 + 72LL))(a2, 1LL);
  v2 = v16;
  if ( v16 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0xA2u);
  return v2;
}
