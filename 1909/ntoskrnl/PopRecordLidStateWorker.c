/*
 * XREFs of PopRecordLidStateWorker @ 0x1405B18B0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x140004B20 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1400D6040 (PopAcquireRwLockExclusive.c)
 *     PopOkayToQueueNextWorkItem @ 0x14013DC1C (PopOkayToQueueNextWorkItem.c)
 *     PopBsdHandleRequest @ 0x1401BF5D4 (PopBsdHandleRequest.c)
 *     PopReleasePolicyLock @ 0x140595868 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1405958A8 (PopAcquirePolicyLock.c)
 */

void PopRecordLidStateWorker()
{
  char v0; // bl

  PopOkayToQueueNextWorkItem((__int64)&PopRecordLidStateWorkItem);
  if ( !PopErrataReportingIncorrectLidState )
  {
    PopAcquirePolicyLock();
    v0 = PopLidOpened != 0 ? 0x40 : 0;
    PopReleasePolicyLock();
    PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
    BYTE11(PopBsdPowerTransition) = v0 | BYTE11(PopBsdPowerTransition) & 0x3F;
    dword_140438A2C = BYTE11(PopBsdPowerTransition) >> 6;
    PopBsdHandleRequest(1);
    PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
  }
}
