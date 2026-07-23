/*
 * XREFs of NtSaveMergedKeys @ 0x1407EBB60
 * Callers:
 *     <none>
 * Callees:
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14004D320 (ExAcquireRundownProtection_0.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     CmCleanupThreadInfo @ 0x1401B307C (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x1401B30BC (CmpInitializeThreadInfo.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwSaveMergedKeys @ 0x1401BB290 (ZwSaveMergedKeys.c)
 *     CmConvertHandleToKernelHandle @ 0x1405B87C0 (CmConvertHandleToKernelHandle.c)
 *     CmCheckNoTxContext @ 0x1405B8B6C (CmCheckNoTxContext.c)
 *     CmObReferenceObjectByHandle @ 0x1405CE4CC (CmObReferenceObjectByHandle.c)
 *     CmpAttachToRegistryProcess @ 0x1405D5048 (CmpAttachToRegistryProcess.c)
 *     SeSinglePrivilegeCheck @ 0x140613160 (SeSinglePrivilegeCheck.c)
 *     CmSaveMergedKeys @ 0x1408034FC (CmSaveMergedKeys.c)
 *     IoConvertFileHandleToKernelHandle @ 0x14081D200 (IoConvertFileHandleToKernelHandle.c)
 */

NTSTATUS __stdcall NtSaveMergedKeys(HANDLE HighPrecedenceKeyHandle, HANDLE LowPrecedenceKeyHandle, HANDLE FileHandle)
{
  struct _KTHREAD *CurrentThread; // rcx
  NTSTATUS v7; // ebx
  KPROCESSOR_MODE PreviousMode; // di
  void *v9; // rdx
  __int64 v10; // r8
  void *v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // r8
  PVOID Object; // [rsp+30h] [rbp-39h] BYREF
  PVOID v16; // [rsp+38h] [rbp-31h] BYREF
  HANDLE FileHandlea; // [rsp+40h] [rbp-29h] BYREF
  HANDLE LowPrecedenceKeyHandlea; // [rsp+48h] [rbp-21h] BYREF
  HANDLE HighPrecedenceKeyHandlea; // [rsp+50h] [rbp-19h] BYREF
  PVOID v20[2]; // [rsp+58h] [rbp-11h] BYREF
  _BYTE v21[48]; // [rsp+68h] [rbp-1h] BYREF

  v16 = 0LL;
  Object = 0LL;
  FileHandlea = 0LL;
  LowPrecedenceKeyHandlea = 0LL;
  HighPrecedenceKeyHandlea = 0LL;
  CmpInitializeThreadInfo(v20);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
  {
    v7 = CmCheckNoTxContext();
    if ( v7 >= 0 )
    {
      PreviousMode = KeGetCurrentThread()->PreviousMode;
      if ( SeSinglePrivilegeCheck(SeBackupPrivilege, PreviousMode) )
      {
        if ( PreviousMode )
        {
          v7 = CmConvertHandleToKernelHandle(HighPrecedenceKeyHandle, v9, PreviousMode, 0, &HighPrecedenceKeyHandlea);
          if ( v7 >= 0 )
          {
            v7 = CmConvertHandleToKernelHandle(LowPrecedenceKeyHandle, v11, PreviousMode, 0, &LowPrecedenceKeyHandlea);
            if ( v7 >= 0 )
            {
              LOBYTE(v12) = PreviousMode;
              v7 = IoConvertFileHandleToKernelHandle(FileHandle, v12, 2LL, 0LL, &FileHandlea);
              if ( v7 >= 0 )
                v7 = ZwSaveMergedKeys(HighPrecedenceKeyHandlea, LowPrecedenceKeyHandlea, FileHandlea);
            }
          }
        }
        else
        {
          v7 = CmObReferenceObjectByHandle(HighPrecedenceKeyHandle, 0, v10, 0, &v16, 0LL);
          if ( v7 >= 0 )
          {
            v7 = CmObReferenceObjectByHandle(LowPrecedenceKeyHandle, 0, v13, 0, &Object, 0LL);
            if ( v7 >= 0 )
            {
              CmpAttachToRegistryProcess((__int64)v21);
              v7 = CmSaveMergedKeys(v16, Object, FileHandle, 0LL);
              KiUnstackDetachProcess((__int64)v21, 0LL);
            }
          }
        }
      }
      else
      {
        v7 = -1073741727;
      }
    }
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    if ( Object )
      ObfDereferenceObject(Object);
    if ( v16 )
      ObfDereferenceObject(v16);
    if ( FileHandlea )
      ZwClose(FileHandlea);
  }
  else
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    v7 = -1073741431;
  }
  if ( LowPrecedenceKeyHandlea )
    ZwClose(LowPrecedenceKeyHandlea);
  if ( HighPrecedenceKeyHandlea )
    ZwClose(HighPrecedenceKeyHandlea);
  CmCleanupThreadInfo(v20);
  return v7;
}
