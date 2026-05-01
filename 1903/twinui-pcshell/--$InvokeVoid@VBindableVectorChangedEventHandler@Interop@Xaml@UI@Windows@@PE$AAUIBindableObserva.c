/*
 * XREFs of ??$InvokeVoid@VBindableVectorChangedEventHandler@Interop@Xaml@UI@Windows@@PE$AAUIBindableObservableVector@2345@PE$AAVObject@Platform@@@EventSource@Platform@@QEAAXPEAUEventLock@Details@1@PE$AAUIBindableObservableVector@Interop@Xaml@UI@Windows@@PE$AAVObject@1@@Z @ 0x1802BF73C
 * Callers:
 *     ?Notify@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@Collections@Platform@@AE$AAAXW4CollectionChange@2Foundation@Windows@@I@Z @ 0x1802CC4AC (-Notify@-$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U-$equal_to@PE.c)
 *     ?Notify@?$Vector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@Platform@@AE$AAAXW4CollectionChange@2Foundation@Windows@@I@Z @ 0x1802E38CC (-Notify@-$Vector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@Windo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1802B3A70 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     Platform::EventSource::DoInvokeVoid_Windows::UI::Xaml::Interop::BindableVectorChangedEventHandler__lambda_ead1898829ddc19966a0778afc06ed08___ @ 0x1802BF0FC (Platform--EventSource--DoInvokeVoid_Windows--UI--Xaml--Interop--BindableVectorChangedEventHandle.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall Platform::EventSource::InvokeVoid<Windows::UI::Xaml::Interop::BindableVectorChangedEventHandler,Windows::UI::Xaml::Interop::IBindableObservableVector __gc *,Platform::Object __gc *>(
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
  Platform::EventSource::DoInvokeVoid_Windows::UI::Xaml::Interop::BindableVectorChangedEventHandler__lambda_ead1898829ddc19966a0778afc06ed08___(
    a1,
    a2,
    v9);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
}
