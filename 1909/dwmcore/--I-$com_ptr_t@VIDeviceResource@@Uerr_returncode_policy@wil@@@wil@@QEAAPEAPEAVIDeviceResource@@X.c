/*
 * XREFs of ??I?$com_ptr_t@VIDeviceResource@@Uerr_returncode_policy@wil@@@wil@@QEAAPEAPEAVIDeviceResource@@XZ @ 0x1801A3D4C
 * Callers:
 *     ?CreateRenderTargetForFrameBuffer@CCaptureRenderTarget@@IEAAJXZ @ 0x18024DA3C (-CreateRenderTargetForFrameBuffer@CCaptureRenderTarget@@IEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall wil::com_ptr_t<IDeviceResource,wil::err_returncode_policy>::operator&(__int64 *a1)
{
  __int64 v2; // rcx

  v2 = *a1;
  *a1 = 0LL;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  return a1;
}
