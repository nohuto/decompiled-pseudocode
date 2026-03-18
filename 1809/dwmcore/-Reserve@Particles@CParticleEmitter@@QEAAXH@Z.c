/*
 * XREFs of ?Reserve@Particles@CParticleEmitter@@QEAAXH@Z @ 0x1801C6960
 * Callers:
 *     ?Setup@CParticleEmitter@@IEAAXXZ @ 0x1801C6B1C (-Setup@CParticleEmitter@@IEAAXXZ.c)
 * Callees:
 *     ?reserve@?$vector@MV?$allocator@M@std@@@std@@QEAAX_K@Z @ 0x1801B40A0 (-reserve@-$vector@MV-$allocator@M@std@@@std@@QEAAX_K@Z.c)
 *     ?reserve@?$vector@Ufloat2@Numerics@Foundation@Windows@@V?$allocator@Ufloat2@Numerics@Foundation@Windows@@@std@@@std@@QEAAX_K@Z @ 0x1801C8038 (-reserve@-$vector@Ufloat2@Numerics@Foundation@Windows@@V-$allocator@Ufloat2@Numerics@Foundation@.c)
 *     ?reserve@?$vector@Ufloat4@Numerics@Foundation@Windows@@V?$allocator@Ufloat4@Numerics@Foundation@Windows@@@std@@@std@@QEAAX_K@Z @ 0x1801C807C (-reserve@-$vector@Ufloat4@Numerics@Foundation@Windows@@V-$allocator@Ufloat4@Numerics@Foundation@.c)
 */

void __fastcall CParticleEmitter::Particles::Reserve(CParticleEmitter::Particles *this, int a2)
{
  unsigned __int64 v2; // rbx

  v2 = a2;
  std::vector<Windows::Foundation::Numerics::float4>::reserve(this, a2);
  std::vector<Windows::Foundation::Numerics::float4>::reserve((char *)this + 24, v2);
  std::vector<float>::reserve((_QWORD *)this + 6, v2);
  std::vector<Windows::Foundation::Numerics::float4>::reserve((char *)this + 72, v2);
  std::vector<Windows::Foundation::Numerics::float2>::reserve((char *)this + 96, v2);
  std::vector<Windows::Foundation::Numerics::float2>::reserve((char *)this + 120, v2);
  std::vector<float>::reserve((_QWORD *)this + 18, v2);
  std::vector<float>::reserve((_QWORD *)this + 21, v2);
}
