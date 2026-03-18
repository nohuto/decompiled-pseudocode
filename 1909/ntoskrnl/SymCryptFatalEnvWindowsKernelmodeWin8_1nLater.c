/*
 * XREFs of SymCryptFatalEnvWindowsKernelmodeWin8_1nLater @ 0x1401BAA20
 * Callers:
 *     SymCryptFatal @ 0x1402A5EEC (SymCryptFatal.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x140177740 (xHalTimerWatchdogStop.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 */

void __fastcall __noreturn SymCryptFatalEnvWindowsKernelmodeWin8_1nLater(ULONG_PTR BugCheckParameter1)
{
  unsigned int v1; // ebx

  v1 = BugCheckParameter1;
  xHalTimerWatchdogStop();
  KeBugCheckEx(0x171u, v1, 0LL, 0LL, 0LL);
}
