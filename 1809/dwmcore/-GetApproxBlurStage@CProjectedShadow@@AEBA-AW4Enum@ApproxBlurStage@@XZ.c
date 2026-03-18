/*
 * XREFs of ?GetApproxBlurStage@CProjectedShadow@@AEBA?AW4Enum@ApproxBlurStage@@XZ @ 0x1801CA270
 * Callers:
 *     ?GenerateApproxBlur@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x1801C8B78 (-GenerateApproxBlur@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 *     ?GetFinalColor@CProjectedShadow@@AEBA?AU_D3DCOLORVALUE@@PEAVCDrawingContext@@@Z @ 0x1801CA7E0 (-GetFinalColor@CProjectedShadow@@AEBA-AU_D3DCOLORVALUE@@PEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?GetBlurForBoundary@CProjectedShadow@@AEBAMW4Enum@ApproxBlurStageBoundary@@@Z @ 0x1801CA2E8 (-GetBlurForBoundary@CProjectedShadow@@AEBAMW4Enum@ApproxBlurStageBoundary@@@Z.c)
 */

__int64 __fastcall CProjectedShadow::GetApproxBlurStage(__int64 a1)
{
  double BlurForBoundary; // xmm0_8
  float v3; // xmm6_4
  double v4; // xmm0_8
  float v5; // xmm7_4
  double v6; // xmm0_8
  float v7; // xmm1_4

  BlurForBoundary = CProjectedShadow::GetBlurForBoundary(a1, 1LL);
  v3 = *(float *)&BlurForBoundary;
  v4 = CProjectedShadow::GetBlurForBoundary(a1, 2LL);
  v5 = *(float *)&v4;
  v6 = CProjectedShadow::GetBlurForBoundary(a1, 3LL);
  v7 = *(float *)(a1 + 96);
  if ( v7 >= *(float *)&v6 )
    return 3LL;
  if ( v7 < v5 )
    return v7 >= v3;
  return 2LL;
}
