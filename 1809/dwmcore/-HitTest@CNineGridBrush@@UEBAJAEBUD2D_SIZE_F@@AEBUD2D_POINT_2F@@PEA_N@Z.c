/*
 * XREFs of ?HitTest@CNineGridBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x1801AA600
 * Callers:
 *     <none>
 * Callees:
 *     ?TransformRect_AxisAlignedPreserving@D2DMatrixHelper@@YAXAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@PEAU2@@Z @ 0x18000E0C8 (-TransformRect_AxisAlignedPreserving@D2DMatrixHelper@@YAXAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@P.c)
 *     ?IsPointInRect@@YA_NAEBUD2D_POINT_2F@@AEBUMilRectF@@@Z @ 0x18002D144 (-IsPointInRect@@YA_NAEBUD2D_POINT_2F@@AEBUMilRectF@@@Z.c)
 *     ?ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@_NPEAULayoutData@CContent@@PEAPEAVCShape@@@Z @ 0x1800457F0 (-ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@_NPEAULayoutData@CContent@@PEAPEAVCShape@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CNineGridBrush::HitTest(
        CSurfaceBrush **this,
        const struct D2D_SIZE_F *a2,
        const struct D2D_POINT_2F *a3,
        bool *a4)
{
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // edi
  int v11; // eax
  __int64 v12; // rcx
  struct D2D_RECT_F *v13; // r9
  FLOAT v14; // xmm0_4
  float v15; // xmm2_4
  float v16; // xmm1_4
  struct D2D_MATRIX_3X2_F v18; // [rsp+30h] [rbp-50h] BYREF
  float v19; // [rsp+48h] [rbp-38h]
  float v20; // [rsp+4Ch] [rbp-34h]
  D2D_RECT_F v21; // [rsp+50h] [rbp-30h] BYREF
  _BYTE v22[16]; // [rsp+68h] [rbp-18h] BYREF

  *a4 = 0;
  v8 = (*((__int64 (__fastcall **)(CSurfaceBrush **, _QWORD, const struct D2D_SIZE_F *, struct D2D_MATRIX_3X2_F *))*this
        + 21))(
         this,
         0LL,
         a2,
         &v18);
  v10 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x76u);
    return v10;
  }
  if ( IsPointInRect(a3, (const struct MilRectF *)&v18) )
  {
    *a4 = 1;
    if ( *((_BYTE *)this + 112) )
    {
      if ( (*(unsigned __int8 (__fastcall **)(CSurfaceBrush *, __int64))(*(_QWORD *)this[9] + 48LL))(this[9], 145LL) )
      {
        v11 = CSurfaceBrush::ComputeLayout(this[9], a2, 0, (struct CContent::LayoutData *)&v21, 0LL);
        v10 = v11;
        if ( v11 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x88u);
          return v10;
        }
        D2DMatrixHelper::TransformRect_AxisAlignedPreserving((D2DMatrixHelper *)v22, &v21, &v18, v13);
      }
      v14 = (float)(*((float *)this + 21) * *((float *)this + 20)) + v18.m11;
      v15 = *((float *)this + 27) * *((float *)this + 26);
      v18.dy = (float)(*((float *)this + 23) * *((float *)this + 22)) + v18.m12;
      v16 = *((float *)this + 25) * *((float *)this + 24);
      v18.dx = v14;
      v19 = v18.m21 - v16;
      v20 = v18.m22 - v15;
      if ( IsPointInRect(a3, (const struct MilRectF *)v18.m[2]) )
        *a4 = 0;
    }
  }
  return v10;
}
