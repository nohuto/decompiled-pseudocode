/*
 * XREFs of AlpcpUnlockPortShared @ 0x140884B8C
 * Callers:
 *     AlpcpReceiveMessagePort @ 0x1405E0800 (AlpcpReceiveMessagePort.c)
 * Callees:
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400C6220 (ExfReleasePushLockShared.c)
 */

char __fastcall AlpcpUnlockPortShared(__int64 a1)
{
  signed __int64 *v1; // rbx

  v1 = (signed __int64 *)(a1 + 352);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 352), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v1);
  return KeAbPostRelease((ULONG_PTR)v1);
}
