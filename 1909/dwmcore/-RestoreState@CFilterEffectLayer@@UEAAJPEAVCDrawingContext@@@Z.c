/*
 * XREFs of ?RestoreState@CFilterEffectLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18017D1B0
 * Callers:
 *     <none>
 * Callees:
 *     ?RestoreState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18003FBF0 (-RestoreState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RenderLayer@CFilterEffectLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x18017CF98 (-RenderLayer@CFilterEffectLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 */

__int64 __fastcall CFilterEffectLayer::RestoreState(CFilterEffectLayer *this, struct CDrawingContext *a2)
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
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x57u, 0LL);
  }
  else
  {
    v7 = CFilterEffectLayer::RenderLayer(this, a2);
    v6 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x58u, 0LL);
  }
  return v6;
}
