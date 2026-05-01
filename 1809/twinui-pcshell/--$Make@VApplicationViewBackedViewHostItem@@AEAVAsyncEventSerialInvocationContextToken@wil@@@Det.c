/*
 * XREFs of ??$Make@VApplicationViewBackedViewHostItem@@AEAVAsyncEventSerialInvocationContextToken@wil@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VApplicationViewBackedViewHostItem@@@12@AEAVAsyncEventSerialInvocationContextToken@wil@@@Z @ 0x1801AFAF0
 * Callers:
 *     ?_RaiseViewAdded@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1801B7FE8 (-_RaiseViewAdded@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIViewHostItem@Holographic@Shell@Internal@Windows@@UIViewHostItemAppViewInternal@5678@UIApplicationViewBackedViewHostItemPrivate@@UIForegroundTarget@ComposableShell@78@UICoreForegroundTarget@Core@ComposableShell@78@UIImmersiveShellHookNotification@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801B4940 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIVie_ea_1801B4940.c)
 *     ??0ApplicationViewBackedViewHostItem@@QEAA@AEAVAsyncEventSerialInvocationContextToken@wil@@@Z @ 0x1801C1F68 (--0ApplicationViewBackedViewHostItem@@QEAA@AEAVAsyncEventSerialInvocationContextToken@wil@@@Z.c)
 */

ApplicationViewBackedViewHostItem **__fastcall Microsoft::WRL::Details::Make<ApplicationViewBackedViewHostItem,wil::AsyncEventSerialInvocationContextToken &>(
        ApplicationViewBackedViewHostItem **a1,
        struct wil::AsyncEventSerialInvocationContextToken *a2)
{
  ApplicationViewBackedViewHostItem *v4; // rax
  ApplicationViewBackedViewHostItem *v5; // rdi

  *a1 = 0LL;
  v4 = (ApplicationViewBackedViewHostItem *)operator new(0x228uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v5 = ApplicationViewBackedViewHostItem::ApplicationViewBackedViewHostItem(v4, a2);
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Holographic::IViewHostItem,Windows::Internal::Shell::Holographic::IViewHostItemAppViewInternal,IApplicationViewBackedViewHostItemPrivate,Windows::Internal::ComposableShell::IForegroundTarget,Windows::Internal::ComposableShell::Core::ICoreForegroundTarget,IImmersiveShellHookNotification,Microsoft::WRL::FtmBase>::Release(*a1);
    *a1 = v5;
  }
  return a1;
}
