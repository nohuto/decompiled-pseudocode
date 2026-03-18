/*
 * XREFs of W32SetCurrentThreadDpiAwarenessContext @ 0x1C0042B50
 * Callers:
 *     xxxProcessNotifyWinEvent @ 0x1C001F1B4 (xxxProcessNotifyWinEvent.c)
 *     xxxHkCallHook @ 0x1C0042460 (xxxHkCallHook.c)
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C0042C10 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 *     IsThreadCrossSessionAttached @ 0x1C0139D6C (IsThreadCrossSessionAttached.c)
 */

__int64 __fastcall W32SetCurrentThreadDpiAwarenessContext(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  int v3; // esi
  struct _KTHREAD *CurrentThread; // r14
  __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 *ThreadWin32Thread; // rax
  _DWORD *v8; // rax

  v2 = 0;
  v3 = 0;
  if ( (int)a1 >= 0 )
    v3 = a1;
  CurrentThread = KeGetCurrentThread();
  v5 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v5 = *ThreadWin32Thread;
  }
  if ( v5 )
  {
    v8 = *(_DWORD **)(v5 + 360);
    if ( v8 )
    {
      CaptureAndValidateUserModeDpiAwarenessContext(v5);
      v8 = *(_DWORD **)(v5 + 360);
    }
    v2 = *(_DWORD *)(v5 + 340);
    *(_DWORD *)(v5 + 340) = v3;
    if ( v8 )
      *v8 = v3;
  }
  if ( !v2 )
    return *(_DWORD *)(PsGetCurrentProcessWin32Process(v6) + 280) | 0x80000000;
  return v2;
}
