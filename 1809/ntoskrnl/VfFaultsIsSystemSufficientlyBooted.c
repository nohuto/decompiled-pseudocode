/*
 * XREFs of VfFaultsIsSystemSufficientlyBooted @ 0x140938444
 * Callers:
 *     VeAllocatePoolWithTagPriority @ 0x140924F50 (VeAllocatePoolWithTagPriority.c)
 *     VfFaultsInjectResourceFailure @ 0x140938308 (VfFaultsInjectResourceFailure.c)
 *     VerifierMmMapLockedPages @ 0x140944A30 (VerifierMmMapLockedPages.c)
 *     VerifierMmMapLockedPagesSpecifyCache @ 0x140944B10 (VerifierMmMapLockedPagesSpecifyCache.c)
 * Callees:
 *     <none>
 */

__int64 VfFaultsIsSystemSufficientlyBooted()
{
  if ( ViSystemSufficientlyBooted )
    return 1LL;
  if ( (MEMORY[0xFFFFF78000000014] - KeBootTime.QuadPart) / 0x2710uLL <= ViRequiredTimeSinceBootInMsecs )
    ++dword_140985E34;
  else
    ViSystemSufficientlyBooted = 1;
  return (unsigned int)ViSystemSufficientlyBooted;
}
