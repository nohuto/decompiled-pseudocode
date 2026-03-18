/*
 * XREFs of ?_Reallocate_exactly@?$vector@Ufloat3@Numerics@Foundation@Windows@@V?$allocator@Ufloat3@Numerics@Foundation@Windows@@@std@@@std@@AEAAX_K@Z @ 0x1801A32D0
 * Callers:
 *     ?reserve@?$vector@Ufloat3@Numerics@Foundation@Windows@@V?$allocator@Ufloat3@Numerics@Foundation@Windows@@@std@@@std@@QEAAX_K@Z @ 0x1801A3588 (-reserve@-$vector@Ufloat3@Numerics@Foundation@Windows@@V-$allocator@Ufloat3@Numerics@Foundation@.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180078318 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x1800EC557 (memmove_0.c)
 */

__int64 __fastcall std::vector<Windows::Foundation::Numerics::float3>::_Reallocate_exactly(
        __int64 a1,
        unsigned __int64 a2)
{
  __int64 v3; // r8
  SIZE_T v5; // rcx
  __int64 v6; // rdi
  void *v7; // rbx

  v3 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
  v5 = 12 * a2;
  v6 = v3 / 12;
  if ( a2 > 0x1555555555555555LL )
    v5 = -1LL;
  v7 = (void *)std::_Allocate<16,std::_Default_allocate_traits,0>(v5);
  memmove_0(v7, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
  return std::vector<Particles::ParticleKeyframe<float>>::_Change_array(a1, (__int64)v7, v6, a2);
}
