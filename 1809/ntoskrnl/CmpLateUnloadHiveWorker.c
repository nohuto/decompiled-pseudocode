/*
 * XREFs of CmpLateUnloadHiveWorker @ 0x1405B0C50
 * Callers:
 *     <none>
 * Callees:
 *     CmpTryToRundownHive @ 0x14000FCAC (CmpTryToRundownHive.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14004D320 (ExAcquireRundownProtection_0.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     CmpDecrementAppHiveUnloadCount @ 0x14013775C (CmpDecrementAppHiveUnloadCount.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     CmpCompleteUnloadKey @ 0x1405B061C (CmpCompleteUnloadKey.c)
 *     CmpDeleteHive @ 0x1405B0DEC (CmpDeleteHive.c)
 *     UNLOCK_HIVE_LOAD @ 0x1405B2514 (UNLOCK_HIVE_LOAD.c)
 *     CmpLockRegistryFreezeAware @ 0x1405B2640 (CmpLockRegistryFreezeAware.c)
 *     LOCK_HIVE_LOAD @ 0x1405B2690 (LOCK_HIVE_LOAD.c)
 *     CmpAttachToRegistryProcess @ 0x1405D5048 (CmpAttachToRegistryProcess.c)
 *     CmpDereferenceKeyControlBlock @ 0x1406451C0 (CmpDereferenceKeyControlBlock.c)
 *     CmpLockRegistry @ 0x140646120 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140646170 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmpLateUnloadHiveWorker(PVOID P)
{
  __int64 v2; // rcx
  _DWORD *v3; // rbp
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN v5; // bl
  char v6; // al
  ULONG_PTR v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 result; // rax
  BOOLEAN v11[4]; // [rsp+20h] [rbp-58h] BYREF
  int v12; // [rsp+24h] [rbp-54h] BYREF
  _BYTE v13[48]; // [rsp+28h] [rbp-50h] BYREF

  v12 = 2;
  LOCK_HIVE_LOAD();
  LOBYTE(v2) = 1;
  CmpLockRegistryFreezeAware(v2);
  *((_DWORD *)P + (_InterlockedExchangeAdd((volatile signed __int32 *)P + 1073, 1u) & 0x7F) + 1074) = 22;
  v3 = (_DWORD *)*((_QWORD *)P + 366);
  if ( (*((_DWORD *)P + 40) & 0x40) != 0 )
  {
    *((_DWORD *)P + (_InterlockedExchangeAdd((volatile signed __int32 *)P + 1073, 1u) & 0x7F) + 1074) = 23;
    CmpUnlockRegistry();
    UNLOCK_HIVE_LOAD();
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v5 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    if ( !v5 )
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    v11[0] = v5;
    if ( v5 )
    {
      if ( !*((_BYTE *)P + 2936) )
      {
        *((_DWORD *)P + (_InterlockedExchangeAdd((volatile signed __int32 *)P + 1073, 1u) & 0x7F) + 1074) = 25;
        goto LABEL_10;
      }
      if ( (*((_DWORD *)P + 1038) & 0x20) != 0 )
        ++CmpActiveAppHiveUnloadCount;
      v6 = CmpTryToRundownHive((struct _EX_RUNDOWN_REF *)P, v3, v11);
      *((_QWORD *)P + 368) = 0LL;
      if ( v6 )
      {
        v7 = *((_QWORD *)P + 366);
        *((_DWORD *)P + (_InterlockedExchangeAdd((volatile signed __int32 *)P + 1073, 1u) & 0x7F) + 1074) = 30;
        CmpAttachToRegistryProcess(v13);
        CmpCompleteUnloadKey(v7, v8, &v12);
        KiUnstackDetachProcess((__int64)v13, 0LL);
        CmpLockRegistry(v9);
        CmpDereferenceKeyControlBlock(v7);
LABEL_10:
        CmpUnlockRegistry();
        UNLOCK_HIVE_LOAD();
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 1072, 0xFFFFFFFF) == 1 )
          CmpDeleteHive(P);
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
        return (__int64)KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      }
      if ( (*((_DWORD *)P + 1038) & 0x20) != 0 )
        CmpDecrementAppHiveUnloadCount();
      CmpUnlockRegistry();
      UNLOCK_HIVE_LOAD();
      if ( v11[0] )
      {
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      }
    }
    else
    {
      *((_DWORD *)P + (_InterlockedExchangeAdd((volatile signed __int32 *)P + 1073, 1u) & 0x7F) + 1074) = 24;
      CmpUnlockRegistry();
      UNLOCK_HIVE_LOAD();
    }
  }
  result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)P + 1072);
  if ( !(_DWORD)result )
    return CmpDeleteHive(P);
  return result;
}
