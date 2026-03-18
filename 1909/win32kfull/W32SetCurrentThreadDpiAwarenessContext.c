/*
 * XREFs of W32SetCurrentThreadDpiAwarenessContext @ 0x1C00446E0
 * Callers:
 *     xxxHkCallHook @ 0x1C0043F00 (xxxHkCallHook.c)
 *     xxxProcessNotifyWinEvent @ 0x1C004E6B8 (xxxProcessNotifyWinEvent.c)
 *     xxxCreateDesktopEx @ 0x1C007E33C (xxxCreateDesktopEx.c)
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C00447D0 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 *     IsThreadCrossSessionAttached @ 0x1C0164774 (IsThreadCrossSessionAttached.c)
 */

__int64 __fastcall W32SetCurrentThreadDpiAwarenessContext(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  int v4; // esi
  struct _KTHREAD *CurrentThread; // r14
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 *ThreadWin32Thread; // rax
  _DWORD *v10; // rax

  v3 = 0;
  v4 = 0;
  if ( (int)a1 >= 0 )
    v4 = a1;
  CurrentThread = KeGetCurrentThread();
  v6 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2, a3) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v6 = *ThreadWin32Thread;
  }
  if ( v6 )
  {
    v10 = *(_DWORD **)(v6 + 360);
    if ( v10 )
    {
      CaptureAndValidateUserModeDpiAwarenessContext(v6);
      v10 = *(_DWORD **)(v6 + 360);
    }
    v3 = *(_DWORD *)(v6 + 340);
    *(_DWORD *)(v6 + 340) = v4;
    if ( v10 )
      *v10 = v4;
  }
  if ( !v3 )
    v3 = *(_DWORD *)(PsGetCurrentProcessWin32Process(v8, v7) + 280) | 0x80000000;
  if ( v6 && (*(_DWORD *)(v6 + 328) & 8) != 0 && (v3 & 0xF) == 2 && (v3 & 0xF0) == 0x20 )
    v3 |= 0x20000000u;
  return v3;
}
