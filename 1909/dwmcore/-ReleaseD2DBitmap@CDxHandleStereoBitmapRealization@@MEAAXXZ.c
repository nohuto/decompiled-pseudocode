/*
 * XREFs of ?ReleaseD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAXXZ @ 0x180261F10
 * Callers:
 *     ??1CDxHandleStereoBitmapRealization@@MEAA@XZ @ 0x1802618AC (--1CDxHandleStereoBitmapRealization@@MEAA@XZ.c)
 *     ?EnsureD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAJXZ @ 0x180261AB0 (-EnsureD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAJXZ.c)
 *     ?NotifyInvalidResource@CDxHandleStereoBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z @ 0x180261EB0 (-NotifyInvalidResource@CDxHandleStereoBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x180026E1C (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     ?ReleaseD2DBitmap@CDxHandleBitmapRealization@@MEAAXXZ @ 0x18004F6F0 (-ReleaseD2DBitmap@CDxHandleBitmapRealization@@MEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDxHandleStereoBitmapRealization::ReleaseD2DBitmap(CDxHandleStereoBitmapRealization *this)
{
  CDxHandleBitmapRealization::ReleaseD2DBitmap(this);
  if ( *((_QWORD *)this + 54) )
  {
    ReleaseInterface<IBitmapLock>((__int64 *)this + 54);
    (*(void (__fastcall **)(char *, _QWORD))(*((_QWORD *)this + 57) + 24LL))((char *)this + 456, 0LL);
  }
}
