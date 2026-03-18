/*
 * XREFs of ?_Reallocate_exactly@?$vector@U?$ParticleKeyframe@Ufloat2@Numerics@Foundation@Windows@@@Particles@@V?$allocator@U?$ParticleKeyframe@Ufloat2@Numerics@Foundation@Windows@@@Particles@@@std@@@std@@AEAAX_K@Z @ 0x1801DE14C
 * Callers:
 *     ?reserve@?$vector@U?$ParticleKeyframe@Ufloat2@Numerics@Foundation@Windows@@@Particles@@V?$allocator@U?$ParticleKeyframe@Ufloat2@Numerics@Foundation@Windows@@@Particles@@@std@@@std@@QEAAX_K@Z @ 0x1801DE2DC (-reserve@-$vector@U-$ParticleKeyframe@Ufloat2@Numerics@Foundation@Windows@@@Particles@@V-$alloca.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C766C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<Particles::ParticleKeyframe<Windows::Foundation::Numerics::float2>>::_Reallocate_exactly(
        __int64 *a1,
        unsigned __int64 a2)
{
  __int64 v3; // r8
  SIZE_T v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // r10
  __int64 v10; // rcx
  _QWORD *v11; // rdx
  int v12; // eax

  v3 = a1[1] - *a1;
  v5 = 12 * a2;
  v6 = v3 / 12;
  if ( a2 > 0x1555555555555555LL )
    v5 = -1LL;
  v7 = std::_Allocate<16,std::_Default_allocate_traits,0>(v5);
  v8 = a1[1];
  v9 = v7;
  v10 = *a1;
  v11 = (_QWORD *)v7;
  while ( v10 != v8 )
  {
    *v11 = *(_QWORD *)v10;
    v11 = (_QWORD *)((char *)v11 + 12);
    v12 = *(_DWORD *)(v10 + 8);
    v10 += 12LL;
    *((_DWORD *)v11 - 1) = v12;
  }
  return std::vector<Particles::ParticleKeyframe<Windows::Foundation::Numerics::float2>>::_Change_array(
           (__int64)a1,
           v9,
           v6,
           a2);
}
