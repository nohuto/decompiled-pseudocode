/*
 * XREFs of AlpcpWalkConnectionList @ 0x1406C47F0
 * Callers:
 *     AlpcpDisconnectPort @ 0x14061A6F0 (AlpcpDisconnectPort.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall AlpcpWalkConnectionList(__int64 a1)
{
  _QWORD **v1; // rbx
  _QWORD *i; // rdi
  __int64 result; // rax

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
