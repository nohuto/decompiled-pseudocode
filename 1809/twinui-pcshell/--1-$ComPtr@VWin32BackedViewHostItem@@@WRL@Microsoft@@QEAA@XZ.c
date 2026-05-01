/*
 * XREFs of ??1?$ComPtr@VWin32BackedViewHostItem@@@WRL@Microsoft@@QEAA@XZ @ 0x1801B1258
 * Callers:
 *     _HolographicPositioner::_RaiseViewAdded_::_1_::dtor$2 @ 0x1801B829A (_HolographicPositioner--_RaiseViewAdded_--_1_--dtor$2.c)
 *     _HolographicPositioner::_RaiseViewAdded_::_1_::dtor$3 @ 0x1801B82A6 (_HolographicPositioner--_RaiseViewAdded_--_1_--dtor$3.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIViewHostItem@Holographic@Shell@Internal@Windows@@UIViewHostItemAppViewInternal@5678@UIApplicationViewBackedViewHostItemPrivate@@UIForegroundTarget@ComposableShell@78@UICoreForegroundTarget@Core@ComposableShell@78@UIImmersiveShellHookNotification@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801B4940 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIVie_ea_1801B4940.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<Win32BackedViewHostItem>::~ComPtr<Win32BackedViewHostItem>(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Holographic::IViewHostItem,Windows::Internal::Shell::Holographic::IViewHostItemAppViewInternal,IApplicationViewBackedViewHostItemPrivate,Windows::Internal::ComposableShell::IForegroundTarget,Windows::Internal::ComposableShell::Core::ICoreForegroundTarget,IImmersiveShellHookNotification,Microsoft::WRL::FtmBase>::Release(result);
  }
  return result;
}
