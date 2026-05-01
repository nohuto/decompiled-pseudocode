/*
 * XREFs of Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_bb329e9869818a924204dbfd8ac58224___ @ 0x18027CE24
 * Callers:
 *     ?Navigate@XamlAltTabViewHost@@UEAAJI@Z @ 0x180280340 (-Navigate@XamlAltTabViewHost@@UEAAJI@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??0__abi_FTMWeakRefData@@QEAA@PE$AAVObject@Platform@@W4CallbackContext@2@@Z @ 0x18025BFD8 (--0__abi_FTMWeakRefData@@QEAA@PE$AAVObject@Platform@@W4CallbackContext@2@@Z.c)
 *     _lambda_bb329e9869818a924204dbfd8ac58224_::_lambda_bb329e9869818a924204dbfd8ac58224_ @ 0x18027D6E0 (_lambda_bb329e9869818a924204dbfd8ac58224_--_lambda_bb329e9869818a924204dbfd8ac58224_.c)
 *     Platform::Details::__abi_FunctorCapture__lambda_bb329e9869818a924204dbfd8ac58224__void_::__abi_FunctorCapture__lambda_bb329e9869818a924204dbfd8ac58224__void_ @ 0x18027D9F8 (Platform--Details--__abi_FunctorCapture__lambda_bb329e9869818a924204dbfd8ac58224__void_--__abi_F.c)
 *     ??1NavigateAltTab@XamlSwitcherTelemetry@@QEAA@XZ @ 0x18027E420 (--1NavigateAltTab@XamlSwitcherTelemetry@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_bb329e9869818a924204dbfd8ac58224___(
        _QWORD *a1,
        __int64 a2)
{
  void *v4; // rax
  void *v5; // rbx
  __int64 v6; // rax
  _QWORD *v7; // rcx
  _BYTE v9[328]; // [rsp+30h] [rbp-168h] BYREF
  void *v10; // [rsp+178h] [rbp-20h]

  Platform::Delegate::Delegate(a1 + 2);
  *a1 = &Windows::UI::Core::DispatchedHandler::`vftable'{for `__abi_IUnknown'};
  a1[1] = &Windows::UI::Core::DispatchedHandler::`vftable'{for `Platform::Object'};
  a1[2] = &Windows::UI::Core::DispatchedHandler::`vftable';
  __abi_FTMWeakRefData::__abi_FTMWeakRefData((__int64)(a1 + 3));
  a1[37] = a1 + 5;
  v4 = Platform::Details::Heap::Allocate(0x150uLL);
  v5 = v4;
  v10 = v4;
  if ( v4 )
  {
    v6 = lambda_bb329e9869818a924204dbfd8ac58224_::_lambda_bb329e9869818a924204dbfd8ac58224_(v9, a2);
    v4 = (void *)Platform::Details::__abi_FunctorCapture__lambda_bb329e9869818a924204dbfd8ac58224__void_::__abi_FunctorCapture__lambda_bb329e9869818a924204dbfd8ac58224__void_(
                   v5,
                   v6);
  }
  a1[37] = v4;
  XamlSwitcherTelemetry::NavigateAltTab::~NavigateAltTab((XamlSwitcherTelemetry::NavigateAltTab *)(a2 + 16));
  v7 = *(_QWORD **)(a2 + 8);
  if ( v7 )
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*v7 + 16LL))(v7, *v7);
  return a1;
}
