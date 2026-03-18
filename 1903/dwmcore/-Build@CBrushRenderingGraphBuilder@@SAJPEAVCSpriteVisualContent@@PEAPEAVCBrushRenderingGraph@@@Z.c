/*
 * XREFs of ?Build@CBrushRenderingGraphBuilder@@SAJPEAVCSpriteVisualContent@@PEAPEAVCBrushRenderingGraph@@@Z @ 0x18003468C
 * Callers:
 *     ?EnsureBrushGraph@CMaskBrush@@MEAAJ_N@Z @ 0x1800CDDC0 (-EnsureBrushGraph@CMaskBrush@@MEAAJ_N@Z.c)
 *     ?EnsureBrushGraph@CEffectBrush@@MEAAJ_N@Z @ 0x1800D4D60 (-EnsureBrushGraph@CEffectBrush@@MEAAJ_N@Z.c)
 *     ?EnsureBrushGraph@CNineGridBrush@@MEAAJ_N@Z @ 0x1801E8320 (-EnsureBrushGraph@CNineGridBrush@@MEAAJ_N@Z.c)
 *     ?EnsureBrushGraph@CRadialGradientBrush@@EEAAJ_N@Z @ 0x1801F5740 (-EnsureBrushGraph@CRadialGradientBrush@@EEAAJ_N@Z.c)
 * Callees:
 *     ??0CBrushRenderingGraph@@AEAA@XZ @ 0x180034624 (--0CBrushRenderingGraph@@AEAA@XZ.c)
 *     ?Build@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@@Z @ 0x180034854 (-Build@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080530 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C57A0 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBrushRenderingGraphBuilder::Build(
        struct CSpriteVisualContent *a1,
        struct CBrushRenderingGraph **a2)
{
  CBrushRenderingGraph *v4; // rax
  unsigned int v5; // ecx
  CBrushRenderingGraph *v6; // rbx
  int v7; // eax
  unsigned int v8; // ecx
  unsigned int v9; // edi
  CBrushRenderingGraph *v11; // [rsp+30h] [rbp-18h] BYREF
  int v12; // [rsp+38h] [rbp-10h]
  CBrushRenderingGraph *v13; // [rsp+60h] [rbp+18h] BYREF

  v4 = (CBrushRenderingGraph *)DefaultHeap::Alloc(0xD0uLL);
  if ( v4 )
    v6 = CBrushRenderingGraph::CBrushRenderingGraph(v4);
  else
    v6 = 0LL;
  v13 = v6;
  if ( v6 )
  {
    (**(void (__fastcall ***)(CBrushRenderingGraph *))v6)(v6);
    v12 = 0;
    v11 = v6;
    v7 = CBrushRenderingGraphBuilder::Build((CBrushRenderingGraphBuilder *)&v11, a1);
    v9 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x18u, 0LL);
    }
    else
    {
      v13 = 0LL;
      *a2 = v6;
    }
  }
  else
  {
    v9 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, -2147024882, 0x14u, 0LL);
  }
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v13);
  return v9;
}
