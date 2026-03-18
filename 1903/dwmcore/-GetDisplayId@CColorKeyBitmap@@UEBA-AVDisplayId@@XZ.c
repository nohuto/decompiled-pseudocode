/*
 * XREFs of ?GetDisplayId@CColorKeyBitmap@@UEBA?AVDisplayId@@XZ @ 0x180257C10
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180026730 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?GetSourceBitmapCacheSource@CColorKeyBitmap@@AEBA?AV?$com_ptr_t@VID2DBitmapCacheSource@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x180257C9C (-GetSourceBitmapCacheSource@CColorKeyBitmap@@AEBA-AV-$com_ptr_t@VID2DBitmapCacheSource@@Uerr_ret.c)
 */

__int64 __fastcall CColorKeyBitmap::GetDisplayId(__int64 a1, __int64 a2)
{
  _QWORD *SourceBitmapCacheSource; // rax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  SourceBitmapCacheSource = (_QWORD *)CColorKeyBitmap::GetSourceBitmapCacheSource(a1 - 16, &v5);
  (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*SourceBitmapCacheSource + 40LL))(*SourceBitmapCacheSource, a2);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v5);
  return a2;
}
