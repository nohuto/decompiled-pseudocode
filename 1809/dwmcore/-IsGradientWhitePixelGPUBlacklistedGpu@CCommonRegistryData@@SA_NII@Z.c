/*
 * XREFs of ?IsGradientWhitePixelGPUBlacklistedGpu@CCommonRegistryData@@SA_NII@Z @ 0x18009360C
 * Callers:
 *     ?Init@CHwTextureRenderTarget@@IEAAJPEAVCD3DDeviceLevel1@@AEBVCResourceTag@@IIAEBUPixelFormatInfo@@_N@Z @ 0x1800936AC (-Init@CHwTextureRenderTarget@@IEAAJPEAVCD3DDeviceLevel1@@AEBVCResourceTag@@IIAEBUPixelFormatInfo.c)
 * Callees:
 *     ?ParseGpuIdListKey@CCommonRegistryData@@CA_NPEBDPEAPEAUGpuId@1@PEAI@Z @ 0x1800D55C8 (-ParseGpuIdListKey@CCommonRegistryData@@CA_NPEBDPEAPEAUGpuId@1@PEAI@Z.c)
 */

char __fastcall CCommonRegistryData::IsGradientWhitePixelGPUBlacklistedGpu(int a1, unsigned __int16 a2)
{
  struct CCommonRegistryData::GpuId *v2; // rax
  int v3; // ebx
  unsigned int v6; // ecx
  _WORD *i; // rdx
  unsigned int v9; // [rsp+40h] [rbp+18h] BYREF
  struct CCommonRegistryData::GpuId *v10; // [rsp+48h] [rbp+20h] BYREF

  v2 = CCommonRegistryData::m_whitePixelBlacklistedGpuIds;
  v3 = 0;
  if ( CCommonRegistryData::m_whitePixelBlacklistedGpuIds )
  {
    v6 = CCommonRegistryData::m_countWhitePixelBlacklistedGpuIds;
  }
  else if ( CCommonRegistryData::ParseGpuIdListKey("GradientWhitePixelGPUBlacklist", &v10, &v9) )
  {
    v2 = v10;
    v6 = v9;
    CCommonRegistryData::m_whitePixelBlacklistedGpuIds = v10;
    CCommonRegistryData::m_countWhitePixelBlacklistedGpuIds = v9;
  }
  else
  {
    v2 = (struct CCommonRegistryData::GpuId *)&unk_1802BD174;
    CCommonRegistryData::m_countWhitePixelBlacklistedGpuIds = 0;
    CCommonRegistryData::m_whitePixelBlacklistedGpuIds = (const struct CCommonRegistryData::GpuId *const)&unk_1802BD174;
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
