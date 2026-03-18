/*
 * XREFs of KeAbPreWakeupThread @ 0x1400C6754
 * Callers:
 *     KeReleaseMutant @ 0x14006B900 (KeReleaseMutant.c)
 *     KeSetEventBoostPriorityEx @ 0x1400C659C (KeSetEventBoostPriorityEx.c)
 * Callees:
 *     KiAbApplyWakeupBoost @ 0x1400C678C (KiAbApplyWakeupBoost.c)
 *     KiAbFindWakeupLockEntry @ 0x1400C6A44 (KiAbFindWakeupLockEntry.c)
 */

__int64 __fastcall KeAbPreWakeupThread(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax

  result = KiAbFindWakeupLockEntry(a2, a1);
  if ( result )
    return KiAbApplyWakeupBoost(a3, result, 1LL);
  return result;
}
