/*
 * XREFs of ?ReleaseRenderTargets@COffScreenRenderTarget@@MEAAXXZ @ 0x180199650
 * Callers:
 *     ?ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INDIRECTSWAPCHAINRENDERTARGET_CREATE@@@Z @ 0x180193F80 (-ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INDIRECTSW.c)
 *     ?ReleaseCurrentBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x1801944BC (-ReleaseCurrentBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 *     ?Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ @ 0x1801949D0 (-Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ.c)
 *     ??1COffScreenRenderTarget@@MEAA@XZ @ 0x180198F40 (--1COffScreenRenderTarget@@MEAA@XZ.c)
 *     ?EnsureRenderTargets@CMagnifierRenderTarget@@MEAAJXZ @ 0x1801A86E0 (-EnsureRenderTargets@CMagnifierRenderTarget@@MEAAJXZ.c)
 *     ?ProcessUpdate@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MAGNIFIERRENDERTARGET@@@Z @ 0x1801A91F0 (-ProcessUpdate@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MAGNIFIERRENDERTAR.c)
 * Callees:
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x180026E1C (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
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
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 272, 8u);
}
