/*
 * XREFs of PopPepRequestWork @ 0x1400FF7A4
 * Callers:
 *     PopPepTryPowerDownDevice @ 0x1400FEEFC (PopPepTryPowerDownDevice.c)
 *     PopPepProcessEvent @ 0x1400FF594 (PopPepProcessEvent.c)
 *     PopPepSurprisePowerOn @ 0x140158704 (PopPepSurprisePowerOn.c)
 *     PopPepUpdateConstraints @ 0x140172194 (PopPepUpdateConstraints.c)
 *     PopPepCompleteComponentIdleState @ 0x1402DC7E8 (PopPepCompleteComponentIdleState.c)
 *     PopPepComponentSetLatency @ 0x1402DC8C4 (PopPepComponentSetLatency.c)
 *     PopPepComponentSetResidency @ 0x1402DC9A8 (PopPepComponentSetResidency.c)
 *     PopPepComponentSetWakeHint @ 0x1402DCA9C (PopPepComponentSetWakeHint.c)
 *     PopPepIdleTimeoutRoutine @ 0x1402DCF90 (PopPepIdleTimeoutRoutine.c)
 * Callees:
 *     PopFxRequestWorker @ 0x140100420 (PopFxRequestWorker.c)
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
