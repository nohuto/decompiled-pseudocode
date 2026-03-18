/*
 * XREFs of NtUserEmptyClipboard @ 0x1C00DF2C0
 * Callers:
 *     <none>
 * Callees:
 *     xxxEmptyClipboard @ 0x1C00DE988 (xxxEmptyClipboard.c)
 */

__int64 NtUserEmptyClipboard()
{
  __int64 v0; // rdx
  __int64 v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9

  EnterCrit(0LL, 1LL);
  v1 = (int)xxxEmptyClipboard(0LL, v0);
  UserSessionSwitchLeaveCrit(v3, v2, v4, v5);
  return v1;
}
