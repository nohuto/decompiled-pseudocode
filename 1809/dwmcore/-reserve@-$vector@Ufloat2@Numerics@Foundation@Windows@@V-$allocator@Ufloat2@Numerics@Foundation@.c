/*
 * XREFs of ?reserve@?$vector@Ufloat2@Numerics@Foundation@Windows@@V?$allocator@Ufloat2@Numerics@Foundation@Windows@@@std@@@std@@QEAAX_K@Z @ 0x1801C8038
 * Callers:
 *     ?Reserve@Particles@CParticleEmitter@@QEAAXH@Z @ 0x1801C6960 (-Reserve@Particles@CParticleEmitter@@QEAAXH@Z.c)
 *     ?AddLines@CPathEmitterShape@EmitterShapes@@EEAAXPEBUD2D_POINT_2F@@I@Z @ 0x1801DC260 (-AddLines@CPathEmitterShape@EmitterShapes@@EEAAXPEBUD2D_POINT_2F@@I@Z.c)
 * Callees:
 *     ?_Reallocate_exactly@?$vector@PEAVCDataSourceReader@@V?$allocator@PEAVCDataSourceReader@@@std@@@std@@AEAAX_K@Z @ 0x1801549E4 (-_Reallocate_exactly@-$vector@PEAVCDataSourceReader@@V-$allocator@PEAVCDataSourceReader@@@std@@@.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

unsigned __int64 __fastcall std::vector<Windows::Foundation::Numerics::float2>::reserve(
        _QWORD *a1,
        unsigned __int64 a2)
{
  unsigned __int64 result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  result = (__int64)(a1[2] - *a1) >> 3;
  if ( a2 > result )
  {
    if ( a2 > 0x1FFFFFFFFFFFFFFFLL )
      ModuleFailFastForHRESULT(2147483659LL, retaddr);
    return std::vector<CDataSourceReader *>::_Reallocate_exactly((__int64)a1, a2);
  }
  return result;
}
