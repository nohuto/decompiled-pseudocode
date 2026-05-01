/*
 * XREFs of std::_Func_impl_no_alloc__lambda_fa610b85ecb77f528469fbc29dca2c3d__void_IApplicationView_____ptr64_IImmersiveMonitor_____ptr64_::_Do_call @ 0x18009A750
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall std::_Func_impl_no_alloc__lambda_fa610b85ecb77f528469fbc29dca2c3d__void_IApplicationView_____ptr64_IImmersiveMonitor_____ptr64_::_Do_call(
        __int64 a1,
        __int64 (__fastcall ****a2)(ApplicationViewHelpers *, GUID *, __int64 *),
        struct IImmersiveMonitor **a3)
{
  KioskPositioner::SetUwpViewFullScreen(*(KioskPositioner **)(a1 + 8), *a2, *a3);
}
