/*
 * XREFs of ?Transform4DVector@CMILMatrix@@QEBA?AUD2D_VECTOR_4F@@AEBU2@@Z @ 0x180006248
 * Callers:
 *     ?GetLightPosition@ShadowHelpers@@YAJPEBVCVisualTree@@PEBVCCompositionLight@@PEAVCVisual@@PEAUD2D_VECTOR_3F@@@Z @ 0x180006070 (-GetLightPosition@ShadowHelpers@@YAJPEBVCVisualTree@@PEBVCCompositionLight@@PEAVCVisual@@PEAUD2D.c)
 *     ?UpdateCasterEntry@CProjectedShadowScene@@AEAAJPEBVCVisualTree@@PEAUCasterEntry@1@@Z @ 0x180006370 (-UpdateCasterEntry@CProjectedShadowScene@@AEAAJPEBVCVisualTree@@PEAUCasterEntry@1@@Z.c)
 *     ?PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@Z @ 0x180006990 (-PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@.c)
 *     ?GetSceneLightRealization@CCompositionPointLight@@UEBAJAEBVCMILMatrix@@PEAPEAUISpectreLightNode@@@Z @ 0x1801D0AC0 (-GetSceneLightRealization@CCompositionPointLight@@UEBAJAEBVCMILMatrix@@PEAPEAUISpectreLightNode@.c)
 *     ?GetSceneLightRealization@CCompositionSpotLight@@UEBAJAEBVCMILMatrix@@PEAPEAUISpectreLightNode@@@Z @ 0x1801D2100 (-GetSceneLightRealization@CCompositionSpotLight@@UEBAJAEBVCMILMatrix@@PEAPEAUISpectreLightNode@@.c)
 * Callees:
 *     <none>
 */

struct D2D_VECTOR_4F *__fastcall CMILMatrix::Transform4DVector(
        CMILMatrix *this,
        struct D2D_VECTOR_4F *__return_ptr retstr,
        const struct D2D_VECTOR_4F *a3)
{
  float y; // xmm4_4
  struct D2D_VECTOR_4F *result; // rax
  float z; // xmm5_4
  float w; // xmm6_4
  float x; // xmm7_4
  float v8; // xmm1_4
  float v9; // xmm3_4
  float v10; // xmm2_4
  float v11; // xmm7_4
  float v12; // xmm3_4
  float v13; // xmm1_4
  float v14; // xmm5_4
  float v15; // xmm1_4
  float v16; // xmm0_4
  float v17; // xmm4_4
  float v18; // xmm2_4
  FLOAT v19; // xmm7_4

  y = a3->y;
  result = retstr;
  z = a3->z;
  w = a3->w;
  x = a3->x;
  v8 = z * *((float *)this + 9);
  v9 = (float)(a3->x * *((float *)this + 1)) + (float)(y * *((float *)this + 5));
  retstr->x = (float)((float)((float)(y * *((float *)this + 4)) + (float)(a3->x * *(float *)this))
                    + (float)(z * *((float *)this + 8)))
            + (float)(w * *((float *)this + 12));
  v10 = x;
  v11 = x * *((float *)this + 3);
  v12 = v9 + v8;
  v13 = z;
  v14 = z * *((float *)this + 11);
  v15 = v13 * *((float *)this + 10);
  v16 = y * *((float *)this + 6);
  v17 = y * *((float *)this + 7);
  v18 = (float)(v10 * *((float *)this + 2)) + v16;
  retstr->y = v12 + (float)(w * *((float *)this + 13));
  v19 = (float)((float)(v11 + v17) + v14) + (float)(w * *((float *)this + 15));
  retstr->z = (float)(v18 + v15) + (float)(w * *((float *)this + 14));
  retstr->w = v19;
  return result;
}
