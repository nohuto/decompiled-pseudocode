/*
 * XREFs of ?HandlePinningCommand@XamlAllUpViewController@@AE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@I@Z @ 0x1802E3018
 * Callers:
 *     ?ContextMenuInvoked@?QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@5WindowsInternal@@@Z @ 0x1802E1528 (-ContextMenuInvoked@-QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAUISw.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1802B3920 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 */

void __fastcall XamlAllUpViewController::HandlePinningCommand(__int64 a1, __int64 a2, int a3)
{
  int v3; // r8d
  int v4; // eax
  int v5; // eax

  v3 = a3 - 1505;
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      v4 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 192) + 120LL))(*(_QWORD *)(a1 + 192));
      if ( v4 < 0 )
        __abi_WinRTraiseException(v4);
    }
  }
  else
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 192) + 128LL))(*(_QWORD *)(a1 + 192));
    if ( v5 < 0 )
      __abi_WinRTraiseException(v5);
  }
}
