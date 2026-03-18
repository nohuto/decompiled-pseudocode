/*
 * XREFs of NtUserWOWCleanup @ 0x1C01F73B0
 * Callers:
 *     <none>
 * Callees:
 *     _WOWCleanup @ 0x1C01D8200 (_WOWCleanup.c)
 */

__int64 __fastcall NtUserWOWCleanup(__int64 a1, int a2)
{
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9

  EnterCrit(0LL, 1LL);
  v4 = (int)WOWCleanup(a1, a2);
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return v4;
}
