/*
 * XREFs of PopRecordLidState @ 0x1408671E8
 * Callers:
 *     PopLidSwitchChangeCallback @ 0x14086A0B0 (PopLidSwitchChangeCallback.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x140003970 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x140005EC4 (PopReleaseRwLock.c)
 *     PopWriteBsdPowerTransition @ 0x14071D708 (PopWriteBsdPowerTransition.c)
 */

void __fastcall PopRecordLidState(int a1)
{
  if ( !PopErrataReportingIncorrectLidState )
  {
    PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
    BYTE11(PopBsdPowerTransition) = BYTE11(PopBsdPowerTransition) & 0x3F | (a1 != 0 ? 0x40 : 0);
    dword_14041124C = BYTE11(PopBsdPowerTransition) >> 6;
    PopWriteBsdPowerTransition();
    PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
  }
}
