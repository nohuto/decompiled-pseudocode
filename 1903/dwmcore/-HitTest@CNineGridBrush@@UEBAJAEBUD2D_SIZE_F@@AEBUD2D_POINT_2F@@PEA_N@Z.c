/*
 * XREFs of ?HitTest@CNineGridBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x180018FF0
 * Callers:
 *     <none>
 * Callees:
 *     ?TransformRect_AxisAlignedPreserving@D2DMatrixHelper@@YAXAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@PEAU2@@Z @ 0x180011188 (-TransformRect_AxisAlignedPreserving@D2DMatrixHelper@@YAXAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@P.c)
 *     ?ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@_NPEAULayoutData@CContent@@PEAPEAVCShape@@@Z @ 0x180066F20 (-ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@_NPEAULayoutData@CContent@@PEAPEAVCShape@@@Z.c)
 *     ?IsPointInRect@@YA_NAEBUD2D_POINT_2F@@AEBUMilRectF@@@Z @ 0x1800880F0 (-IsPointInRect@@YA_NAEBUD2D_POINT_2F@@AEBUMilRectF@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CNineGridBrush::HitTest(
        CSurfaceBrush **this,
        const struct D2D_SIZE_F *a2,
        const struct D2D_POINT_2F *a3,
        bool *a4)
{
  int v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // edi
  FLOAT v11; // xmm0_4
  float v12; // xmm2_4
  float v13; // xmm1_4
  int v15; // eax
  unsigned int v16; // ecx
  struct D2D_RECT_F *v17; // r9
  struct D2D_MATRIX_3X2_F v18; // [rsp+30h] [rbp-50h] BYREF
  float v19; // [rsp+48h] [rbp-38h]
  float v20; // [rsp+4Ch] [rbp-34h]
  D2D_RECT_F v21; // [rsp+50h] [rbp-30h] BYREF
  _BYTE v22[16]; // [rsp+68h] [rbp-18h] BYREF

  *a4 = 0;
  v8 = (*((__int64 (__fastcall **)(CSurfaceBrush **, _QWORD, const struct D2D_SIZE_F *, struct D2D_MATRIX_3X2_F *))*this
        + 26))(
         this,
         0LL,
         a2,
         &v18);
  v10 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x88u, 0LL);
    return v10;
  }
  if ( IsPointInRect(a3, (const struct MilRectF *)&v18) )
  {
    *a4 = 1;
    if ( *((_BYTE *)this + 144) )
    {
      if ( (*(unsigned __int8 (__fastcall **)(CSurfaceBrush *, __int64))(*(_QWORD *)this[10] + 48LL))(this[10], 176LL) )
      {
        v15 = CSurfaceBrush::ComputeLayout(this[10], a2, 0, (struct CContent::LayoutData *)&v21, 0LL);
        v10 = v15;
        if ( v15 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x9Au, 0LL);
          return v10;
        }
        D2DMatrixHelper::TransformRect_AxisAlignedPreserving((D2DMatrixHelper *)v22, &v21, &v18, v17);
      }
      v11 = (float)(*((float *)this + 23) * *((float *)this + 22)) + v18.m11;
      v12 = *((float *)this + 29) * *((float *)this + 28);
      v18.dy = (float)(*((float *)this + 25) * *((float *)this + 24)) + v18.m12;
      v13 = *((float *)this + 27) * *((float *)this + 26);
      v18.dx = v11;
      v19 = v18.m21 - v13;
      v20 = v18.m22 - v12;
      if ( IsPointInRect(a3, (const struct MilRectF *)v18.m[2]) )
        *a4 = 0;
    }
  }
  return v10;
}
