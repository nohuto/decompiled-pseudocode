/*
 * XREFs of ?ReleaseRenderTargets@COffScreenRenderTarget@@MEAAXXZ @ 0x18001D440
 * Callers:
 *     ??1COffScreenRenderTarget@@MEAA@XZ @ 0x18001D3A4 (--1COffScreenRenderTarget@@MEAA@XZ.c)
 *     ?ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INDIRECTSWAPCHAINRENDERTARGET_CREATE@@@Z @ 0x18015C348 (-ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INDIRECTSWAPC.c)
 *     ?ReleaseCurrentBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x18015C7A0 (-ReleaseCurrentBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 *     ?Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ @ 0x18015CC80 (-Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ.c)
 *     ?EnsureRenderTargets@CMagnifierRenderTarget@@MEAAJXZ @ 0x18015CF10 (-EnsureRenderTargets@CMagnifierRenderTarget@@MEAAJXZ.c)
 *     ?ProcessUpdate@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MAGNIFIERRENDERTARGET@@@Z @ 0x18015D998 (-ProcessUpdate@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MAGNIFIERRENDERTARGET.c)
 * Callees:
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x180016D4C (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 */

void __fastcall COffScreenRenderTarget::ReleaseRenderTargets(COffScreenRenderTarget *this)
{
  __int64 i; // rdi
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 74); i = (unsigned int)(i + 1) )
  {
    v3 = *(_QWORD *)(*((_QWORD *)this + 34) + 8 * i);
    ReleaseInterface<IBitmapLock>(&v3);
  }
  *((_DWORD *)this + 74) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 272, 8LL);
}
