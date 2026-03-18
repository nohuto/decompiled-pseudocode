/*
 * XREFs of ?Build@CBrushRenderingGraphBuilder@@SAJPEAVCSpriteVisualContent@@PEAPEAVCBrushRenderingGraph@@@Z @ 0x1800E0244
 * Callers:
 *     ?EnsureBrushGraph@CMaskBrush@@MEAAJ_N@Z @ 0x180059B10 (-EnsureBrushGraph@CMaskBrush@@MEAAJ_N@Z.c)
 *     ?EnsureBrushGraph@CEffectBrush@@MEAAJ_N@Z @ 0x180066C50 (-EnsureBrushGraph@CEffectBrush@@MEAAJ_N@Z.c)
 *     ?EnsureBrushGraph@CNineGridBrush@@MEAAJ_N@Z @ 0x18006A890 (-EnsureBrushGraph@CNineGridBrush@@MEAAJ_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800677FC (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Build@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@@Z @ 0x1800E02EC (-Build@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@@Z.c)
 *     ??0CBrushRenderingGraph@@AEAA@XZ @ 0x1800E16A0 (--0CBrushRenderingGraph@@AEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBrushRenderingGraphBuilder::Build(
        struct CSpriteVisualContent *a1,
        struct CBrushRenderingGraph **a2)
{
  CBrushRenderingGraph *v4; // rax
  __int64 v5; // rcx
  CBrushRenderingGraph *v6; // rbx
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // edi
  CBrushRenderingGraph *v11; // [rsp+30h] [rbp-18h] BYREF
  char v12; // [rsp+38h] [rbp-10h]
  CBrushRenderingGraph *v13; // [rsp+60h] [rbp+18h] BYREF

  v4 = (CBrushRenderingGraph *)HeapAlloc(WPF::g_processHeap, 0, 0xC8uLL);
  if ( v4 )
    v6 = CBrushRenderingGraph::CBrushRenderingGraph(v4);
  else
    v6 = 0LL;
  v13 = v6;
  if ( v6 )
  {
    (**(void (__fastcall ***)(CBrushRenderingGraph *))v6)(v6);
    v11 = v6;
    v12 = 0;
    v7 = CBrushRenderingGraphBuilder::Build((CBrushRenderingGraphBuilder *)&v11, a1);
    v9 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x19u);
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
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, -2147024882, 0x15u);
  }
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((__int64 *)&v13);
  return v9;
}
