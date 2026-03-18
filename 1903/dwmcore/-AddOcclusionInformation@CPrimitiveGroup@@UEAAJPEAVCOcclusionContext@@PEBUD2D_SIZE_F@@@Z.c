/*
 * XREFs of ?AddOcclusionInformation@CPrimitiveGroup@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x18007AA20
 * Callers:
 *     <none>
 * Callees:
 *     ?CollectRectangleForOcclusion@COcclusionContext@@AEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEAV2@@Z @ 0x18002E650 (-CollectRectangleForOcclusion@COcclusionContext@@AEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSi.c)
 *     ?GetLargestOpaqueRect@CPrimitiveGroup@@AEBA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18007AA78 (-GetLargestOpaqueRect@CPrimitiveGroup@@AEBA_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNot.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 */

__int64 __fastcall CPrimitiveGroup::AddOcclusionInformation(
        CPrimitiveGroup *this,
        struct COcclusionContext *a2,
        const struct D2D_SIZE_F *a3)
{
  __int64 v3; // r8
  int v4; // eax
  unsigned int v5; // ecx
  float v7[4]; // [rsp+30h] [rbp-28h] BYREF

  if ( (unsigned __int8)CPrimitiveGroup::GetLargestOpaqueRect(this, v7) )
  {
    v4 = COcclusionContext::CollectRectangleForOcclusion(v3, v7, v3, 0LL);
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x45Du, 0LL);
  }
  return 0LL;
}
