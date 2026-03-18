/*
 * XREFs of ?EnsureBrushGraph@CRadialGradientBrush@@EEAAJ_N@Z @ 0x1801F5740
 * Callers:
 *     <none>
 * Callees:
 *     ?Build@CBrushRenderingGraphBuilder@@SAJPEAVCSpriteVisualContent@@PEAPEAVCBrushRenderingGraph@@@Z @ 0x18003468C (-Build@CBrushRenderingGraphBuilder@@SAJPEAVCSpriteVisualContent@@PEAPEAVCBrushRenderingGraph@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C57A0 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CRadialGradientBrush::EnsureBrushGraph(CRadialGradientBrush *this)
{
  signed int v2; // eax
  __int64 v3; // rcx
  unsigned int v4; // ebx

  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((__int64 *)this + 8);
  v2 = CBrushRenderingGraphBuilder::Build(this, (struct CBrushRenderingGraph **)this + 8);
  v4 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, v2, 0x13Eu, 0LL);
  return v4;
}
