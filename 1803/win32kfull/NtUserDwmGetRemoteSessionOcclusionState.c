/*
 * XREFs of NtUserDwmGetRemoteSessionOcclusionState @ 0x1C0138DF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtUserDwmGetRemoteSessionOcclusionState()
{
  __int64 v0; // rbx
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9

  EnterCrit(0LL, 1LL);
  v0 = gbFreezeScreenUpdates;
  UserSessionSwitchLeaveCrit(v2, v1, v3, v4);
  return v0;
}
