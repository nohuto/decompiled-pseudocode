/*
 * XREFs of NtUserSoundSentry @ 0x1C0236170
 * Callers:
 *     <none>
 * Callees:
 *     xxxSoundSentry @ 0x1C015BAE0 (xxxSoundSentry.c)
 */

__int64 NtUserSoundSentry()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rbx
  __int64 v5; // rcx

  EnterCrit(0LL, 1LL);
  v4 = (int)xxxSoundSentry(v1, v0, v2, v3);
  UserSessionSwitchLeaveCrit(v5);
  return v4;
}
