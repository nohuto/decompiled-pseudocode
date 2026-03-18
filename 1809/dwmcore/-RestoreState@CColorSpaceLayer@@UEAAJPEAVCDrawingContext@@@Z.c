/*
 * XREFs of ?RestoreState@CColorSpaceLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18017B420
 * Callers:
 *     <none>
 * Callees:
 *     ?FlushD2D@CDrawingContext@@QEAAJXZ @ 0x18008E430 (-FlushD2D@CDrawingContext@@QEAAJXZ.c)
 *     ?RestoreState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18008E470 (-RestoreState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?RenderLayer@CColorSpaceLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x18017B32C (-RenderLayer@CColorSpaceLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 */

__int64 __fastcall CColorSpaceLayer::RestoreState(CColorSpaceLayer *this, struct CDrawingContext *a2)
{
  int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  int v7; // eax
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx

  v4 = CExternalLayer::RestoreState(this, a2);
  v6 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x49u);
  }
  else
  {
    *((_BYTE *)a2 + 6350) = *((_BYTE *)this + 112);
    v7 = CDrawingContext::FlushD2D(a2);
    v6 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x4Cu);
    }
    else
    {
      v9 = CColorSpaceLayer::RenderLayer(this, a2);
      v6 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x4Eu);
    }
  }
  return v6;
}
