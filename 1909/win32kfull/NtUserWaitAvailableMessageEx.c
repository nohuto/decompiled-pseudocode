/*
 * XREFs of NtUserWaitAvailableMessageEx @ 0x1C0236D10
 * Callers:
 *     <none>
 * Callees:
 *     xxxSleepThread2 @ 0x1C0045060 (xxxSleepThread2.c)
 */

__int64 __fastcall NtUserWaitAvailableMessageEx(unsigned int a1, int a2)
{
  __int64 v4; // rbx
  __int64 v5; // rcx

  EnterCrit(0LL, 1LL);
  v4 = (int)xxxSleepThread2(a1, a2, 1, 1u, 0LL);
  UserSessionSwitchLeaveCrit(v5);
  return v4;
}
