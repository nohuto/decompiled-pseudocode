/*
 * XREFs of CmpLateUnloadHiveWorker @ 0x140662850
 * Callers:
 *     <none>
 * Callees:
 *     CmpDecrementAppHiveUnloadCount @ 0x14008BF90 (CmpDecrementAppHiveUnloadCount.c)
 *     CmpTryToRundownHive @ 0x1400993CC (CmpTryToRundownHive.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     CmpAttachToRegistryProcess @ 0x1405F31F0 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x1405F5E50 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1405F5E90 (CmpLockRegistry.c)
 *     CmpDetachFromRegistryProcess @ 0x1405FD4FC (CmpDetachFromRegistryProcess.c)
 *     CmpReleaseShutdownRundown @ 0x1405FDF00 (CmpReleaseShutdownRundown.c)
 *     CmpAcquireShutdownRundown @ 0x1405FE010 (CmpAcquireShutdownRundown.c)
 *     CmpDereferenceKeyControlBlock @ 0x140602480 (CmpDereferenceKeyControlBlock.c)
 *     CmpCompleteUnloadKey @ 0x14063DD64 (CmpCompleteUnloadKey.c)
 *     UNLOCK_HIVE_LOAD @ 0x140661F00 (UNLOCK_HIVE_LOAD.c)
 *     CmpLockRegistryFreezeAware @ 0x140662030 (CmpLockRegistryFreezeAware.c)
 *     LOCK_HIVE_LOAD @ 0x140662090 (LOCK_HIVE_LOAD.c)
 *     CmpDereferenceHive @ 0x1406629A8 (CmpDereferenceHive.c)
 */

_QWORD *__fastcall CmpLateUnloadHiveWorker(__int64 a1)
{
  __int64 v2; // rbx
  char v3; // r9
  char v4; // al
  ULONG_PTR v5; // rbx
  __int64 v6; // rdx
  _BYTE v8[4]; // [rsp+20h] [rbp-48h] BYREF
  int v9; // [rsp+24h] [rbp-44h] BYREF
  _BYTE v10[48]; // [rsp+28h] [rbp-40h] BYREF

  v9 = 2;
  memset(v10, 0, sizeof(v10));
  LOCK_HIVE_LOAD();
  CmpLockRegistryFreezeAware(1);
  *(_DWORD *)(a1 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 4276), 1u) & 0x7F) + 4280) = 22;
  v2 = *(_QWORD *)(a1 + 2928);
  if ( (*(_DWORD *)(a1 + 160) & 0x40) != 0 )
  {
    *(_DWORD *)(a1 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 4276), 1u) & 0x7F) + 4280) = 23;
LABEL_11:
    CmpUnlockRegistry();
    UNLOCK_HIVE_LOAD();
    return (_QWORD *)CmpDereferenceHive(a1);
  }
  v8[0] = CmpAcquireShutdownRundown();
  if ( !v8[0] )
  {
    *(_DWORD *)(a1 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 4276), 1u) & 0x7F) + 4280) = 24;
    goto LABEL_11;
  }
  if ( !*(_BYTE *)(a1 + 2936) )
  {
    *(_DWORD *)(a1 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 4276), 1u) & 0x7F) + 4280) = 25;
    goto LABEL_8;
  }
  if ( (*(_DWORD *)(a1 + 4152) & 0x20) != 0 )
    ++CmpActiveAppHiveUnloadCount;
  v4 = CmpTryToRundownHive((struct _EX_RUNDOWN_REF *)a1, v2, v8, v3);
  *(_QWORD *)(a1 + 2944) = 0LL;
  if ( v4 )
  {
    v5 = *(_QWORD *)(a1 + 2928);
    *(_DWORD *)(a1 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 4276), 1u) & 0x7F) + 4280) = 30;
    CmpAttachToRegistryProcess((__int64)v10);
    CmpCompleteUnloadKey(v5, v6, &v9);
    CmpDetachFromRegistryProcess((struct _KTHREAD *)v10);
    CmpLockRegistry();
    CmpDereferenceKeyControlBlock(v5);
LABEL_8:
    CmpUnlockRegistry();
    UNLOCK_HIVE_LOAD();
    CmpDereferenceHive(a1);
    return CmpReleaseShutdownRundown();
  }
  if ( (*(_DWORD *)(a1 + 4152) & 0x20) != 0 )
    CmpDecrementAppHiveUnloadCount();
  CmpUnlockRegistry();
  UNLOCK_HIVE_LOAD();
  if ( v8[0] )
    CmpReleaseShutdownRundown();
  return (_QWORD *)CmpDereferenceHive(a1);
}
