/*
 * XREFs of ?_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z @ 0x1C0009580
 * Callers:
 *     <none>
 * Callees:
 *     ?SetWndManagementWindow@ShellWindowManagement@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAU2@@Z @ 0x1C0009D6C (-SetWndManagementWindow@ShellWindowManagement@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAU2@@Z.c)
 *     IsMessageOnlyWindow @ 0x1C0009DE0 (IsMessageOnlyWindow.c)
 *     IAMThreadAccessGranted @ 0x1C0071900 (IAMThreadAccessGranted.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     _RegisterHotKey @ 0x1C00A50DC (_RegisterHotKey.c)
 *     IsShellProcess @ 0x1C00B3148 (IsShellProcess.c)
 *     IsIAMThread @ 0x1C00D7DA0 (IsIAMThread.c)
 *     _UnregisterHotKey @ 0x1C00E60EC (_UnregisterHotKey.c)
 */

__int64 __fastcall _RegisterWindowArrangementCallout(struct tagWND *a1, int a2)
{
  struct tagWND **v4; // rsi
  struct tagWND *v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // r8
  struct tagWND *v8; // r8
  __int64 v10; // rcx
  struct tagWND *v11; // r8
  ULONG_PTR BugCheckParameter2; // [rsp+20h] [rbp-18h]

  v4 = *(struct tagWND ***)(gptiCurrent + 456LL);
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(a1) + 12) & 0x88) != 0
    || !(unsigned int)IAMThreadAccessGranted(gptiCurrent) )
  {
LABEL_12:
    v10 = 5LL;
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
      ShellWindowManagement::SetWndManagementWindow((ShellWindowManagement *)v4, 0LL, v11);
      return 1LL;
    }
    goto LABEL_12;
  }
  if ( v5 )
  {
    v10 = 1242LL;
    goto LABEL_13;
  }
  if ( *((_QWORD *)a1 + 2) != gptiCurrent
    || !(unsigned int)IsShellProcess(*(_QWORD *)(gptiCurrent + 424LL))
    || !(unsigned int)IsIAMThread(gptiCurrent, v6, v7) )
  {
    goto LABEL_12;
  }
  if ( (unsigned int)IsMessageOnlyWindow(a1) && (*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) & 0xF) == 2 )
  {
    ShellWindowManagement::SetWndManagementWindow((ShellWindowManagement *)v4, a1, v8);
    LODWORD(BugCheckParameter2) = 115;
    RegisterHotKey(v4[41], BugCheckParameter2);
    return 1LL;
  }
  v10 = 87LL;
LABEL_13:
  UserSetLastError(v10);
  return 0LL;
}
