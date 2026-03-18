/*
 * XREFs of ?Create@COcclusionContext@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x180024980
 * Callers:
 *     ?CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M_NPEAPEAVCOcclusionContext@@@Z @ 0x180024674 (-CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ?CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z @ 0x180080FA0 (-CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z.c)
 * Callees:
 *     ??_GCOcclusionContext@@QEAAPEAXI@Z @ 0x180024820 (--_GCOcclusionContext@@QEAAPEAXI@Z.c)
 *     ??0COcclusionContext@@AEAA@PEAVCComposition@@@Z @ 0x1800249EC (--0COcclusionContext@@AEAA@PEAVCComposition@@@Z.c)
 *     ?Initialize@COcclusionContext@@AEAAJXZ @ 0x180024BA0 (-Initialize@COcclusionContext@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18007AC58 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall COcclusionContext::Create(struct CComposition *a1, struct COcclusionContext **a2)
{
  COcclusionContext *v4; // rax
  unsigned int v5; // ecx
  COcclusionContext *v6; // rbx
  int v7; // eax
  unsigned int v8; // ecx
  unsigned int v9; // edi

  v4 = (COcclusionContext *)operator new(0x4B8uLL);
  if ( v4 )
    v6 = COcclusionContext::COcclusionContext(v4, a1);
  else
    v6 = 0LL;
  if ( v6 )
  {
    v7 = COcclusionContext::Initialize(v6);
    v9 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x3Eu, 0LL);
      COcclusionContext::`scalar deleting destructor'(v6);
    }
    else
    {
      *a2 = v6;
    }
  }
  else
  {
    v9 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, -2147024882, 0x3Cu, 0LL);
  }
  return v9;
}
