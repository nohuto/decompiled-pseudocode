/*
 * XREFs of Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_bcd0843cf4c9ec95ad35c936b1c550b0__Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____ptr64___ @ 0x18003B340
 * Callers:
 *     Microsoft::WRL::EventSource_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____ptr64__Microsoft::WRL::InvokeModeOptions__2___::DoInvoke__lambda_bcd0843cf4c9ec95ad35c936b1c550b0___ @ 0x18003B13C (Microsoft--WRL--EventSource_Windows--Foundation--ITypedEventHandler_Windows--Internal--Shell--Vi.c)
 * Callees:
 *     ?Remove@?$EventSource@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x18000EDB0 (-Remove@-$EventSource@U-$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Inte.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180088C30 (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationViewIconLoaderNotifications@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1800E6520 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicat.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_bcd0843cf4c9ec95ad35c936b1c550b0__Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____ptr64___(
        _QWORD **a1,
        volatile int *a2,
        RTL_SRWLOCK *a3)
{
  unsigned int v5; // edi
  _QWORD *v6; // rbx
  _QWORD *v7; // r10
  __int64 v8; // r14
  struct IUnknown **i; // rsi
  unsigned int v10; // eax
  int MatchingRestrictedErrorInfo; // ebx
  unsigned int v12; // eax
  __int64 v14; // [rsp+68h] [rbp+10h] BYREF
  _QWORD *v15; // [rsp+78h] [rbp+20h]

  v5 = 0;
  v6 = 0LL;
  v15 = 0LL;
  if ( a2 )
  {
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationViewIconLoaderNotifications>::InternalAddRef(a2);
    v6 = v7;
    v15 = v7;
  }
  v8 = v6[4];
  for ( i = (struct IUnknown **)v6[2]; i != (struct IUnknown **)v6[3]; ++i )
  {
    v10 = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD, _QWORD))(*i)->lpVtbl[1].QueryInterface)(*i, **a1, *a1[1]);
    v5 = v10;
    if ( v10 == -2147417848 || v10 == -2147023174 || v10 == -1996357631 || v10 == -2147418105 || v10 == -2147418094 )
    {
      RoTransformError(v10, 0LL, 0LL);
      Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::Remove(
        a3,
        *i);
      v5 = 0;
    }
    if ( (v5 & 0x80000000) != 0 )
    {
      if ( (unsigned int)IsErrorPropagationEnabled() )
      {
        v14 = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
        MatchingRestrictedErrorInfo = RoGetMatchingRestrictedErrorInfo(v5, &v14);
        if ( MatchingRestrictedErrorInfo >= 0 )
          MatchingRestrictedErrorInfo = RoReportFailedDelegate(*i, v14);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
        v12 = 0;
        if ( MatchingRestrictedErrorInfo < 0 )
          v12 = v5;
        v5 = v12;
        v6 = v15;
        break;
      }
      RoTransformError(v5, 0LL, 0LL);
      v5 = 0;
    }
    v8 += 8LL;
  }
  if ( !Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)((char *)v6 + 12), a2) )
  {
    (*(void (__fastcall **)(_QWORD *, __int64))(*v6 + 24LL))(v6, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return v5;
}
