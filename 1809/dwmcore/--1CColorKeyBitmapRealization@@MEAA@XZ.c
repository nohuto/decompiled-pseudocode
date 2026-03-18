/*
 * XREFs of ??1CColorKeyBitmapRealization@@MEAA@XZ @ 0x1802264FC
 * Callers:
 *     ??_ECColorKeyBitmapRealization@@MEAAPEAXI@Z @ 0x180226570 (--_ECColorKeyBitmapRealization@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000EB00 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009BE74 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 */

void __fastcall CColorKeyBitmapRealization::~CColorKeyBitmapRealization(CColorKeyBitmapRealization *this)
{
  *(_QWORD *)this = &CColorKeyBitmapRealization::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CSectionBitmapSubRectRealization::`vftable'{for `ID2DBitmapCache'};
  *((_QWORD *)this + 3) = &CColorKeyBitmapRealization::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 11) = &CColorKeyBitmapRealization::`vftable'{for `CDeviceResource'};
  *((_QWORD *)this + 18) = &CColorKeyBitmapRealization::`vftable'{for `IBitmapRealization'};
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)this + 19);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 12);
  CD2DBitmapCache::~CD2DBitmapCache(this);
}
