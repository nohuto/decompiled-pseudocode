/*
 * XREFs of ?Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ @ 0x180196110
 * Callers:
 *     ??1CIndirectSwapchainRenderTarget@@EEAA@XZ @ 0x180194EE4 (--1CIndirectSwapchainRenderTarget@@EEAA@XZ.c)
 *     ?ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INDIRECTSWAPCHAINRENDERTARGET_CREATE@@@Z @ 0x1801956C0 (-ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INDIRECTSW.c)
 *     ?ProcessUnregister@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INDIRECTSWAPCHAINRENDERTARGET_UNREGISTER@@@Z @ 0x180195B2C (-ProcessUnregister@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INDIRE.c)
 *     ?ReleaseCurrentBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x180195BFC (-ReleaseCurrentBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 *     ?ReleaseResourcesForDisplayChange@CIndirectSwapchainRenderTarget@@UEAAXXZ @ 0x180195D10 (-ReleaseResourcesForDisplayChange@CIndirectSwapchainRenderTarget@@UEAAXXZ.c)
 *     ?Render@CIndirectSwapchainRenderTarget@@UEAAJPEA_N@Z @ 0x180195DE0 (-Render@CIndirectSwapchainRenderTarget@@UEAAJPEA_N@Z.c)
 *     ?TryTargetNextBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x18019602C (-TryTargetNextBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 * Callees:
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x18002B3C0 (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800B8A58 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?GetMetaData@CIndirectSwapchainRenderTarget@@AEAAXPEAPEAXPEAI@Z @ 0x18019555C (-GetMetaData@CIndirectSwapchainRenderTarget@@AEAAXPEAPEAXPEAI@Z.c)
 *     ?ReleaseRenderTargets@COffScreenRenderTarget@@MEAAXXZ @ 0x18019AF10 (-ReleaseRenderTargets@COffScreenRenderTarget@@MEAAXXZ.c)
 */

void __fastcall CIndirectSwapchainRenderTarget::Unregister(CIndirectSwapchainRenderTarget *this)
{
  __int64 *v1; // rdi
  __int64 v3; // rcx
  unsigned int i; // edi
  __int64 v5; // rcx
  __int64 v6; // rcx
  unsigned int v7; // [rsp+30h] [rbp+8h] BYREF
  void *v8; // [rsp+38h] [rbp+10h] BYREF

  v1 = (__int64 *)((char *)this + 136);
  v3 = *((_QWORD *)this + 17);
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v3 + 32LL))(v3, (char *)this + 80);
    ReleaseInterface<IBitmapLock>(v1);
  }
  COffScreenRenderTarget::ReleaseRenderTargets(this);
  if ( *((_QWORD *)this + 65) )
  {
    CIndirectSwapchainRenderTarget::GetMetaData(this, &v8, &v7);
    (*(void (__fastcall **)(_QWORD, _QWORD, void *))(**((_QWORD **)this + 64) + 64LL))(*((_QWORD *)this + 64), v7, v8);
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 65) + 16LL))(*((_QWORD *)this + 65));
    *((_QWORD *)this + 65) = 0LL;
  }
  for ( i = 0; i < *((_DWORD *)this + 104); ++i )
  {
    v5 = *(_QWORD *)(*((_QWORD *)this + 49) + 16LL * i + 8);
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  *((_DWORD *)this + 104) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 392, 0x10u);
  v6 = *((_QWORD *)this + 64);
  if ( v6 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    *((_QWORD *)this + 64) = 0LL;
  }
  *((_WORD *)this + 252) = 0;
  *((_BYTE *)this + 266) = 0;
  *((_BYTE *)this + 506) = 0;
  *((_DWORD *)this + 124) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 472, 1u);
  CRenderTargetManager::RemoveRenderTarget(*(CRenderTargetManager **)(*((_QWORD *)this + 2) + 64LL), this);
}
