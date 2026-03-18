/*
 * XREFs of ?_Reallocate_exactly@?$vector@PEAVCParticleAttractor@@V?$allocator@PEAVCParticleAttractor@@@std@@@std@@AEAAX_K@Z @ 0x180162FCC
 * Callers:
 *     ?RemoveProcessedReadersFromReadyList@DataProviderManager@@AEAAXXZ @ 0x1800E40E8 (-RemoveProcessedReadersFromReadyList@DataProviderManager@@AEAAXXZ.c)
 *     ?RunShader@CSurfaceShaderComposer@@QEAAJPEBXIPEAPEAUID3D11ShaderResourceView@@IAEBUD3D11_VIEWPORT@@W4Enum@BlendMode@@AEBV?$span@USamplerMode@@$0?0@gsl@@_NPEAUID3D11RenderTargetView@@PEAUID3D11PixelShader@@PEBUtagRECT@@5@Z @ 0x180162958 (-RunShader@CSurfaceShaderComposer@@QEAAJPEBXIPEAPEAUID3D11ShaderResourceView@@IAEBUD3D11_VIEWPOR.c)
 *     ?RemoveReaderFromReadyList@DataProviderManager@@QEAAXPEAVCDataSourceReader@@@Z @ 0x1801899B4 (-RemoveReaderFromReadyList@DataProviderManager@@QEAAXPEAVCDataSourceReader@@@Z.c)
 *     ?reserve@?$vector@Ufloat2@Numerics@Foundation@Windows@@V?$allocator@Ufloat2@Numerics@Foundation@Windows@@@std@@@std@@QEAAX_K@Z @ 0x1801A354C (-reserve@-$vector@Ufloat2@Numerics@Foundation@Windows@@V-$allocator@Ufloat2@Numerics@Foundation@.c)
 *     ?SetShapes@CContainerVectorShape@@QEAAJPEAVCResourceTable@@V?$span@$$CBI$0?0@gsl@@_N@Z @ 0x1801D5220 (-SetShapes@CContainerVectorShape@@QEAAJPEAVCResourceTable@@V-$span@$$CBI$0-0@gsl@@_N@Z.c)
 *     ?ProcessSetAttractors@CParticleEmitterVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PARTICLEEMITTERVISUAL_SETATTRACTORS@@PEBXI@Z @ 0x1801ED9D0 (-ProcessSetAttractors@CParticleEmitterVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PARTICLEEMI.c)
 *     ?SetGlyphRuns@CGlyphRunContent@@QEAAJPEAVCResourceTable@@V?$span@$$CBI$0?0@gsl@@_N@Z @ 0x180206AAC (-SetGlyphRuns@CGlyphRunContent@@QEAAJPEAVCResourceTable@@V-$span@$$CBI$0-0@gsl@@_N@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180078318 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x1800EC557 (memmove_0.c)
 */

__int64 __fastcall std::vector<CParticleAttractor *>::_Reallocate_exactly(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // rdi
  SIZE_T v5; // rcx
  void *v6; // rbx

  v4 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3;
  v5 = 8 * a2;
  if ( a2 > 0x1FFFFFFFFFFFFFFFLL )
    v5 = -1LL;
  v6 = (void *)std::_Allocate<16,std::_Default_allocate_traits,0>(v5);
  memmove_0(v6, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
  return std::vector<CVectorShape *>::_Change_array((__int64 *)a1, (__int64)v6, v4, a2);
}
