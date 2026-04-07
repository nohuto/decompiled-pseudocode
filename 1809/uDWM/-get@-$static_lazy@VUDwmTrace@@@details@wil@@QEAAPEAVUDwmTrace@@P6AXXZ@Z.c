/*
 * XREFs of ?get@?$static_lazy@VUDwmTrace@@@details@wil@@QEAAPEAVUDwmTrace@@P6AXXZ@Z @ 0x180073D18
 * Callers:
 *     ?IsEnabled@UDwmTrace@@SA_NE_K@Z @ 0x180073264 (-IsEnabled@UDwmTrace@@SA_NE_K@Z.c)
 *     ?OnHolographicDisplayCalibrationDriverDetected@CAnalogCompositorManager@@AEAAXXZ @ 0x180073304 (-OnHolographicDisplayCalibrationDriverDetected@CAnalogCompositorManager@@AEAAXXZ.c)
 *     ?UDwmHolographicDeviceDriverDetected_@UDwmTrace@@QEAAXXZ @ 0x1800739B0 (-UDwmHolographicDeviceDriverDetected_@UDwmTrace@@QEAAXXZ.c)
 *     ?UDwmHolographicDeviceDriverLost_@UDwmTrace@@QEAAXXZ @ 0x180073A34 (-UDwmHolographicDeviceDriverLost_@UDwmTrace@@QEAAXXZ.c)
 *     wistd::_Func_impl_wistd::_Callable_obj__lambda_68ab246ca29dbf1f5c5163cf5c63f8ba__0__wistd::details::function_allocator_wistd::_Func_class_void_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____void_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Do_call @ 0x180073B50 (wistd--_Func_impl_wistd--_Callable_obj__lambda_68ab246ca29dbf1f5c5163cf5c63f8ba__0__ea_180073B50.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18003B5F4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x18004C18C (atexit.c)
 */

_QWORD *__fastcall wil::details::static_lazy<UDwmTrace>::get(__int64 a1, void (__cdecl *a2)())
{
  void *v3; // r8
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  _QWORD *v6; // [rsp+40h] [rbp+18h] BYREF

  v5 = a1;
  v6 = 0LL;
  if ( InitOnceBeginInitialize(&`UDwmTrace::Instance'::`2'::wrapper, 0, (PBOOL)&v5, (LPVOID *)&v6) && (_DWORD)v5 )
  {
    v6 = qword_1800D7A10;
    qword_1800D7A10[0] = &WindowFrameLogging::`vftable';
    qword_1800D7A28 = (struct _TlgProvider_t *)&`UDwmTrace::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1800D7A10, qword_1800D7A28, v3);
    InitOnceComplete(&`UDwmTrace::Instance'::`2'::wrapper, 0, qword_1800D7A10);
  }
  return v6;
}
