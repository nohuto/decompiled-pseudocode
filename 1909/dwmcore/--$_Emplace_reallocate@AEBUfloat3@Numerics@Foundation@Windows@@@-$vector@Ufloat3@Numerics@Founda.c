/*
 * XREFs of ??$_Emplace_reallocate@AEBUfloat3@Numerics@Foundation@Windows@@@?$vector@Ufloat3@Numerics@Foundation@Windows@@V?$allocator@Ufloat3@Numerics@Foundation@Windows@@@std@@@std@@QEAAPEAUfloat3@Numerics@Foundation@Windows@@QEAU2345@AEBU2345@@Z @ 0x1801E9224
 * Callers:
 *     ?SpawnParticles@CParticleEmitterVisual@@IEAAJHPEBUD2D_SIZE_F@@@Z @ 0x1801EC9E8 (-SpawnParticles@CParticleEmitterVisual@@IEAAJHPEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18003DFF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x1800F0217 (memmove_0.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x180159B0C (-_Xlength_error@std@@YAXPEBD@Z.c)
 *     ?_Change_array@?$vector@U?$ParticleKeyframe@M@Particles@@V?$allocator@U?$ParticleKeyframe@M@Particles@@@std@@@std@@AEAAXQEAU?$ParticleKeyframe@M@Particles@@_K1@Z @ 0x1801A18C0 (-_Change_array@-$vector@U-$ParticleKeyframe@M@Particles@@V-$allocator@U-$ParticleKeyframe@M@Part.c)
 */

__int64 __fastcall std::vector<Windows::Foundation::Numerics::float3>::_Emplace_reallocate<Windows::Foundation::Numerics::float3 const &>(
        const void **a1,
        _BYTE *a2,
        __int64 a3)
{
  signed __int64 v4; // r9
  signed __int64 v7; // rcx
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rbx
  SIZE_T v12; // rcx
  __int64 v13; // r15
  char *v14; // rbp
  char *v15; // rcx
  _BYTE *v16; // r8
  _BYTE *v17; // rdx
  size_t v18; // r8

  v4 = a2 - (_BYTE *)*a1;
  v7 = (_BYTE *)a1[1] - (_BYTE *)*a1;
  if ( v7 / 12 == 0x1555555555555555LL )
    std::_Xlength_error((const char *)v7);
  v8 = v7 / 12 + 1;
  v9 = ((_BYTE *)a1[2] - (_BYTE *)*a1) / 12;
  v10 = v9 >> 1;
  if ( v9 <= 0x1555555555555555LL - (v9 >> 1) )
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v8;
  }
  else
  {
    v11 = v8;
  }
  v12 = 12 * v11;
  if ( v11 > 0x1555555555555555LL )
    v12 = -1LL;
  v13 = 3 * (v4 / 12);
  v14 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(v12);
  *(_QWORD *)&v14[4 * v13] = *(_QWORD *)a3;
  *(_DWORD *)&v14[4 * v13 + 8] = *(_DWORD *)(a3 + 8);
  v15 = v14;
  v16 = a1[1];
  v17 = *a1;
  if ( a2 == v16 )
  {
    v18 = v16 - v17;
  }
  else
  {
    memmove_0(v14, v17, a2 - (_BYTE *)*a1);
    v18 = (_BYTE *)a1[1] - a2;
    v17 = a2;
    v15 = &v14[4 * v13 + 12];
  }
  memmove_0(v15, v17, v18);
  std::vector<Particles::ParticleKeyframe<float>>::_Change_array((__int64)a1, (__int64)v14, v8, v11);
  return (__int64)*a1 + 4 * v13;
}
