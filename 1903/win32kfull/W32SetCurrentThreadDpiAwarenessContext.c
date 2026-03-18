/*
 * XREFs of W32SetCurrentThreadDpiAwarenessContext @ 0x1C00A3910
 * Callers:
 *     xxxHkCallHook @ 0x1C00A3130 (xxxHkCallHook.c)
 *     xxxProcessNotifyWinEvent @ 0x1C00AD898 (xxxProcessNotifyWinEvent.c)
 *     xxxCreateDesktopEx @ 0x1C00DE64C (xxxCreateDesktopEx.c)
 * Callees:
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C00A3A00 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 *     IsThreadCrossSessionAttached @ 0x1C01637A4 (IsThreadCrossSessionAttached.c)
 */

__int64 __fastcall W32SetCurrentThreadDpiAwarenessContext(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  int v5; // esi
  struct _KTHREAD *CurrentThread; // r14
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 *ThreadWin32Thread; // rax
  _DWORD *v11; // rax

  v4 = 0;
  v5 = 0;
  if ( (int)a1 >= 0 )
    v5 = a1;
  CurrentThread = KeGetCurrentThread();
  v7 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2, a3, a4) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v7 = *ThreadWin32Thread;
  }
  if ( v7 )
  {
    v11 = *(_DWORD **)(v7 + 360);
    if ( v11 )
    {
      CaptureAndValidateUserModeDpiAwarenessContext(v7);
      v11 = *(_DWORD **)(v7 + 360);
    }
    v4 = *(_DWORD *)(v7 + 340);
    *(_DWORD *)(v7 + 340) = v5;
    if ( v11 )
      *v11 = v5;
  }
  if ( !v4 )
    v4 = *(_DWORD *)(PsGetCurrentProcessWin32Process(v9, v8) + 280) | 0x80000000;
  if ( v7 && (*(_DWORD *)(v7 + 328) & 8) != 0 && (v4 & 0xF) == 2 && (v4 & 0xF0) == 0x20 )
    v4 |= 0x20000000u;
  return v4;
}
