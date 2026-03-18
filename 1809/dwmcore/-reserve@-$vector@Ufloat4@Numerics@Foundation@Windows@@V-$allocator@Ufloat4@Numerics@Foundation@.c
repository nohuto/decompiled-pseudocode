/*
 * XREFs of ?reserve@?$vector@Ufloat4@Numerics@Foundation@Windows@@V?$allocator@Ufloat4@Numerics@Foundation@Windows@@@std@@@std@@QEAAX_K@Z @ 0x1801C807C
 * Callers:
 *     ?Reserve@Particles@CParticleEmitter@@QEAAXH@Z @ 0x1801C6960 (-Reserve@Particles@CParticleEmitter@@QEAAXH@Z.c)
 * Callees:
 *     ?_Reallocate_exactly@?$vector@Ufloat4@Numerics@Foundation@Windows@@V?$allocator@Ufloat4@Numerics@Foundation@Windows@@@std@@@std@@AEAAX_K@Z @ 0x1801C7D78 (-_Reallocate_exactly@-$vector@Ufloat4@Numerics@Foundation@Windows@@V-$allocator@Ufloat4@Numerics.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

void __fastcall std::vector<Windows::Foundation::Numerics::float4>::reserve(_QWORD *a1, unsigned __int64 a2)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 > (__int64)(a1[2] - *a1) >> 4 )
  {
    if ( a2 > 0xFFFFFFFFFFFFFFFLL )
      ModuleFailFastForHRESULT(2147483659LL, retaddr);
    std::vector<Windows::Foundation::Numerics::float4>::_Reallocate_exactly((__int64)a1, a2);
  }
}
