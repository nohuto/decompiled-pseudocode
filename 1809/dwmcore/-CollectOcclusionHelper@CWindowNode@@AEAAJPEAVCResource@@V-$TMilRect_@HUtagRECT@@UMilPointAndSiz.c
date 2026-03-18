/*
 * XREFs of ?CollectOcclusionHelper@CWindowNode@@AEAAJPEAVCResource@@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@PEAVCOcclusionContext@@PEBVCShape@@_N@Z @ 0x1801B93D8
 * Callers:
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x1800B0960 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionIn.c)
 * Callees:
 *     ?DrawClippedImage@COcclusionContext@@QEAAJPEAVCResource@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x180019B9C (-DrawClippedImage@COcclusionContext@@QEAAJPEAVCResource@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAn.c)
 *     ?DrawImage@COcclusionContext@@QEAAJPEAVCResource@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18006F8F0 (-DrawImage@COcclusionContext@@QEAAJPEAVCResource@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ?IntersectWithMaximizedClip@CWindowNode@@AEBAXAEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1801B9864 (-IntersectWithMaximizedClip@CWindowNode@@AEBAXAEAV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CM.c)
 */

__int64 __fastcall CWindowNode::CollectOcclusionHelper(
        _DWORD *a1,
        __int64 a2,
        int *a3,
        __int64 a4,
        __int64 a5,
        char a6)
{
  unsigned int v9; // edi
  int v10; // r9d
  int v12; // eax
  int v13; // r8d
  int v14; // edx
  int v15; // eax
  float v16; // xmm1_4
  __m128i v17; // xmm0
  float v18; // xmm1_4
  int v19; // eax
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rcx
  float v24[4]; // [rsp+30h] [rbp-58h] BYREF

  v9 = 0;
  v10 = *a3 + a1[215];
  v12 = a3[3];
  *a3 = v10;
  v13 = a3[2] - a1[216];
  a3[2] = v13;
  v14 = a3[1] + a1[217];
  a3[1] = v14;
  v15 = v12 - a1[218];
  if ( v13 <= v10 )
    v13 = v10;
  a3[2] = v13;
  if ( v15 <= v14 )
    v15 = v14;
  a3[3] = v15;
  CWindowNode::IntersectWithMaximizedClip(a1, a3);
  v16 = (float)a3[1];
  v24[0] = (float)*a3;
  v17 = _mm_cvtsi32_si128(a3[2]);
  v24[1] = v16;
  v18 = (float)a3[3];
  LODWORD(v24[2]) = _mm_cvtepi32_ps(v17).m128_u32[0];
  v24[3] = v18;
  if ( a6 )
  {
    v19 = COcclusionContext::DrawImage(a4, a2, (__int64)v24, a1[219]);
    v9 = v19;
    if ( v19 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x77Eu);
  }
  else if ( a5 )
  {
    v21 = COcclusionContext::DrawClippedImage(a4, a2, v24, a5, a1[219]);
    v9 = v21;
    if ( v21 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0x785u);
  }
  return v9;
}
