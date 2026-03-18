/*
 * XREFs of ?Create@COcclusionContext@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800B5338
 * Callers:
 *     ?CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z @ 0x180055110 (-CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z.c)
 *     ?CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M_NPEAPEAVCOcclusionContext@@@Z @ 0x1800B518C (-CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 * Callees:
 *     ??0COcclusionContext@@AEAA@PEAVCComposition@@@Z @ 0x1800461B0 (--0COcclusionContext@@AEAA@PEAVCComposition@@@Z.c)
 *     ?Initialize@COcclusionContext@@AEAAJXZ @ 0x1800463F0 (-Initialize@COcclusionContext@@AEAAJXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1800881C4 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??_GCOcclusionContext@@QEAAPEAXI@Z @ 0x1800CBC8C (--_GCOcclusionContext@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall COcclusionContext::Create(struct CComposition *a1, struct ICoverageSet ***a2)
{
  COcclusionContext *v4; // rax
  __int64 v5; // rcx
  struct ICoverageSet **v6; // rbx
  signed int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // edi
  unsigned int v11; // edx

  v4 = (COcclusionContext *)operator new(0x4B8uLL);
  if ( v4 )
    v6 = (struct ICoverageSet **)COcclusionContext::COcclusionContext(v4, a1);
  else
    v6 = 0LL;
  if ( v6 )
  {
    v7 = COcclusionContext::Initialize(v6);
    v9 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x3Eu, 0LL);
      COcclusionContext::`scalar deleting destructor'((COcclusionContext *)v6, v11);
    }
    else
    {
      *a2 = v6;
    }
  }
  else
  {
    v9 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, 0x8007000E, 0x3Cu, 0LL);
  }
  return v9;
}
