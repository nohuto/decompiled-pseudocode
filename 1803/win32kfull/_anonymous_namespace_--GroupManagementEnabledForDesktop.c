/*
 * XREFs of _anonymous_namespace_::GroupManagementEnabledForDesktop @ 0x1C006B5DC
 * Callers:
 *     ?GetWindowForActivation@WindowGroupingWindowManagement@@YAPEAUtagWND@@PEAU2@W4GetWindowForActivationOption@1@@Z @ 0x1C006B5FC (-GetWindowForActivation@WindowGroupingWindowManagement@@YAPEAUtagWND@@PEAU2@W4GetWindowForActiva.c)
 *     ?CleanupShellWindowManagement@@YAXPEAUtagDESKTOP@@@Z @ 0x1C00F18FC (-CleanupShellWindowManagement@@YAXPEAUtagDESKTOP@@@Z.c)
 *     ?UnInitializeWindowGroupFunctionality@WindowGroupingFeature@@YAX_K@Z @ 0x1C0108CEC (-UnInitializeWindowGroupFunctionality@WindowGroupingFeature@@YAX_K@Z.c)
 *     xxxCloneWindowPosAndArrangement @ 0x1C019EF98 (xxxCloneWindowPosAndArrangement.c)
 *     xxxCallIAMShowWindowPolicyHandler @ 0x1C01A5444 (xxxCallIAMShowWindowPolicyHandler.c)
 *     NtUserCreateWindowGroup @ 0x1C01EC7D0 (NtUserCreateWindowGroup.c)
 *     NtUserDeleteWindowGroup @ 0x1C01ECA40 (NtUserDeleteWindowGroup.c)
 *     NtUserEnableWindowGroupPolicy @ 0x1C01ED630 (NtUserEnableWindowGroupPolicy.c)
 *     NtUserSetWindowGroup @ 0x1C01F5E30 (NtUserSetWindowGroup.c)
 *     _anonymous_namespace_::TryExecuteIfPolicyAllows__lambda_336d399dbea870f4b634e48a18f0c036___ @ 0x1C01FC080 (_anonymous_namespace_--TryExecuteIfPolicyAllows__lambda_336d399dbea870f4b634e48a18f0c036___.c)
 *     ?HandleWindowDestruction@WindowGroupingWindowManagement@@YAXPEAUtagWND@@@Z @ 0x1C01FCD64 (-HandleWindowDestruction@WindowGroupingWindowManagement@@YAXPEAUtagWND@@@Z.c)
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
