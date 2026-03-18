/*
 * XREFs of ?bIncludeSprites@SURFACE@@SAHXZ @ 0x1C00C2400
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0023134 (W32GetThreadWin32Thread.c)
 */

bool SURFACE::bIncludeSprites(void)
{
  __int64 ThreadWin32Thread; // rcx
  bool result; // al

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  result = 0;
  if ( ThreadWin32Thread )
    return *(_BYTE *)(ThreadWin32Thread + 329) == 1;
  return result;
}
