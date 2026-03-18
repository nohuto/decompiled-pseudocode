/*
 * XREFs of AlpcpWalkConnectionList @ 0x1406E54E8
 * Callers:
 *     AlpcpDisconnectPort @ 0x14065D4DC (AlpcpDisconnectPort.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 */

char __fastcall AlpcpWalkConnectionList(__int64 a1)
{
  _QWORD **v1; // rbx
  _QWORD *i; // rdi
  char result; // al

  v1 = (_QWORD **)(*(_QWORD *)(a1 + 16) + 24LL);
  for ( i = *v1; i != v1; i = (_QWORD *)*i )
  {
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(i - 5), 0LL);
    if ( (_InterlockedExchangeAdd64(i - 5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(i - 5);
    result = KeAbPostRelease((ULONG_PTR)(i - 5));
  }
  return result;
}
