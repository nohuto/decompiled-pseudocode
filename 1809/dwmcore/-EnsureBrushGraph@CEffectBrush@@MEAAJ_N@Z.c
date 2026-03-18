/*
 * XREFs of ?EnsureBrushGraph@CEffectBrush@@MEAAJ_N@Z @ 0x180066C50
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800677FC (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Build@CBrushRenderingGraphBuilder@@SAJPEAVCSpriteVisualContent@@PEAPEAVCBrushRenderingGraph@@@Z @ 0x1800E0244 (-Build@CBrushRenderingGraphBuilder@@SAJPEAVCSpriteVisualContent@@PEAPEAVCBrushRenderingGraph@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CEffectBrush::EnsureBrushGraph(CEffectBrush *this, char a2)
{
  struct CBrushRenderingGraph **v2; // rdi
  unsigned int v4; // ebx
  int v6; // eax
  unsigned int v7; // ecx
  char v8; // [rsp+40h] [rbp+8h] BYREF

  v2 = (struct CBrushRenderingGraph **)((char *)this + 64);
  if ( *((_QWORD *)this + 8)
    || a2
    && !(*(unsigned __int8 (__fastcall **)(CEffectBrush *, _QWORD, char *))(*(_QWORD *)this + 280LL))(this, 0LL, &v8) )
  {
    return 0;
  }
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(v2);
  v6 = CBrushRenderingGraphBuilder::Build(this, v2);
  v4 = v6;
  if ( v6 >= 0 )
    return 0;
  else
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x3Cu);
  return v4;
}
