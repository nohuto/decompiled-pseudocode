/*
 * XREFs of NtUserShowCursor @ 0x1C012C4A0
 * Callers:
 *     <none>
 * Callees:
 *     ?zzzShowCursor@@YAH_N@Z @ 0x1C012C4E4 (-zzzShowCursor@@YAH_N@Z.c)
 */

__int64 __fastcall NtUserShowCursor(int a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9

  EnterCrit(0LL, 1LL);
  v2 = zzzShowCursor(a1 != 0);
  UserSessionSwitchLeaveCrit(v4, v3, v5, v6);
  return v2;
}
