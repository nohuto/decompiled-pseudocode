/*
 * XREFs of ??1?$unique_ptr@VSmartCookie@@U?$default_delete@VSmartCookie@@@std@@@std@@QEAA@XZ @ 0x180321AD0
 * Callers:
 *     _AppViewEventHelpers::details::EventRegistration_IImmersiveShellHookService_IImmersiveShellHookNotification_::Unregister_::_1_::dtor$0 @ 0x180326E9F (_AppViewEventHelpers--details--EventRegistration_IImmersiveShellHookService_IImmers_ea_180326E9F.c)
 * Callees:
 *     ??1?$function@$$A6AJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIFrameworkViewTypeSetEventArgs@2345@@Foundation@Windows@@@Z@wistd@@QEAA@XZ @ 0x1800547D0 (--1-$function@$$A6AJPEAU-$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Window.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008A0A0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x1801286A8 (-Unregister@SmartCookie@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::unique_ptr<SmartCookie>::~unique_ptr<SmartCookie>(SmartCookie **a1)
{
  SmartCookie *v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    SmartCookie::Unregister(*a1);
    wistd::function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *> *)>::~function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *> *)>((__int64)v1);
    operator delete(v1, (const struct std::nothrow_t *)0x80);
  }
}
