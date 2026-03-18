/*
 * XREFs of AlpcpUnlockPortExclusive @ 0x1408858E4
 * Callers:
 *     AlpcpReceiveMessagePort @ 0x1405E0800 (AlpcpReceiveMessagePort.c)
 *     AlpcpAcceptConnectPort @ 0x14065BBC8 (AlpcpAcceptConnectPort.c)
 * Callees:
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 */

char __fastcall AlpcpUnlockPortExclusive(__int64 a1)
{
  ULONG_PTR v1; // rbx

  v1 = a1 + 352;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 352), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 352));
  return KeAbPostRelease(v1);
}
