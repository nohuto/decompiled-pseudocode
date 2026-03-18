/*
 * XREFs of ViResourceReleaseSanityChecks @ 0x14097F97C
 * Callers:
 *     VerifierExReleaseResourceAndLeaveCriticalRegion @ 0x14097F660 (VerifierExReleaseResourceAndLeaveCriticalRegion.c)
 *     VerifierExReleaseResourceAndLeaveCriticalRegionNoReboot @ 0x14097F6A0 (VerifierExReleaseResourceAndLeaveCriticalRegionNoReboot.c)
 *     VerifierExReleaseResourceAndLeavePriorityRegion @ 0x14097F6D0 (VerifierExReleaseResourceAndLeavePriorityRegion.c)
 *     VerifierExReleaseResourceForThreadLiteNoReboot @ 0x14097F700 (VerifierExReleaseResourceForThreadLiteNoReboot.c)
 *     VerifierExReleaseResourceLiteNoReboot @ 0x14097F740 (VerifierExReleaseResourceLiteNoReboot.c)
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x14096E604 (VerifierBugCheckIfAppropriate.c)
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
