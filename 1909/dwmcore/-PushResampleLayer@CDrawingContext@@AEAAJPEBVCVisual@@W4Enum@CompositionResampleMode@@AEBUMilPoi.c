/*
 * XREFs of ?PushResampleLayer@CDrawingContext@@AEAAJPEBVCVisual@@W4Enum@CompositionResampleMode@@AEBUMilPointAndSizeL@@MM@Z @ 0x18016F4AC
 * Callers:
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@11PEA_N@Z @ 0x1800611C0 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 * Callees:
 *     ?PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z @ 0x180038EDC (-PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??_GCResampleLayer@@UEAAPEAXI@Z @ 0x18016AC00 (--_GCResampleLayer@@UEAAPEAXI@Z.c)
 *     ?Create@CResampleLayer@@SAJPEAVIRenderTarget@@AEBUMilPointAndSizeL@@MMW4Enum@CompositionResampleMode@@PEAPEAV1@@Z @ 0x18017E114 (-Create@CResampleLayer@@SAJPEAVIRenderTarget@@AEBUMilPointAndSizeL@@MMW4Enum@CompositionResample.c)
 */

__int64 __fastcall CDrawingContext::PushResampleLayer(
        CDrawingContext *a1,
        const struct CVisual *a2,
        __int64 a3,
        __int64 a4)
{
  signed int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  signed int v9; // eax
  __int64 v10; // rcx

  v6 = CResampleLayer::Create(*((_QWORD *)a1 + 44), a4);
  v8 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x14C5u, 0LL);
  }
  else
  {
    v9 = CDrawingContext::PushLayer(a1, a2, 0LL, 1, 1);
    v8 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x14CBu, 0LL);
  }
  return v8;
}
