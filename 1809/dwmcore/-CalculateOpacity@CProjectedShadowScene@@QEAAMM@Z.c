/*
 * XREFs of ?CalculateOpacity@CProjectedShadowScene@@QEAAMM@Z @ 0x1801AFAB8
 * Callers:
 *     ?UpdateBlurRadiusAndOpacity@CProjectedShadow@@AEAAXPEAVCDrawingContext@@@Z @ 0x1801CC680 (-UpdateBlurRadiusAndOpacity@CProjectedShadow@@AEAAXPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     <none>
 */

float __fastcall CProjectedShadowScene::CalculateOpacity(CProjectedShadowScene *this, float a2)
{
  float v2; // xmm0_4
  float v5; // xmm1_4

  v2 = *((float *)this + 28);
  if ( v2 == 0.0 )
    return fminf(*((float *)this + 27), *((float *)this + 25));
  v5 = fmaxf(*((float *)this + 27), 1.0 - (float)(a2 / v2));
  return fminf(*((float *)this + 25), v5);
}
