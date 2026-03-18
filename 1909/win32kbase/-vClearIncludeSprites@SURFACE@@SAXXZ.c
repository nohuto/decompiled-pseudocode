/*
 * XREFs of ?vClearIncludeSprites@SURFACE@@SAXXZ @ 0x1C00A5110
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00268A4 (W32GetThreadWin32Thread.c)
 */

void SURFACE::vClearIncludeSprites(void)
{
  __int64 ThreadWin32Thread; // rax

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( ThreadWin32Thread )
    *(_DWORD *)(ThreadWin32Thread + 328) &= ~2u;
}
