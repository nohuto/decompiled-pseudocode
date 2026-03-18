/*
 * XREFs of ?_Change_array@?$vector@PEAVCVectorShape@@V?$allocator@PEAVCVectorShape@@@std@@@std@@AEAAXQEAPEAVCVectorShape@@_K1@Z @ 0x18001B608
 * Callers:
 *     ??$_Emplace_reallocate@AEBQEAUObserver@CProcessAttributionManager@@@?$vector@PEAUObserver@CProcessAttributionManager@@V?$allocator@PEAUObserver@CProcessAttributionManager@@@std@@@std@@QEAAPEAPEAUObserver@CProcessAttributionManager@@QEAPEAU23@AEBQEAU23@@Z @ 0x18001B510 (--$_Emplace_reallocate@AEBQEAUObserver@CProcessAttributionManager@@@-$vector@PEAUObserver@CProce.c)
 *     ??$_Emplace_reallocate@AEBQEAUProcessAttributionRecord@CProcessAttributionManager@@@?$vector@PEAUProcessAttributionRecord@CProcessAttributionManager@@V?$allocator@PEAUProcessAttributionRecord@CProcessAttributionManager@@@std@@@std@@QEAAPEAPEAUProcessAttributionRecord@CProcessAttributionManager@@QEAPEAU23@AEBQEAU23@@Z @ 0x1800E4360 (--$_Emplace_reallocate@AEBQEAUProcessAttributionRecord@CProcessAttributionManager@@@-$vector@PEA.c)
 *     ??$_Emplace_reallocate@PEAVCVisual@@@?$vector@PEAVCVisual@@V?$allocator@PEAVCVisual@@@std@@@std@@QEAAPEAPEAVCVisual@@QEAPEAV2@$$QEAPEAV2@@Z @ 0x18014A84C (--$_Emplace_reallocate@PEAVCVisual@@@-$vector@PEAVCVisual@@V-$allocator@PEAVCVisual@@@std@@@std@.c)
 *     ??$_Emplace_reallocate@AEBQEAUID3D11SamplerState@@@?$vector@PEAUID3D11SamplerState@@V?$allocator@PEAUID3D11SamplerState@@@std@@@std@@QEAAPEAPEAUID3D11SamplerState@@QEAPEAU2@AEBQEAU2@@Z @ 0x1801532C4 (--$_Emplace_reallocate@AEBQEAUID3D11SamplerState@@@-$vector@PEAUID3D11SamplerState@@V-$allocator.c)
 *     ?_Reallocate_exactly@?$vector@PEAVCDataSourceReader@@V?$allocator@PEAVCDataSourceReader@@@std@@@std@@AEAAX_K@Z @ 0x1801549E4 (-_Reallocate_exactly@-$vector@PEAVCDataSourceReader@@V-$allocator@PEAVCDataSourceReader@@@std@@@.c)
 *     ??$_Emplace_reallocate@AEBUfloat2@Numerics@Foundation@Windows@@@?$vector@Ufloat2@Numerics@Foundation@Windows@@V?$allocator@Ufloat2@Numerics@Foundation@Windows@@@std@@@std@@QEAAPEAUfloat2@Numerics@Foundation@Windows@@QEAU2345@AEBU2345@@Z @ 0x1801C3F0C (--$_Emplace_reallocate@AEBUfloat2@Numerics@Foundation@Windows@@@-$vector@Ufloat2@Numerics@Founda.c)
 *     std::vector_Windows::Foundation::Numerics::float2_std::allocator_Windows::Foundation::Numerics::float2___::_Resize__lambda_2ff4ffb0ae9e0c6fc701fcd0ab995068___ @ 0x1801C4368 (std--vector_Windows--Foundation--Numerics--float2_std--allocator_Windows--Foundation--Numerics--.c)
 *     ??$_Emplace_reallocate@AEBU?$ParticleKeyframe@M@Particles@@@?$vector@U?$ParticleKeyframe@M@Particles@@V?$allocator@U?$ParticleKeyframe@M@Particles@@@std@@@std@@QEAAPEAU?$ParticleKeyframe@M@Particles@@QEAU23@AEBU23@@Z @ 0x1801DCD90 (--$_Emplace_reallocate@AEBU-$ParticleKeyframe@M@Particles@@@-$vector@U-$ParticleKeyframe@M@Parti.c)
 *     ?_Reallocate_exactly@?$vector@U?$ParticleKeyframe@M@Particles@@V?$allocator@U?$ParticleKeyframe@M@Particles@@@std@@@std@@AEAAX_K@Z @ 0x1801DE0C4 (-_Reallocate_exactly@-$vector@U-$ParticleKeyframe@M@Particles@@V-$allocator@U-$ParticleKeyframe@.c)
 *     ??$_Emplace_reallocate@AEAUD2D_POINT_2F@@@?$vector@UD2D_POINT_2F@@V?$allocator@UD2D_POINT_2F@@@std@@@std@@QEAAPEAUD2D_POINT_2F@@QEAU2@AEAU2@@Z @ 0x18021FC90 (--$_Emplace_reallocate@AEAUD2D_POINT_2F@@@-$vector@UD2D_POINT_2F@@V-$allocator@UD2D_POINT_2F@@@s.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180063B7C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<CVectorShape *>::_Change_array(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rcx
  __int64 result; // rax

  v6 = *a1;
  if ( v6 )
    std::_Deallocate<16,0>(v6, (a1[2] - v6) & 0xFFFFFFFFFFFFFFF8uLL);
  *a1 = a2;
  a1[1] = a2 + 8 * a3;
  result = a2 + 8 * a4;
  a1[2] = result;
  return result;
}
