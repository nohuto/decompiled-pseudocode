/*
 * XREFs of PopPulseSystemIdleEvent @ 0x140749AA8
 * Callers:
 *     PopUpdateLastUserInputTime @ 0x1407305AC (PopUpdateLastUserInputTime.c)
 *     PopSystemIdleWorker @ 0x1408B2C90 (PopSystemIdleWorker.c)
 *     PopUpdateSystemIdleContext @ 0x1408B2DA4 (PopUpdateSystemIdleContext.c)
 *     PopInitializeSystemIdleDetection @ 0x140A21D1C (PopInitializeSystemIdleDetection.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopPulseSystemIdleEvent(unsigned int a1)
{
  unsigned int v1; // r8d

  v1 = 0;
  if ( a1 > 3 )
    return (unsigned int)-1073741811;
  else
    qword_140428230[7 * (int)a1] = MEMORY[0xFFFFF78000000008] / 0x989680uLL;
  return v1;
}
