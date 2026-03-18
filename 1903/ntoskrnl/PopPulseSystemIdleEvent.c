/*
 * XREFs of PopPulseSystemIdleEvent @ 0x140747BA8
 * Callers:
 *     PopUpdateLastUserInputTime @ 0x14073A824 (PopUpdateLastUserInputTime.c)
 *     PopSystemIdleWorker @ 0x1408B33F0 (PopSystemIdleWorker.c)
 *     PopUpdateSystemIdleContext @ 0x1408B34D8 (PopUpdateSystemIdleContext.c)
 *     PopInitializeSystemIdleDetection @ 0x140A21C3C (PopInitializeSystemIdleDetection.c)
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
    qword_140428220[7 * (int)a1] = MEMORY[0xFFFFF78000000008] / 0x989680uLL;
  return v1;
}
