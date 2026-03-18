/*
 * XREFs of xxxEnableWindow @ 0x1C0016740
 * Callers:
 *     xxxEnableScrollBar @ 0x1C0027E30 (xxxEnableScrollBar.c)
 *     xxxDestroyWindow @ 0x1C0094E90 (xxxDestroyWindow.c)
 * Callees:
 *     ?xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z @ 0x1C00167A8 (-xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z.c)
 *     IsNonImmersiveBand @ 0x1C00168A0 (IsNonImmersiveBand.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     ExemptedFromImmersiveRestrictions @ 0x1C01D6994 (ExemptedFromImmersiveRestrictions.c)
 */

__int64 __fastcall xxxEnableWindow(struct tagWND *a1, __int64 a2, __int64 a3)
{
  int v3; // esi
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // ebx
  __int64 CurrentProcessWin32Process; // rax

  v3 = a2;
  v7 = 0;
  if ( (unsigned int)IsNonImmersiveBand(a1, a2, a3)
    || (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6, v5),
        !(unsigned int)IsDesktopApp(CurrentProcessWin32Process))
    || (unsigned int)ExemptedFromImmersiveRestrictions(gptiCurrent) )
  {
    LOBYTE(v7) = v3 != 0;
    return xxxEnableWindowWorker(a1, v7);
  }
  else
  {
    UserSetLastError(5LL);
    return (*(unsigned __int8 *)(*((_QWORD *)a1 + 5) + 31LL) >> 3) & 1;
  }
}
