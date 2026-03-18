/*
 * XREFs of ?EnsureShaderCache@CBrushRenderingGraphBuilder@@IEAAJXZ @ 0x1800E0554
 * Callers:
 *     ?Build@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@@Z @ 0x1800E02EC (-Build@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@@Z.c)
 *     ?Build@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@0PEAPEAUIEffectInstance@Composition@UI@Windows@@@Z @ 0x1801DF444 (-Build@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@0PEAPEAUIEffectIns.c)
 * Callees:
 *     ??0CCompiledEffectCache@@QEAA@PEAUICompiledEffect@Composition@UI@Windows@@PEAX@Z @ 0x180076CCC (--0CCompiledEffectCache@@QEAA@PEAUICompiledEffect@Composition@UI@Windows@@PEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?HasUniqueShaderCache@CRenderingTechniqueFragment@@QEBA_NPEAPEAVCCompiledEffectCache@@@Z @ 0x1800E0658 (-HasUniqueShaderCache@CRenderingTechniqueFragment@@QEBA_NPEAPEAVCCompiledEffectCache@@@Z.c)
 */

__int64 __fastcall CBrushRenderingGraphBuilder::EnsureShaderCache(CBrushRenderingGraphBuilder *this)
{
  __int64 v1; // r15
  unsigned int v2; // ebx
  struct CCompiledEffectCache *v4; // rsi
  __int64 v5; // r13
  __int64 v6; // r14
  __int64 v7; // r11
  bool HasUniqueShaderCache; // al
  char v9; // bp
  bool v10; // r12
  unsigned int v11; // r11d
  int v13; // r11d
  CCompiledEffectCache *v14; // rax
  CCompiledEffectCache *v15; // rcx
  struct CCompiledEffectCache *v16; // [rsp+60h] [rbp+8h] BYREF

  v1 = *(_QWORD *)this;
  v2 = 0;
  v16 = 0LL;
  v4 = 0LL;
  v5 = *(_QWORD *)(v1 + 144);
  v6 = (unsigned int)(*(_DWORD *)(v1 + 168) - 1);
  v7 = *(_QWORD *)(*(_QWORD *)(v5 + 8 * v6) + 16LL);
  if ( *((_BYTE *)this + 8)
    || (HasUniqueShaderCache = CRenderingTechniqueFragment::HasUniqueShaderCache(
                                 *(CRenderingTechniqueFragment **)(*(_QWORD *)(v5 + 8 * v6) + 16LL),
                                 &v16),
        v4 = v16,
        v9 = 1,
        !HasUniqueShaderCache) )
  {
    v9 = 0;
  }
  v10 = *(_QWORD *)(v7 + 8) == 0LL;
  if ( !v9 )
    goto LABEL_16;
  v11 = 0;
  if ( (_DWORD)v6 )
  {
    while ( CRenderingTechniqueFragment::HasUniqueShaderCache(
              *(CRenderingTechniqueFragment **)(*(_QWORD *)(v5 + 8LL * v11) + 16LL),
              &v16)
         && (v16 == v4 || !v4) )
    {
      v4 = v16;
      v11 = v13 + 1;
      if ( v11 >= (unsigned int)v6 )
        goto LABEL_5;
    }
    v9 = 0;
  }
LABEL_5:
  if ( v9 )
  {
    *(_QWORD *)(v1 + 184) = v4;
    *(_BYTE *)(*(_QWORD *)this + 195LL) = 0;
    *(_BYTE *)(*(_QWORD *)this + 196LL) = v10;
  }
  else
  {
LABEL_16:
    v14 = (CCompiledEffectCache *)HeapAlloc(WPF::g_processHeap, 0, 0x28uLL);
    if ( v14 )
      v15 = CCompiledEffectCache::CCompiledEffectCache(v14, 0LL, (void *)v1);
    else
      v15 = 0LL;
    *(_QWORD *)(*(_QWORD *)this + 184LL) = v15;
    if ( *(_QWORD *)(*(_QWORD *)this + 184LL) )
    {
      *(_BYTE *)(*(_QWORD *)this + 195LL) = 1;
      *(_BYTE *)(*(_QWORD *)this + 196LL) = 0;
    }
    else
    {
      v2 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v15, 0LL, 0, -2147024882, 0x212u);
    }
  }
  return v2;
}
