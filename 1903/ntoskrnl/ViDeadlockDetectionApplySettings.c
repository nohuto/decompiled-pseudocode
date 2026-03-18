/*
 * XREFs of ViDeadlockDetectionApplySettings @ 0x14097C5A8
 * Callers:
 *     VfDeadlockInitialize @ 0x14097B234 (VfDeadlockInitialize.c)
 *     VfSettingsCheckForChanges @ 0x14097D78C (VfSettingsCheckForChanges.c)
 * Callees:
 *     ViLowerIrql @ 0x1403291C4 (ViLowerIrql.c)
 *     ViRaiseIrqlToDpcLevel @ 0x140329220 (ViRaiseIrqlToDpcLevel.c)
 *     ViDeadlockDetectionLock @ 0x14097C5F8 (ViDeadlockDetectionLock.c)
 *     ViDeadlockDetectionUnlock @ 0x14097C630 (ViDeadlockDetectionUnlock.c)
 *     ViDeadlockEmptyDatabase @ 0x14097C660 (ViDeadlockEmptyDatabase.c)
 */

__int64 ViDeadlockDetectionApplySettings()
{
  unsigned __int8 v0; // bl

  if ( (MmVerifierData & 0x20) == 0 )
    return ViDeadlockEmptyDatabase();
  v0 = ViRaiseIrqlToDpcLevel();
  ViDeadlockDetectionLock(1LL);
  ViDeadlockDetectionEnabled = 1;
  ViDeadlockDetectionUnlock(1LL);
  return ViLowerIrql(v0);
}
