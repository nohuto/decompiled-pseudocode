/*
 * XREFs of PopRecordLidState @ 0x140865F88
 * Callers:
 *     PopLidSwitchChangeCallback @ 0x140868E50 (PopLidSwitchChangeCallback.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x140003970 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x140005EC4 (PopReleaseRwLock.c)
 *     PopWriteBsdPowerTransition @ 0x14071C468 (PopWriteBsdPowerTransition.c)
 */

void __fastcall PopRecordLidState(int a1)
{
  if ( !PopErrataReportingIncorrectLidState )
  {
    PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
    BYTE11(PopBsdPowerTransition) = BYTE11(PopBsdPowerTransition) & 0x3F | (a1 != 0 ? 0x40 : 0);
    dword_1404101AC = BYTE11(PopBsdPowerTransition) >> 6;
    PopWriteBsdPowerTransition();
    PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
  }
}
