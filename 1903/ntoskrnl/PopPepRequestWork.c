/*
 * XREFs of PopPepRequestWork @ 0x1400B2094
 * Callers:
 *     PopPepTryPowerDownDevice @ 0x1400B17D0 (PopPepTryPowerDownDevice.c)
 *     PopPepProcessEvent @ 0x1400B1E84 (PopPepProcessEvent.c)
 *     PopPepSurprisePowerOn @ 0x140168A48 (PopPepSurprisePowerOn.c)
 *     PopPepUpdateConstraints @ 0x14017B5BC (PopPepUpdateConstraints.c)
 *     PopPepCompleteComponentIdleState @ 0x1402F90AC (PopPepCompleteComponentIdleState.c)
 *     PopPepComponentSetLatency @ 0x1402F91B0 (PopPepComponentSetLatency.c)
 *     PopPepComponentSetResidency @ 0x1402F9294 (PopPepComponentSetResidency.c)
 *     PopPepComponentSetWakeHint @ 0x1402F9388 (PopPepComponentSetWakeHint.c)
 *     PopPepIdleTimeoutRoutine @ 0x1402F9840 (PopPepIdleTimeoutRoutine.c)
 * Callees:
 *     PopFxRequestWorker @ 0x1400B2EF0 (PopFxRequestWorker.c)
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
