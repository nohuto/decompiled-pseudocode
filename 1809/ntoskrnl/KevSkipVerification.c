/*
 * XREFs of KevSkipVerification @ 0x14032CA60
 * Callers:
 *     ExFreePoolSanityChecks @ 0x14094BD7C (ExFreePoolSanityChecks.c)
 * Callees:
 *     <none>
 */

_BOOL8 KevSkipVerification()
{
  struct _KPRCB *CurrentPrcb; // rdx
  _BOOL8 result; // rax

  result = 0;
  if ( KeGetCurrentIrql() >= 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    if ( CurrentPrcb->DpcRoutineActive )
    {
      if ( (CurrentPrcb->DpcRequestSummary & 8) != 0
        && CurrentPrcb->LastTimerHand + 100 < (unsigned int)(MEMORY[0xFFFFF78000000008] >> 18) )
      {
        return 1;
      }
    }
  }
  return result;
}
