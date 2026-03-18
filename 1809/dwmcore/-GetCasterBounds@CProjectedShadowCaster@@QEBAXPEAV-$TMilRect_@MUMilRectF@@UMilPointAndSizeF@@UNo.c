/*
 * XREFs of ?GetCasterBounds@CProjectedShadowCaster@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801AD7D4
 * Callers:
 *     ?CalculateBounds@CProjectedShadow@@AEBAJPEAVCDrawingContext@@MPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801C8660 (-CalculateBounds@CProjectedShadow@@AEBAJPEAVCDrawingContext@@MPEAV-$TMilRect_@MUMilRectF@@UMilPo.c)
 *     ?GetBlurForBoundary@CProjectedShadow@@AEBAMW4Enum@ApproxBlurStageBoundary@@@Z @ 0x1801CA2E8 (-GetBlurForBoundary@CProjectedShadow@@AEBAMW4Enum@ApproxBlurStageBoundary@@@Z.c)
 *     ?GetCasterShadowInputBrush@CProjectedShadow@@AEBAJPEAVCDrawingContext@@PEAPEAVCDrawListBrush@@@Z @ 0x1801CA404 (-GetCasterShadowInputBrush@CProjectedShadow@@AEBAJPEAVCDrawingContext@@PEAPEAVCDrawListBrush@@@Z.c)
 *     ?GetShadowPath@CProjectedShadow@@AEBA?AW4Enum@ShadowPath@@PEAVCDrawingContext@@@Z @ 0x1801CB0F0 (-GetShadowPath@CProjectedShadow@@AEBA-AW4Enum@ShadowPath@@PEAVCDrawingContext@@@Z.c)
 *     ?IsReadyToDraw@CProjectedShadow@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x1801CB870 (-IsReadyToDraw@CProjectedShadow@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ?TryGetAxisAlignedRectangle@CGeometry@@QEAA_NPEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180199D8C (-TryGetAxisAlignedRectangle@CGeometry@@QEAA_NPEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 */

char __fastcall CProjectedShadowCaster::GetCasterBounds(__int64 a1, __int64 a2)
{
  const struct D2D_SIZE_F *v3; // rdx
  float v4; // xmm1_4
  __int64 v5; // rax
  CGeometry *v6; // rcx
  float v7; // xmm0_4
  float v8; // xmm1_4
  float v9; // xmm1_4
  float v10; // xmm2_4
  __int128 v12; // [rsp+20h] [rbp-28h] BYREF

  *(_QWORD *)&v12 = 0LL;
  v3 = (const struct D2D_SIZE_F *)(*(_QWORD *)(a1 + 56) + 132LL);
  v4 = *(float *)(*(_QWORD *)(a1 + 56) + 136LL) + 0.0;
  *((float *)&v12 + 2) = v3->width + 0.0;
  *((float *)&v12 + 3) = v4;
  *(_OWORD *)a2 = v12;
  v5 = *(_QWORD *)(a1 + 56);
  v6 = *(CGeometry **)(v5 + 248);
  if ( v6 )
  {
    LOBYTE(v5) = CGeometry::TryGetAxisAlignedRectangle(v6, v3, &v12);
    if ( (_BYTE)v5 )
    {
      if ( *(float *)&v12 > *(float *)a2 )
        *(_DWORD *)a2 = v12;
      if ( *((float *)&v12 + 1) > *(float *)(a2 + 4) )
        *(_DWORD *)(a2 + 4) = DWORD1(v12);
      v7 = *(float *)(a2 + 8);
      v8 = *((float *)&v12 + 2);
      if ( v7 > *((float *)&v12 + 2) )
      {
        *(_DWORD *)(a2 + 8) = DWORD2(v12);
        v7 = v8;
      }
      v9 = *(float *)(a2 + 12);
      v10 = *((float *)&v12 + 3);
      if ( v9 > *((float *)&v12 + 3) )
      {
        *(_DWORD *)(a2 + 12) = HIDWORD(v12);
        v9 = v10;
        v7 = *(float *)(a2 + 8);
      }
      if ( v7 <= *(float *)a2 || v9 <= *(float *)(a2 + 4) )
      {
        *(_DWORD *)(a2 + 12) = 0;
        *(_DWORD *)(a2 + 8) = 0;
        *(_DWORD *)(a2 + 4) = 0;
        *(_DWORD *)a2 = 0;
      }
    }
  }
  return v5;
}
