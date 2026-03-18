/*
 * XREFs of NtUserSetProcessWindowStation @ 0x1C0106E10
 * Callers:
 *     <none>
 * Callees:
 *     xxxSetProcessWindowStation @ 0x1C0106EB0 (xxxSetProcessWindowStation.c)
 */

__int64 __fastcall NtUserSetProcessWindowStation(HANDLE SourceHandle)
{
  __int64 v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 CurrentProcessWin32Process; // rax

  v2 = 1LL;
  EnterCrit(0LL, 1LL);
  v5 = *(_QWORD *)(PsGetCurrentProcessWin32Process(v4, v3) + 672);
  if ( (int)xxxSetProcessWindowStation(SourceHandle) < 0 )
  {
    v2 = 0LL;
  }
  else if ( v5 != *(_QWORD *)(PsGetCurrentProcessWin32Process(v7, v6) + 672) )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v7, v8);
    *(_DWORD *)(CurrentProcessWin32Process + 812) |= 0x8000000u;
  }
  UserSessionSwitchLeaveCrit(v7);
  return v2;
}
