/*
 * XREFs of ??1CDxHandleStereoBitmapRealization@@MEAA@XZ @ 0x18026316C
 * Callers:
 *     ??_ECDxHandleStereoBitmapRealization@@MEAAPEAXI@Z @ 0x1802631E0 (--_ECDxHandleStereoBitmapRealization@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1CD2DBitmapCache@@MEAA@XZ @ 0x180088678 (--1CD2DBitmapCache@@MEAA@XZ.c)
 *     ?ReleaseD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAXXZ @ 0x1802637D0 (-ReleaseD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAXXZ.c)
 */

void __fastcall CDxHandleStereoBitmapRealization::~CDxHandleStereoBitmapRealization(
        CDxHandleStereoBitmapRealization *this)
{
  *(_QWORD *)this = &CDxHandleStereoBitmapRealization::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CDxHandleStereoBitmapRealization::`vftable'{for `ID2DBitmapCache'};
  *((_QWORD *)this + 3) = &CDxHandleStereoBitmapRealization::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 11) = &CDxHandleStereoBitmapRealization::`vftable'{for `CDeviceResource'};
  *((_QWORD *)this + 18) = &CDxHandleStereoBitmapRealization::`vftable'{for `IBitmapRealization'};
  CDxHandleStereoBitmapRealization::ReleaseD2DBitmap(this);
  CD2DBitmapCache::~CD2DBitmapCache((CDxHandleStereoBitmapRealization *)((char *)this + 440));
  CDxHandleBitmapRealization::~CDxHandleBitmapRealization(this);
}
