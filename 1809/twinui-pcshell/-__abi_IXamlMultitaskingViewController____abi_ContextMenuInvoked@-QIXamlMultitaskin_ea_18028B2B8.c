/*
 * XREFs of ?__abi_IXamlMultitaskingViewController____abi_ContextMenuInvoked@?QIXamlMultitaskingViewController@@XamlBaseViewController@@UE$AAAJPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@5WindowsInternal@@@Z @ 0x18028B2B8
 * Callers:
 *     ?__abi_IXamlMultitaskingViewController____abi_ContextMenuInvoked@?QIXamlMultitaskingViewController@@XamlBaseViewController@@W7E$AAAJPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@5WindowsInternal@@@Z @ 0x1800A6520 (-__abi_IXamlMultitaskingViewController____abi_ContextMenuInvoked@-QIXamlMultitaskingViewControll.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ___abi_IXamlMultitaskingViewController____abi_ContextMenuInvoked__QIXamlMultitaskingViewController__XamlBaseViewController__UE_AAAJPE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows__PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_5WindowsInternal___Z(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 128) )
    __abi_WinRTraiseObjectDisposedException();
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(a1 + 8) + 112LL))(a1 + 8);
  }
  catch ( ... )
  {
    __abi_translateCurrentException();
  }
  return 0LL;
}
