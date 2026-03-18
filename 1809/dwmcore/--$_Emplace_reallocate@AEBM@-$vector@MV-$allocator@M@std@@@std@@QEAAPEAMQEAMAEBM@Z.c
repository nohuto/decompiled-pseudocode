/*
 * XREFs of ??$_Emplace_reallocate@AEBM@?$vector@MV?$allocator@M@std@@@std@@QEAAPEAMQEAMAEBM@Z @ 0x1801B2D0C
 * Callers:
 *     ?EnsureStrokeStyleForRender@CSpriteVectorShape@@AEAAJXZ @ 0x1801B36DC (-EnsureStrokeStyleForRender@CSpriteVectorShape@@AEAAJXZ.c)
 *     ??$GetGradientColorData@VCLinearGradientLegacyMilBrush@@@CGradientLegacyMilBrush@@KAJPEAVCLinearGradientLegacyMilBrush@@PEAVCGradientColorData@@@Z @ 0x1801C2A50 (--$GetGradientColorData@VCLinearGradientLegacyMilBrush@@@CGradientLegacyMilBrush@@KAJPEAVCLinear.c)
 *     ?SpawnParticles@CParticleEmitter@@IEAAJH@Z @ 0x1801C71C0 (-SpawnParticles@CParticleEmitter@@IEAAJH@Z.c)
 *     ?AddLines@CPathEmitterShape@EmitterShapes@@EEAAXPEBUD2D_POINT_2F@@I@Z @ 0x1801DC260 (-AddLines@CPathEmitterShape@EmitterShapes@@EEAAXPEBUD2D_POINT_2F@@I@Z.c)
 *     ?BeginFigure@CPathEmitterShape@EmitterShapes@@EEAAXUD2D_POINT_2F@@W4D2D1_FIGURE_BEGIN@@@Z @ 0x1801DC3E0 (-BeginFigure@CPathEmitterShape@EmitterShapes@@EEAAXUD2D_POINT_2F@@W4D2D1_FIGURE_BEGIN@@@Z.c)
 *     ?CalculateFigureLength@Figure@CPathEmitterShape@EmitterShapes@@QEAAX_N@Z @ 0x1801DC4BC (-CalculateFigureLength@Figure@CPathEmitterShape@EmitterShapes@@QEAAX_N@Z.c)
 *     ?AddVisual@CDepthSortingLayer@@QEAAXAEBVCVisualDepthGeometry@@@Z @ 0x180231E60 (-AddVisual@CDepthSortingLayer@@QEAAXAEBVCVisualDepthGeometry@@@Z.c)
 *     ?MergeWith@CDepthSortingLayer@@QEAAXAEAV1@@Z @ 0x180231EE8 (-MergeWith@CDepthSortingLayer@@QEAAXAEAV1@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C766C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x1800F0087 (memmove_0.c)
 *     ?_Change_array@?$vector@HV?$allocator@H@std@@@std@@AEAAXQEAH_K1@Z @ 0x180149464 (-_Change_array@-$vector@HV-$allocator@H@std@@@std@@AEAAXQEAH_K1@Z.c)
 *     ?_Calculate_growth@?$vector@MV?$allocator@M@std@@@std@@AEBA_K_K@Z @ 0x1801B3FE0 (-_Calculate_growth@-$vector@MV-$allocator@M@std@@@std@@AEBA_K_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall std::vector<float>::_Emplace_reallocate<float const &>(const void **a1, _BYTE *a2, _DWORD *a3)
{
  __int64 v4; // rdi
  __int64 v6; // rax
  __int64 v8; // r15
  unsigned __int64 v9; // r14
  SIZE_T v10; // rcx
  unsigned __int64 v11; // r9
  char *v12; // rsi
  char *v13; // rcx
  _BYTE *v14; // r8
  _BYTE *v15; // rdx
  size_t v16; // r8
  void *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (a2 - (_BYTE *)*a1) >> 2;
  v6 = ((_BYTE *)a1[1] - (_BYTE *)*a1) >> 2;
  if ( v6 == 0x3FFFFFFFFFFFFFFFLL )
    ModuleFailFastForHRESULT(2147483659LL, retaddr);
  v8 = v6 + 1;
  v9 = std::vector<float>::_Calculate_growth(a1, v6 + 1);
  v10 = 4 * v9;
  if ( v9 > v11 )
    v10 = -1LL;
  v12 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(v10);
  *(_DWORD *)&v12[4 * v4] = *a3;
  v13 = v12;
  v14 = a1[1];
  v15 = *a1;
  if ( a2 == v14 )
  {
    v16 = v14 - v15;
  }
  else
  {
    memmove_0(v12, v15, a2 - (_BYTE *)*a1);
    v16 = (_BYTE *)a1[1] - a2;
    v13 = &v12[4 * v4 + 4];
    v15 = a2;
  }
  memmove_0(v13, v15, v16);
  std::vector<int>::_Change_array((__int64)a1, (__int64)v12, v8, v9);
  return (__int64)*a1 + 4 * v4;
}
