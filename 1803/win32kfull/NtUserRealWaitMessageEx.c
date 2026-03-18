/*
 * XREFs of NtUserRealWaitMessageEx @ 0x1C01F3CF0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     xxxSleepThread2 @ 0x1C0046670 (xxxSleepThread2.c)
 */

__int64 __fastcall NtUserRealWaitMessageEx(unsigned int a1, unsigned int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // ebx

  EnterCrit(0LL, 1LL);
  if ( (a1 & 0xFFFFA200) != 0 )
  {
    UserSetLastError(1004LL, v4);
    v9 = 0;
  }
  else
  {
    v9 = xxxSleepThread2(a1, a2, 1, 0, 0LL);
  }
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return v9;
}
