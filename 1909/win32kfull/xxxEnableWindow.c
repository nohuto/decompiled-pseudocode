/*
 * XREFs of xxxEnableWindow @ 0x1C012FAB0
 * Callers:
 *     xxxEnableScrollBar @ 0x1C002E2A0 (xxxEnableScrollBar.c)
 *     xxxDestroyWindow @ 0x1C0035BC0 (xxxDestroyWindow.c)
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     ?xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z @ 0x1C012FB18 (-xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z.c)
 *     IsNonImmersiveBand @ 0x1C012FC10 (IsNonImmersiveBand.c)
 *     ExemptedFromImmersiveRestrictions @ 0x1C01D6814 (ExemptedFromImmersiveRestrictions.c)
 */

__int64 __fastcall xxxEnableWindow(struct tagWND *a1, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // ebx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9

  v6 = 0;
  if ( (unsigned int)IsNonImmersiveBand(a1)
    || (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5, v4),
        !(unsigned int)IsDesktopApp(CurrentProcessWin32Process))
    || (unsigned int)ExemptedFromImmersiveRestrictions(gptiCurrent) )
  {
    LOBYTE(v6) = a2 != 0;
    return xxxEnableWindowWorker(a1, v6);
  }
  else
  {
    UserSetLastError(5LL, v9, v10, v11);
    return (*(unsigned __int8 *)(*((_QWORD *)a1 + 5) + 31LL) >> 3) & 1;
  }
}
