/*
 * XREFs of ?FreeSomeVideoMemory@CD3DResourceManager@@QEAA_NJ@Z @ 0x1800B4020
 * Callers:
 *     ?CreateTexture@CD3DDeviceLevel1@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D11Texture2D@@@Z @ 0x1800B3F2C (-CreateTexture@CD3DDeviceLevel1@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEA.c)
 *     ?CreateSwapChain@CD3DDeviceLevel1@@QEAAJAEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEBVCDisplay@@PEAPEAVCSwapChainBase@@@Z @ 0x1800E31CC (-CreateSwapChain@CD3DDeviceLevel1@@QEAAJAEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@U-$TM.c)
 * Callees:
 *     ?DestroyDelayedResources@CD3DResourceManager@@AEAAIXZ @ 0x1800B1074 (-DestroyDelayedResources@CD3DResourceManager@@AEAAIXZ.c)
 */

bool __fastcall CD3DResourceManager::FreeSomeVideoMemory(CD3DResourceManager *this, int a2)
{
  char v2; // bl

  v2 = 0;
  if ( a2 == -2147024882 )
    return (unsigned int)CD3DResourceManager::DestroyDelayedResources(this) != 0;
  return v2;
}
