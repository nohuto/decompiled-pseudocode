/*
 * XREFs of PopPepRequestWork @ 0x1400E217C
 * Callers:
 *     PopPepTryPowerDownDevice @ 0x1400E18B8 (PopPepTryPowerDownDevice.c)
 *     PopPepProcessEvent @ 0x1400E1F6C (PopPepProcessEvent.c)
 *     PopPepSurprisePowerOn @ 0x140168498 (PopPepSurprisePowerOn.c)
 *     PopPepUpdateConstraints @ 0x14017BCAC (PopPepUpdateConstraints.c)
 *     PopPepCompleteComponentIdleState @ 0x1402F8B5C (PopPepCompleteComponentIdleState.c)
 *     PopPepComponentSetLatency @ 0x1402F8C60 (PopPepComponentSetLatency.c)
 *     PopPepComponentSetResidency @ 0x1402F8D44 (PopPepComponentSetResidency.c)
 *     PopPepComponentSetWakeHint @ 0x1402F8E38 (PopPepComponentSetWakeHint.c)
 *     PopPepIdleTimeoutRoutine @ 0x1402F92F0 (PopPepIdleTimeoutRoutine.c)
 * Callees:
 *     PopFxRequestWorker @ 0x1400E3A10 (PopFxRequestWorker.c)
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
