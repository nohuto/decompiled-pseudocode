/*
 * XREFs of ??_G?$__abi_FunctorCapture@V_lambda_a3ced70d1476e93ea420f346718bf2f6_@@X$$V@Details@Platform@@UEAAPEAXI@Z @ 0x18027F480
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800848CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??1SwitchToSelectedItemAndDismiss@XamlSwitcherTelemetry@@QEAA@XZ @ 0x18027E478 (--1SwitchToSelectedItemAndDismiss@XamlSwitcherTelemetry@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall Platform::Details::__abi_FunctorCapture<_lambda_a3ced70d1476e93ea420f346718bf2f6_,void,>::`scalar deleting destructor'(
        _QWORD *a1,
        char a2)
{
  __int64 v4; // rcx

  XamlSwitcherTelemetry::SwitchToSelectedItemAndDismiss::~SwitchToSelectedItemAndDismiss((XamlSwitcherTelemetry::SwitchToSelectedItemAndDismiss *)(a1 + 2));
  v4 = a1[1];
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  *a1 = &Platform::Details::__abi_CaptureBase::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x148);
  return a1;
}
