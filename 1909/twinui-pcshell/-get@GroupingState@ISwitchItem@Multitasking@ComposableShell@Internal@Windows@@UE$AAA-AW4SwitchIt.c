/*
 * XREFs of ?get@GroupingState@ISwitchItem@Multitasking@ComposableShell@Internal@Windows@@UE$AAA?AW4SwitchItemGroupingState@3456@XZ @ 0x18030EAF0
 * Callers:
 *     _lambda_95ea086e3b8fa056e55a3a293b600f83_::operator() @ 0x18030C128 (_lambda_95ea086e3b8fa056e55a3a293b600f83_--operator().c)
 *     ?InvokeSwitchItem@?QIXamlMultitaskingViewController@@XamlBaseViewController@@UE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x18030CA70 (-InvokeSwitchItem@-QIXamlMultitaskingViewController@@XamlBaseViewController@@UE$AAAXPE$AAUISwitc.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1802D2E40 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 */

__int64 __fastcall Windows::Internal::ComposableShell::Multitasking::ISwitchItem::GroupingState::get(__int64 *a1)
{
  __int64 v1; // rax
  int v2; // eax
  unsigned int v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = *a1;
  v4 = 0;
  v2 = (*(__int64 (__fastcall **)(__int64 *, unsigned int *))(v1 + 136))(a1, &v4);
  if ( v2 < 0 )
    __abi_WinRTraiseException(v2);
  return v4;
}
