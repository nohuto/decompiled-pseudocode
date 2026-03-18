/*
 * XREFs of ?ReleaseResourcesForDisplayChange@CLocalAppRenderTarget@@UEAAXXZ @ 0x180250830
 * Callers:
 *     ?EnsureRenderTarget@CLocalAppRenderTarget@@IEAAJAEBUD2D_SIZE_F@@@Z @ 0x1802502D8 (-EnsureRenderTarget@CLocalAppRenderTarget@@IEAAJAEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x18002B3C0 (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x1800C7C00 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CLocalAppRenderTarget::ReleaseResourcesForDisplayChange(CLocalAppRenderTarget *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx

  v2 = *((_QWORD *)this + 9);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v2 + 32LL))(
      v2,
      ((unsigned __int64)this + 16) & -(__int64)(this != (CLocalAppRenderTarget *)64));
    ReleaseInterface<IBitmapLock>((__int64 *)this + 9);
  }
  v3 = *((_QWORD *)this + 14);
  *((_QWORD *)this + 14) = 0LL;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  v4 = *((_QWORD *)this + 13);
  *((_QWORD *)this + 13) = 0LL;
  if ( v4 )
    CMILPoolResource::Release((CMILPoolResource *)(v4 + 496));
}
