/*
 * XREFs of Platform::Details::__abi_FunctorCapture__lambda_adedda421da4a00589298a86f7993fb7__void_::_scalar_deleting_destructor_ @ 0x1802D86C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008755C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??1NavigateAltTab@XamlSwitcherTelemetry@@QEAA@XZ @ 0x1802D7A5C (--1NavigateAltTab@XamlSwitcherTelemetry@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall Platform::Details::__abi_FunctorCapture__lambda_adedda421da4a00589298a86f7993fb7__void_::_scalar_deleting_destructor_(
        _QWORD *a1,
        char a2)
{
  __int64 v4; // rcx

  XamlSwitcherTelemetry::NavigateAltTab::~NavigateAltTab((XamlSwitcherTelemetry::NavigateAltTab *)(a1 + 3));
  v4 = a1[2];
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  *a1 = &Platform::Details::__abi_CaptureBase::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x150);
  return a1;
}
