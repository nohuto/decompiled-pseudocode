/*
 * XREFs of NtUserWaitForInputIdle @ 0x1C0132F40
 * Callers:
 *     <none>
 * Callees:
 *     xxxWaitForInputIdle @ 0x1C0132FA0 (xxxWaitForInputIdle.c)
 */

__int64 __fastcall NtUserWaitForInputIdle(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rcx

  EnterCrit(0LL, 1LL);
  v6 = xxxWaitForInputIdle(a1, a2, a3);
  UserSessionSwitchLeaveCrit(v7);
  return v6;
}
