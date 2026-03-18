/*
 * XREFs of NtUserWOWCleanup @ 0x1C0236CC0
 * Callers:
 *     <none>
 * Callees:
 *     _WOWCleanup @ 0x1C0214010 (_WOWCleanup.c)
 */

__int64 __fastcall NtUserWOWCleanup(__int64 a1, unsigned int a2)
{
  __int64 v4; // rbx
  __int64 v5; // rcx

  EnterCrit(0LL, 1LL);
  v4 = (int)WOWCleanup(a1, a2);
  UserSessionSwitchLeaveCrit(v5);
  return v4;
}
