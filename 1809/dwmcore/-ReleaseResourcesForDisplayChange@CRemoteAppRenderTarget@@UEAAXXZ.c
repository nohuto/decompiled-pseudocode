/*
 * XREFs of ?ReleaseResourcesForDisplayChange@CRemoteAppRenderTarget@@UEAAXXZ @ 0x18015FEF0
 * Callers:
 *     ?ProcessDestroyWindow@CRemoteAppRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_REMOTEAPPRENDERTARGET_DESTROYWINDOW@@@Z @ 0x18015FC80 (-ProcessDestroyWindow@CRemoteAppRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_REMOTEAPPRENDE.c)
 *     ?SetWindowBounds@CRemoteAppRenderTarget@@IEAAJAEBUtagRECT@@@Z @ 0x180160420 (-SetWindowBounds@CRemoteAppRenderTarget@@IEAAJAEBUtagRECT@@@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x180016D4C (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CRemoteAppRenderTarget::ReleaseResourcesForDisplayChange(CRemoteAppRenderTarget *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  v2 = *((_QWORD *)this + 9);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v2 + 32LL))(
      v2,
      ((unsigned __int64)this + 16) & -(__int64)(this != (CRemoteAppRenderTarget *)64));
    ReleaseInterface<IBitmapLock>((__int64 *)this + 9);
  }
  *((_QWORD *)this + 15) = 0LL;
  v3 = *((_QWORD *)this + 14);
  *((_QWORD *)this + 14) = 0LL;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
}
