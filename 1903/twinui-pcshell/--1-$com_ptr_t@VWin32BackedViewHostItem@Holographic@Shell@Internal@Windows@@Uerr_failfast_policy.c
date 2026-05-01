/*
 * XREFs of ??1?$com_ptr_t@VWin32BackedViewHostItem@Holographic@Shell@Internal@Windows@@Uerr_failfast_policy@wil@@@wil@@QEAA@XZ @ 0x180218904
 * Callers:
 *     _Windows::Internal::Shell::Holographic::ViewHostItemFactory::CreateForView_::_1_::dtor$1 @ 0x180218BE2 (_Windows--Internal--Shell--Holographic--ViewHostItemFactory--CreateForView_--_1_--dtor$1.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIViewHostItem@Holographic@Shell@Internal@Windows@@UIViewHostItemAppViewInternal@5678@UIPortableViewHostItem@5678@UIApplicationViewBackedViewHostItemPrivate@@U?$Implements@UIForegroundTarget@ComposableShell@Internal@Windows@@UICoreForegroundTarget@Core@234@VTreeNodeBase@234@@23@UIImmersiveShellHookNotification@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180212710 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIVie_ea_180212710.c)
 */

__int64 __fastcall wil::com_ptr_t<Windows::Internal::Shell::Holographic::Win32BackedViewHostItem,wil::err_failfast_policy>::~com_ptr_t<Windows::Internal::Shell::Holographic::Win32BackedViewHostItem,wil::err_failfast_policy>(
        volatile signed __int64 **a1)
{
  volatile signed __int64 *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Holographic::IViewHostItem,Windows::Internal::Shell::Holographic::IViewHostItemAppViewInternal,Windows::Internal::Shell::Holographic::IPortableViewHostItem,IApplicationViewBackedViewHostItemPrivate,Microsoft::WRL::Implements<Windows::Internal::ComposableShell::IForegroundTarget,Windows::Internal::ComposableShell::Core::ICoreForegroundTarget,Windows::Internal::ComposableShell::TreeNodeBase>,IImmersiveShellHookNotification,Microsoft::WRL::FtmBase>::Release(v1);
  return result;
}
