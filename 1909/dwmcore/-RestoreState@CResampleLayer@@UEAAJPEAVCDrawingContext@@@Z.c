/*
 * XREFs of ?RestoreState@CResampleLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18017EC80
 * Callers:
 *     <none>
 * Callees:
 *     ?RestoreState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18003FBF0 (-RestoreState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RenderLayer@CResampleLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x18017E7F4 (-RenderLayer@CResampleLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 */

__int64 __fastcall CResampleLayer::RestoreState(CResampleLayer *this, struct CDrawingContext *a2)
{
  signed int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  signed int v7; // eax
  __int64 v8; // rcx

  v4 = CExternalLayer::RestoreState(this, a2);
  v6 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0xDCu, 0LL);
  }
  else
  {
    v7 = CResampleLayer::RenderLayer(this, a2);
    v6 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0xDEu, 0LL);
  }
  return v6;
}
