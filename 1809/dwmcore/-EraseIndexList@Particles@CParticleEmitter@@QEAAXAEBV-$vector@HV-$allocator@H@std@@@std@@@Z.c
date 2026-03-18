/*
 * XREFs of ?EraseIndexList@Particles@CParticleEmitter@@QEAAXAEBV?$vector@HV?$allocator@H@std@@@std@@@Z @ 0x1801C5C3C
 * Callers:
 *     ?UpdateParticles@CParticleEmitter@@IEAAXM@Z @ 0x1801C7A78 (-UpdateParticles@CParticleEmitter@@IEAAXM@Z.c)
 * Callees:
 *     ??$EraseIndexList@MV?$allocator@M@std@@@Particles@CParticleEmitter@@AEAAXAEAV?$vector@MV?$allocator@M@std@@@std@@AEBV?$vector@HV?$allocator@H@std@@@3@@Z @ 0x1801C3C30 (--$EraseIndexList@MV-$allocator@M@std@@@Particles@CParticleEmitter@@AEAAXAEAV-$vector@MV-$alloca.c)
 *     ??$EraseIndexList@Ufloat2@Numerics@Foundation@Windows@@V?$allocator@Ufloat2@Numerics@Foundation@Windows@@@std@@@Particles@CParticleEmitter@@AEAAXAEAV?$vector@Ufloat2@Numerics@Foundation@Windows@@V?$allocator@Ufloat2@Numerics@Foundation@Windows@@@std@@@std@@AEBV?$vector@HV?$allocator@H@std@@@3@@Z @ 0x1801C3C94 (--$EraseIndexList@Ufloat2@Numerics@Foundation@Windows@@V-$allocator@Ufloat2@Numerics@Foundation@.c)
 *     ??$EraseIndexList@Ufloat4@Numerics@Foundation@Windows@@V?$allocator@Ufloat4@Numerics@Foundation@Windows@@@std@@@Particles@CParticleEmitter@@AEAAXAEAV?$vector@Ufloat4@Numerics@Foundation@Windows@@V?$allocator@Ufloat4@Numerics@Foundation@Windows@@@std@@@std@@AEBV?$vector@HV?$allocator@H@std@@@3@@Z @ 0x1801C3D04 (--$EraseIndexList@Ufloat4@Numerics@Foundation@Windows@@V-$allocator@Ufloat4@Numerics@Foundation@.c)
 */

__int64 __fastcall CParticleEmitter::Particles::EraseIndexList(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  char **v6; // r8
  __int64 v7; // rcx
  char **v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rcx
  char **v11; // r8
  __int64 v12; // rcx
  char **v13; // r8
  __int64 v14; // rcx
  char **v15; // r8
  __int64 v16; // rcx
  __int64 result; // rax

  CParticleEmitter::Particles::EraseIndexList<Windows::Foundation::Numerics::float4,std::allocator<Windows::Foundation::Numerics::float4>>(
    a1,
    (_QWORD *)a1,
    (char **)a2);
  CParticleEmitter::Particles::EraseIndexList<Windows::Foundation::Numerics::float4,std::allocator<Windows::Foundation::Numerics::float4>>(
    v5,
    (_QWORD *)(v4 + 24),
    v6);
  CParticleEmitter::Particles::EraseIndexList<float,std::allocator<float>>(v7, (__int64 *)(a1 + 48), v8);
  CParticleEmitter::Particles::EraseIndexList<Windows::Foundation::Numerics::float4,std::allocator<Windows::Foundation::Numerics::float4>>(
    v9,
    (_QWORD *)(a1 + 72),
    (char **)a2);
  CParticleEmitter::Particles::EraseIndexList<Windows::Foundation::Numerics::float2,std::allocator<Windows::Foundation::Numerics::float2>>(
    v10,
    (__int64 *)(a1 + 96),
    v11);
  CParticleEmitter::Particles::EraseIndexList<Windows::Foundation::Numerics::float2,std::allocator<Windows::Foundation::Numerics::float2>>(
    v12,
    (__int64 *)(a1 + 120),
    v13);
  CParticleEmitter::Particles::EraseIndexList<float,std::allocator<float>>(v14, (__int64 *)(a1 + 144), v15);
  CParticleEmitter::Particles::EraseIndexList<float,std::allocator<float>>(v16, (__int64 *)(a1 + 168), (char **)a2);
  result = (__int64)(*(_QWORD *)(a2 + 8) - *(_QWORD *)a2) >> 2;
  *(_DWORD *)(a1 + 192) -= result;
  return result;
}
