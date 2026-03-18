/*
 * XREFs of NtUserRealWaitMessageEx @ 0x1C021B410
 * Callers:
 *     <none>
 * Callees:
 *     xxxSleepThread2 @ 0x1C0030BEC (xxxSleepThread2.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 */

__int64 __fastcall NtUserRealWaitMessageEx(unsigned int a1, unsigned int a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // ebx

  EnterCrit(0LL, 1LL);
  if ( (a1 & 0xFFFFA200) != 0 )
  {
    UserSetLastError(1004LL, v4, v5, v6);
    v11 = 0;
  }
  else
  {
    v11 = xxxSleepThread2(a1, a2, 1, 0, 0LL);
  }
  UserSessionSwitchLeaveCrit(v8, v7, v9, v10);
  return v11;
}
