/*
 * XREFs of KeRebaselineInterruptTime @ 0x14015F6FC
 * Callers:
 *     PopInvokeSystemStateHandler @ 0x140598740 (PopInvokeSystemStateHandler.c)
 *     KiCalibrateTimeAdjustment @ 0x14059AE90 (KiCalibrateTimeAdjustment.c)
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
