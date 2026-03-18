/*
 * XREFs of ?CollectOcclusionHelper@CWindowNode@@AEAAJPEAVCResource@@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@PEAVCOcclusionContext@@PEBVCShape@@_N@Z @ 0x18021927C
 * Callers:
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x18005A560 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionIn.c)
 * Callees:
 *     ?DrawClippedImage@COcclusionContext@@QEAAJPEAVCResource@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x180019604 (-DrawClippedImage@COcclusionContext@@QEAAJPEAVCResource@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAn.c)
 *     ?DrawImage@COcclusionContext@@QEAAJPEAVCResource@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18002E514 (-DrawImage@COcclusionContext@@QEAAJPEAVCResource@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     ?IntersectWithMaximizedClip@CWindowNode@@AEBAXAEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1802195B4 (-IntersectWithMaximizedClip@CWindowNode@@AEBAXAEAV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CM.c)
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
  int v11; // r9d
  int v12; // edx
  int v13; // eax
  int v14; // r8d
  float v15; // xmm1_4
  __m128i v16; // xmm0
  float v17; // xmm1_4
  signed int v18; // eax
  __int64 v19; // rcx
  signed int v20; // eax
  __int64 v21; // rcx
  float v23[4]; // [rsp+30h] [rbp-58h] BYREF

  v9 = 0;
  v11 = *a3 + a1[211];
  v12 = a3[1] + a1[213];
  v13 = a3[3] - a1[214];
  *a3 = v11;
  v14 = a3[2] - a1[212];
  a3[1] = v12;
  if ( v14 <= v11 )
    v14 = v11;
  a3[2] = v14;
  if ( v13 <= v12 )
    v13 = v12;
  a3[3] = v13;
  CWindowNode::IntersectWithMaximizedClip(a1, a3);
  v15 = (float)a3[1];
  v23[0] = (float)*a3;
  v16 = _mm_cvtsi32_si128(a3[2]);
  v23[1] = v15;
  v17 = (float)a3[3];
  LODWORD(v23[2]) = _mm_cvtepi32_ps(v16).m128_u32[0];
  v23[3] = v17;
  if ( a6 )
  {
    v18 = COcclusionContext::DrawImage(a4, a2, (__int64)v23, a1[215]);
    v9 = v18;
    if ( v18 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x737u, 0LL);
  }
  else if ( a5 )
  {
    v20 = COcclusionContext::DrawClippedImage(a4, a2, v23, a5, a1[215]);
    v9 = v20;
    if ( v20 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0x73Eu, 0LL);
  }
  return v9;
}
