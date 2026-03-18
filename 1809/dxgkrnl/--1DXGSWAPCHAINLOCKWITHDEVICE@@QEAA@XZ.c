/*
 * XREFs of ??1DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@XZ @ 0x1C024F6E8
 * Callers:
 *     ?SwapChainReleaseInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDH@Z @ 0x1C0252404 (-SwapChainReleaseInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDH@Z.c)
 *     DxgkAcquireSwapChain @ 0x1C02528A0 (DxgkAcquireSwapChain.c)
 *     DxgkAddSurfaceToSwapChain @ 0x1C0252D90 (DxgkAddSurfaceToSwapChain.c)
 *     DxgkCreateSwapChain @ 0x1C0253130 (DxgkCreateSwapChain.c)
 *     DxgkRemoveSurfaceFromSwapChain @ 0x1C0254600 (DxgkRemoveSurfaceFromSwapChain.c)
 *     DxgkUnOrderedPresentSwapChain @ 0x1C02548A0 (DxgkUnOrderedPresentSwapChain.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAXXZ @ 0x1C0251950 (-Release@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAXXZ.c)
 */

void __fastcall DXGSWAPCHAINLOCKWITHDEVICE::~DXGSWAPCHAINLOCKWITHDEVICE(DXGSWAPCHAINLOCKWITHDEVICE *this)
{
  DXGSWAPCHAINLOCKWITHDEVICE::Release(this);
  COREACCESS::~COREACCESS((DXGSWAPCHAINLOCKWITHDEVICE *)((char *)this + 56));
  if ( *((_BYTE *)this + 32) )
    DXGAUTOMUTEX::Release((DXGSWAPCHAINLOCKWITHDEVICE *)((char *)this + 24));
}
