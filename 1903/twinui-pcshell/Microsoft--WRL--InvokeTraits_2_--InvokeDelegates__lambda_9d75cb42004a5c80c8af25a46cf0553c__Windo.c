/*
 * XREFs of Microsoft::WRL::InvokeTraits_2_::InvokeDelegates__lambda_9d75cb42004a5c80c8af25a46cf0553c__Windows::Foundation::IEventHandler_IInspectable_____ @ 0x18017C258
 * Callers:
 *     Microsoft::WRL::EventSource_Windows::Foundation::IEventHandler_IInspectable____Microsoft::WRL::InvokeModeOptions_2___::DoInvoke__lambda_9d75cb42004a5c80c8af25a46cf0553c___ @ 0x18017C0A4 (Microsoft--WRL--EventSource_Windows--Foundation--IEventHandler_IInspectable____Microsoft--WRL--I.c)
 * Callees:
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@PEAVEventTargetArray@Details@12@@Z @ 0x18004DF74 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@PEAVEventTarget.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?Remove@?$EventSource@UIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x180147EFC (-Remove@-$EventSource@UIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@U-$Invok.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::InvokeTraits_2_::InvokeDelegates__lambda_9d75cb42004a5c80c8af25a46cf0553c__Windows::Foundation::IEventHandler_IInspectable_____(
        _QWORD **a1,
        __int64 a2,
        RTL_SRWLOCK *a3)
{
  __int64 v5; // rbx
  struct IUnknown **i; // rdi
  int v7; // eax
  int v8; // esi
  __int64 v10[5]; // [rsp+20h] [rbp-28h] BYREF

  v10[1] = -2LL;
  v10[0] = 0LL;
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(v10, a2);
  v5 = v10[0];
  for ( i = *(struct IUnknown ***)(v10[0] + 16); i != *(struct IUnknown ***)(v5 + 24); ++i )
  {
    v7 = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD, _QWORD))(*i)->lpVtbl[1].QueryInterface)(*i, **a1, *a1[1]);
    v8 = v7;
    if ( v7 < 0 )
    {
      RoTransformError((unsigned int)v7, 0LL, 0LL);
      if ( v8 == -2147417848 || v8 == -2147023174 || v8 == -1996357631 )
        Microsoft::WRL::EventSource<Windows::Internal::Shell::Popups::IPopupPropertyChangedEventHandler,Microsoft::WRL::InvokeModeOptions<2>>::Remove(
          a3,
          *i);
    }
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 12), 0xFFFFFFFF) == 1 )
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v10[0] + 24LL))(v10[0], 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return 0LL;
}
