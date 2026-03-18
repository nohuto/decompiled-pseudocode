/*
 * XREFs of ??1CColorKeyBitmap@@MEAA@XZ @ 0x18025614C
 * Callers:
 *     ??_ECColorKeyBitmap@@MEAAPEAXI@Z @ 0x180256190 (--_ECColorKeyBitmap@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002DE70 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall CColorKeyBitmap::~CColorKeyBitmap(CColorKeyBitmap *this)
{
  *(_QWORD *)this = &CColorKeyBitmap::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CColorKeyBitmap::`vftable'{for `ID2DBitmapCacheSource'};
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)this + 3);
  *(_QWORD *)this = &CMILCOMBase::`vftable';
}
