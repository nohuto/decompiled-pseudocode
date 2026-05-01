/*
 * XREFs of ??$AsyncInvokeAll@PEAVWin32BackedViewHostItem@@PEAUITitleBarChangedEventArgs@Holographic@Shell@Internal@Windows@@@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUITitleBarChangedEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_returncode_policy@wil@@@wil@@QEAAJAEBQEAVWin32BackedViewHostItem@@AEBQEAUITitleBarChangedEventArgs@Holographic@Shell@Internal@Windows@@@Z @ 0x1801BAD20
 * Callers:
 *     ?_RaiseTitleBarChangedEvent@Win32BackedViewHostItem@@AEAAJXZ @ 0x1801C0908 (-_RaiseTitleBarChangedEvent@Win32BackedViewHostItem@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?_Tidy@?$_Func_class@XAEBU_SEB_EVENT_HEADER@@U_Nil@wistd@@U23@U23@U23@U23@U23@@wistd@@IEAAXXZ @ 0x1800E2500 (-_Tidy@-$_Func_class@XAEBU_SEB_EVENT_HEADER@@U_Nil@wistd@@U23@U23@U23@U23@U23@@wistd@@IEAAXXZ.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x1800E6514 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 *     ?DoAsyncInvoke@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_returncode_policy@wil@@@wil@@AEAAJ$$QEAV?$function@$$A6AJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@@Z@wistd@@@Z @ 0x1801B28F4 (-DoAsyncInvoke@-$AsyncEventSourceT@U-$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Int.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIViewHostItem@Holographic@Shell@Internal@Windows@@UIViewHostItemAppViewInternal@5678@UIApplicationViewBackedViewHostItemPrivate@@UIForegroundTarget@ComposableShell@78@UICoreForegroundTarget@Core@ComposableShell@78@UIImmersiveShellHookNotification@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801B4940 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIVie_ea_1801B4940.c)
 *     wistd::function_long___cdecl(Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Holographic::IViewHostItem_____ptr64_Windows::Internal::Shell::Holographic::ITitleBarChangedEventArgs_____ptr64______ptr64)_::operator___lambda_5fd97281815b5fa4f82476fed05b8872___ @ 0x1801BAC50 (wistd--function_long___cdecl(Windows--Foundation--ITypedEventHandler_Windows--Inter_ea_1801BAC50.c)
 *     _lambda_5fd97281815b5fa4f82476fed05b8872_::_lambda_5fd97281815b5fa4f82476fed05b8872_ @ 0x1801BC100 (_lambda_5fd97281815b5fa4f82476fed05b8872_--_lambda_5fd97281815b5fa4f82476fed05b8872_.c)
 *     _lambda_5fd97281815b5fa4f82476fed05b8872_::__lambda_5fd97281815b5fa4f82476fed05b8872_ @ 0x1801BCB90 (_lambda_5fd97281815b5fa4f82476fed05b8872_--__lambda_5fd97281815b5fa4f82476fed05b8872_.c)
 */

__int64 __fastcall wil::AsyncEventSourceT<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::ITitleBarChangedEventArgs *>,Windows::Internal::GitEventSourceSupportsAgile,Microsoft::WRL::InvokeModeOptions<2>,1,wil::err_returncode_policy>::AsyncInvokeAll<Win32BackedViewHostItem *,Windows::Internal::Shell::Holographic::ITitleBarChangedEventArgs *>(
        PVOID Parameter,
        __int64 *a2,
        __int64 *a3)
{
  __int64 v3; // rbx
  volatile int *v6; // rdx
  __int64 v7; // rbx
  signed __int64 v8; // rax
  signed __int64 v9; // rtt
  _QWORD *v10; // rax
  unsigned int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v15; // [rsp+28h] [rbp-59h] BYREF
  __int64 v16; // [rsp+30h] [rbp-51h]
  __int64 v17; // [rsp+38h] [rbp-49h] BYREF
  __int64 v18; // [rsp+40h] [rbp-41h] BYREF
  _BYTE v19[16]; // [rsp+48h] [rbp-39h] BYREF
  _QWORD v20[14]; // [rsp+58h] [rbp-29h] BYREF

  v3 = *a3;
  v20[13] = 0LL;
  v15 = v3;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v15);
  v15 = 0LL;
  v17 = v3;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
  v7 = *a2;
  v16 = v7;
  if ( v7 )
  {
    v8 = *(_QWORD *)(v7 + 96);
    while ( v8 >= 0 )
    {
      if ( (_DWORD)v8 != 0x7FFFFFFF )
      {
        v9 = v8;
        v8 = _InterlockedCompareExchange64((volatile signed __int64 *)(v7 + 96), v8 + 1, v8);
        if ( v9 != v8 )
          continue;
      }
      goto LABEL_8;
    }
    Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details *)(2 * v8 + 16), v6);
LABEL_8:
    v7 = v16;
  }
  v18 = v7;
  v10 = (_QWORD *)lambda_5fd97281815b5fa4f82476fed05b8872_::_lambda_5fd97281815b5fa4f82476fed05b8872_(v19, &v18, &v17);
  wistd::function_long___cdecl_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Holographic::IViewHostItem_____ptr64_Windows::Internal::Shell::Holographic::ITitleBarChangedEventArgs_____ptr64______ptr64__::operator___lambda_5fd97281815b5fa4f82476fed05b8872___(
    v20,
    v10);
  lambda_5fd97281815b5fa4f82476fed05b8872_::__lambda_5fd97281815b5fa4f82476fed05b8872_(v19);
  if ( v7 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Holographic::IViewHostItem,Windows::Internal::Shell::Holographic::IViewHostItemAppViewInternal,IApplicationViewBackedViewHostItemPrivate,Windows::Internal::ComposableShell::IForegroundTarget,Windows::Internal::ComposableShell::Core::ICoreForegroundTarget,IImmersiveShellHookNotification,Microsoft::WRL::FtmBase>::Release(v7);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
  v11 = wil::AsyncEventSourceT<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,IInspectable *>,Windows::Internal::GitEventSourceSupportsAgile,Microsoft::WRL::InvokeModeOptions<2>,1,wil::err_returncode_policy>::DoAsyncInvoke(
          Parameter,
          (__int64)v20);
  wistd::_Func_class<void,_SEB_EVENT_HEADER const &,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Tidy(
    (__int64)v20,
    v12);
  wistd::_Func_class<void,_SEB_EVENT_HEADER const &,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Tidy(
    (__int64)v20,
    v13);
  return v11;
}
