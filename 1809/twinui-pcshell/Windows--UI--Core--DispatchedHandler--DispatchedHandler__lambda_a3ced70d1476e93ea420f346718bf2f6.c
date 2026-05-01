/*
 * XREFs of Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_a3ced70d1476e93ea420f346718bf2f6___ @ 0x18027CCF4
 * Callers:
 *     ?SwitchToSelectedItemAndDismiss@XamlAltTabViewHost@@UEAAJXZ @ 0x1802822C0 (-SwitchToSelectedItemAndDismiss@XamlAltTabViewHost@@UEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??0__abi_FTMWeakRefData@@QEAA@PE$AAVObject@Platform@@W4CallbackContext@2@@Z @ 0x18025BFD8 (--0__abi_FTMWeakRefData@@QEAA@PE$AAVObject@Platform@@W4CallbackContext@2@@Z.c)
 *     _lambda_a3ced70d1476e93ea420f346718bf2f6_::_lambda_a3ced70d1476e93ea420f346718bf2f6_ @ 0x18027D680 (_lambda_a3ced70d1476e93ea420f346718bf2f6_--_lambda_a3ced70d1476e93ea420f346718bf2f6_.c)
 *     Platform::Details::__abi_FunctorCapture__lambda_a3ced70d1476e93ea420f346718bf2f6__void_::__abi_FunctorCapture__lambda_a3ced70d1476e93ea420f346718bf2f6__void_ @ 0x18027D994 (Platform--Details--__abi_FunctorCapture__lambda_a3ced70d1476e93ea420f346718bf2f6__void_--__abi_F.c)
 *     ??1SwitchToSelectedItemAndDismiss@XamlSwitcherTelemetry@@QEAA@XZ @ 0x18027E478 (--1SwitchToSelectedItemAndDismiss@XamlSwitcherTelemetry@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_a3ced70d1476e93ea420f346718bf2f6___(
        _QWORD *a1,
        _QWORD **a2)
{
  void *v4; // rax
  void *v5; // rbx
  __int64 v6; // rax
  _BYTE v8[320]; // [rsp+30h] [rbp-158h] BYREF
  void *v9; // [rsp+170h] [rbp-18h]

  Platform::Delegate::Delegate(a1 + 2);
  *a1 = &Windows::UI::Core::DispatchedHandler::`vftable'{for `__abi_IUnknown'};
  a1[1] = &Windows::UI::Core::DispatchedHandler::`vftable'{for `Platform::Object'};
  a1[2] = &Windows::UI::Core::DispatchedHandler::`vftable';
  __abi_FTMWeakRefData::__abi_FTMWeakRefData((__int64)(a1 + 3));
  a1[37] = a1 + 5;
  v4 = Platform::Details::Heap::Allocate(0x148uLL);
  v5 = v4;
  v9 = v4;
  if ( v4 )
  {
    v6 = lambda_a3ced70d1476e93ea420f346718bf2f6_::_lambda_a3ced70d1476e93ea420f346718bf2f6_(v8, a2);
    v4 = (void *)Platform::Details::__abi_FunctorCapture__lambda_a3ced70d1476e93ea420f346718bf2f6__void_::__abi_FunctorCapture__lambda_a3ced70d1476e93ea420f346718bf2f6__void_(
                   v5,
                   v6);
  }
  a1[37] = v4;
  XamlSwitcherTelemetry::SwitchToSelectedItemAndDismiss::~SwitchToSelectedItemAndDismiss((XamlSwitcherTelemetry::SwitchToSelectedItemAndDismiss *)(a2 + 1));
  if ( *a2 )
    (*(void (__fastcall **)(_QWORD, _QWORD))(**a2 + 16LL))(*a2, **a2);
  return a1;
}
