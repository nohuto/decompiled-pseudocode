/*
 * XREFs of TpWaitForJobNotification @ 0x18007E510
 * Callers:
 *     <none>
 * Callees:
 *     TppBarrierAdjust @ 0x180066E0C (TppBarrierAdjust.c)
 *     TppJobpRundownJob @ 0x18007E5B8 (TppJobpRundownJob.c)
 *     TppJobpValidateJob @ 0x18007E6A8 (TppJobpValidateJob.c)
 */

int __fastcall TpWaitForJobNotification(_RTL_SRWLOCK *a1)
{
  int result; // eax

  result = TppJobpValidateJob(a1, 0LL);
  if ( result )
  {
    TppJobpRundownJob(a1);
    return TppBarrierAdjust(a1 + 16, 0, 1);
  }
  return result;
}
