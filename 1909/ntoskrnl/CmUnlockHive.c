/*
 * XREFs of CmUnlockHive @ 0x14062FD8C
 * Callers:
 *     NtNotifyChangeMultipleKeys @ 0x14062F530 (NtNotifyChangeMultipleKeys.c)
 *     CmpCloseKeyObject @ 0x1406B6B30 (CmpCloseKeyObject.c)
 * Callees:
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 */

char __fastcall CmUnlockHive(__int64 a1)
{
  ULONG_PTR v1; // rbx

  v1 = a1 + 1672;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1672), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 1672));
  return KeAbPostRelease(v1);
}
