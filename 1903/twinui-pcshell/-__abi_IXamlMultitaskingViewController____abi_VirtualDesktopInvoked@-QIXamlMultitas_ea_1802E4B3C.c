/*
 * XREFs of ?__abi_IXamlMultitaskingViewController____abi_VirtualDesktopInvoked@?QIXamlMultitaskingViewController@@XamlBaseViewController@@UE$AAAJPE$AAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@0@Z @ 0x1802E4B3C
 * Callers:
 *     ?__abi_IXamlMultitaskingViewController____abi_VirtualDesktopInvoked@?QIXamlMultitaskingViewController@@XamlBaseViewController@@W7E$AAAJPE$AAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@0@Z @ 0x1800BD3A0 (-__abi_IXamlMultitaskingViewController____abi_VirtualDesktopInvoked@-QIXamlMultitaskingViewContr.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ___abi_IXamlMultitaskingViewController____abi_VirtualDesktopInvoked__QIXamlMultitaskingViewController__XamlBaseViewController__UE_AAAJPE_AAUIVirtualDesktop_Multitasking_ComposableShell_Internal_Windows__0_Z(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 128) )
    __abi_WinRTraiseObjectDisposedException();
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(a1 + 8) + 120LL))(a1 + 8);
  }
  catch ( ... )
  {
    __abi_translateCurrentException();
  }
  return 0LL;
}
