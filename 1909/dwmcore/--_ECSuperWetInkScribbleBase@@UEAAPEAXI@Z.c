/*
 * XREFs of ??_ECSuperWetInkScribbleBase@@UEAAPEAXI@Z @ 0x1801B0EF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002DE70 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18002F520 (--3@YAXPEAX_K@Z.c)
 */

CSuperWetInkScribbleBase *__fastcall CSuperWetInkScribbleBase::`vector deleting destructor'(
        CSuperWetInkScribbleBase *this,
        char a2)
{
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)this + 2);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
