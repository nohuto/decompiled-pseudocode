/*
 * XREFs of ??$AsyncInvokeAll@PEAVApplicationViewBackedViewHostItem@@$$T@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_returncode_policy@wil@@@wil@@QEAAJAEBQEAVApplicationViewBackedViewHostItem@@AEB$$T@Z @ 0x180219088
 * Callers:
 *     ?OnImmersiveApplicationPresentationChange@ApplicationViewBackedViewHostItem@@UEAAJPEAUIImmersiveApplication@@W4IMMERSIVE_APPLICATION_PRESENTATION_CHANGE@@@Z @ 0x18021AFB0 (-OnImmersiveApplicationPresentationChange@ApplicationViewBackedViewHostItem@@UEAAJPEAUIImmersive.c)
 * Callees:
 *     ??1?$function@$$A6AJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIFrameworkViewTypeSetEventArgs@2345@@Foundation@Windows@@@Z@wistd@@QEAA@XZ @ 0x18000F750 (--1-$function@$$A6AJPEAU-$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Window.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ?DoAsyncInvoke@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_returncode_policy@wil@@@wil@@AEAAJ$$QEAV?$function@$$A6AJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@@Z@wistd@@@Z @ 0x1801FFB94 (-DoAsyncInvoke@-$AsyncEventSourceT@U-$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Int.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIViewHostItem@Holographic@Shell@Internal@Windows@@UIViewHostItemAppViewInternal@5678@UIApplicationViewBackedViewHostItemPrivate@@UIImmersiveApplicationPresentationListener@@U?$Implements@UIForegroundTarget@ComposableShell@Internal@Windows@@UICoreForegroundTarget@Core@234@VTreeNodeBase@234@@23@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180218C50 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIVie_ea_180218C50.c)
 *     wistd::function_long___cdecl(Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Holographic::IViewHostItem___IInspectable_____)_::operator___lambda_d3eb828bd1a14f7fd2ad7ce4e25a01fd__void_ @ 0x180218E90 (wistd--function_long___cdecl(Windows--Foundation--ITypedEventHandler_Windows--Inter_ea_180218E90.c)
 */

__int64 __fastcall wil::AsyncEventSourceT<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,IInspectable *>,Windows::Internal::GitEventSourceSupportsAgile,Microsoft::WRL::InvokeModeOptions<2>,1,wil::err_returncode_policy>::AsyncInvokeAll<ApplicationViewBackedViewHostItem *,std::nullptr_t>(
        __int64 Parameter,
        volatile signed __int64 **a2,
        volatile signed __int64 **a3)
{
  volatile signed __int64 *v3; // rbx
  signed __int64 v5; // rax
  signed __int64 v6; // rtt
  signed __int64 v7; // rax
  signed __int64 v8; // rtt
  unsigned int v9; // ebx
  volatile signed __int64 *v11[3]; // [rsp+28h] [rbp-51h] BYREF
  _QWORD v12[16]; // [rsp+40h] [rbp-39h] BYREF

  v3 = *a2;
  v12[14] = 0LL;
  if ( v3 )
  {
    v5 = *((_QWORD *)v3 + 24);
    while ( v5 >= 0 )
    {
      v6 = v5;
      v5 = _InterlockedCompareExchange64(v3 + 24, v5 + 1, v5);
      if ( v6 == v5 )
        goto LABEL_7;
    }
    _InterlockedIncrement((volatile signed __int32 *)(2 * v5 + 16));
  }
LABEL_7:
  v11[0] = v3;
  if ( v3 )
  {
    v7 = *((_QWORD *)v3 + 24);
    while ( v7 >= 0 )
    {
      v8 = v7;
      v7 = _InterlockedCompareExchange64(v3 + 24, v7 + 1, v7);
      if ( v8 == v7 )
        goto LABEL_13;
    }
    _InterlockedIncrement((volatile signed __int32 *)(2 * v7 + 16));
  }
LABEL_13:
  v11[1] = *a3;
  wistd::function_long___cdecl_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Holographic::IViewHostItem___IInspectable_______::operator___lambda_d3eb828bd1a14f7fd2ad7ce4e25a01fd__void_(
    v12,
    v11);
  if ( v11[0] )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Holographic::IViewHostItem,Windows::Internal::Shell::Holographic::IViewHostItemAppViewInternal,IApplicationViewBackedViewHostItemPrivate,IImmersiveApplicationPresentationListener,Microsoft::WRL::Implements<Windows::Internal::ComposableShell::IForegroundTarget,Windows::Internal::ComposableShell::Core::ICoreForegroundTarget,Windows::Internal::ComposableShell::TreeNodeBase>,Microsoft::WRL::FtmBase>::Release(v11[0]);
  if ( v3 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Holographic::IViewHostItem,Windows::Internal::Shell::Holographic::IViewHostItemAppViewInternal,IApplicationViewBackedViewHostItemPrivate,IImmersiveApplicationPresentationListener,Microsoft::WRL::Implements<Windows::Internal::ComposableShell::IForegroundTarget,Windows::Internal::ComposableShell::Core::ICoreForegroundTarget,Windows::Internal::ComposableShell::TreeNodeBase>,Microsoft::WRL::FtmBase>::Release(v3);
  v9 = wil::AsyncEventSourceT<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,IInspectable *>,Windows::Internal::GitEventSourceSupportsAgile,Microsoft::WRL::InvokeModeOptions<2>,1,wil::err_returncode_policy>::DoAsyncInvoke(
         Parameter,
         (__int64)v12);
  wistd::function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *> *)>::~function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *> *)>((__int64)v12);
  return v9;
}
