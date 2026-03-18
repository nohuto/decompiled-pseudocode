/*
 * XREFs of NtUserSetShellWindowEx @ 0x1C00091A0
 * Callers:
 *     <none>
 * Callees:
 *     xxxSetShellWindow @ 0x1C0009324 (xxxSetShellWindow.c)
 *     ?ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1C006E0A0 (-ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 */

__int64 __fastcall NtUserSetShellWindowEx(__int64 a1, HWND a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // ebx
  __int64 v10; // rdi
  __int64 v11; // rcx
  _QWORD v13[3]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v14[4]; // [rsp+38h] [rbp-20h] BYREF
  struct tagWND *v15; // [rsp+70h] [rbp+18h] BYREF

  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v9 = 0;
  v10 = v4;
  if ( v4 )
  {
    v6 = *(_QWORD *)(v4 + 40);
    v5 = (*(_WORD *)(v6 + 42) & 0x2FFFu) - 669;
    if ( (v5 & 0xFFFFFFFD) != 0 )
    {
      v13[0] = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = v13;
      v13[1] = v4;
      _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
      if ( (unsigned int)ValidateHWNDND(a2, &v15) )
      {
        if ( ((__int64 (*)(void))PsGetCurrentProcessWin32Process)()
          && ((v11 = *(_QWORD *)(((__int64 (*)(void))PsGetCurrentProcessWin32Process)() + 880), !gbEnforceUIPI)
           || (unsigned int)v11 >= 0x2000)
          && *(_QWORD *)(*(_QWORD *)(v10 + 16) + 424LL) == PsGetCurrentProcessWin32Process(v11) )
        {
          v14[0] = *(_QWORD *)(gptiCurrent + 416LL);
          *(_QWORD *)(gptiCurrent + 416LL) = v14;
          v14[1] = v15;
          _InterlockedIncrement((volatile signed __int32 *)v15 + 2);
          v9 = xxxSetShellWindow((struct tagWND *)v10);
          ThreadUnlock1();
        }
        else
        {
          UserSetLastError(5LL);
        }
      }
      ThreadUnlock1();
    }
  }
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return v9;
}
