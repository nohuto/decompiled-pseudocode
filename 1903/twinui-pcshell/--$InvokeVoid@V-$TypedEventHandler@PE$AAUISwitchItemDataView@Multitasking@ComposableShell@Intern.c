/*
 * XREFs of ??$InvokeVoid@V?$TypedEventHandler@PE$AAUISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@@PE$AAUIEvaluateItemEventArgs@2345@@Foundation@Windows@@PE$AAUISwitchItemDataView@Multitasking@ComposableShell@Internal@3@PE$AAUIEvaluateItemEventArgs@5673@@EventSource@Platform@@QEAAXPEAUEventLock@Details@1@PE$AAUISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@@PE$AAUIEvaluateItemEventArgs@5678@@Z @ 0x1802BF574
 * Callers:
 *     ?raise@EvaluateItem@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@UE$AAAXPE$AAUISwitchItemDataView@3456@PE$AAUIEvaluateItemEventArgs@3456@@Z @ 0x1802D61C0 (-raise@EvaluateItem@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@UE$AAA.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1802B3A70 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     Platform::EventSource::DoInvokeVoid_Windows::Foundation::TypedEventHandler_Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView___Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs_____lambda_482b3f9570c0e9685e107121a6a2c9e9___ @ 0x1802BECDC (Platform--EventSource--DoInvokeVoid_Windows--Foundation--TypedEventHandler_Windows-_ea_1802BECDC.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall Platform::EventSource::InvokeVoid<Windows::Foundation::TypedEventHandler<Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView __gc *,Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs __gc *>,Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView __gc *,Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs __gc *>(
        Platform::Details **a1,
        RTL_SRWLOCK *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v7; // r14
  __int64 v8; // rbx
  _QWORD v9[5]; // [rsp+30h] [rbp-28h] BYREF

  v7 = __abi_winrt_ptr_ctor(a3);
  v8 = __abi_winrt_ptr_ctor(a4);
  v9[0] = __abi_winrt_ptr_ctor(v7);
  v9[1] = __abi_winrt_ptr_ctor(v8);
  Platform::EventSource::DoInvokeVoid_Windows::Foundation::TypedEventHandler_Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView___Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs_____lambda_482b3f9570c0e9685e107121a6a2c9e9___(
    a1,
    a2,
    v9);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
}
