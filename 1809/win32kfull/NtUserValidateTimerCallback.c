/*
 * XREFs of NtUserValidateTimerCallback @ 0x1C00F8590
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     ValidateTimerCallback @ 0x1C00F85E4 (ValidateTimerCallback.c)
 */

__int64 __fastcall NtUserValidateTimerCallback(__int64 a1)
{
  __int64 v2; // rdx
  __int64 ThreadWin32Thread; // rax
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9

  EnterSharedCrit(0LL, 1LL);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v2);
  v4 = (int)ValidateTimerCallback(ThreadWin32Thread, a1);
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return v4;
}
