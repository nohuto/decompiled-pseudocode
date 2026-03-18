/*
 * XREFs of AlpcpUnlockIncomingQueue @ 0x1408858AC
 * Callers:
 *     AlpcpReceiveMessagePort @ 0x1405E0800 (AlpcpReceiveMessagePort.c)
 * Callees:
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 */

char __fastcall AlpcpUnlockIncomingQueue(__int64 a1)
{
  ULONG_PTR v1; // rbx

  v1 = a1 + 136;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 136), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 136));
  return KeAbPostRelease(v1);
}
