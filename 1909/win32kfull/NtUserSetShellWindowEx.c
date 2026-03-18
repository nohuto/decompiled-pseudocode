/*
 * XREFs of NtUserSetShellWindowEx @ 0x1C01193D0
 * Callers:
 *     <none>
 * Callees:
 *     xxxSetShellWindow @ 0x1C000EFF4 (xxxSetShellWindow.c)
 *     ?ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1C0023460 (-ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 */

__int64 __fastcall NtUserSetShellWindowEx(__int64 a1, HWND a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  int v6; // ebx
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 CurrentProcessWin32Process; // rax
  __int64 v16; // rcx
  struct tagWND *v17; // rbx
  struct tagWND *v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v23; // [rsp+20h] [rbp-30h] BYREF
  __int64 v24; // [rsp+28h] [rbp-28h]
  __int64 v25; // [rsp+30h] [rbp-20h]
  __int64 v26; // [rsp+38h] [rbp-18h] BYREF
  struct tagWND *v27; // [rsp+40h] [rbp-10h]
  __int64 v28; // [rsp+48h] [rbp-8h]
  int v29; // [rsp+80h] [rbp+30h] BYREF
  int v30; // [rsp+84h] [rbp+34h]
  struct tagWND *v31; // [rsp+88h] [rbp+38h] BYREF

  v30 = -1;
  v26 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v29 = 0x2000;
  v23 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v6 = 0;
  v7 = v4;
  if ( v4 )
  {
    v5 = *(_QWORD *)(v4 + 40);
    if ( (((*(_WORD *)(v5 + 42) & 0x3FFF) - 669) & 0xFFFFFFFD) != 0 )
    {
      v23 = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = &v23;
      v24 = v4;
      HMLockObject(v4);
      if ( ValidateHWNDND(a2, &v31) )
      {
        if ( PsGetCurrentProcessWin32Process(v9, v8)
          && (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v12, v11),
              (unsigned __int8)CheckAccess(CurrentProcessWin32Process + 872, &v29))
          && *(_QWORD *)(*(_QWORD *)(v7 + 16) + 416LL) == PsGetCurrentProcessWin32Process(v16, v11) )
        {
          v17 = v31;
          v26 = *(_QWORD *)(gptiCurrent + 408LL);
          v18 = v31;
          *(_QWORD *)(gptiCurrent + 408LL) = &v26;
          v27 = v18;
          HMLockObject(v18);
          v6 = xxxSetShellWindow((struct tagWND *)v7, (__int64)v17);
          ThreadUnlock1(v20, v19, v21);
        }
        else
        {
          UserSetLastError(5LL, v11, v13, v14);
        }
      }
      ThreadUnlock1(v9, v8, v10);
    }
  }
  UserSessionSwitchLeaveCrit(v5);
  return v6;
}
