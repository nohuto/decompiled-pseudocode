/*
 * XREFs of NtSaveKeyEx @ 0x1407EB8B0
 * Callers:
 *     NtSaveKey @ 0x1407EB890 (NtSaveKey.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14004D320 (ExAcquireRundownProtection_0.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     CmCleanupThreadInfo @ 0x1401B307C (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x1401B30BC (CmpInitializeThreadInfo.c)
 *     CmpIsRegistryLockAcquired @ 0x1401B30F8 (CmpIsRegistryLockAcquired.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     CmCheckNoTxContext @ 0x1405B8B6C (CmCheckNoTxContext.c)
 *     CmObReferenceObjectByHandle @ 0x1405CE4CC (CmObReferenceObjectByHandle.c)
 *     CmpAttachToRegistryProcess @ 0x1405D5048 (CmpAttachToRegistryProcess.c)
 *     CmpCallCallBacksEx @ 0x1405E6AE0 (CmpCallCallBacksEx.c)
 *     SeSinglePrivilegeCheck @ 0x140613160 (SeSinglePrivilegeCheck.c)
 *     CmPostCallbackNotificationEx @ 0x140640AC0 (CmPostCallbackNotificationEx.c)
 *     CmDumpKey @ 0x140802398 (CmDumpKey.c)
 *     CmSaveKey @ 0x140803130 (CmSaveKey.c)
 *     IoConvertFileHandleToKernelHandle @ 0x14081D200 (IoConvertFileHandleToKernelHandle.c)
 */

NTSTATUS __stdcall NtSaveKeyEx(HANDLE KeyHandle, HANDLE FileHandle, ULONG Flags)
{
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // r14
  NTSTATUS v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // r8
  int v11; // eax
  HANDLE v12; // rdi
  struct _KTHREAD *v13; // rax
  PVOID v14; // rdi
  HANDLE v15; // r15
  int v16; // eax
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned int v19; // eax
  __int64 v20; // r8
  unsigned int v21; // ebx
  HANDLE Handle; // [rsp+40h] [rbp-79h] BYREF
  PVOID Object; // [rsp+48h] [rbp-71h] BYREF
  _SLIST_ENTRY v25; // [rsp+50h] [rbp-69h] BYREF
  PVOID v26[2]; // [rsp+60h] [rbp-59h] BYREF
  _QWORD v27[6]; // [rsp+70h] [rbp-49h] BYREF
  _BYTE v28[48]; // [rsp+A0h] [rbp-19h] BYREF

  memset(v27, 0, sizeof(v27));
  Object = 0LL;
  Handle = 0LL;
  *((_QWORD *)&v25.Next + 1) = &v25;
  v25.Next = &v25;
  CmpInitializeThreadInfo(v26);
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  --CurrentThread->KernelApcDisable;
  if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
  {
    v8 = CmCheckNoTxContext();
    if ( v8 < 0 )
    {
LABEL_31:
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      goto LABEL_32;
    }
    if ( !SeSinglePrivilegeCheck(SeBackupPrivilege, PreviousMode) )
    {
      v8 = -1073741727;
      goto LABEL_31;
    }
    if ( ((Flags - 1) & 0xFFFFFFFC) != 0 || Flags == 3 )
    {
      v8 = -1073741811;
      goto LABEL_31;
    }
    if ( PreviousMode == 1 )
    {
      LOBYTE(v9) = 1;
      v11 = IoConvertFileHandleToKernelHandle(FileHandle, v9, 2LL, 0LL, &Handle);
      v12 = Handle;
      v8 = v11;
      if ( v11 < 0 )
      {
LABEL_27:
        if ( v12 && v12 != FileHandle )
          ZwClose(v12);
        goto LABEL_31;
      }
    }
    else
    {
      v12 = FileHandle;
      Handle = FileHandle;
    }
    v8 = CmObReferenceObjectByHandle(KeyHandle, 0, v10, PreviousMode, &Object, 0LL);
    if ( v8 >= 0 )
    {
      v13 = KeGetCurrentThread();
      --v13->KernelApcDisable;
      v14 = Object;
      v15 = Handle;
      if ( !CmpCallBackCount
        || CmpIsRegistryLockAcquired()
        || (v27[0] = v14,
            v27[1] = v15,
            LODWORD(v27[2]) = Flags,
            v16 = CmpCallCallBacksEx(0x2Bu, (__int64)v27, 0LL, 1, 0x2Cu, 0LL, &v25),
            v8 = v16,
            v16 >= 0) )
      {
        CmpAttachToRegistryProcess((__int64)v28);
        if ( Flags == 4 )
        {
          LOBYTE(v17) = PreviousMode;
          v19 = CmDumpKey(v14, v15, v17);
        }
        else
        {
          v20 = 5LL;
          LOBYTE(v18) = PreviousMode;
          if ( Flags != 2 )
            v20 = 3LL;
          v19 = CmSaveKey(v14, v15, v20, v18);
        }
        v21 = v19;
        KiUnstackDetachProcess((__int64)v28, 0LL);
        v8 = CmPostCallbackNotificationEx(0x2Cu, (__int64)v14, v21, (__int64)v27, 0LL, &v25);
      }
      else if ( v16 == -1073740541 )
      {
        v8 = 0;
      }
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      v12 = Handle;
    }
    if ( Object )
      ObfDereferenceObject(Object);
    goto LABEL_27;
  }
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  v8 = -1073741431;
LABEL_32:
  CmCleanupThreadInfo(v26);
  return v8;
}
