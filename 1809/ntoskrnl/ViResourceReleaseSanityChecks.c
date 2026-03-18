/*
 * XREFs of ViResourceReleaseSanityChecks @ 0x1409400D0
 * Callers:
 *     VerifierExReleaseResourceAndLeaveCriticalRegion @ 0x14093FDC0 (VerifierExReleaseResourceAndLeaveCriticalRegion.c)
 *     VerifierExReleaseResourceAndLeaveCriticalRegionNoReboot @ 0x14093FE00 (VerifierExReleaseResourceAndLeaveCriticalRegionNoReboot.c)
 *     VerifierExReleaseResourceAndLeavePriorityRegion @ 0x14093FE30 (VerifierExReleaseResourceAndLeavePriorityRegion.c)
 *     VerifierExReleaseResourceForThreadLiteNoReboot @ 0x14093FE60 (VerifierExReleaseResourceForThreadLiteNoReboot.c)
 *     VerifierExReleaseResourceLiteNoReboot @ 0x14093FEA0 (VerifierExReleaseResourceLiteNoReboot.c)
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x14092FD84 (VerifierBugCheckIfAppropriate.c)
 */

struct _KTHREAD *__fastcall ViResourceReleaseSanityChecks(__int64 a1)
{
  unsigned __int8 CurrentIrql; // r8
  struct _KTHREAD *result; // rax

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 1 )
  {
    result = KeGetCurrentThread();
    if ( (result->MiscFlags & 0x400) == 0 )
    {
      result = KeGetCurrentThread();
      if ( !result->WaitBlock[3].SpareLong && CurrentIrql != 2 && (MmVerifierData & 0x800) != 0 )
        return (struct _KTHREAD *)VerifierBugCheckIfAppropriate(
                                    0xC4u,
                                    0x38uLL,
                                    CurrentIrql,
                                    KeGetCurrentThread()->CombinedApcDisable,
                                    a1);
    }
  }
  return result;
}
