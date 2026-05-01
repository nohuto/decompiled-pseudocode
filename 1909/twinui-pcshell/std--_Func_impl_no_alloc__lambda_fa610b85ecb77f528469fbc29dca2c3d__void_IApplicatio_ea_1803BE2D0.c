/*
 * XREFs of std::_Func_impl_no_alloc__lambda_fa610b85ecb77f528469fbc29dca2c3d__void_IApplicationView___IImmersiveMonitor___::_Do_call @ 0x1803BE2D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall std::_Func_impl_no_alloc__lambda_fa610b85ecb77f528469fbc29dca2c3d__void_IApplicationView___IImmersiveMonitor___::_Do_call(
        __int64 a1,
        __int64 (__fastcall ****a2)(ApplicationViewHelpers *, GUID *, __int64 *),
        struct IImmersiveApplication ***a3)
{
  KioskPositioner::SetUwpViewFullScreen(*(KioskPositioner **)(a1 + 8), *a2, *a3);
}
