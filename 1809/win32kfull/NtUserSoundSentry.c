/*
 * XREFs of NtUserSoundSentry @ 0x1C021E490
 * Callers:
 *     <none>
 * Callees:
 *     xxxSoundSentry @ 0x1C0154BE0 (xxxSoundSentry.c)
 */

__int64 NtUserSoundSentry()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9

  EnterCrit(0LL, 1LL);
  v4 = (int)xxxSoundSentry(v1, v0, v2, v3);
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return v4;
}
