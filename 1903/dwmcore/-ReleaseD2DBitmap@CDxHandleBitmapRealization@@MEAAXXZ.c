/*
 * XREFs of ?ReleaseD2DBitmap@CDxHandleBitmapRealization@@MEAAXXZ @ 0x18003AA40
 * Callers:
 *     ??1CDxHandleBitmapRealization@@MEAA@XZ @ 0x18003AC5C (--1CDxHandleBitmapRealization@@MEAA@XZ.c)
 *     ?ReleaseD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAXXZ @ 0x1802637D0 (-ReleaseD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAXXZ.c)
 * Callees:
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x18002B3C0 (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     ?RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z @ 0x18003AB70 (-RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?RemoveHwProtectedEntity@CD3DDeviceManager@@QEAAXU_LUID@@@Z @ 0x18015F530 (-RemoveHwProtectedEntity@CD3DDeviceManager@@QEAAXU_LUID@@@Z.c)
 */

void __fastcall CDxHandleBitmapRealization::ReleaseD2DBitmap(CDxHandleBitmapRealization *this)
{
  __int64 *v1; // rdi
  __int64 v3; // rcx

  v1 = (__int64 *)((char *)this + 416);
  v3 = *((_QWORD *)this + 52);
  if ( v3 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(v3 + 104) + 64LL))(v3 + 104) )
      CD3DDeviceManager::RemoveHwProtectedEntity(
        (CD3DDeviceManager *)&g_D3DDeviceManager,
        *(struct _LUID *)((char *)this + 288));
    CD2DResource::RemoveResourceNotifier((CD2DResource *)(*v1 + 16), (CDxHandleBitmapRealization *)((char *)this + 24));
    ReleaseInterface<IBitmapLock>(v1);
    (*(void (__fastcall **)(char *, _QWORD))(*((_QWORD *)this + 2) + 24LL))((char *)this + 16, 0LL);
  }
}
