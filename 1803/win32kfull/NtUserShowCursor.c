/*
 * XREFs of NtUserShowCursor @ 0x1C010BE70
 * Callers:
 *     <none>
 * Callees:
 *     zzzShowCursor @ 0x1C010BEA4 (zzzShowCursor.c)
 */

__int64 __fastcall NtUserShowCursor(unsigned int a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9

  EnterCrit(0LL, 1LL);
  v2 = zzzShowCursor(a1);
  UserSessionSwitchLeaveCrit(v4, v3, v5, v6);
  return v2;
}
