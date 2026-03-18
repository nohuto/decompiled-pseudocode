/*
 * XREFs of W32SetCurrentThreadDpiAwarenessContext @ 0x1C00A44A8
 * Callers:
 *     ?UpdateUserScreen@@YAJXZ @ 0x1C0050C44 (-UpdateUserScreen@@YAJXZ.c)
 * Callees:
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C0022D64 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 *     W32GetThreadWin32Thread @ 0x1C00268A4 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C0029C8C (UserSetLastError.c)
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
    v1 = *(_DWORD *)(PsGetCurrentProcessWin32Process(v4) + 280) | 0x80000000;
  if ( v5 && (*(_DWORD *)(v5 + 328) & 8) != 0 && (v1 & 0xF) == 2 && (v1 & 0xF0) == 0x20 )
    v1 |= 0x20000000u;
  return v1;
}
