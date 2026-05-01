/*
 * XREFs of Platform::Details::__abi_FunctorCapture__lambda_c53c31f493f45602bf86f747ba99140c__void_Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView_____ptr64_Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs_____ptr64_::__abi_FunctorCapture__lambda_c53c31f493f45602bf86f747ba99140c__void_Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView_____ptr64_Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs_____ptr64_ @ 0x18027DA5C
 * Callers:
 *     Windows::Foundation::TypedEventHandler_Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView_____ptr64_Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs_____ptr64_::TypedEventHandler_Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView_____ptr64_Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs_____ptr64___lambda_c53c31f493f45602bf86f747ba99140c___ @ 0x18027CF54 (Windows--Foundation--TypedEventHandler_Windows--Internal--ComposableShell--Multitas_ea_18027CF54.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     _lambda_b572b7b401bca0583e7d35bf745a8e03_::_lambda_b572b7b401bca0583e7d35bf745a8e03_ @ 0x1802684DC (_lambda_b572b7b401bca0583e7d35bf745a8e03_--_lambda_b572b7b401bca0583e7d35bf745a8e03_.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall Platform::Details::__abi_FunctorCapture__lambda_c53c31f493f45602bf86f747ba99140c__void_Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView_____ptr64_Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs_____ptr64_::__abi_FunctorCapture__lambda_c53c31f493f45602bf86f747ba99140c__void_Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView_____ptr64_Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs_____ptr64_(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v4; // rcx

  *a1 = &off_18050A640;
  lambda_b572b7b401bca0583e7d35bf745a8e03_::_lambda_b572b7b401bca0583e7d35bf745a8e03_(a1 + 1, a2);
  v4 = a2[1];
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  if ( *a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)*a2 + 16LL))(*a2);
  return a1;
}
