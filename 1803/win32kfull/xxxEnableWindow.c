/*
 * XREFs of xxxEnableWindow @ 0x1C005F4F0
 * Callers:
 *     xxxDestroyWindow @ 0x1C00711E0 (xxxDestroyWindow.c)
 *     xxxEnableScrollBar @ 0x1C00D9948 (xxxEnableScrollBar.c)
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     ?xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z @ 0x1C005F53C (-xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z.c)
 *     IsNonImmersiveBand @ 0x1C005F640 (IsNonImmersiveBand.c)
 *     ExemptedFromImmersiveRestrictions @ 0x1C01A1E04 (ExemptedFromImmersiveRestrictions.c)
 */

__int64 __fastcall xxxEnableWindow(struct tagWND *a1, int a2)
{
  __int64 v4; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v7; // rdx

  if ( (unsigned int)IsNonImmersiveBand(a1) )
    return xxxEnableWindowWorker(a1, a2);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v4);
  if ( !(unsigned int)IsDesktopApp(CurrentProcessWin32Process)
    || (unsigned int)ExemptedFromImmersiveRestrictions(gptiCurrent) )
  {
    return xxxEnableWindowWorker(a1, a2);
  }
  UserSetLastError(5LL, v7);
  return (*(unsigned __int8 *)(*((_QWORD *)a1 + 5) + 31LL) >> 3) & 1;
}
