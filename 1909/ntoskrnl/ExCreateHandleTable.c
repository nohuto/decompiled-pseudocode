/*
 * XREFs of ExCreateHandleTable @ 0x1406B7240
 * Callers:
 *     ObInitProcess @ 0x140680D70 (ObInitProcess.c)
 *     RtlpInitializeHandleTableForAtomTable @ 0x1406B7218 (RtlpInitializeHandleTableForAtomTable.c)
 *     ExDupHandleTable @ 0x1406B73C0 (ExDupHandleTable.c)
 *     AlpcpInitSystem @ 0x140785DDC (AlpcpInitSystem.c)
 *     AlpcpAllocateMessageFromExtendedTables @ 0x140885470 (AlpcpAllocateMessageFromExtendedTables.c)
 *     PspInitPhase0 @ 0x140A04A98 (PspInitPhase0.c)
 *     ObInitSystem @ 0x140A0533C (ObInitSystem.c)
 *     PspInitializeJobStructures @ 0x140A20B90 (PspInitializeJobStructures.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     ExpAllocateHandleTable @ 0x1406B78C0 (ExpAllocateHandleTable.c)
 */

__int64 __fastcall ExCreateHandleTable(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  int v3; // esi
  __int64 result; // rax
  __int64 v5; // rdi
  _QWORD *v6; // rbx
  _QWORD *v7; // rax
  char v8; // si

  CurrentThread = KeGetCurrentThread();
  v3 = a2;
  LOBYTE(a2) = 1;
  result = ExpAllocateHandleTable(a1, a2);
  v5 = result;
  if ( result )
  {
    v6 = (_QWORD *)(result + 24);
    if ( v3 )
    {
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&HandleTableListLock, 0LL);
      v7 = (_QWORD *)qword_1409AEAE8;
      if ( *(__int64 **)qword_1409AEAE8 != &HandleTableListHead )
        __fastfail(3u);
      *v6 = &HandleTableListHead;
      v6[1] = v7;
      *v7 = v6;
      qword_1409AEAE8 = (__int64)v6;
      v8 = _InterlockedExchangeAdd64((volatile signed __int64 *)&HandleTableListLock, 0xFFFFFFFFFFFFFFFFuLL);
      if ( (v8 & 2) != 0 && (v8 & 4) == 0 )
        ExfTryToWakePushLock((volatile signed __int64 *)&HandleTableListLock);
      KeAbPostRelease((ULONG_PTR)&HandleTableListLock);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      return v5;
    }
    else
    {
      *(_QWORD *)(result + 32) = result + 24;
      *v6 = v6;
    }
  }
  return result;
}
