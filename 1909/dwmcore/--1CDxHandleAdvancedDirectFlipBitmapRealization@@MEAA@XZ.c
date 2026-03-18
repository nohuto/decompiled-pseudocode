/*
 * XREFs of ??1CDxHandleAdvancedDirectFlipBitmapRealization@@MEAA@XZ @ 0x180260A34
 * Callers:
 *     ??_GCDxHandleAdvancedDirectFlipBitmapRealization@@MEAAPEAXI@Z @ 0x180260AC0 (--_GCDxHandleAdvancedDirectFlipBitmapRealization@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1CD2DBitmapCache@@MEAA@XZ @ 0x18007AF0C (--1CD2DBitmapCache@@MEAA@XZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180186038 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?ResetRestoreBufferResources@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAXXZ @ 0x1802611F8 (-ResetRestoreBufferResources@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAXXZ.c)
 */

void __fastcall CDxHandleAdvancedDirectFlipBitmapRealization::~CDxHandleAdvancedDirectFlipBitmapRealization(
        CDxHandleAdvancedDirectFlipBitmapRealization *this)
{
  std::_Ref_count_base *v2; // rcx

  *(_QWORD *)this = &CDxHandleAdvancedDirectFlipBitmapRealization::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CSectionBitmapSubRectRealization::`vftable'{for `ID2DBitmapCache'};
  *((_QWORD *)this + 3) = &CDxHandleAdvancedDirectFlipBitmapRealization::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 11) = &CDxHandleAdvancedDirectFlipBitmapRealization::`vftable'{for `CDeviceResource'};
  *((_QWORD *)this + 18) = &CDxHandleAdvancedDirectFlipBitmapRealization::`vftable'{for `IBitmapRealization'};
  *((_QWORD *)this + 54) = &CDxHandleAdvancedDirectFlipBitmapRealization::`vftable';
  CDxHandleAdvancedDirectFlipBitmapRealization::ResetRestoreBufferResources(this);
  *((_BYTE *)this + 560) = 0;
  v2 = (std::_Ref_count_base *)*((_QWORD *)this + 69);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  CD2DBitmapCache::~CD2DBitmapCache((CDxHandleAdvancedDirectFlipBitmapRealization *)((char *)this + 456));
  CDxHandleBitmapRealization::~CDxHandleBitmapRealization(this);
}
