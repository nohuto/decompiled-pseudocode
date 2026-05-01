/*
 * XREFs of Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_6fa41624ad117cbea5b5b5fb1da71b97__Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::Activation::SplashScreen_____ptr64_IInspectable_____ptr64___ @ 0x180118A10
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_de7a847248f7e9ff51c83bca1460305a___::Run @ 0x18000F8D0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_de7a847248f7e9ff51c83bca1460305a___--Run.c)
 *     Microsoft::WRL::EventSource_Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::Activation::SplashScreen_____ptr64_IInspectable_____ptr64__Microsoft::WRL::InvokeModeOptions__2___::DoInvoke__lambda_6fa41624ad117cbea5b5b5fb1da71b97___ @ 0x18002CD80 (Microsoft--WRL--EventSource_Windows--Foundation--ITypedEventHandler_Windows--ApplicationModel--A.c)
 *     Microsoft::WRL::EventSource_Windows::Foundation::Collections::VectorChangedEventHandler_Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId__Microsoft::WRL::InvokeModeOptions__2___::DoInvoke__lambda_5bc5b53272b7c82c21baa6e919dffbb3___ @ 0x180118670 (Microsoft--WRL--EventSource_Windows--Foundation--Collections--VectorChangedEventHandler_Windows-.c)
 * Callees:
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@PEAVEventTargetArray@Details@12@@Z @ 0x18000F88C (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@PEAVEventTarget.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180088C30 (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?Remove@?$EventSource@UIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x18011EC8C (-Remove@-$EventSource@UIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@U-$Invok.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_6fa41624ad117cbea5b5b5fb1da71b97__Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::Activation::SplashScreen_____ptr64_IInspectable_____ptr64___(
        _QWORD **a1,
        volatile int *a2,
        __int64 a3)
{
  unsigned int v5; // edi
  volatile int *v6; // rdx
  _QWORD *v7; // rbx
  __int64 *v8; // r14
  _QWORD *i; // rsi
  unsigned int v10; // eax
  int MatchingRestrictedErrorInfo; // ebx
  unsigned int v12; // eax
  __int64 v14[7]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v15; // [rsp+78h] [rbp+20h] BYREF

  v14[2] = -2LL;
  v5 = 0;
  v14[0] = 0LL;
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(v14, a2);
  v7 = (_QWORD *)v14[0];
  v8 = *(__int64 **)(v14[0] + 32);
  for ( i = *(_QWORD **)(v14[0] + 16); i != (_QWORD *)v7[3]; ++i )
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*i + 24LL))(*i, **a1, *a1[1]);
    v5 = v10;
    if ( v10 == -2147417848 || v10 == -2147023174 || v10 == -1996357631 || v10 == -2147418105 || v10 == -2147418094 )
    {
      RoTransformError(v10, 0LL, 0LL);
      Microsoft::WRL::EventSource<Windows::Internal::Shell::Popups::IPopupPropertyChangedEventHandler,Microsoft::WRL::InvokeModeOptions<2>>::Remove(
        a3,
        *i);
      v5 = 0;
    }
    if ( (v5 & 0x80000000) != 0 )
    {
      if ( (unsigned int)IsErrorPropagationEnabled() )
      {
        v14[1] = *v8;
        v15 = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
        MatchingRestrictedErrorInfo = RoGetMatchingRestrictedErrorInfo(v5, &v15);
        if ( MatchingRestrictedErrorInfo >= 0 )
          MatchingRestrictedErrorInfo = RoReportFailedDelegate(*i, v15);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
        v12 = 0;
        if ( MatchingRestrictedErrorInfo < 0 )
          v12 = v5;
        v5 = v12;
        v7 = (_QWORD *)v14[0];
        break;
      }
      RoTransformError(v5, 0LL, 0LL);
      v5 = 0;
    }
    ++v8;
  }
  if ( !(unsigned int)Microsoft::WRL::Details::SafeUnknownDecrementReference(
                        (Microsoft::WRL::Details *)((char *)v7 + 12),
                        v6) )
  {
    (*(void (__fastcall **)(_QWORD *, __int64))(*v7 + 24LL))(v7, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return v5;
}
