/*
 * XREFs of ?_Reallocate_exactly@?$vector@Ufloat4@Numerics@Foundation@Windows@@V?$allocator@Ufloat4@Numerics@Foundation@Windows@@@std@@@std@@AEAAX_K@Z @ 0x1801C7D78
 * Callers:
 *     ?reserve@?$vector@Ufloat4@Numerics@Foundation@Windows@@V?$allocator@Ufloat4@Numerics@Foundation@Windows@@@std@@@std@@QEAAX_K@Z @ 0x1801C807C (-reserve@-$vector@Ufloat4@Numerics@Foundation@Windows@@V-$allocator@Ufloat4@Numerics@Foundation@.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C766C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x1800F0087 (memmove_0.c)
 */

void __fastcall std::vector<Windows::Foundation::Numerics::float4>::_Reallocate_exactly(
        __int64 a1,
        unsigned __int64 a2)
{
  __int64 v4; // rdi
  SIZE_T v5; // rcx
  void *v6; // rbx

  v4 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 4;
  v5 = 16 * a2;
  if ( a2 > 0xFFFFFFFFFFFFFFFLL )
    v5 = -1LL;
  v6 = (void *)std::_Allocate<16,std::_Default_allocate_traits,0>(v5);
  memmove_0(v6, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
  std::vector<Particles::ParticleKeyframe<Windows::Foundation::Numerics::float3>>::_Change_array(
    a1,
    (__int64)v6,
    v4,
    a2);
}
