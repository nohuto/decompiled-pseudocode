/*
 * XREFs of ExCreateHandleTable @ 0x1406975C0
 * Callers:
 *     ObInitProcess @ 0x14060A2E4 (ObInitProcess.c)
 *     RtlpInitializeHandleTableForAtomTable @ 0x140697598 (RtlpInitializeHandleTableForAtomTable.c)
 *     ExDupHandleTable @ 0x140697740 (ExDupHandleTable.c)
 *     AlpcpInitSystem @ 0x14075E47C (AlpcpInitSystem.c)
 *     AlpcpAllocateMessageFromExtendedTables @ 0x14084B9F0 (AlpcpAllocateMessageFromExtendedTables.c)
 *     PspInitPhase0 @ 0x1409B20C8 (PspInitPhase0.c)
 *     ObInitSystem @ 0x1409B2964 (ObInitSystem.c)
 *     PspInitializeJobStructures @ 0x1409DE960 (PspInitializeJobStructures.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExpAllocateHandleTable @ 0x140697C24 (ExpAllocateHandleTable.c)
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
      v7 = (_QWORD *)qword_14096FA18;
      if ( *(__int64 **)qword_14096FA18 != &HandleTableListHead )
        __fastfail(3u);
      *v6 = &HandleTableListHead;
      v6[1] = v7;
      *v7 = v6;
      qword_14096FA18 = (__int64)v6;
      v8 = _InterlockedExchangeAdd64((volatile signed __int64 *)&HandleTableListLock, 0xFFFFFFFFFFFFFFFFuLL);
      if ( (v8 & 2) != 0 && (v8 & 4) == 0 )
        ExfTryToWakePushLock((volatile signed __int64 *)&HandleTableListLock);
      KeAbPostRelease((ULONG_PTR)&HandleTableListLock);
      KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
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
