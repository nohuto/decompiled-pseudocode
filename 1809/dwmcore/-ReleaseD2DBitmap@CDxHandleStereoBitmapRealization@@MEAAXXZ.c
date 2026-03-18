/*
 * XREFs of ?ReleaseD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAXXZ @ 0x180228580
 * Callers:
 *     ??1CDxHandleStereoBitmapRealization@@MEAA@XZ @ 0x180227F64 (--1CDxHandleStereoBitmapRealization@@MEAA@XZ.c)
 *     ?EnsureD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAJXZ @ 0x180228170 (-EnsureD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAJXZ.c)
 *     ?NotifyInvalidResource@CDxHandleStereoBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z @ 0x180228520 (-NotifyInvalidResource@CDxHandleStereoBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x180016D4C (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     ?ReleaseD2DBitmap@CDxHandleBitmapRealization@@MEAAXXZ @ 0x18009B5E0 (-ReleaseD2DBitmap@CDxHandleBitmapRealization@@MEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
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
