/*
 * XREFs of ?DrawSolidRectangle@COcclusionContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x180170A80
 * Callers:
 *     <none>
 * Callees:
 *     ?CollectRectangleForOcclusion@COcclusionContext@@AEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEAV2@@Z @ 0x180022670 (-CollectRectangleForOcclusion@COcclusionContext@@AEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSi.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall COcclusionContext::DrawSolidRectangle(__int64 a1, float *a2, __int64 a3)
{
  unsigned int v3; // ebx
  signed int v4; // eax
  __int64 v5; // rcx

  v3 = 0;
  if ( !*(_DWORD *)(a1 + 1044) && *(float *)(a3 + 12) == 1.0 )
  {
    v4 = COcclusionContext::CollectRectangleForOcclusion(a1, a2, a3, 0LL);
    v3 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x3DBu, 0LL);
  }
  return v3;
}
