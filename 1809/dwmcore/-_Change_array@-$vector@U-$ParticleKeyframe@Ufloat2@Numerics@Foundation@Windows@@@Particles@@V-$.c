/*
 * XREFs of ?_Change_array@?$vector@U?$ParticleKeyframe@Ufloat2@Numerics@Foundation@Windows@@@Particles@@V?$allocator@U?$ParticleKeyframe@Ufloat2@Numerics@Foundation@Windows@@@Particles@@@std@@@std@@AEAAXQEAU?$ParticleKeyframe@Ufloat2@Numerics@Foundation@Windows@@@Particles@@_K1@Z @ 0x1801DE034
 * Callers:
 *     ??$_Emplace_reallocate@AEBU?$ParticleKeyframe@Ufloat2@Numerics@Foundation@Windows@@@Particles@@@?$vector@U?$ParticleKeyframe@Ufloat2@Numerics@Foundation@Windows@@@Particles@@V?$allocator@U?$ParticleKeyframe@Ufloat2@Numerics@Foundation@Windows@@@Particles@@@std@@@std@@QEAAPEAU?$ParticleKeyframe@Ufloat2@Numerics@Foundation@Windows@@@Particles@@QEAU23@AEBU23@@Z @ 0x1801DCED8 (--$_Emplace_reallocate@AEBU-$ParticleKeyframe@Ufloat2@Numerics@Foundation@Windows@@@Particles@@@.c)
 *     ?_Reallocate_exactly@?$vector@U?$ParticleKeyframe@Ufloat2@Numerics@Foundation@Windows@@@Particles@@V?$allocator@U?$ParticleKeyframe@Ufloat2@Numerics@Foundation@Windows@@@Particles@@@std@@@std@@AEAAX_K@Z @ 0x1801DE14C (-_Reallocate_exactly@-$vector@U-$ParticleKeyframe@Ufloat2@Numerics@Foundation@Windows@@@Particle.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180063B7C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<Particles::ParticleKeyframe<Windows::Foundation::Numerics::float2>>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  void *v6; // rcx
  __int64 result; // rax

  v6 = *(void **)a1;
  if ( v6 )
    std::_Deallocate<16,0>(v6, 12 * ((*(_QWORD *)(a1 + 16) - (_QWORD)v6) / 12LL));
  *(_QWORD *)a1 = a2;
  result = 3 * a4;
  *(_QWORD *)(a1 + 8) = a2 + 12 * a3;
  *(_QWORD *)(a1 + 16) = a2 + 12 * a4;
  return result;
}
