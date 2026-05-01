/*
 * XREFs of Microsoft::WRL::InvokeTraits_2_::InvokeDelegates__lambda_f7183679cc6b687de449de5d3d056096__Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::IShellExperienceView___Windows::Internal::Shell::Experience::IShellExperienceViewChangedArg_____ @ 0x180060060
 * Callers:
 *     ?_FireViewChanged@ShellExperienceView@Cortana@TwinUI@@AEAAJW4ShellExperienceViewChangeType@Experience@Shell@Internal@Windows@@J@Z @ 0x18005FF68 (-_FireViewChanged@ShellExperienceView@Cortana@TwinUI@@AEAAJW4ShellExperienceViewChangeType@Exper.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?Remove@?$EventSource@UIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x180147EFC (-Remove@-$EventSource@UIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@U-$Invok.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::InvokeTraits_2_::InvokeDelegates__lambda_f7183679cc6b687de449de5d3d056096__Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::IShellExperienceView___Windows::Internal::Shell::Experience::IShellExperienceViewChangedArg_____(
        _QWORD **a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // rbx
  _QWORD *i; // rdi
  int v7; // eax
  int v8; // esi
  __int64 v10; // [rsp+68h] [rbp+20h]

  v5 = 0LL;
  v10 = 0LL;
  if ( a2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(a2 + 12));
    v5 = a2;
    v10 = a2;
  }
  for ( i = *(_QWORD **)(v5 + 16); i != *(_QWORD **)(v5 + 24); ++i )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*i + 24LL))(*i, **a1, *a1[1]);
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
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 24LL))(v10, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return 0LL;
}
