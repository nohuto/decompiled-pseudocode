/*
 * XREFs of Microsoft::WRL::InvokeTraits_2_::InvokeDelegates__lambda_b3a123d132742ed9bb736a7f1db72d4f__Windows::Foundation::ITypedEventHandler_Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager___Windows::Internal::FamilySafety::AppLimits::AppUsageStateChangedEventArgs_____ @ 0x1800AEF20
 * Callers:
 *     ?RaiseEvent@AsyncEventWorkItem@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAVFamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@PEAVAppUsageStateChangedEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_exception_policy@wil@@@wil@@UEAAXXZ @ 0x1800B2D00 (-RaiseEvent@AsyncEventWorkItem@-$AsyncEventSourceT@U-$ITypedEventHandler@PEAVFamilyAppUsageManag.c)
 * Callees:
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@PEAVEventTargetArray@Details@12@@Z @ 0x180050308 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@PEAVEventTarget.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180050DC0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?Remove@?$EventSource@U?$ITypedEventHandler@PEAVFamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@PEAVAppUsageStateChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x180090C88 (-Remove@-$EventSource@U-$ITypedEventHandler@PEAVFamilyAppUsageManager@AppLimits@FamilySafety@Int.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x180123B8C (-FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::InvokeTraits_2_::InvokeDelegates__lambda_b3a123d132742ed9bb736a7f1db72d4f__Windows::Foundation::ITypedEventHandler_Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager___Windows::Internal::FamilySafety::AppLimits::AppUsageStateChangedEventArgs_____(
        __int64 a1,
        __int64 a2,
        char *a3)
{
  volatile int *v5; // rdx
  __int64 v6; // rbx
  struct IUnknown **i; // rsi
  __int64 v8; // rcx
  int v9; // eax
  int v10; // ebp
  _QWORD v12[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+68h] [rbp+20h] BYREF

  v12[1] = -2LL;
  v13 = 0LL;
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(&v13, a2);
  v6 = v13;
  for ( i = *(struct IUnknown ***)(v13 + 16); i != *(struct IUnknown ***)(v6 + 24); ++i )
  {
    v12[0] = *i;
    v8 = *(_QWORD *)(a1 + 144);
    if ( !v8 )
      wil::details::in1diag3::FailFastImmediate_Unexpected(0LL);
    v9 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v8 + 32LL))(v8, v12);
    v10 = v9;
    if ( v9 < 0 )
    {
      RoTransformError((unsigned int)v9, 0LL, 0LL);
      if ( v10 == -2147417848 || v10 == -2147023174 || v10 == -1996357631 )
        Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager *,Windows::Internal::FamilySafety::AppLimits::AppUsageStateChangedEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>::Remove(
          a3,
          *i);
    }
  }
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v6, v5);
  return 0LL;
}
