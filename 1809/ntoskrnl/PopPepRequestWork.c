/*
 * XREFs of PopPepRequestWork @ 0x1400FF7C4
 * Callers:
 *     PopPepTryPowerDownDevice @ 0x1400FEF1C (PopPepTryPowerDownDevice.c)
 *     PopPepProcessEvent @ 0x1400FF5B4 (PopPepProcessEvent.c)
 *     PopPepSurprisePowerOn @ 0x140158724 (PopPepSurprisePowerOn.c)
 *     PopPepUpdateConstraints @ 0x1401721B4 (PopPepUpdateConstraints.c)
 *     PopPepCompleteComponentIdleState @ 0x1402DC8E8 (PopPepCompleteComponentIdleState.c)
 *     PopPepComponentSetLatency @ 0x1402DC9C4 (PopPepComponentSetLatency.c)
 *     PopPepComponentSetResidency @ 0x1402DCAA8 (PopPepComponentSetResidency.c)
 *     PopPepComponentSetWakeHint @ 0x1402DCB9C (PopPepComponentSetWakeHint.c)
 *     PopPepIdleTimeoutRoutine @ 0x1402DD090 (PopPepIdleTimeoutRoutine.c)
 * Callees:
 *     PopFxRequestWorker @ 0x140100440 (PopFxRequestWorker.c)
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
