/*
 * XREFs of ??$InvokeVoid@V?$VectorChangedEventHandler@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@PE$AAU?$IObservableVector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@234@PE$AAUIVectorChangedEventArgs@234@@EventSource@Platform@@QEAAXPEAUEventLock@Details@1@PE$AAU?$IObservableVector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@PE$AAUIVectorChangedEventArgs@567@@Z @ 0x1802BF658
 * Callers:
 *     ?Notify@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@Collections@Platform@@AE$AAAXW4CollectionChange@2Foundation@Windows@@I@Z @ 0x1802CC4AC (-Notify@-$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U-$equal_to@PE.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1802B3A70 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     Platform::EventSource::DoInvokeVoid_Windows::Foundation::Collections::VectorChangedEventHandler_Windows::Internal::ComposableShell::Multitasking::ISwitchItem_____lambda_47ed099530a2135fa4bc1c4a176c63c9___ @ 0x1802BEEEC (Platform--EventSource--DoInvokeVoid_Windows--Foundation--Collections--VectorChangedEventHandler_.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall Platform::EventSource::InvokeVoid<Windows::Foundation::Collections::VectorChangedEventHandler<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *>,Windows::Foundation::Collections::IObservableVector<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *> __gc *,Windows::Foundation::Collections::IVectorChangedEventArgs __gc *>(
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
  Platform::EventSource::DoInvokeVoid_Windows::Foundation::Collections::VectorChangedEventHandler_Windows::Internal::ComposableShell::Multitasking::ISwitchItem_____lambda_47ed099530a2135fa4bc1c4a176c63c9___(
    a1,
    a2,
    v9);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
}
