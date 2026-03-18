/*
 * XREFs of NtUserGetKeyboardLayoutList @ 0x1C00B7D90
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     _GetKeyboardLayoutList @ 0x1C00B7E20 (_GetKeyboardLayoutList.c)
 *     _GetProcessWindowStation @ 0x1C00B81E0 (_GetProcessWindowStation.c)
 */

__int64 __fastcall NtUserGetKeyboardLayoutList(unsigned int a1, volatile void *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 CurrentProcessWow64Process; // rax
  __int64 ProcessWindowStation; // rax
  unsigned int KeyboardLayoutList; // ebx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9

  EnterSharedCrit(0LL, 1LL);
  if ( a2 )
  {
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v5, v4, v6, v7);
    ProbeForWrite(a2, 8LL * a1, CurrentProcessWow64Process != 0 ? 1 : 4);
  }
  else
  {
    a1 = 0;
  }
  ProcessWindowStation = GetProcessWindowStation(0LL);
  KeyboardLayoutList = GetKeyboardLayoutList(ProcessWindowStation, a1, a2);
  UserSessionSwitchLeaveCrit(v12, v11, v13, v14);
  return KeyboardLayoutList;
}
