/*
 * XREFs of PopPepRequestWork @ 0x1400FF844
 * Callers:
 *     PopPepTryPowerDownDevice @ 0x1400FEF9C (PopPepTryPowerDownDevice.c)
 *     PopPepProcessEvent @ 0x1400FF634 (PopPepProcessEvent.c)
 *     PopPepSurprisePowerOn @ 0x140158824 (PopPepSurprisePowerOn.c)
 *     PopPepUpdateConstraints @ 0x1401722B4 (PopPepUpdateConstraints.c)
 *     PopPepCompleteComponentIdleState @ 0x1402DCAD8 (PopPepCompleteComponentIdleState.c)
 *     PopPepComponentSetLatency @ 0x1402DCBB4 (PopPepComponentSetLatency.c)
 *     PopPepComponentSetResidency @ 0x1402DCC98 (PopPepComponentSetResidency.c)
 *     PopPepComponentSetWakeHint @ 0x1402DCD8C (PopPepComponentSetWakeHint.c)
 *     PopPepIdleTimeoutRoutine @ 0x1402DD280 (PopPepIdleTimeoutRoutine.c)
 * Callees:
 *     PopFxRequestWorker @ 0x1401004C0 (PopFxRequestWorker.c)
 */

__int64 __fastcall PopPepRequestWork(unsigned int a1, unsigned int a2)
{
  unsigned int v2; // edx
  __int64 v3; // rbx
  __int64 result; // rax

  if ( a2 > a1 )
  {
    v2 = a2 - a1;
    if ( v2 )
    {
      v3 = v2;
      do
      {
        result = PopFxRequestWorker(0LL);
        --v3;
      }
      while ( v3 );
    }
  }
  return result;
}
