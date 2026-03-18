/*
 * XREFs of NtUserDwmGetRemoteSessionOcclusionState @ 0x1C0161270
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtUserDwmGetRemoteSessionOcclusionState()
{
  __int64 v0; // rcx

  EnterCrit(0LL, 1LL);
  UserSessionSwitchLeaveCrit(v0);
  return gbFreezeScreenUpdates;
}
