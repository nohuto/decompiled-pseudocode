/*
 * XREFs of ?CheckBackdropInputs@CBrushRenderingGraphBuilder@@IEAAXXZ @ 0x1800E03BC
 * Callers:
 *     ?Build@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@@Z @ 0x1800E02EC (-Build@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@@Z.c)
 *     ?Build@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@0PEAPEAUIEffectInstance@Composition@UI@Windows@@@Z @ 0x1801DF444 (-Build@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@0PEAPEAUIEffectIns.c)
 * Callees:
 *     ?IsIntermediateUsedInBlur@CBrushRenderingGraphBuilder@@AEBA_NI@Z @ 0x18007708C (-IsIntermediateUsedInBlur@CBrushRenderingGraphBuilder@@AEBA_NI@Z.c)
 *     ?HasBackdropInput@CRenderingTechnique@@QEBA_NXZ @ 0x1800C3BF8 (-HasBackdropInput@CRenderingTechnique@@QEBA_NXZ.c)
 *     ?HasWindowBackdropInput@CRenderingTechnique@@QEBA_NXZ @ 0x1800C3CC4 (-HasWindowBackdropInput@CRenderingTechnique@@QEBA_NXZ.c)
 */

void __fastcall CBrushRenderingGraphBuilder::CheckBackdropInputs(
        CBrushRenderingGraphBuilder *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  bool IsIntermediateUsedInBlur; // bp
  char v6; // cl
  bool HasWindowBackdropInput; // di
  unsigned int v8; // esi
  __int64 v9; // r14
  unsigned int v10; // r13d
  __int64 v11; // r15
  __int64 v12; // rax
  CRenderingTechnique *v13; // r12
  char v14; // [rsp+50h] [rbp+8h]

  IsIntermediateUsedInBlur = 0;
  v6 = 0;
  HasWindowBackdropInput = 0;
  v8 = 0;
  v14 = 0;
  v9 = *(_QWORD *)this;
  v10 = *(_DWORD *)(*(_QWORD *)this + 168LL);
  if ( v10 )
  {
    v11 = 0LL;
    do
    {
      v12 = *(_QWORD *)(v9 + 144);
      v13 = *(CRenderingTechnique **)(v11 + v12);
      if ( !HasWindowBackdropInput )
        HasWindowBackdropInput = CRenderingTechnique::HasWindowBackdropInput(
                                   *(CRenderingTechnique **)(v11 + v12),
                                   a2,
                                   a3,
                                   a4);
      if ( IsIntermediateUsedInBlur
        || CRenderingTechnique::HasBackdropInput(v13, a2, a3, a4)
        && (v14 = 1, IsIntermediateUsedInBlur = CBrushRenderingGraphBuilder::IsIntermediateUsedInBlur(this, v8)) )
      {
        if ( HasWindowBackdropInput )
          break;
      }
      ++v8;
      v11 += 8LL;
    }
    while ( v8 < v10 );
    v6 = v14;
  }
  *(_BYTE *)(*(_QWORD *)this + 192LL) = v6;
  *(_BYTE *)(*(_QWORD *)this + 193LL) = IsIntermediateUsedInBlur;
  *(_BYTE *)(*(_QWORD *)this + 194LL) = HasWindowBackdropInput;
}
