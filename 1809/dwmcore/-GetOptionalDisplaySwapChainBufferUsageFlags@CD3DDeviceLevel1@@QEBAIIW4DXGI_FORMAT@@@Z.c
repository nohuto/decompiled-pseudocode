/*
 * XREFs of ?GetOptionalDisplaySwapChainBufferUsageFlags@CD3DDeviceLevel1@@QEBAIIW4DXGI_FORMAT@@@Z @ 0x180089D3C
 * Callers:
 *     ?CalcSwapChainParameters@CDisplay@@QEBAJU?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEBVCD3DDeviceLevel1@@PEAUDXGI_SWAP_CHAIN_DESC@@PEAW4DXGI_COLOR_SPACE_TYPE@@PEAIPEA_N@Z @ 0x180089BB0 (-CalcSwapChainParameters@CDisplay@@QEBAJU-$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEBV.c)
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_SuperWetInk@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180089DE8 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_SuperWetInk@@@wil@@CAX_NW4ReportingK.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?IsCompatibleDriver@CComputeScribbleRenderer@@SA_NPEBVCD3DDeviceLevel1@@@Z @ 0x18022C91C (-IsCompatibleDriver@CComputeScribbleRenderer@@SA_NPEBVCD3DDeviceLevel1@@@Z.c)
 *     ?IsGPUWhitelisted@CComputeScribbleRenderer@@SA_NPEBVCD3DDeviceLevel1@@@Z @ 0x18022C950 (-IsGPUWhitelisted@CComputeScribbleRenderer@@SA_NPEBVCD3DDeviceLevel1@@@Z.c)
 */

__int64 __fastcall CD3DDeviceLevel1::GetOptionalDisplaySwapChainBufferUsageFlags(
        CD3DDeviceLevel1 *this,
        unsigned int a2,
        unsigned int a3)
{
  unsigned int v3; // ebx
  int v7; // eax
  int v8; // ecx
  __int64 v10; // rcx
  int v11; // eax
  const struct CD3DDeviceLevel1 *v12; // rcx
  int v13; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  if ( *((int *)this + 185) < 40960 )
  {
    v10 = *((_QWORD *)this + 87);
    if ( *(_DWORD *)(v10 + 296) == 1297040209 )
    {
      v11 = 0;
      if ( *(int *)(v10 + 348) >= 1200 )
        v11 = 16;
      v3 = v11;
    }
  }
  else
  {
    v3 = 16;
  }
  wil::Feature<__WilFeatureTraits_Feature_SuperWetInk>::ReportUsageToService();
  if ( a2 > 1 && CCommonRegistryData::m_fSuperWetEnabled && *((int *)this + 185) >= 45056 && !*((_QWORD *)this + 77) )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *))(**((_QWORD **)this + 79) + 232LL))(
           *((_QWORD *)this + 79),
           a3,
           &v13);
    v8 = 0;
    if ( v7 >= 0 )
      v8 = v13;
    if ( (v8 & 0x2000000) != 0
      && CComputeScribbleRenderer::IsGPUWhitelisted(this)
      && CComputeScribbleRenderer::IsCompatibleDriver(v12) )
    {
      v3 |= 0x2000480u;
    }
  }
  return v3;
}
