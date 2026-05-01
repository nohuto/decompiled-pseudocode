/*
 * XREFs of ??$InvokeVoid@V?$TypedEventHandler@PE$AAUISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@@PE$AAUISwitchItemCollectionChangedEventArgs@2345@@Foundation@Windows@@PE$AAUISwitchItemDataSource@Multitasking@ComposableShell@Internal@3@PE$AAUISwitchItemCollectionChangedEventArgs@5673@@EventSource@Platform@@QEAAXPEAUEventLock@Details@1@PE$AAUISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@@PE$AAUISwitchItemCollectionChangedEventArgs@5678@@Z @ 0x1802DE9C0
 * Callers:
 *     ?raise@SwitchItemCollectionChanged@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@ME$AAAXPE$AAUISwitchItemDataSource@3456@PE$AAUISwitchItemCollectionChangedEventArgs@3456@@Z @ 0x1802F56D0 (-raise@SwitchItemCollectionChanged@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1802D2F90 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     Platform::EventSource::DoInvokeVoid_Windows::Foundation::TypedEventHandler_Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataSource___Windows::Internal::ComposableShell::Multitasking::ISwitchItemCollectionChangedEventArgs_____lambda_7753f78d151ec0359928d273266c88c8___ @ 0x1802DDFFC (Platform--EventSource--DoInvokeVoid_Windows--Foundation--TypedEventHandler_Windows--Internal--Co.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall Platform::EventSource::InvokeVoid<Windows::Foundation::TypedEventHandler<Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataSource __gc *,Windows::Internal::ComposableShell::Multitasking::ISwitchItemCollectionChangedEventArgs __gc *>,Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataSource __gc *,Windows::Internal::ComposableShell::Multitasking::ISwitchItemCollectionChangedEventArgs __gc *>(
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
  Platform::EventSource::DoInvokeVoid_Windows::Foundation::TypedEventHandler_Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataSource___Windows::Internal::ComposableShell::Multitasking::ISwitchItemCollectionChangedEventArgs_____lambda_7753f78d151ec0359928d273266c88c8___(
    a1,
    a2,
    v9);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
}
