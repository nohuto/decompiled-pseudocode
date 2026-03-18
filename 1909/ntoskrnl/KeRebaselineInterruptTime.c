/*
 * XREFs of KeRebaselineInterruptTime @ 0x14015FD9C
 * Callers:
 *     PopInvokeSystemStateHandler @ 0x14059871C (PopInvokeSystemStateHandler.c)
 *     KiCalibrateTimeAdjustment @ 0x14059AE70 (KiCalibrateTimeAdjustment.c)
 * Callees:
 *     <none>
 */

LARGE_INTEGER KeRebaselineInterruptTime()
{
  LARGE_INTEGER result; // rax

  result = KeQueryPerformanceCounter(0LL);
  MEMORY[0xFFFFF78000000350] = result.QuadPart;
  KiInterruptTimeErrorAccumulator = 0LL;
  return result;
}
