/*
 * XREFs of NtUserGetKeyboardLayoutList @ 0x1C008D7A0
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C0028720 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C00292EC (UserSetLastError.c)
 *     EnterSharedCrit @ 0x1C002A0D0 (EnterSharedCrit.c)
 *     _GetKeyboardLayoutList @ 0x1C008D830 (_GetKeyboardLayoutList.c)
 */

__int64 __fastcall NtUserGetKeyboardLayoutList(unsigned int a1, volatile void *a2)
{
  __int64 v4; // rcx
  __int64 CurrentProcessWow64Process; // rax
  unsigned int KeyboardLayoutList; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx

  EnterSharedCrit(0, 1);
  if ( a2 )
  {
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v4);
    ProbeForWrite(a2, 8LL * a1, CurrentProcessWow64Process != 0 ? 1 : 4);
  }
  else
  {
    a1 = 0;
  }
  KeyboardLayoutList = GetKeyboardLayoutList(a1, a2);
  UserSessionSwitchLeaveCrit(v8, v7);
  return KeyboardLayoutList;
}
