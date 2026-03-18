/*
 * XREFs of ?EnsureBrushGraph@CNineGridBrush@@MEAAJ_N@Z @ 0x18006A890
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800677FC (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Build@CBrushRenderingGraphBuilder@@SAJPEAVCSpriteVisualContent@@PEAPEAVCBrushRenderingGraph@@@Z @ 0x1800E0244 (-Build@CBrushRenderingGraphBuilder@@SAJPEAVCSpriteVisualContent@@PEAPEAVCBrushRenderingGraph@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CNineGridBrush::EnsureBrushGraph(CNineGridBrush *this, char a2)
{
  __int64 *v2; // rdi
  __int64 v5; // rcx
  unsigned int v6; // ebx
  int v8; // eax
  unsigned int v9; // ecx
  char v10; // [rsp+40h] [rbp+8h] BYREF

  v2 = (__int64 *)((char *)this + 64);
  if ( !*((_QWORD *)this + 8)
    && (v5 = *((_QWORD *)this + 9)) != 0
    && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 48LL))(v5, 50LL)
    && (!a2
     || (*(unsigned __int8 (__fastcall **)(CNineGridBrush *, _QWORD, char *))(*(_QWORD *)this + 280LL))(this, 0LL, &v10))
    && (Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(v2),
        v8 = CBrushRenderingGraphBuilder::Build(
               *((struct CSpriteVisualContent **)this + 9),
               (struct CBrushRenderingGraph **)v2),
        v6 = v8,
        v8 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x1A9u);
  }
  else
  {
    return 0;
  }
  return v6;
}
