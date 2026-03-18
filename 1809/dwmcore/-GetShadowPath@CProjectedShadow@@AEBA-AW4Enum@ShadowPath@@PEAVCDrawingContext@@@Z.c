/*
 * XREFs of ?GetShadowPath@CProjectedShadow@@AEBA?AW4Enum@ShadowPath@@PEAVCDrawingContext@@@Z @ 0x1801CB0F0
 * Callers:
 *     ?GetCasterShadowInputBrush@CProjectedShadow@@AEBAJPEAVCDrawingContext@@PEAPEAVCDrawListBrush@@@Z @ 0x1801CA404 (-GetCasterShadowInputBrush@CProjectedShadow@@AEBAJPEAVCDrawingContext@@PEAPEAVCDrawListBrush@@@Z.c)
 *     ?GetFinalColor@CProjectedShadow@@AEBA?AU_D3DCOLORVALUE@@PEAVCDrawingContext@@@Z @ 0x1801CA7E0 (-GetFinalColor@CProjectedShadow@@AEBA-AU_D3DCOLORVALUE@@PEAVCDrawingContext@@@Z.c)
 *     ?PrepareForDrawing@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x1801CBDC0 (-PrepareForDrawing@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?GetCasterBounds@CProjectedShadowCaster@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801AD7D4 (-GetCasterBounds@CProjectedShadowCaster@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNo.c)
 *     ?IsRectangular@CProjectedShadowCaster@@QEAA_NXZ @ 0x1801ADA80 (-IsRectangular@CProjectedShadowCaster@@QEAA_NXZ.c)
 *     ?IsShadowAxisAlignedRectToReceiver@CProjectedShadow@@AEBAJPEAVCDrawingContext@@PEA_N@Z @ 0x1801CB9B8 (-IsShadowAxisAlignedRectToReceiver@CProjectedShadow@@AEBAJPEAVCDrawingContext@@PEA_N@Z.c)
 */

__int64 __fastcall CProjectedShadow::GetShadowPath(__int64 a1, struct CDrawingContext *a2)
{
  bool v5; // [rsp+20h] [rbp-28h] BYREF
  float v6[4]; // [rsp+28h] [rbp-20h] BYREF

  if ( CProjectedShadowCaster::IsRectangular(*(CProjectedShadowCaster **)(a1 + 72)) )
  {
    CProjectedShadowCaster::GetCasterBounds(*(_QWORD *)(a1 + 72), (__int64)v6);
    if ( (float)(fminf(v6[2] - v6[0], v6[3] - v6[1]) * 0.5) >= *(float *)(a1 + 96) )
      return 1LL;
  }
  if ( (int)CProjectedShadow::IsShadowAxisAlignedRectToReceiver((CProjectedShadow *)a1, a2, &v5) >= 0
    && v5
    && *((_BYTE *)a2 + 6351)
    && (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 88) + 88LL) + 184LL))(*(_QWORD *)(*(_QWORD *)(a1 + 88) + 88LL)) == 1 )
  {
    return 2LL;
  }
  return 0LL;
}
