/*
 * XREFs of NtUserSetShellWindowEx @ 0x1C000B060
 * Callers:
 *     <none>
 * Callees:
 *     xxxSetShellWindow @ 0x1C000B20C (xxxSetShellWindow.c)
 *     ?ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1C002DD40 (-ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 */

__int64 __fastcall NtUserSetShellWindowEx(__int64 a1, HWND a2)
{
  __int64 v4; // rax
  int v5; // ebx
  __int64 v6; // rdi
  __int64 CurrentProcessWin32Process; // rax
  struct tagWND *v8; // rcx
  __int64 v10; // [rsp+20h] [rbp-30h] BYREF
  __int64 v11; // [rsp+28h] [rbp-28h]
  __int64 v12; // [rsp+30h] [rbp-20h]
  __int64 v13; // [rsp+38h] [rbp-18h] BYREF
  struct tagWND *v14; // [rsp+40h] [rbp-10h]
  __int64 v15; // [rsp+48h] [rbp-8h]
  int v16; // [rsp+80h] [rbp+30h] BYREF
  int v17; // [rsp+84h] [rbp+34h]
  struct tagWND *v18; // [rsp+88h] [rbp+38h] BYREF

  v17 = -1;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0x2000;
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v5 = 0;
  v6 = v4;
  if ( v4 && (((*(_WORD *)(*(_QWORD *)(v4 + 40) + 42LL) & 0x3FFF) - 669) & 0xFFFFFFFD) != 0 )
  {
    v10 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v10;
    v11 = v4;
    HMLockObject(v4);
    if ( (unsigned int)ValidateHWNDND(a2, &v18) )
    {
      if ( PsGetCurrentProcessWin32Process()
        && (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(),
            (unsigned __int8)CheckAccess(CurrentProcessWin32Process + 872, &v16))
        && *(_QWORD *)(*(_QWORD *)(v6 + 16) + 416LL) == PsGetCurrentProcessWin32Process() )
      {
        v13 = *(_QWORD *)(gptiCurrent + 408LL);
        v8 = v18;
        *(_QWORD *)(gptiCurrent + 408LL) = &v13;
        v14 = v8;
        HMLockObject(v8);
        v5 = xxxSetShellWindow((struct tagWND *)v6);
        ThreadUnlock1();
      }
      else
      {
        UserSetLastError(5LL);
      }
    }
    ThreadUnlock1();
  }
  UserSessionSwitchLeaveCrit();
  return v5;
}
