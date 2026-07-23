/*
 * XREFs of AlpcpRemoveMessageFromPendingQueue @ 0x1406171D4
 * Callers:
 *     AlpcpReplyLegacySynchronousRequest @ 0x140616538 (AlpcpReplyLegacySynchronousRequest.c)
 *     AlpcpCancelMessage @ 0x14061690C (AlpcpCancelMessage.c)
 *     AlpcpDispatchReplyToPort @ 0x140616EDC (AlpcpDispatchReplyToPort.c)
 *     AlpcpReturnMessageOnInsufficientBuffer @ 0x1406B752C (AlpcpReturnMessageOnInsufficientBuffer.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall AlpcpRemoveMessageFromPendingQueue(__int64 a1)
{
  __int64 v1; // rbx
  volatile signed __int64 *v3; // rsi
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 16);
  v3 = (volatile signed __int64 *)(v1 + 176);
  ExAcquirePushLockExclusiveEx(v1 + 176, 0LL);
  --*(_DWORD *)(v1 + 456);
  *(_DWORD *)(a1 + 40) &= 0xFFFFFFF8;
  *(_QWORD *)(a1 + 16) = 0LL;
  **(_QWORD **)(a1 + 8) = *(_QWORD *)a1;
  *(_QWORD *)(*(_QWORD *)a1 + 8LL) = *(_QWORD *)(a1 + 8);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v1 + 176), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v3);
  result = KeAbPostRelease((ULONG_PTR)v3);
  --*(_WORD *)(a1 - 30);
  return result;
}
