/*
 * XREFs of ?_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z @ 0x1C0010090
 * Callers:
 *     <none>
 * Callees:
 *     ?SetWndManagementWindow@ShellWindowManagement@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAU2@@Z @ 0x1C001001C (-SetWndManagementWindow@ShellWindowManagement@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAU2@@Z.c)
 *     IsMessageOnlyWindow @ 0x1C0010C20 (IsMessageOnlyWindow.c)
 *     IsShellProcess @ 0x1C001ACA8 (IsShellProcess.c)
 *     _RegisterHotKey @ 0x1C00882EC (_RegisterHotKey.c)
 *     IAMThreadAccessGranted @ 0x1C008AAEC (IAMThreadAccessGranted.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     _UnregisterHotKey @ 0x1C00EF11C (_UnregisterHotKey.c)
 *     IsIAMThread @ 0x1C011B430 (IsIAMThread.c)
 */

__int64 __fastcall _RegisterWindowArrangementCallout(struct tagWND *a1, __int64 a2)
{
  int v2; // ebp
  struct tagWND **v4; // rsi
  struct tagWND *v5; // rcx
  struct tagWND *v6; // r8
  __int64 v8; // rcx
  struct tagWND *v9; // r8
  ULONG_PTR BugCheckParameter2; // [rsp+20h] [rbp-18h]

  v2 = a2;
  v4 = *(struct tagWND ***)(gptiCurrent + 448LL);
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(a1, a2) + 12) & 0x88) != 0
    || !(unsigned int)IAMThreadAccessGranted(gptiCurrent) )
  {
LABEL_12:
    v8 = 5LL;
    goto LABEL_13;
  }
  v5 = v4[41];
  if ( !v2 )
  {
    if ( !v5 )
      return 1LL;
    if ( *(struct tagWND **)(*((_QWORD *)a1 + 3) + 328LL) == a1 && *((_QWORD *)v5 + 2) == gptiCurrent )
    {
      UnregisterHotKey(a1, 61536LL);
      ShellWindowManagement::SetWndManagementWindow((ShellWindowManagement *)v4, 0LL, v9);
      return 1LL;
    }
    goto LABEL_12;
  }
  if ( v5 )
  {
    v8 = 1242LL;
    goto LABEL_13;
  }
  if ( *((_QWORD *)a1 + 2) != gptiCurrent
    || !(unsigned int)IsShellProcess(*(_QWORD *)(gptiCurrent + 416LL))
    || !(unsigned int)IsIAMThread(gptiCurrent) )
  {
    goto LABEL_12;
  }
  if ( (unsigned int)IsMessageOnlyWindow(a1) && (*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) & 0xF) == 2 )
  {
    ShellWindowManagement::SetWndManagementWindow((ShellWindowManagement *)v4, a1, v6);
    LODWORD(BugCheckParameter2) = 115;
    RegisterHotKey(v4[41], BugCheckParameter2);
    return 1LL;
  }
  v8 = 87LL;
LABEL_13:
  UserSetLastError(v8);
  return 0LL;
}
