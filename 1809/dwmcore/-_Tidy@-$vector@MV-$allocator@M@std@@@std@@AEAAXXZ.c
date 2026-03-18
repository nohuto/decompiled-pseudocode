/*
 * XREFs of ?_Tidy@?$vector@MV?$allocator@M@std@@@std@@AEAAXXZ @ 0x180175DA8
 * Callers:
 *     ??1CSpriteVectorShape@@UEAA@XZ @ 0x1801B3130 (--1CSpriteVectorShape@@UEAA@XZ.c)
 *     ?EnsureStrokeStyleForRender@CSpriteVectorShape@@AEAAJXZ @ 0x1801B36DC (-EnsureStrokeStyleForRender@CSpriteVectorShape@@AEAAJXZ.c)
 *     ?DrawAsDrawList@CLinearGradientLegacyMilBrush@@QEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NAEBUMilRectF@@@Z @ 0x1801C2BD0 (-DrawAsDrawList@CLinearGradientLegacyMilBrush@@QEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuild.c)
 *     ??1Particles@CParticleEmitter@@QEAA@XZ @ 0x1801C50C4 (--1Particles@CParticleEmitter@@QEAA@XZ.c)
 *     ?BeginFigure@CPathEmitterShape@EmitterShapes@@EEAAXUD2D_POINT_2F@@W4D2D1_FIGURE_BEGIN@@@Z @ 0x1801DC3E0 (-BeginFigure@CPathEmitterShape@EmitterShapes@@EEAAXUD2D_POINT_2F@@W4D2D1_FIGURE_BEGIN@@@Z.c)
 *     ?_Change_array@?$vector@UFigure@CPathEmitterShape@EmitterShapes@@V?$allocator@UFigure@CPathEmitterShape@EmitterShapes@@@std@@@std@@AEAAXQEAUFigure@CPathEmitterShape@EmitterShapes@@_K1@Z @ 0x1801DCC44 (-_Change_array@-$vector@UFigure@CPathEmitterShape@EmitterShapes@@V-$allocator@UFigure@CPathEmitt.c)
 *     ?_Tidy@?$vector@UFigure@CPathEmitterShape@EmitterShapes@@V?$allocator@UFigure@CPathEmitterShape@EmitterShapes@@@std@@@std@@AEAAXXZ @ 0x1801DCCFC (-_Tidy@-$vector@UFigure@CPathEmitterShape@EmitterShapes@@V-$allocator@UFigure@CPathEmitterShape@.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180063B7C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<float>::_Tidy(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, (*(_QWORD *)(a1 + 16) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFFCuLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
