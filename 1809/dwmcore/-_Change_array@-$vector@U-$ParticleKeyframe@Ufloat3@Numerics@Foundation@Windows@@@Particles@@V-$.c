/*
 * XREFs of ?_Change_array@?$vector@U?$ParticleKeyframe@Ufloat3@Numerics@Foundation@Windows@@@Particles@@V?$allocator@U?$ParticleKeyframe@Ufloat3@Numerics@Foundation@Windows@@@Particles@@@std@@@std@@AEAAXQEAU?$ParticleKeyframe@Ufloat3@Numerics@Foundation@Windows@@@Particles@@_K1@Z @ 0x1801B2218
 * Callers:
 *     std::vector_TMilRect__float_MilRectF_MilPointAndSizeF_RectUniqueness::NotNeeded__std::allocator_TMilRect__float_MilRectF_MilPointAndSizeF_RectUniqueness::NotNeeded_____::_Resize__lambda_8a411bb10fc2db609d81f8f80079053a___ @ 0x1801B211C (std--vector_TMilRect__float_MilRectF_MilPointAndSizeF_RectUniqueness--NotNeeded__std--allocator_.c)
 *     ??$_Emplace_reallocate@Ufloat4@Numerics@Foundation@Windows@@@?$vector@Ufloat4@Numerics@Foundation@Windows@@V?$allocator@Ufloat4@Numerics@Foundation@Windows@@@std@@@std@@QEAAPEAUfloat4@Numerics@Foundation@Windows@@QEAU2345@$$QEAU2345@@Z @ 0x1801C4010 (--$_Emplace_reallocate@Ufloat4@Numerics@Foundation@Windows@@@-$vector@Ufloat4@Numerics@Foundatio.c)
 *     std::vector_Windows::Foundation::Numerics::float4_std::allocator_Windows::Foundation::Numerics::float4___::_Resize__lambda_0c2713a16b6fe99d6b55b0d81ace1f5d___ @ 0x1801C4110 (std--vector_Windows--Foundation--Numerics--float4_std--allocator_Windows--Foundation--Numerics--.c)
 *     ?_Reallocate_exactly@?$vector@Ufloat4@Numerics@Foundation@Windows@@V?$allocator@Ufloat4@Numerics@Foundation@Windows@@@std@@@std@@AEAAX_K@Z @ 0x1801C7D78 (-_Reallocate_exactly@-$vector@Ufloat4@Numerics@Foundation@Windows@@V-$allocator@Ufloat4@Numerics.c)
 *     ??$_Emplace_reallocate@AEBU?$ParticleKeyframe@Ufloat3@Numerics@Foundation@Windows@@@Particles@@@?$vector@U?$ParticleKeyframe@Ufloat3@Numerics@Foundation@Windows@@@Particles@@V?$allocator@U?$ParticleKeyframe@Ufloat3@Numerics@Foundation@Windows@@@Particles@@@std@@@std@@QEAAPEAU?$ParticleKeyframe@Ufloat3@Numerics@Foundation@Windows@@@Particles@@QEAU23@AEBU23@@Z @ 0x1801DD084 (--$_Emplace_reallocate@AEBU-$ParticleKeyframe@Ufloat3@Numerics@Foundation@Windows@@@Particles@@@.c)
 *     ?_Reallocate_exactly@?$vector@U?$ParticleKeyframe@Ufloat3@Numerics@Foundation@Windows@@@Particles@@V?$allocator@U?$ParticleKeyframe@Ufloat3@Numerics@Foundation@Windows@@@Particles@@@std@@@std@@AEAAX_K@Z @ 0x1801DE1F8 (-_Reallocate_exactly@-$vector@U-$ParticleKeyframe@Ufloat3@Numerics@Foundation@Windows@@@Particle.c)
 *     ??$_Emplace_reallocate@AEBU_D3DCOLORVALUE@@@?$vector@U_D3DCOLORVALUE@@V?$allocator@U_D3DCOLORVALUE@@@std@@@std@@QEAAPEAU_D3DCOLORVALUE@@QEAU2@AEBU2@@Z @ 0x18022255C (--$_Emplace_reallocate@AEBU_D3DCOLORVALUE@@@-$vector@U_D3DCOLORVALUE@@V-$allocator@U_D3DCOLORVAL.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180063B7C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<Particles::ParticleKeyframe<Windows::Foundation::Numerics::float3>>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  void *v6; // rcx

  v6 = *(void **)a1;
  if ( v6 )
    std::_Deallocate<16,0>(v6, (*(_QWORD *)(a1 + 16) - (_QWORD)v6) & 0xFFFFFFFFFFFFFFF0uLL);
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 16) = a2 + 16 * a4;
  *(_QWORD *)(a1 + 8) = a2 + 16 * a3;
}
