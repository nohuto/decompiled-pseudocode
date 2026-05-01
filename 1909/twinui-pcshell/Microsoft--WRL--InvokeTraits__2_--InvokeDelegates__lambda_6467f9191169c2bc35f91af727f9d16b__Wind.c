/*
 * XREFs of Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_6467f9191169c2bc35f91af727f9d16b__Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Tabs::TabTransferEventBroker___Windows::Internal::ComposableShell::Tabs::TabDroppedEventArgs_____ @ 0x18015F9AC
 * Callers:
 *     Microsoft::WRL::EventSource_Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::Activation::SplashScreen___IInspectable____Microsoft::WRL::InvokeModeOptions__2___::DoInvoke__lambda_f3e2ba377ecf56fb3aa66def83e00359___ @ 0x18003C184 (Microsoft--WRL--EventSource_Windows--Foundation--ITypedEventHandler_Windows--ApplicationModel--A.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_de7a847248f7e9ff51c83bca1460305a___::Run @ 0x180050350 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_de7a847248f7e9ff51c83bca1460305a___--Run.c)
 *     Microsoft::WRL::EventSource_Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Tabs::TabTransferEventBroker___Windows::Internal::ComposableShell::Tabs::TabDroppedEventArgs____Microsoft::WRL::InvokeModeOptions__2___::DoInvoke__lambda_6467f9191169c2bc35f91af727f9d16b___ @ 0x18015F60C (Microsoft--WRL--EventSource_Windows--Foundation--ITypedEventHandler_Windows--Intern_ea_18015F60C.c)
 * Callees:
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@PEAVEventTargetArray@Details@12@@Z @ 0x180050308 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@PEAVEventTarget.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18008E7A0 (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?Remove@?$EventSource@UIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x1801671DC (-Remove@-$EventSource@UIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@U-$Invok.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_6467f9191169c2bc35f91af727f9d16b__Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Tabs::TabTransferEventBroker___Windows::Internal::ComposableShell::Tabs::TabDroppedEventArgs_____(
        _QWORD **a1,
        __int64 a2,
        __int64 a3)
{
  unsigned int v5; // edi
  volatile int *v6; // rdx
  _QWORD *v7; // rbx
  __int64 *v8; // r14
  _QWORD *i; // rsi
  unsigned int v10; // eax
  __int64 v11; // rcx
  int MatchingRestrictedErrorInfo; // ebx
  unsigned int v13; // eax
  __int64 v15[7]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v16; // [rsp+78h] [rbp+20h] BYREF

  v15[2] = -2LL;
  v5 = 0;
  v15[0] = 0LL;
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(v15, a2);
  v7 = (_QWORD *)v15[0];
  v8 = *(__int64 **)(v15[0] + 32);
  for ( i = *(_QWORD **)(v15[0] + 16); i != (_QWORD *)v7[3]; ++i )
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
      if ( (unsigned int)IsErrorPropagationEnabled(v11, v6) )
      {
        v15[1] = *v8;
        v16 = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
        MatchingRestrictedErrorInfo = RoGetMatchingRestrictedErrorInfo(v5, &v16);
        if ( MatchingRestrictedErrorInfo >= 0 )
          MatchingRestrictedErrorInfo = RoReportFailedDelegate(*i, v16);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
        v13 = 0;
        if ( MatchingRestrictedErrorInfo < 0 )
          v13 = v5;
        v5 = v13;
        v7 = (_QWORD *)v15[0];
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
