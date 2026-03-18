/*
 * XREFs of NtCompressKey @ 0x140823530
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtection_0 @ 0x140043C20 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140043CA0 (ExAcquireRundownProtection_0.c)
 *     PoIsInitializedStopWatch @ 0x14008CE20 (PoIsInitializedStopWatch.c)
 *     KiUnstackDetachProcess @ 0x1400CDDC0 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     CmpUnlockRegistry @ 0x1405F6EA0 (CmpUnlockRegistry.c)
 *     CmpAttachToRegistryProcess @ 0x1405FEFA0 (CmpAttachToRegistryProcess.c)
 *     CmObReferenceObjectByHandle @ 0x1405FFB10 (CmObReferenceObjectByHandle.c)
 *     CmpLockRegistryExclusive @ 0x140635B28 (CmpLockRegistryExclusive.c)
 *     CmCheckNoTxContext @ 0x14063D8D8 (CmCheckNoTxContext.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140663450 (CmpPerformKeyBodyDeletionCheck.c)
 *     SeSinglePrivilegeCheck @ 0x140678440 (SeSinglePrivilegeCheck.c)
 *     CmCompressKey @ 0x1408274AC (CmCompressKey.c)
 *     CmpWaitOnHiveWriteQueue @ 0x14082E9E4 (CmpWaitOnHiveWriteQueue.c)
 */

NTSTATUS __stdcall NtCompressKey(HANDLE Key)
{
  NTSTATUS v2; // ebx
  KPROCESSOR_MODE PreviousMode; // bl
  __int64 v4; // r8
  unsigned int v5; // ebp
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v7; // rdi
  __int64 v8; // rdx
  _QWORD *v9; // rbx
  _QWORD *v10; // rsi
  PVOID Object; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v13[48]; // [rsp+38h] [rbp-40h] BYREF

  memset(v13, 0, sizeof(v13));
  Object = 0LL;
  v2 = CmCheckNoTxContext();
  if ( v2 >= 0 )
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    if ( SeSinglePrivilegeCheck(SeBackupPrivilege, PreviousMode) )
    {
      v5 = (unsigned __int8)Key & 3;
      v2 = CmObReferenceObjectByHandle(Key, 0x20006u, v4, PreviousMode, &Object, 0LL);
      if ( v2 >= 0 )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
        {
          v7 = Object;
          while ( 1 )
          {
            CmpLockRegistryExclusive();
            v2 = CmpPerformKeyBodyDeletionCheck((__int64)v7, 0LL);
            if ( v2 < 0 )
              break;
            v8 = v7[1];
            v9 = *(_QWORD **)(v8 + 32);
            if ( *(_DWORD *)(v8 + 40) != *(_DWORD *)(v9[8] + 36LL) )
            {
              v2 = -1073741811;
              break;
            }
            v10 = v9 + 531;
            if ( !PoIsInitializedStopWatch(v9 + 531) )
            {
              v10 = v9 + 529;
              if ( !PoIsInitializedStopWatch(v9 + 529) )
              {
                CmpAttachToRegistryProcess((__int64)v13);
                v2 = CmCompressKey(*(_QWORD *)(v7[1] + 32LL), v5);
                KiUnstackDetachProcess((struct _KTHREAD *)v13, 0);
                break;
              }
            }
            ExAcquirePushLockExclusiveEx((ULONG_PTR)(v9 + 9), 0LL);
            CmpWaitOnHiveWriteQueue(v9, v10);
          }
          CmpUnlockRegistry();
          ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        }
        else
        {
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          v2 = -1073741431;
        }
      }
      if ( Object )
        ObfDereferenceObject(Object);
    }
    else
    {
      return -1073741727;
    }
  }
  return v2;
}
