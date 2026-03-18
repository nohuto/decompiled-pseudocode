/*
 * XREFs of NtUserEnableSoftwareCursorForScreenCapture @ 0x1C01ED540
 * Callers:
 *     <none>
 * Callees:
 *     ChangeComposableCursor @ 0x1C01976E4 (ChangeComposableCursor.c)
 */

__int64 __fastcall NtUserEnableSoftwareCursorForScreenCapture(int a1)
{
  unsigned int v2; // edi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 CurrentProcess; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9

  v2 = 0;
  EnterCrit(0LL, 1LL);
  CurrentProcess = PsGetCurrentProcess(v4, v3);
  if ( (unsigned int)IsProcessDwm(CurrentProcess) )
  {
    if ( a1 != gbScreenCaptureSoftwareCursorEnabled )
    {
      ChangeComposableCursor(a1);
      gbScreenCaptureSoftwareCursorEnabled = a1;
    }
    v2 = 1;
  }
  UserSessionSwitchLeaveCrit(v7, v6, v8, v9);
  return v2;
}
