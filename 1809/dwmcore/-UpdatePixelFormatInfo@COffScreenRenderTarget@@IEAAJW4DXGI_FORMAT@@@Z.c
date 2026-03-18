/*
 * XREFs of ?UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z @ 0x180176404
 * Callers:
 *     ?EnsureResources@CCaptureRenderTarget@@AEAAJXZ @ 0x1801581E0 (-EnsureResources@CCaptureRenderTarget@@AEAAJXZ.c)
 *     ?ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INDIRECTSWAPCHAINRENDERTARGET_CREATE@@@Z @ 0x18015C348 (-ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INDIRECTSWAPC.c)
 *     ?ProcessCreate@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MAGNIFIERRENDERTARGET_CREATE@@@Z @ 0x18015D690 (-ProcessCreate@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MAGNIFIERRENDERTARGET.c)
 *     ?ProcessUpdate@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MAGNIFIERRENDERTARGET@@@Z @ 0x18015D998 (-ProcessUpdate@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MAGNIFIERRENDERTARGET.c)
 *     ?EnsureRenderTargets@COffScreenRenderTarget@@MEAAJXZ @ 0x180175EE0 (-EnsureRenderTargets@COffScreenRenderTarget@@MEAAJXZ.c)
 * Callees:
 *     ?IsValidPixelFormat@@YAHW4DXGI_FORMAT@@@Z @ 0x180092D30 (-IsValidPixelFormat@@YAHW4DXGI_FORMAT@@@Z.c)
 *     ?HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z @ 0x18009445C (-HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall COffScreenRenderTarget::UpdatePixelFormatInfo(COffScreenRenderTarget *this, int a2)
{
  int v2; // edx
  __int64 v3; // rcx
  __int64 v4; // r8
  unsigned int v5; // ebx
  BOOL v6; // eax
  __int64 v7; // r8
  int v8; // edx

  v5 = 0;
  if ( IsValidPixelFormat(a2) )
  {
    *(_DWORD *)(v4 + 368) = v2;
    v6 = HasAlphaChannel(v3);
    *(_DWORD *)(v7 + 372) = v6 ? 1 : 3;
    *(_DWORD *)(v7 + 376) = v8 == 10;
  }
  else
  {
    v5 = -2003292288;
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, -2003292288, 0xD5u);
  }
  return v5;
}
