/*
 * XREFs of ?GetPlaneOfVisual@ShadowHelpers@@YA?AUD2D_VECTOR_4F@@PEAVCVisual@@@Z @ 0x180259538
 * Callers:
 *     ?GetProjectionOntoVisualMatrix@ShadowHelpers@@YAJPEBVCVisualTree@@PEAVCCompositionLight@@PEAVCVisual@@PEAVCMILMatrix@@@Z @ 0x180259834 (-GetProjectionOntoVisualMatrix@ShadowHelpers@@YAJPEBVCVisualTree@@PEAVCCompositionLight@@PEAVCVi.c)
 * Callees:
 *     ?CalculatePlane@D2DVectorHelper@@YA?AUD2D_VECTOR_4F@@AEBU2@00@Z @ 0x18000BD64 (-CalculatePlane@D2DVectorHelper@@YA-AUD2D_VECTOR_4F@@AEBU2@00@Z.c)
 *     ?GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z @ 0x18008BC4C (-GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 */

struct D2D_VECTOR_4F *__fastcall ShadowHelpers::GetPlaneOfVisual(
        struct D2D_VECTOR_4F *this,
        struct D2D_VECTOR_4F *__return_ptr retstr,
        struct CVisual *a3)
{
  FLOAT v4; // xmm3_4
  FLOAT v5; // xmm1_4
  struct D2D_VECTOR_4F v6; // xmm0
  struct D2D_VECTOR_4F *result; // rax
  FLOAT v8; // [rsp+20h] [rbp-50h] BYREF
  FLOAT v9; // [rsp+24h] [rbp-4Ch] BYREF
  struct D2D_VECTOR_4F v10; // [rsp+28h] [rbp-48h] BYREF
  struct D2D_VECTOR_4F v11; // [rsp+38h] [rbp-38h] BYREF
  struct D2D_VECTOR_4F v12; // [rsp+48h] [rbp-28h] BYREF
  struct D2D_VECTOR_4F v13; // [rsp+58h] [rbp-18h] BYREF

  CVisual::GetEffectiveSize((CVisual *)retstr, &v8, &v9);
  v4 = v8;
  if ( v8 == 0.0 )
    v4 = *(float *)&FLOAT_1_0;
  v5 = v9;
  if ( v9 == 0.0 )
    v5 = *(float *)&FLOAT_1_0;
  v12.x = 0.0;
  v12.z = 0.0;
  v13.z = 0.0;
  v11 = (struct D2D_VECTOR_4F)_xmm;
  v12.w = 1.0;
  v12.y = v5;
  v13.x = v4;
  v13.y = v5;
  v13.w = 1.0;
  v6 = *D2DVectorHelper::CalculatePlane(&v10, &v11, &v12, &v13);
  result = this;
  *this = v6;
  return result;
}
