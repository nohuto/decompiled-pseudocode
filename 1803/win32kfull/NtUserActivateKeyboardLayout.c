/*
 * XREFs of NtUserActivateKeyboardLayout @ 0x1C00B7D00
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     _GetProcessWindowStation @ 0x1C00B81E0 (_GetProcessWindowStation.c)
 */

__int64 __fastcall NtUserActivateKeyboardLayout(__int64 a1, unsigned int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rbx
  int v6; // eax
  __int64 ProcessWindowStation; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9

  EnterCrit(0LL, 1LL);
  v5 = 0LL;
  if ( (*(_DWORD *)(gptiCurrent + 480LL) & 0x20000000) != 0 )
  {
    v4 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 760LL);
    v6 = *(_DWORD *)(v4 + 24) & 1;
  }
  else
  {
    v6 = 0;
  }
  if ( v6 )
  {
    UserSetLastError(5LL, v4);
  }
  else
  {
    ProcessWindowStation = GetProcessWindowStation(0LL);
    v5 = xxxActivateKeyboardLayout(ProcessWindowStation, a1, a2, 0LL);
  }
  UserSessionSwitchLeaveCrit(v9, v8, v10, v11);
  return v5;
}
