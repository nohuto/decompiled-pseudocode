/*
 * XREFs of Microsoft::WRL::InvokeTraits_2_::InvokeDelegates__lambda_f4076b844f394c201f6c95811a6b7602__Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::StartExperienceManager___IInspectable_____ @ 0x18004DCE0
 * Callers:
 *     Microsoft::WRL::EventSource_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::StartExperienceManager___IInspectable____Microsoft::WRL::InvokeModeOptions_2___::DoInvoke__lambda_f4076b844f394c201f6c95811a6b7602___ @ 0x18004D9D8 (Microsoft--WRL--EventSource_Windows--Foundation--ITypedEventHandler_Windows--Intern_ea_18004D9D8.c)
 * Callees:
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@PEAVEventTargetArray@Details@12@@Z @ 0x18004DF74 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@PEAVEventTarget.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?Remove@?$EventSource@UIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x180147EFC (-Remove@-$EventSource@UIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@U-$Invok.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::InvokeTraits_2_::InvokeDelegates__lambda_f4076b844f394c201f6c95811a6b7602__Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::StartExperienceManager___IInspectable_____(
        _QWORD **a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // rbx
  _QWORD *i; // rdi
  int v7; // eax
  int v8; // esi
  _QWORD v10[5]; // [rsp+20h] [rbp-28h] BYREF

  v10[1] = -2LL;
  v10[0] = 0LL;
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(v10);
  v5 = v10[0];
  for ( i = *(_QWORD **)(v10[0] + 16LL); i != *(_QWORD **)(v5 + 24); ++i )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(*(_QWORD *)*i + 24LL))(
           *i,
           (**a1 + 40LL) & -(__int64)(**a1 != 0LL),
           *a1[1]);
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
    (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v10[0] + 24LL))(v10[0], 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return 0LL;
}
