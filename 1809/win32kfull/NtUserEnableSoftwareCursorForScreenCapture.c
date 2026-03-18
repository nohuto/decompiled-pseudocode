/*
 * XREFs of NtUserEnableSoftwareCursorForScreenCapture @ 0x1C0213930
 * Callers:
 *     <none>
 * Callees:
 *     ChangeComposableCursor @ 0x1C01B871C (ChangeComposableCursor.c)
 */

__int64 __fastcall NtUserEnableSoftwareCursorForScreenCapture(int a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 CurrentProcess; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9

  EnterCrit(0LL, 1LL);
  v2 = 0LL;
  CurrentProcess = PsGetCurrentProcess(v4, v3, v5, v6);
  if ( (unsigned int)IsProcessDwm(CurrentProcess) )
  {
    if ( a1 != gbScreenCaptureSoftwareCursorEnabled )
    {
      ChangeComposableCursor(a1);
      gbScreenCaptureSoftwareCursorEnabled = a1;
    }
    v2 = 1LL;
  }
  UserSessionSwitchLeaveCrit(v9, v8, v10, v11);
  return v2;
}
