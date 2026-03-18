/*
 * XREFs of SymCryptFatalEnvWindowsKernelmodeWin8_1nLater @ 0x1401AF1BC
 * Callers:
 *     SymCryptFatal @ 0x14028F68C (SymCryptFatal.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x1401767E0 (xHalTimerWatchdogStop.c)
 *     KeBugCheckEx @ 0x1401BBBA0 (KeBugCheckEx.c)
 */

void __fastcall __noreturn SymCryptFatalEnvWindowsKernelmodeWin8_1nLater(ULONG_PTR BugCheckParameter1)
{
  unsigned int v1; // ebx

  v1 = BugCheckParameter1;
  xHalTimerWatchdogStop();
  KeBugCheckEx(0x171u, v1, 0LL, 0LL, 0LL);
}
