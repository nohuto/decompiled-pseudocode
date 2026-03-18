/*
 * XREFs of W32SetCurrentThreadDpiAwarenessContext @ 0x1C004555C
 * Callers:
 *     ?UpdateUserScreen@@YAJXZ @ 0x1C0044B64 (-UpdateUserScreen@@YAJXZ.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0025170 (W32GetThreadWin32Thread.c)
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C0025218 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 *     UserSetLastError @ 0x1C003B4E8 (UserSetLastError.c)
 */

__int64 __fastcall W32SetCurrentThreadDpiAwarenessContext(int a1)
{
  unsigned int v1; // ebx
  int v2; // esi
  __int64 ThreadWin32Thread; // rax
  __int64 v4; // rcx
  __int64 v5; // rdi
  int *v6; // rax

  v1 = 0;
  v2 = 0;
  if ( a1 >= 0 )
    v2 = a1;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v5 = ThreadWin32Thread;
  if ( ThreadWin32Thread )
  {
    v6 = *(int **)(ThreadWin32Thread + 360);
    if ( v6 )
    {
      CaptureAndValidateUserModeDpiAwarenessContext(v5);
      v6 = *(int **)(v5 + 360);
    }
    v1 = *(_DWORD *)(v5 + 340);
    *(_DWORD *)(v5 + 340) = v2;
    if ( v6 )
      *v6 = v2;
  }
  if ( !v1 )
    return *(_DWORD *)(PsGetCurrentProcessWin32Process(v4) + 280) | 0x80000000;
  return v1;
}
