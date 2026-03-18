/*
 * XREFs of ??$query_to@VIDeviceResource@@@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAVIDeviceResource@@@Z @ 0x1800EDDD4
 * Callers:
 *     ?CreateRenderTargetForFrameBuffer@CCaptureRenderTarget@@IEAAJXZ @ 0x18024DA3C (-CreateRenderTargetForFrameBuffer@CCaptureRenderTarget@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::query_to<IDeviceResource>(
        _QWORD *a1,
        __int64 a2)
{
  return (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64))*a1)(*a1, &GUID_475af409_d8b1_4ca5_8177_4562f6260b68, a2);
}
