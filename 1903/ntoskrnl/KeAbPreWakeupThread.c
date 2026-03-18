/*
 * XREFs of KeAbPreWakeupThread @ 0x14009E914
 * Callers:
 *     KeReleaseMutant @ 0x14006B690 (KeReleaseMutant.c)
 *     KeSetEventBoostPriorityEx @ 0x14009E75C (KeSetEventBoostPriorityEx.c)
 * Callees:
 *     KiAbApplyWakeupBoost @ 0x14009E94C (KiAbApplyWakeupBoost.c)
 *     KiAbFindWakeupLockEntry @ 0x14009EC04 (KiAbFindWakeupLockEntry.c)
 */

__int64 __fastcall KeAbPreWakeupThread(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax

  result = KiAbFindWakeupLockEntry(a2, a1);
  if ( result )
    return KiAbApplyWakeupBoost(a3, result, 1LL);
  return result;
}
