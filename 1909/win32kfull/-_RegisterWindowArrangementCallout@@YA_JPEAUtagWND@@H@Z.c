/*
 * XREFs of ?_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z @ 0x1C000B7E0
 * Callers:
 *     <none>
 * Callees:
 *     IsMessageOnlyWindow @ 0x1C000B7B0 (IsMessageOnlyWindow.c)
 *     ?SetWndManagementWindow@ShellWindowManagement@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAU2@@Z @ 0x1C000EF1C (-SetWndManagementWindow@ShellWindowManagement@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAU2@@Z.c)
 *     IsIAMThread @ 0x1C000EF88 (IsIAMThread.c)
 *     IsShellProcess @ 0x1C0021208 (IsShellProcess.c)
 *     IAMThreadAccessGranted @ 0x1C0027D6C (IAMThreadAccessGranted.c)
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     _RegisterHotKey @ 0x1C008817C (_RegisterHotKey.c)
 *     _UnregisterHotKey @ 0x1C00CFF1C (_UnregisterHotKey.c)
 */

__int64 __fastcall _RegisterWindowArrangementCallout(struct tagWND *a1, int a2)
{
  struct tagWND **v4; // rsi
  struct tagWND *v5; // rcx
  int v6; // eax
  struct tagWND *v7; // r8
  __int64 v9; // rcx
  struct tagWND *v10; // r8
  ULONG_PTR BugCheckParameter2; // [rsp+20h] [rbp-18h]

  v4 = *(struct tagWND ***)(gptiCurrent + 448LL);
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process() + 12) & 0x88) != 0
    || !(unsigned int)IAMThreadAccessGranted(gptiCurrent) )
  {
LABEL_12:
    v9 = 5LL;
    goto LABEL_13;
  }
  v5 = v4[41];
  if ( !a2 )
  {
    if ( !v5 )
      return 1LL;
    if ( *(struct tagWND **)(*((_QWORD *)a1 + 3) + 328LL) == a1 && *((_QWORD *)v5 + 2) == gptiCurrent )
    {
      UnregisterHotKey(a1, 61536LL);
      ShellWindowManagement::SetWndManagementWindow((ShellWindowManagement *)v4, 0LL, v10);
      return 1LL;
    }
    goto LABEL_12;
  }
  if ( v5 )
  {
    v9 = 1242LL;
    goto LABEL_13;
  }
  if ( *((_QWORD *)a1 + 2) != gptiCurrent
    || !(unsigned int)IsShellProcess(*(_QWORD *)(gptiCurrent + 416LL))
    || !(unsigned int)IsIAMThread(gptiCurrent) )
  {
    goto LABEL_12;
  }
  LOBYTE(v6) = IsMessageOnlyWindow((__int64)a1);
  if ( v6 && (*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) & 0xF) == 2 )
  {
    ShellWindowManagement::SetWndManagementWindow((ShellWindowManagement *)v4, a1, v7);
    LODWORD(BugCheckParameter2) = 115;
    RegisterHotKey(v4[41], BugCheckParameter2);
    return 1LL;
  }
  v9 = 87LL;
LABEL_13:
  UserSetLastError(v9);
  return 0LL;
}
