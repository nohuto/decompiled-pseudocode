/*
 * XREFs of _anonymous_namespace_::GroupManagementEnabledForDesktop @ 0x1C000FB24
 * Callers:
 *     ?CleanupShellWindowManagement@@YAXPEAUtagDESKTOP@@@Z @ 0x1C000C2AC (-CleanupShellWindowManagement@@YAXPEAUtagDESKTOP@@@Z.c)
 *     ?UnInitializeWindowGroupFunctionality@WindowGroupingFeature@@YAX_K@Z @ 0x1C000F974 (-UnInitializeWindowGroupFunctionality@WindowGroupingFeature@@YAX_K@Z.c)
 *     _lambda_75e919a46692d6b7e31e9e50a1c7a298_::_lambda_invoker_cdecl_ @ 0x1C000F9B0 (_lambda_75e919a46692d6b7e31e9e50a1c7a298_--_lambda_invoker_cdecl_.c)
 *     ?xxxShowWindowPolicyHandler@CallShell@@YA_NPEAUtagWND@@IPEAW4SHELL_SPECIFIED_SHOW_COMMAND@@PEAUWINDOW_GROUP_ID@@PEAUtagRECT@@@Z @ 0x1C000FA2C (-xxxShowWindowPolicyHandler@CallShell@@YA_NPEAUtagWND@@IPEAW4SHELL_SPECIFIED_SHOW_COMMAND@@PEAUW.c)
 *     ?xxxCloneWindowPosAndArrangement@@YAXPEAUtagWND@@AEBUWINDOWPOSANDCHECKPOINT@@@Z @ 0x1C01D3B88 (-xxxCloneWindowPosAndArrangement@@YAXPEAUtagWND@@AEBUWINDOWPOSANDCHECKPOINT@@@Z.c)
 *     NtUserCreateWindowGroup @ 0x1C022A800 (NtUserCreateWindowGroup.c)
 *     NtUserDeleteWindowGroup @ 0x1C022AAC0 (NtUserDeleteWindowGroup.c)
 *     NtUserEnableWindowGroupPolicy @ 0x1C022B840 (NtUserEnableWindowGroupPolicy.c)
 *     NtUserSetWindowGroup @ 0x1C0235A80 (NtUserSetWindowGroup.c)
 *     _anonymous_namespace_::TryExecuteIfPolicyAllows__lambda_7b89ab000df0a6c72fa8d71ac8b3e245___ @ 0x1C023CF90 (_anonymous_namespace_--TryExecuteIfPolicyAllows__lambda_7b89ab000df0a6c72fa8d71ac8b3e245___.c)
 *     ?HandleWindowDestruction@WindowGroupingWindowManagement@@YAXPEAUtagWND@@@Z @ 0x1C023DC60 (-HandleWindowDestruction@WindowGroupingWindowManagement@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall anonymous_namespace_::GroupManagementEnabledForDesktop(__int64 a1)
{
  char result; // al

  result = 0;
  if ( `anonymous namespace'::g_windowGroupManager )
  {
    if ( a1 == *(_QWORD *)`anonymous namespace'::g_windowGroupManager )
      return 1;
  }
  return result;
}
