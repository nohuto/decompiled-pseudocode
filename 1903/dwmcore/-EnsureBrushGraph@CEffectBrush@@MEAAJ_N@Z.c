/*
 * XREFs of ?EnsureBrushGraph@CEffectBrush@@MEAAJ_N@Z @ 0x1800D4D60
 * Callers:
 *     <none>
 * Callees:
 *     ?Build@CBrushRenderingGraphBuilder@@SAJPEAVCSpriteVisualContent@@PEAPEAVCBrushRenderingGraph@@@Z @ 0x18003468C (-Build@CBrushRenderingGraphBuilder@@SAJPEAVCSpriteVisualContent@@PEAPEAVCBrushRenderingGraph@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C57A0 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CEffectBrush::EnsureBrushGraph(CEffectBrush *this, char a2)
{
  signed int v3; // eax
  __int64 v4; // rcx
  unsigned int v5; // ebx
  char v7; // [rsp+48h] [rbp+10h] BYREF

  if ( (!a2
     || (*(unsigned __int8 (__fastcall **)(CEffectBrush *, _QWORD, char *))(*(_QWORD *)this + 336LL))(this, 0LL, &v7))
    && (Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((__int64 *)this + 8),
        v3 = CBrushRenderingGraphBuilder::Build(this, (struct CBrushRenderingGraph **)this + 8),
        v5 = v3,
        v3 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0x39u, 0LL);
  }
  else
  {
    return 0;
  }
  return v5;
}
