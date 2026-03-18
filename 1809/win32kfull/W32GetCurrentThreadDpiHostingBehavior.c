/*
 * XREFs of W32GetCurrentThreadDpiHostingBehavior @ 0x1C0108BB4
 * Callers:
 *     xxxCreateWindowEx @ 0x1C003DE94 (xxxCreateWindowEx.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 */

__int64 __fastcall W32GetCurrentThreadDpiHostingBehavior(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 ThreadWin32Thread; // rax
  _DWORD *v4; // rcx

  v2 = 0;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  if ( ThreadWin32Thread )
  {
    v4 = *(_DWORD **)(ThreadWin32Thread + 368);
    if ( v4 )
    {
      if ( v4[1] )
      {
        if ( *v4 <= 1u )
          *(_DWORD *)(ThreadWin32Thread + 344) = *v4;
        v4[1] = 0;
      }
      return *(unsigned int *)(ThreadWin32Thread + 344);
    }
  }
  return v2;
}
