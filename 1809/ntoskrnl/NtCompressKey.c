/*
 * XREFs of NtCompressKey @ 0x1407EA3B0
 * Callers:
 *     <none>
 * Callees:
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14004D320 (ExAcquireRundownProtection_0.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     CmCleanupThreadInfo @ 0x1401B307C (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x1401B30BC (CmpInitializeThreadInfo.c)
 *     CmpLockRegistryExclusive @ 0x1405B26C8 (CmpLockRegistryExclusive.c)
 *     CmCheckNoTxContext @ 0x1405B8B6C (CmCheckNoTxContext.c)
 *     CmObReferenceObjectByHandle @ 0x1405CE4CC (CmObReferenceObjectByHandle.c)
 *     CmpAttachToRegistryProcess @ 0x1405D5048 (CmpAttachToRegistryProcess.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1405D78BC (CmpPerformKeyBodyDeletionCheck.c)
 *     SeSinglePrivilegeCheck @ 0x140613160 (SeSinglePrivilegeCheck.c)
 *     CmpUnlockRegistry @ 0x140646170 (CmpUnlockRegistry.c)
 *     CmCompressKey @ 0x1407EE4F0 (CmCompressKey.c)
 *     CmpWaitOnHiveWriteQueue @ 0x1407F6F8C (CmpWaitOnHiveWriteQueue.c)
 */

NTSTATUS __stdcall NtCompressKey(HANDLE Key)
{
  NTSTATUS v2; // ebx
  KPROCESSOR_MODE PreviousMode; // bl
  __int64 v4; // r8
  unsigned int v5; // esi
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rbx
  int v10; // eax
  __int64 v11; // r14
  PVOID Object; // [rsp+30h] [rbp-58h] BYREF
  PVOID v14[2]; // [rsp+38h] [rbp-50h] BYREF
  _BYTE v15[48]; // [rsp+48h] [rbp-40h] BYREF

  Object = 0LL;
  CmpInitializeThreadInfo(v14);
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
          CmpLockRegistryExclusive();
          v7 = Object;
          while ( 1 )
          {
            v2 = CmpPerformKeyBodyDeletionCheck((__int64)v7, 0LL);
            if ( v2 < 0 )
              break;
            v8 = v7[1];
            v9 = *(_QWORD *)(v8 + 24);
            if ( *(_DWORD *)(v8 + 32) != *(_DWORD *)(*(_QWORD *)(v9 + 64) + 36LL) )
            {
              v2 = -1073741811;
              break;
            }
            v10 = *(_DWORD *)(v9 + 4280);
            if ( (v10 & 2) != 0 )
            {
              v11 = 4256LL;
            }
            else
            {
              if ( (v10 & 1) == 0 )
              {
                CmpAttachToRegistryProcess((__int64)v15);
                v2 = CmCompressKey(*(_QWORD *)(v7[1] + 24LL), v5);
                KiUnstackDetachProcess((__int64)v15, 0LL);
                break;
              }
              v11 = 4232LL;
            }
            ExAcquirePushLockExclusiveEx(v9 + 72, 0LL);
            CmpWaitOnHiveWriteQueue(v9, v11 + v9, 0LL);
            CmpLockRegistryExclusive();
          }
          CmpUnlockRegistry();
          ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        }
        else
        {
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
          v2 = -1073741431;
        }
      }
      if ( Object )
        ObfDereferenceObject(Object);
    }
    else
    {
      v2 = -1073741727;
    }
  }
  CmCleanupThreadInfo(v14);
  return v2;
}
