/*
 * XREFs of ?GetPlaneOfVisual@CProjectedShadow@@CA?AUD2D_VECTOR_4F@@PEAVCVisual@@@Z @ 0x1801CACB0
 * Callers:
 *     ?ProjectOntoAndLocalize@CProjectedShadow@@AEBAJPEAVCDrawingContext@@PEAVCVisual@@1PEAVCCompositionLight@@PEAVCMILMatrix@@@Z @ 0x1801CC0A4 (-ProjectOntoAndLocalize@CProjectedShadow@@AEBAJPEAVCDrawingContext@@PEAVCVisual@@1PEAVCCompositi.c)
 * Callees:
 *     ?GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z @ 0x18002AF70 (-GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ?CalculatePlane@D2DVectorHelper@@YA?AUD2D_VECTOR_4F@@AEBU2@00@Z @ 0x1801BE3E8 (-CalculatePlane@D2DVectorHelper@@YA-AUD2D_VECTOR_4F@@AEBU2@00@Z.c)
 */

struct D2D_VECTOR_4F *__fastcall CProjectedShadow::GetPlaneOfVisual(
        struct D2D_VECTOR_4F *__return_ptr retstr,
        struct CVisual *a2)
{
  FLOAT v3; // xmm3_4
  FLOAT v4; // xmm1_4
  struct D2D_VECTOR_4F v5; // xmm0
  struct D2D_VECTOR_4F *result; // rax
  FLOAT v7; // [rsp+20h] [rbp-50h] BYREF
  FLOAT v8; // [rsp+24h] [rbp-4Ch] BYREF
  struct D2D_VECTOR_4F v9; // [rsp+28h] [rbp-48h] BYREF
  struct D2D_VECTOR_4F v10; // [rsp+38h] [rbp-38h] BYREF
  struct D2D_VECTOR_4F v11; // [rsp+48h] [rbp-28h] BYREF
  struct D2D_VECTOR_4F v12; // [rsp+58h] [rbp-18h] BYREF

  CVisual::GetEffectiveSize(a2, &v7, &v8);
  v3 = v7;
  if ( v7 == 0.0 )
    v3 = FLOAT_1_0;
  v4 = v8;
  if ( v8 == 0.0 )
    v4 = FLOAT_1_0;
  v11.x = 0.0;
  v11.z = 0.0;
  v12.z = 0.0;
  v10 = (struct D2D_VECTOR_4F)_xmm;
  v11.w = 1.0;
  v11.y = v4;
  v12.x = v3;
  v12.y = v4;
  v12.w = 1.0;
  v5 = *D2DVectorHelper::CalculatePlane(&v9, &v10, &v11, &v12);
  result = retstr;
  *retstr = v5;
  return result;
}
