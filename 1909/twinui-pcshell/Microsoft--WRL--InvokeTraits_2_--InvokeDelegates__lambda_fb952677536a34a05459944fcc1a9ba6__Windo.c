/*
 * XREFs of Microsoft::WRL::InvokeTraits_2_::InvokeDelegates__lambda_fb952677536a34a05459944fcc1a9ba6__Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::IShellExperienceView___Windows::Internal::Shell::Experience::IShellExperienceViewEventArg_____ @ 0x18009FE94
 * Callers:
 *     ?_FireViewChanged@ShellFeedsShellExperienceView@ShellFeeds@TwinUI@@AEAAJW4ShellExperienceViewChangeType@Experience@Shell@Internal@Windows@@J@Z @ 0x1800A0848 (-_FireViewChanged@ShellFeedsShellExperienceView@ShellFeeds@TwinUI@@AEAAJW4ShellExperienceViewCha.c)
 *     ?_FireViewEvent@ShellFeedsShellExperienceView@ShellFeeds@TwinUI@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800A0940 (-_FireViewEvent@ShellFeedsShellExperienceView@ShellFeeds@TwinUI@@AEAAJPEAUHSTRING__@@PEAUIProper.c)
 * Callees:
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@PEAVEventTargetArray@Details@12@@Z @ 0x180050308 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@PEAVEventTarget.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180050DC0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?Remove@?$EventSource@UIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x1801671DC (-Remove@-$EventSource@UIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@U-$Invok.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::InvokeTraits_2_::InvokeDelegates__lambda_fb952677536a34a05459944fcc1a9ba6__Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::IShellExperienceView___Windows::Internal::Shell::Experience::IShellExperienceViewEventArg_____(
        _QWORD **a1,
        __int64 a2,
        __int64 a3)
{
  volatile int *v5; // rdx
  __int64 v6; // rbx
  _QWORD *i; // rdi
  int v8; // eax
  int v9; // esi
  __int64 v11; // [rsp+68h] [rbp+20h] BYREF

  v11 = 0LL;
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(&v11, a2);
  v6 = v11;
  for ( i = *(_QWORD **)(v11 + 16); i != *(_QWORD **)(v6 + 24); ++i )
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*i + 24LL))(*i, **a1, *a1[1]);
    v9 = v8;
    if ( v8 < 0 )
    {
      RoTransformError((unsigned int)v8, 0LL, 0LL);
      if ( v9 == -2147417848 || v9 == -2147023174 || v9 == -1996357631 )
        Microsoft::WRL::EventSource<Windows::Internal::Shell::Popups::IPopupPropertyChangedEventHandler,Microsoft::WRL::InvokeModeOptions<2>>::Remove(
          a3,
          *i);
    }
  }
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v6, v5);
  return 0LL;
}
