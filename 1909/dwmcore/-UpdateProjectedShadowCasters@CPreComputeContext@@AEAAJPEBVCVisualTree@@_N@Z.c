/*
 * XREFs of ?UpdateProjectedShadowCasters@CPreComputeContext@@AEAAJPEBVCVisualTree@@_N@Z @ 0x1800BFF98
 * Callers:
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18007FDD0 (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 * Callees:
 *     ?GetProjectedShadowCasters@CVisual@@QEBAPEAV?$vector@PEAVCProjectedShadowCaster@@V?$allocator@PEAVCProjectedShadowCaster@@@std@@@std@@XZ @ 0x180004010 (-GetProjectedShadowCasters@CVisual@@QEBAPEAV-$vector@PEAVCProjectedShadowCaster@@V-$allocator@PE.c)
 *     ?UpdateVisualProperty@CProjectedShadowCaster@@QEAAXPEBVCVisualTree@@_N@Z @ 0x18000424C (-UpdateVisualProperty@CProjectedShadowCaster@@QEAAXPEBVCVisualTree@@_N@Z.c)
 *     ?DirtyIfChanged@CPreComputeHelper@@QEAAJPEAVCComposition@@PEBVCVisualTree@@PEAVCVisual@@_N@Z @ 0x1800179F8 (-DirtyIfChanged@CPreComputeHelper@@QEAAJPEAVCComposition@@PEBVCVisualTree@@PEAVCVisual@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsVisibleInTree@CVisualTree@@QEBA_NPEBVCVisual@@@Z @ 0x1800C00C0 (-IsVisibleInTree@CVisualTree@@QEBA_NPEBVCVisual@@@Z.c)
 */

__int64 __fastcall CPreComputeContext::UpdateProjectedShadowCasters(
        struct CComposition **this,
        const struct CVisualTree *a2,
        char a3)
{
  unsigned int v5; // edi
  const struct CVisual **v6; // r13
  const struct CVisual **v7; // rbx
  const struct CVisual *v9; // rsi
  bool v10; // r9
  signed int v11; // eax
  __int64 v12; // rcx
  __int64 ProjectedShadowCasters; // rax
  unsigned __int64 v14; // r10
  __int64 v15; // r12
  CProjectedShadowCaster **v16; // r14
  unsigned __int64 v17; // rsi
  const struct CVisual **v18; // [rsp+70h] [rbp+8h]

  v5 = 0;
  v6 = (const struct CVisual **)*((_QWORD *)*this + 135);
  v7 = (const struct CVisual **)*((_QWORD *)*this + 134);
  v18 = v6;
  while ( v7 != v6 )
  {
    v9 = *v7;
    if ( CVisualTree::IsVisibleInTree(a2, *v7) )
    {
      v11 = CPreComputeHelper::DirtyIfChanged((CPreComputeHelper *)(this + 138), *this, a2, v9, v10);
      v5 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x529u, 0LL);
        return v5;
      }
      if ( (**((_DWORD **)v9 + 28) & 0x20000) != 0 )
      {
        ProjectedShadowCasters = CVisual::GetProjectedShadowCasters((__int64)v9);
        v15 = (unsigned int)v14;
        v16 = *(CProjectedShadowCaster ***)ProjectedShadowCasters;
        v17 = (unsigned __int64)(*(_QWORD *)(ProjectedShadowCasters + 8) - *(_QWORD *)ProjectedShadowCasters + 7LL) >> 3;
        if ( *(_QWORD *)ProjectedShadowCasters > *(_QWORD *)(ProjectedShadowCasters + 8) )
          v17 = v14;
        if ( v17 )
        {
          do
          {
            CProjectedShadowCaster::UpdateVisualProperty(*v16, a2, a3);
            ++v15;
            ++v16;
          }
          while ( v15 != v17 );
          v6 = v18;
        }
      }
    }
    ++v7;
  }
  return v5;
}
