/*
 * XREFs of ??$_Emplace_reallocate@Ufloat4@Numerics@Foundation@Windows@@@?$vector@Ufloat4@Numerics@Foundation@Windows@@V?$allocator@Ufloat4@Numerics@Foundation@Windows@@@std@@@std@@QEAAPEAUfloat4@Numerics@Foundation@Windows@@QEAU2345@$$QEAU2345@@Z @ 0x1801C4010
 * Callers:
 *     ?SpawnParticles@CParticleEmitter@@IEAAJH@Z @ 0x1801C71C0 (-SpawnParticles@CParticleEmitter@@IEAAJH@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C766C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x1800F0087 (memmove_0.c)
 *     ?_Change_array@?$vector@U?$ParticleKeyframe@Ufloat3@Numerics@Foundation@Windows@@@Particles@@V?$allocator@U?$ParticleKeyframe@Ufloat3@Numerics@Foundation@Windows@@@Particles@@@std@@@std@@AEAAXQEAU?$ParticleKeyframe@Ufloat3@Numerics@Foundation@Windows@@@Particles@@_K1@Z @ 0x1801B2218 (-_Change_array@-$vector@U-$ParticleKeyframe@Ufloat3@Numerics@Foundation@Windows@@@Particles@@V-$.c)
 *     ?_Calculate_growth@?$vector@Ufloat4@Numerics@Foundation@Windows@@V?$allocator@Ufloat4@Numerics@Foundation@Windows@@@std@@@std@@AEBA_K_K@Z @ 0x1801C7C7C (-_Calculate_growth@-$vector@Ufloat4@Numerics@Foundation@Windows@@V-$allocator@Ufloat4@Numerics@F.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

unsigned __int64 __fastcall std::vector<Windows::Foundation::Numerics::float4>::_Emplace_reallocate<Windows::Foundation::Numerics::float4>(
        const void **a1,
        _BYTE *a2,
        _OWORD *a3)
{
  signed __int64 v3; // rbx
  __int64 v5; // rax
  __int64 v8; // r15
  unsigned __int64 v9; // r14
  SIZE_T v10; // rcx
  unsigned __int64 v11; // r9
  char *v12; // rax
  unsigned __int64 v13; // rbx
  __int64 v14; // rbp
  void *v15; // rcx
  _BYTE *v16; // r8
  _BYTE *v17; // rdx
  size_t v18; // r8
  void *retaddr; // [rsp+38h] [rbp+0h]

  v3 = a2 - (_BYTE *)*a1;
  v5 = ((_BYTE *)a1[1] - (_BYTE *)*a1) >> 4;
  if ( v5 == 0xFFFFFFFFFFFFFFFLL )
    ModuleFailFastForHRESULT(2147483659LL, retaddr);
  v8 = v5 + 1;
  v9 = std::vector<Windows::Foundation::Numerics::float4>::_Calculate_growth(a1, v5 + 1);
  v10 = 16 * v9;
  if ( v9 > v11 )
    v10 = -1LL;
  v12 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(v10);
  v13 = v3 & 0xFFFFFFFFFFFFFFF0uLL;
  v14 = (__int64)v12;
  v15 = v12;
  *(_OWORD *)&v12[v13] = *a3;
  v16 = a1[1];
  v17 = *a1;
  if ( a2 == v16 )
  {
    v18 = v16 - v17;
  }
  else
  {
    memmove_0(v12, v17, a2 - (_BYTE *)*a1);
    v18 = (_BYTE *)a1[1] - a2;
    v17 = a2;
    v15 = (void *)(v14 + v13 + 16);
  }
  memmove_0(v15, v17, v18);
  std::vector<Particles::ParticleKeyframe<Windows::Foundation::Numerics::float3>>::_Change_array(
    (__int64)a1,
    v14,
    v8,
    v9);
  return (unsigned __int64)*a1 + v13;
}
