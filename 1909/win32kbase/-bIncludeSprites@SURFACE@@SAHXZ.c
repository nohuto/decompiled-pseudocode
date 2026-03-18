/*
 * XREFs of ?bIncludeSprites@SURFACE@@SAHXZ @ 0x1C00A2260
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00268A4 (W32GetThreadWin32Thread.c)
 */

bool SURFACE::bIncludeSprites(void)
{
  __int64 ThreadWin32Thread; // rcx
  bool result; // al

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  result = 0;
  if ( ThreadWin32Thread )
    return -__CFSHR__(*(_DWORD *)(ThreadWin32Thread + 328), 2) == 1;
  return result;
}
