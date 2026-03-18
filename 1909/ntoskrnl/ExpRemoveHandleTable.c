/*
 * XREFs of ExpRemoveHandleTable @ 0x1406863D4
 * Callers:
 *     ObInitProcess @ 0x140680D70 (ObInitProcess.c)
 *     ObKillProcess @ 0x140684898 (ObKillProcess.c)
 *     RtlDestroyAtomTable @ 0x1406C5E60 (RtlDestroyAtomTable.c)
 *     AlpcpAllocateMessageFromExtendedTables @ 0x140885470 (AlpcpAllocateMessageFromExtendedTables.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 */

_QWORD *__fastcall ExpRemoveHandleTable(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  _QWORD *v3; // rdi
  __int64 v4; // rdx
  _QWORD *v5; // rax
  _QWORD *result; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&HandleTableListLock, 0LL);
  v3 = (_QWORD *)(a1 + 24);
  v4 = *v3;
  if ( *(_QWORD **)(*v3 + 8LL) != v3 || (v5 = (_QWORD *)v3[1], (_QWORD *)*v5 != v3) )
    __fastfail(3u);
  *v5 = v4;
  *(_QWORD *)(v4 + 8) = v5;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&HandleTableListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&HandleTableListLock);
  KeAbPostRelease((ULONG_PTR)&HandleTableListLock);
  result = KeLeaveCriticalRegionThread((__int64)CurrentThread);
  v3[1] = v3;
  *v3 = v3;
  return result;
}
