/*
 * XREFs of xxxEnableWindow @ 0x1C00CEC80
 * Callers:
 *     xxxDestroyWindow @ 0x1C001BB70 (xxxDestroyWindow.c)
 *     xxxEnableScrollBar @ 0x1C0078B70 (xxxEnableScrollBar.c)
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     ?xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z @ 0x1C00CECE8 (-xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z.c)
 *     IsNonImmersiveBand @ 0x1C00CEDF0 (IsNonImmersiveBand.c)
 *     ExemptedFromImmersiveRestrictions @ 0x1C01C36B4 (ExemptedFromImmersiveRestrictions.c)
 */

__int64 __fastcall xxxEnableWindow(struct tagWND *a1, int a2)
{
  __int64 v4; // rcx
  int v5; // ebx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9

  v5 = 0;
  if ( (unsigned int)IsNonImmersiveBand(a1)
    || (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v4),
        !(unsigned int)IsDesktopApp(CurrentProcessWin32Process))
    || (unsigned int)ExemptedFromImmersiveRestrictions(gptiCurrent) )
  {
    LOBYTE(v5) = a2 != 0;
    return xxxEnableWindowWorker(a1, v5);
  }
  else
  {
    UserSetLastError(5LL, v8, v9, v10);
    return (*(unsigned __int8 *)(*((_QWORD *)a1 + 5) + 31LL) >> 3) & 1;
  }
}
