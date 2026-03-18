/*
 * XREFs of NtUserFrostCrashedWindow @ 0x1C022BB60
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     xxxFrostCrashedWindow @ 0x1C01F96F4 (xxxFrostCrashedWindow.c)
 */

unsigned __int64 __fastcall NtUserFrostCrashedWindow(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  unsigned __int64 v6; // rbx
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9

  EnterSharedCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v6 = 0LL;
  v7 = v4;
  if ( v4 )
  {
    if ( !a2 || ValidateHwnd(a2) )
      v6 = xxxFrostCrashedWindow(v7, a2);
    else
      UserSetLastError(1400LL, v8, v9, v10);
  }
  UserSessionSwitchLeaveCrit(v5);
  return v6;
}
