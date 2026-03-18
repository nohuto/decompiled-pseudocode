/*
 * XREFs of W32GetCurrentThreadDpiHostingBehavior @ 0x1C00EBE18
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0061510 (xxxCreateWindowEx.c)
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall W32GetCurrentThreadDpiHostingBehavior(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 ThreadWin32Thread; // rax
  _DWORD *v5; // rcx

  v3 = 0;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3);
  if ( ThreadWin32Thread )
  {
    v5 = *(_DWORD **)(ThreadWin32Thread + 368);
    if ( v5 )
    {
      if ( v5[1] )
      {
        if ( *v5 <= 1u )
          *(_DWORD *)(ThreadWin32Thread + 344) = *v5;
        v5[1] = 0;
      }
      return *(unsigned int *)(ThreadWin32Thread + 344);
    }
  }
  return v3;
}
