/*
 * XREFs of ?GrepIsPreviousModeKernel@@YAHXZ @ 0x1C00AA28C
 * Callers:
 *     GreCreateRectRgn @ 0x1C0004F50 (GreCreateRectRgn.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x1C00A9FE0 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0025170 (W32GetThreadWin32Thread.c)
 */

__int64 GrepIsPreviousModeKernel(void)
{
  __int64 ThreadWin32Thread; // rcx
  __int64 result; // rax

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  result = 0LL;
  if ( !ThreadWin32Thread || *(_BYTE *)(ThreadWin32Thread + 331) )
    return 1LL;
  return result;
}
