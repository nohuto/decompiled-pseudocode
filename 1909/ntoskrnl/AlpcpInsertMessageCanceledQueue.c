/*
 * XREFs of AlpcpInsertMessageCanceledQueue @ 0x1406EB44C
 * Callers:
 *     AlpcpCancelMessage @ 0x14065B22C (AlpcpCancelMessage.c)
 *     AlpcpDisconnectPort @ 0x14065D4DC (AlpcpDisconnectPort.c)
 *     AlpcpReturnMessageOnInsufficientBuffer @ 0x1406D79D0 (AlpcpReturnMessageOnInsufficientBuffer.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 */

char __fastcall AlpcpInsertMessageCanceledQueue(__int64 a1, __int64 a2)
{
  volatile signed __int64 *v2; // rsi

  v2 = (volatile signed __int64 *)(a1 + 136);
  ExAcquirePushLockExclusiveEx(a1 + 136, 0LL);
  *(_QWORD *)(a2 + 88) = *(_QWORD *)(a1 + 392);
  *(_QWORD *)(a2 + 80) = a1 + 384;
  **(_QWORD **)(a1 + 392) = a2 + 80;
  *(_QWORD *)(a1 + 392) = a2 + 80;
  *(_DWORD *)(a2 + 40) |= 0x10000u;
  ++*(_DWORD *)(a1 + 464);
  if ( (_InterlockedExchangeAdd64(v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v2);
  return KeAbPostRelease((ULONG_PTR)v2);
}
