/*
 * XREFs of ?vClearIncludeSprites@SURFACE@@SAXXZ @ 0x1C00928A0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0025170 (W32GetThreadWin32Thread.c)
 */

void SURFACE::vClearIncludeSprites(void)
{
  __int64 ThreadWin32Thread; // rax

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( ThreadWin32Thread )
    *(_BYTE *)(ThreadWin32Thread + 329) = 0;
}
