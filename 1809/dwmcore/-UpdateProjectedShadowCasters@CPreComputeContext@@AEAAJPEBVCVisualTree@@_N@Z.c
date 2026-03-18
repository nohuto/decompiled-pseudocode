/*
 * XREFs of ?UpdateProjectedShadowCasters@CPreComputeContext@@AEAAJPEBVCVisualTree@@_N@Z @ 0x1800753F0
 * Callers:
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180048740 (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 * Callees:
 *     ?DirtyIfChanged@CPreComputeHelper@@QEAAJPEAVCComposition@@PEBVCVisualTree@@PEAVCVisual@@_N@Z @ 0x18001B804 (-DirtyIfChanged@CPreComputeHelper@@QEAAJPEAVCComposition@@PEBVCVisualTree@@PEAVCVisual@@_N@Z.c)
 *     ?IsVisibleInTree@CVisualTree@@QEBA_NPEBVCVisual@@@Z @ 0x180067D14 (-IsVisibleInTree@CVisualTree@@QEBA_NPEBVCVisual@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetProjectedShadowCasters@CVisual@@QEBAPEAV?$vector@PEAVCProjectedShadowCaster@@V?$allocator@PEAVCProjectedShadowCaster@@@std@@@std@@XZ @ 0x1801AD9C0 (-GetProjectedShadowCasters@CVisual@@QEBAPEAV-$vector@PEAVCProjectedShadowCaster@@V-$allocator@PE.c)
 *     ?UpdateVisualProperty@CProjectedShadowCaster@@QEAAXPEBVCVisualTree@@_N@Z @ 0x1801AE514 (-UpdateVisualProperty@CProjectedShadowCaster@@QEAAXPEBVCVisualTree@@_N@Z.c)
 */

__int64 __fastcall CPreComputeContext::UpdateProjectedShadowCasters(
        struct CComposition **this,
        const struct CVisualTree *a2,
        bool a3)
{
  unsigned int v5; // edi
  const struct CVisual **v6; // r13
  const struct CVisual **v7; // rbx
  struct CVisual *v9; // r12
  __int64 ProjectedShadowCasters; // rax
  unsigned __int64 v11; // r10
  unsigned __int64 v12; // r15
  CProjectedShadowCaster **v13; // rsi
  unsigned __int64 v14; // rdi
  int v15; // eax
  unsigned int v16; // ecx
  const struct CVisual **v17; // [rsp+70h] [rbp+8h]

  v5 = 0;
  v6 = (const struct CVisual **)*((_QWORD *)*this + 133);
  v7 = (const struct CVisual **)*((_QWORD *)*this + 132);
  v17 = v6;
  while ( v7 != v6 )
  {
    v9 = *v7;
    if ( CVisualTree::IsVisibleInTree((const struct CVisual **)a2, *v7) )
    {
      ProjectedShadowCasters = CVisual::GetProjectedShadowCasters(v9);
      v12 = v11;
      v13 = *(CProjectedShadowCaster ***)ProjectedShadowCasters;
      v14 = (unsigned __int64)(*(_QWORD *)(ProjectedShadowCasters + 8) - *(_QWORD *)ProjectedShadowCasters + 7LL) >> 3;
      if ( *(_QWORD *)ProjectedShadowCasters > *(_QWORD *)(ProjectedShadowCasters + 8) )
        v14 = v11;
      if ( v14 )
      {
        do
        {
          CProjectedShadowCaster::UpdateVisualProperty(*v13, a2, a3);
          ++v12;
          ++v13;
        }
        while ( v12 != v14 );
        v6 = v17;
      }
      v15 = CPreComputeHelper::DirtyIfChanged((CPreComputeHelper *)(this + 137), *this, a2, v9, a3);
      v5 = v15;
      if ( v15 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x54Au);
        return v5;
      }
    }
    ++v7;
  }
  return v5;
}
