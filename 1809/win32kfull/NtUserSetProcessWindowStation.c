/*
 * XREFs of NtUserSetProcessWindowStation @ 0x1C00FDE90
 * Callers:
 *     <none>
 * Callees:
 *     xxxSetProcessWindowStation @ 0x1C00FDF30 (xxxSetProcessWindowStation.c)
 */

__int64 __fastcall NtUserSetProcessWindowStation(HANDLE SourceHandle)
{
  __int64 v2; // rdi
  __int64 v3; // rcx
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 CurrentProcessWin32Process; // rax

  v2 = 1LL;
  EnterCrit(0LL, 1LL);
  v4 = *(_QWORD *)(PsGetCurrentProcessWin32Process(v3) + 680);
  if ( (int)xxxSetProcessWindowStation(SourceHandle) < 0 )
  {
    v2 = 0LL;
  }
  else if ( v4 != *(_QWORD *)(PsGetCurrentProcessWin32Process(v6) + 680) )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6);
    *(_DWORD *)(CurrentProcessWin32Process + 820) |= 0x4000000u;
  }
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return v2;
}
