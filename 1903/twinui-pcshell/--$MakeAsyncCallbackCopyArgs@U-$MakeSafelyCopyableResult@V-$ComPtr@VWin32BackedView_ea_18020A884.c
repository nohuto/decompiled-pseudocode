/*
 * XREFs of ??$MakeAsyncCallbackCopyArgs@U?$MakeSafelyCopyableResult@V?$ComPtr@VWin32BackedViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@PEAVWin32BackedViewHostItem@Holographic@Shell@Internal@Windows@@@details@wil@@U?$MakeSafelyCopyableResult@V?$ComPtr@VViewSizePreferencesChangedEventArgs@@@WRL@Microsoft@@PEAVViewSizePreferencesChangedEventArgs@@@23@@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIViewSizePreferencesChangedEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_returncode_policy@wil@@@wil@@CAJAEAV?$function@$$A6AJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIViewSizePreferencesChangedEventArgs@2345@@Foundation@Windows@@@Z@wistd@@$$QEAU?$MakeSafelyCopyableResult@V?$ComPtr@VWin32BackedViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@PEAVWin32BackedViewHostItem@Holographic@Shell@Internal@Windows@@@details@1@$$QEAU?$MakeSafelyCopyableResult@V?$ComPtr@VViewSizePreferencesChangedEventArgs@@@WRL@Microsoft@@PEAVViewSizePreferencesChangedEventArgs@@@51@@Z @ 0x18020A884
 * Callers:
 *     ??$AsyncInvokeAll@PEAVWin32BackedViewHostItem@Holographic@Shell@Internal@Windows@@PEAVViewSizePreferencesChangedEventArgs@@@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIViewSizePreferencesChangedEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_returncode_policy@wil@@@wil@@QEAAJAEBQEAVWin32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEBQEAVViewSizePreferencesChangedEventArgs@@@Z @ 0x180209488 (--$AsyncInvokeAll@PEAVWin32BackedViewHostItem@Holographic@Shell@Internal@Windows@@PEAVViewSizePr.c)
 * Callees:
 *     wistd::function_long___cdecl(Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Holographic::IViewHostItem___Windows::Internal::Shell::Holographic::IViewSizePreferencesChangedEventArgs_____)_::operator___lambda_ba8d26c60c9492540100e9d7fecf1321__void_ @ 0x180208B94 (wistd--function_long___cdecl(Windows--Foundation--ITypedEventHandler_Windows--Inter_ea_180208B94.c)
 *     ?InternalRelease@?$ComPtr@VViewSizePreferencesChangedEventArgs@@@WRL@Microsoft@@IEAAKXZ @ 0x1802105E0 (-InternalRelease@-$ComPtr@VViewSizePreferencesChangedEventArgs@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIViewHostItem@Holographic@Shell@Internal@Windows@@UIViewHostItemAppViewInternal@5678@UIPortableViewHostItem@5678@UIApplicationViewBackedViewHostItemPrivate@@U?$Implements@UIForegroundTarget@ComposableShell@Internal@Windows@@UICoreForegroundTarget@Core@234@VTreeNodeBase@234@@23@UIImmersiveShellHookNotification@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180212710 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIVie_ea_180212710.c)
 */

__int64 __fastcall wil::AsyncEventSourceT<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IViewSizePreferencesChangedEventArgs *>,Windows::Internal::GitEventSourceSupportsAgile,Microsoft::WRL::InvokeModeOptions<2>,1,wil::err_returncode_policy>::MakeAsyncCallbackCopyArgs<wil::details::MakeSafelyCopyableResult<Microsoft::WRL::ComPtr<Windows::Internal::Shell::Holographic::Win32BackedViewHostItem>,Windows::Internal::Shell::Holographic::Win32BackedViewHostItem *>,wil::details::MakeSafelyCopyableResult<Microsoft::WRL::ComPtr<ViewSizePreferencesChangedEventArgs>,ViewSizePreferencesChangedEventArgs *>>(
        _QWORD *a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 v3; // r9
  signed __int64 v4; // rax
  signed __int64 v5; // rtt
  __int64 v6; // rdx
  signed __int64 v7; // rax
  signed __int64 v8; // rtt
  __int64 v10; // [rsp+20h] [rbp-18h] BYREF
  __int64 v11; // [rsp+28h] [rbp-10h] BYREF

  v3 = *a2;
  v10 = v3;
  if ( v3 )
  {
    v4 = *(_QWORD *)(v3 + 200);
    while ( v4 >= 0 )
    {
      v5 = v4;
      v4 = _InterlockedCompareExchange64((volatile signed __int64 *)(v3 + 200), v4 + 1, v4);
      if ( v5 == v4 )
        goto LABEL_7;
    }
    _InterlockedIncrement((volatile signed __int32 *)(2 * v4 + 16));
  }
LABEL_7:
  v6 = *a3;
  v11 = v6;
  if ( v6 )
  {
    v7 = *(_QWORD *)(v6 + 56);
    while ( v7 >= 0 )
    {
      v8 = v7;
      v7 = _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 56), v7 + 1, v7);
      if ( v8 == v7 )
        goto LABEL_13;
    }
    _InterlockedIncrement((volatile signed __int32 *)(2 * v7 + 16));
  }
LABEL_13:
  wistd::function_long___cdecl_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Holographic::IViewHostItem___Windows::Internal::Shell::Holographic::IViewSizePreferencesChangedEventArgs_______::operator___lambda_ba8d26c60c9492540100e9d7fecf1321__void_(
    a1,
    &v10);
  Microsoft::WRL::ComPtr<ViewSizePreferencesChangedEventArgs>::InternalRelease(&v11);
  if ( v10 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Holographic::IViewHostItem,Windows::Internal::Shell::Holographic::IViewHostItemAppViewInternal,Windows::Internal::Shell::Holographic::IPortableViewHostItem,IApplicationViewBackedViewHostItemPrivate,Microsoft::WRL::Implements<Windows::Internal::ComposableShell::IForegroundTarget,Windows::Internal::ComposableShell::Core::ICoreForegroundTarget,Windows::Internal::ComposableShell::TreeNodeBase>,IImmersiveShellHookNotification,Microsoft::WRL::FtmBase>::Release(v10);
  return 0LL;
}
