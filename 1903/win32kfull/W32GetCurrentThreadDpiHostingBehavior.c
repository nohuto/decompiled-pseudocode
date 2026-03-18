/*
 * XREFs of W32GetCurrentThreadDpiHostingBehavior @ 0x1C0110ED8
 * Callers:
 *     xxxCreateWindowEx @ 0x1C00BFE30 (xxxCreateWindowEx.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 */

__int64 __fastcall W32GetCurrentThreadDpiHostingBehavior(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int64 ThreadWin32Thread; // rax
  _DWORD *v6; // rcx

  v4 = 0;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  if ( ThreadWin32Thread )
  {
    v6 = *(_DWORD **)(ThreadWin32Thread + 368);
    if ( v6 )
    {
      if ( v6[1] )
      {
        if ( *v6 <= 1u )
          *(_DWORD *)(ThreadWin32Thread + 344) = *v6;
        v6[1] = 0;
      }
      return *(unsigned int *)(ThreadWin32Thread + 344);
    }
  }
  return v4;
}
