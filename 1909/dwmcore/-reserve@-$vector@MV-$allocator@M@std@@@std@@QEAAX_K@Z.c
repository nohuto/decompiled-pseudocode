/*
 * XREFs of ?reserve@?$vector@MV?$allocator@M@std@@@std@@QEAAX_K@Z @ 0x1801A1C50
 * Callers:
 *     ?Reserve@ParticleCollection@CParticleEmitterVisual@@QEAAXH@Z @ 0x1801A01A0 (-Reserve@ParticleCollection@CParticleEmitterVisual@@QEAAXH@Z.c)
 *     ?EnsureStrokeStyleForRender@CSpriteVectorShape@@AEAAJXZ @ 0x1801F99B4 (-EnsureStrokeStyleForRender@CSpriteVectorShape@@AEAAJXZ.c)
 *     ?ProcessSetStrokeDashArray@CSpriteVectorShape@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SPRITEVECTORSHAPE_SETSTROKEDASHARRAY@@PEBXI@Z @ 0x1801F9F70 (-ProcessSetStrokeDashArray@CSpriteVectorShape@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SPRITEVECT.c)
 *     ?AddLines@CPathEmitterEdge@EmitterShapes@@EEAAXPEBUD2D_POINT_2F@@I@Z @ 0x18020A6E0 (-AddLines@CPathEmitterEdge@EmitterShapes@@EEAAXPEBUD2D_POINT_2F@@I@Z.c)
 * Callees:
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x180159B0C (-_Xlength_error@std@@YAXPEBD@Z.c)
 *     ?_Reallocate_exactly@?$vector@MV?$allocator@M@std@@@std@@AEAAX_K@Z @ 0x1801A1988 (-_Reallocate_exactly@-$vector@MV-$allocator@M@std@@@std@@AEAAX_K@Z.c)
 */

unsigned __int64 __fastcall std::vector<float>::reserve(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 result; // rax

  result = (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 2;
  if ( a2 > result )
  {
    if ( a2 > 0x3FFFFFFFFFFFFFFFLL )
      std::_Xlength_error((const char *)a1);
    return std::vector<float>::_Reallocate_exactly(a1, a2);
  }
  return result;
}
