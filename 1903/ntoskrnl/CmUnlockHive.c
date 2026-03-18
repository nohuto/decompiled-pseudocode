/*
 * XREFs of CmUnlockHive @ 0x14062BF3C
 * Callers:
 *     NtNotifyChangeMultipleKeys @ 0x14062B6E0 (NtNotifyChangeMultipleKeys.c)
 *     CmpCloseKeyObject @ 0x1406BB480 (CmpCloseKeyObject.c)
 * Callees:
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 */

char __fastcall CmUnlockHive(__int64 a1)
{
  ULONG_PTR v1; // rbx

  v1 = a1 + 1672;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1672), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 1672));
  return KeAbPostRelease(v1);
}
