/*
 * XREFs of EtwpFreeCompression @ 0x140132938
 * Callers:
 *     EtwpFreeLoggerContext @ 0x1406C08A0 (EtwpFreeLoggerContext.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400915C0 (ExfTryToWakePushLock.c)
 *     KeRemoveQueueDpcEx @ 0x140132A00 (KeRemoveQueueDpcEx.c)
 *     EtwpFreePlaceholderList @ 0x140132AAC (EtwpFreePlaceholderList.c)
 *     EtwpRelinquishCompressionTarget @ 0x1403157BC (EtwpRelinquishCompressionTarget.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpFreeCompression(__int64 a1)
{
  void *v2; // rcx

  KeRemoveQueueDpcEx(a1 + 1176, 0LL);
  if ( *(_DWORD *)(a1 + 1152) )
  {
    ExAcquirePushLockExclusiveEx(a1 + 1128, 0LL);
    EtwpRelinquishCompressionTarget(a1);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1128), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 1128));
    KeAbPostRelease(a1 + 1128);
    _InterlockedExchange((volatile __int32 *)(a1 + 1152), 0);
  }
  v2 = *(void **)(a1 + 1144);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  return EtwpFreePlaceholderList(a1);
}
