/*
 * XREFs of GreUnlockSprite @ 0x1C0034950
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C005AB30 (EtwTraceGreLockReleaseSemaphore.c)
 */

__int64 GreUnlockSprite()
{
  __int64 result; // rax

  result = EtwTraceGreLockReleaseSemaphore(L"ghsemSprite", ghsemSprite);
  if ( ghsemSprite )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemSprite);
    return PsLeavePriorityRegion();
  }
  return result;
}
