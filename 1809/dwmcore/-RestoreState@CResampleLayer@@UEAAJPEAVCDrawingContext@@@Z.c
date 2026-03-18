/*
 * XREFs of ?RestoreState@CResampleLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18017E780
 * Callers:
 *     <none>
 * Callees:
 *     ?RestoreState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18008E470 (-RestoreState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?RenderLayer@CResampleLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x18017E300 (-RenderLayer@CResampleLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 */

__int64 __fastcall CResampleLayer::RestoreState(CResampleLayer *this, struct CDrawingContext *a2)
{
  int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  int v7; // eax
  __int64 v8; // rcx

  v4 = CExternalLayer::RestoreState(this, a2);
  v6 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0xDCu);
  }
  else
  {
    v7 = CResampleLayer::RenderLayer(this, a2);
    v6 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0xDEu);
  }
  return v6;
}
