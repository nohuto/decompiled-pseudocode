/*
 * XREFs of wistd::__function::__func__lambda_29f9b277c0e8279453faedac4a3ae410__long___cdecl(Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Holographic::IViewHostItem___Windows::Internal::Shell::Holographic::IViewSizePreferencesChangedEventArgs_____)_::destroy @ 0x18021D170
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VViewSizePreferencesChangedEventArgs@@@WRL@Microsoft@@IEAAKXZ @ 0x1802105E0 (-InternalRelease@-$ComPtr@VViewSizePreferencesChangedEventArgs@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIViewHostItem@Holographic@Shell@Internal@Windows@@UIViewHostItemAppViewInternal@5678@UIApplicationViewBackedViewHostItemPrivate@@UIImmersiveApplicationPresentationListener@@U?$Implements@UIForegroundTarget@ComposableShell@Internal@Windows@@UICoreForegroundTarget@Core@234@VTreeNodeBase@234@@23@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180218C50 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIVie_ea_180218C50.c)
 */

__int64 __fastcall wistd::__function::__func__lambda_29f9b277c0e8279453faedac4a3ae410__long___cdecl_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Holographic::IViewHostItem___Windows::Internal::Shell::Holographic::IViewSizePreferencesChangedEventArgs_______::destroy(
        __int64 a1)
{
  __int64 result; // rax
  volatile signed __int64 *v3; // rcx

  result = Microsoft::WRL::ComPtr<ViewSizePreferencesChangedEventArgs>::InternalRelease((volatile signed __int64 **)(a1 + 16));
  v3 = *(volatile signed __int64 **)(a1 + 8);
  if ( v3 )
  {
    *(_QWORD *)(a1 + 8) = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Holographic::IViewHostItem,Windows::Internal::Shell::Holographic::IViewHostItemAppViewInternal,IApplicationViewBackedViewHostItemPrivate,IImmersiveApplicationPresentationListener,Microsoft::WRL::Implements<Windows::Internal::ComposableShell::IForegroundTarget,Windows::Internal::ComposableShell::Core::ICoreForegroundTarget,Windows::Internal::ComposableShell::TreeNodeBase>,Microsoft::WRL::FtmBase>::Release(v3);
  }
  return result;
}
