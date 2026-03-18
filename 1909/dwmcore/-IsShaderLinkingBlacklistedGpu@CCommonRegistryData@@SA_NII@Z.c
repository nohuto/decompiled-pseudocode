/*
 * XREFs of ?IsShaderLinkingBlacklistedGpu@CCommonRegistryData@@SA_NII@Z @ 0x18002D990
 * Callers:
 *     ?Init@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIAdapterLimited@@@Z @ 0x18002DEEC (-Init@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIAdapterLimited@@@Z.c)
 * Callees:
 *     ?ParseGpuIdListKey@CCommonRegistryData@@CA_NPEBDPEAPEAUGpuId@1@PEAI@Z @ 0x1800E2C08 (-ParseGpuIdListKey@CCommonRegistryData@@CA_NPEBDPEAPEAUGpuId@1@PEAI@Z.c)
 */

char __fastcall CCommonRegistryData::IsShaderLinkingBlacklistedGpu(int a1, unsigned __int16 a2)
{
  struct CCommonRegistryData::GpuId *v2; // rax
  int v3; // ebx
  unsigned int v6; // ecx
  _WORD *i; // rdx
  unsigned int v9; // [rsp+40h] [rbp+18h] BYREF
  struct CCommonRegistryData::GpuId *v10; // [rsp+48h] [rbp+20h] BYREF

  v2 = CCommonRegistryData::m_rgwShaderLinkingBlacklistedGpuIds;
  v3 = 0;
  if ( CCommonRegistryData::m_rgwShaderLinkingBlacklistedGpuIds )
  {
    v6 = CCommonRegistryData::m_cShaderLinkingBlacklistedGpuIds;
  }
  else if ( CCommonRegistryData::ParseGpuIdListKey("ShaderLinkingGPUBlacklist", &v10, &v9) )
  {
    v2 = v10;
    v6 = v9;
    CCommonRegistryData::m_rgwShaderLinkingBlacklistedGpuIds = v10;
    CCommonRegistryData::m_cShaderLinkingBlacklistedGpuIds = v9;
  }
  else
  {
    v2 = (struct CCommonRegistryData::GpuId *)&unk_1802E1DF0;
    CCommonRegistryData::m_cShaderLinkingBlacklistedGpuIds = 0;
    CCommonRegistryData::m_rgwShaderLinkingBlacklistedGpuIds = (const struct CCommonRegistryData::GpuId *const)&unk_1802E1DF0;
    v6 = 0;
  }
  if ( !v6 )
    return 0;
  for ( i = (_WORD *)((char *)v2 + 2); a1 != (unsigned __int16)*(i - 1) || (a2 & i[1]) != *i; i += 3 )
  {
    if ( ++v3 >= v6 )
      return 0;
  }
  return 1;
}
