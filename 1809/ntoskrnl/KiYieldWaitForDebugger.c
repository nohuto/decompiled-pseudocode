/*
 * XREFs of KiYieldWaitForDebugger @ 0x1401B4468
 * Callers:
 *     KeBugCheck2 @ 0x140291380 (KeBugCheck2.c)
 * Callees:
 *     KiCheckForFreezeExecution @ 0x14028D848 (KiCheckForFreezeExecution.c)
 */

void __noreturn KiYieldWaitForDebugger()
{
  while ( 1 )
  {
    KiCheckForFreezeExecution(0LL, 0LL);
    _mm_pause();
  }
}
