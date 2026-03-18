/*
 * XREFs of ?GetBlurForBoundary@CProjectedShadow@@AEBAMW4Enum@ApproxBlurStageBoundary@@@Z @ 0x1801CA2E8
 * Callers:
 *     ?GenerateApproxBlur@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x1801C8B78 (-GenerateApproxBlur@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 *     ?GetApproxBlurStage@CProjectedShadow@@AEBA?AW4Enum@ApproxBlurStage@@XZ @ 0x1801CA270 (-GetApproxBlurStage@CProjectedShadow@@AEBA-AW4Enum@ApproxBlurStage@@XZ.c)
 *     ?GetFinalColor@CProjectedShadow@@AEBA?AU_D3DCOLORVALUE@@PEAVCDrawingContext@@@Z @ 0x1801CA7E0 (-GetFinalColor@CProjectedShadow@@AEBA-AU_D3DCOLORVALUE@@PEAVCDrawingContext@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ?GetCasterBounds@CProjectedShadowCaster@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801AD7D4 (-GetCasterBounds@CProjectedShadowCaster@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNo.c)
 */

__m128 __fastcall CProjectedShadow::GetBlurForBoundary(__int64 a1, int a2)
{
  __int128 v3; // xmm1
  int v4; // ebx
  int v5; // ebx
  float v7[2]; // [rsp+20h] [rbp-28h] BYREF
  float v8; // [rsp+28h] [rbp-20h]
  float v9; // [rsp+2Ch] [rbp-1Ch]

  CProjectedShadowCaster::GetCasterBounds(*(_QWORD *)(a1 + 72), (__int64)v7);
  v3 = LODWORD(v8);
  *(float *)&v3 = fminf(v8 - v7[0], v9 - v7[1]);
  if ( a2 )
  {
    v4 = a2 - 1;
    if ( v4 )
    {
      v5 = v4 - 1;
      if ( v5 )
      {
        if ( v5 != 1 )
          return (__m128)0LL;
        *(float *)&v3 = *(float *)&v3 * 3.0;
      }
      else
      {
        *(float *)&v3 = *(float *)&v3 + *(float *)&v3;
      }
    }
  }
  else
  {
    *(float *)&v3 = *(float *)&v3 * 0.5;
  }
  return (__m128)v3;
}
