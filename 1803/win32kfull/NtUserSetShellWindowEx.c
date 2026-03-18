/*
 * XREFs of NtUserSetShellWindowEx @ 0x1C00F14D0
 * Callers:
 *     <none>
 * Callees:
 *     ?ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1C0014654 (-ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     xxxSetShellWindow @ 0x1C00F1620 (xxxSetShellWindow.c)
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
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  _QWORD v21[3]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v22[4]; // [rsp+38h] [rbp-20h] BYREF
  struct tagWND *v23; // [rsp+70h] [rbp+18h] BYREF

  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v9 = 0;
  v10 = v4;
  if ( v4 )
  {
    v6 = *(_QWORD *)(v4 + 40);
    v5 = (*(_WORD *)(v6 + 42) & 0x3FFFu) - 669;
    if ( (v5 & 0xFFFFFFFD) != 0 )
    {
      v21[0] = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = v21;
      v21[1] = v4;
      _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
      if ( ValidateHWNDND(a2, &v23) )
      {
        if ( PsGetCurrentProcessWin32Process(v12)
          && ((v16 = *(_QWORD *)(PsGetCurrentProcessWin32Process(v15) + 872), !gbEnforceUIPI)
           || (unsigned int)v16 >= 0x2000)
          && *(_QWORD *)(*(_QWORD *)(v10 + 16) + 416LL) == PsGetCurrentProcessWin32Process(v16) )
        {
          v22[0] = *(_QWORD *)(gptiCurrent + 408LL);
          *(_QWORD *)(gptiCurrent + 408LL) = v22;
          v22[1] = v23;
          _InterlockedIncrement((volatile signed __int32 *)v23 + 2);
          v9 = xxxSetShellWindow((struct tagWND *)v10);
          ThreadUnlock1(v18, v17, v19);
        }
        else
        {
          UserSetLastError(5LL, v14);
        }
      }
      ThreadUnlock1(v12, v11, v13);
    }
  }
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return v9;
}
