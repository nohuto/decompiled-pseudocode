/*
 * XREFs of ??4?$function@$$A6AJK@Z@wistd@@QEAAAEAV01@AEBV01@@Z @ 0x18020D7C4
 * Callers:
 *     ?Swap@SmartCookie@@QEAAXAEAV1@@Z @ 0x180214C14 (-Swap@SmartCookie@@QEAAXAEAV1@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??4?$function@$$A6AJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIViewSizePreferencesChangedEventArgs@2345@@Foundation@Windows@@@Z@wistd@@QEAAAEAV01@$$T@Z @ 0x180107C84 (--4-$function@$$A6AJPEAU-$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Window.c)
 */

__int64 __fastcall wistd::function<long (unsigned long)>::operator=(__int64 a1, __int64 a2)
{
  wistd::function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IViewSizePreferencesChangedEventArgs *> *)>::operator=(a1);
  if ( *(_QWORD *)(a2 + 112) )
  {
    *(_QWORD *)(a1 + 112) = a1 + 8;
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 112) + 8LL))(*(_QWORD *)(a2 + 112));
  }
  return a1;
}
