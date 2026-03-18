/*
 * XREFs of ?GetDirectInkWetStroke@CGenericInk@@QEAAJPEAVID2DContext@@PEAPEAUIDCompositionDirectInkWetStrokePartner@@@Z @ 0x1802157A4
 * Callers:
 *     ?CreateScribble@CGenericInk@@UEAAJPEAVID2DContext@@AEBUDCompWetInkStrokeRenderState@@PEAPEAVCComputeScribble@@@Z @ 0x180214E90 (-CreateScribble@CGenericInk@@UEAAJPEAVID2DContext@@AEBUDCompWetInkStrokeRenderState@@PEAPEAVCCom.c)
 *     ?Draw@CGenericInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180215040 (-Draw@CGenericInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF@@UM.c)
 *     ?IsSuperWetCompatible@CGenericInk@@UEAA_NPEAVID2DContext@@AEBUDCompWetInkStrokeRenderState@@@Z @ 0x180215980 (-IsSuperWetCompatible@CGenericInk@@UEAA_NPEAVID2DContext@@AEBUDCompWetInkStrokeRenderState@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@VID2DContext@@@@QEAAJPEAVID2DContext@@PEAPEAVCD2DGenericInk@@@Z @ 0x180215320 (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@VID2DContext@@@.c)
 */

__int64 __fastcall CGenericInk::GetDirectInkWetStroke(
        CGenericInk *this,
        struct ID2DContext *a2,
        struct IDCompositionDirectInkWetStrokePartner **a3)
{
  signed int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  struct IDCompositionDirectInkWetStrokePartner *v7; // rcx
  CGdiSpriteBitmap *v9; // [rsp+40h] [rbp+8h] BYREF

  *a3 = 0LL;
  v9 = 0LL;
  v4 = CDeviceResourceTable<CD2DGenericInk,CGenericInk,ID2DContext>::FindOrCreateResourceNoRef(
         (CGenericInk *)((char *)this + 80),
         a2,
         &v9);
  v6 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x1C8u, 0LL);
  }
  else
  {
    v7 = (struct IDCompositionDirectInkWetStrokePartner *)*((_QWORD *)v9 + 13);
    *a3 = v7;
    if ( v7 )
      (*(void (__fastcall **)(struct IDCompositionDirectInkWetStrokePartner *))(*(_QWORD *)v7 + 8LL))(v7);
  }
  return v6;
}
