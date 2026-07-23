/*
 * XREFs of NtRestoreKey @ 0x1407EB5F0
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
 *     CmpIsRegistryLockAcquired @ 0x1401B30F8 (CmpIsRegistryLockAcquired.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     CmCheckNoTxContext @ 0x1405B8B6C (CmCheckNoTxContext.c)
 *     CmObReferenceObjectByHandle @ 0x1405CE4CC (CmObReferenceObjectByHandle.c)
 *     CmpAttachToRegistryProcess @ 0x1405D5048 (CmpAttachToRegistryProcess.c)
 *     CmpCallCallBacksEx @ 0x1405E6AE0 (CmpCallCallBacksEx.c)
 *     SeSinglePrivilegeCheck @ 0x140613160 (SeSinglePrivilegeCheck.c)
 *     CmPostCallbackNotificationEx @ 0x140640AC0 (CmPostCallbackNotificationEx.c)
 *     CmRestoreKey @ 0x1408025AC (CmRestoreKey.c)
 *     IoConvertFileHandleToKernelHandle @ 0x14081D200 (IoConvertFileHandleToKernelHandle.c)
 */

NTSTATUS __stdcall NtRestoreKey(HANDLE KeyHandle, HANDLE FileHandle, ULONG RestoreFlags)
{
  char v6; // r12
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // si
  int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // r8
  int v12; // eax
  HANDLE v13; // rdi
  int v14; // eax
  PVOID v15; // rdx
  struct _KTHREAD *v16; // rax
  PVOID v17; // rdi
  HANDLE v18; // r14
  int v19; // eax
  __int64 v20; // r9
  HANDLE Handle; // [rsp+40h] [rbp-79h] BYREF
  PVOID Object; // [rsp+48h] [rbp-71h] BYREF
  _SLIST_ENTRY v24; // [rsp+50h] [rbp-69h] BYREF
  PVOID v25[2]; // [rsp+60h] [rbp-59h] BYREF
  _QWORD v26[6]; // [rsp+70h] [rbp-49h] BYREF
  _BYTE v27[48]; // [rsp+A0h] [rbp-19h] BYREF

  memset(v26, 0, sizeof(v26));
  Object = 0LL;
  Handle = 0LL;
  *((_QWORD *)&v24.Next + 1) = &v24;
  v6 = 0;
  v24.Next = &v24;
  CmpInitializeThreadInfo(v25);
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  --CurrentThread->KernelApcDisable;
  if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
  {
    v9 = CmCheckNoTxContext();
    if ( v9 < 0 )
    {
LABEL_27:
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      goto LABEL_28;
    }
    if ( !SeSinglePrivilegeCheck(SeRestorePrivilege, PreviousMode) )
    {
      v9 = -1073741727;
      goto LABEL_27;
    }
    if ( PreviousMode == 1 )
    {
      LOBYTE(v10) = 1;
      v12 = IoConvertFileHandleToKernelHandle(FileHandle, v10, 1LL, 0LL, &Handle);
      v13 = Handle;
      v9 = v12;
      if ( v12 < 0 )
      {
LABEL_24:
        if ( v13 && v13 != FileHandle )
          ZwClose(v13);
        goto LABEL_27;
      }
    }
    else
    {
      v13 = FileHandle;
      Handle = FileHandle;
    }
    v14 = CmObReferenceObjectByHandle(KeyHandle, 0, v11, PreviousMode, &Object, 0LL);
    v15 = Object;
    v9 = v14;
    if ( v14 < 0 )
    {
LABEL_22:
      if ( v15 )
        ObfDereferenceObject(v15);
      goto LABEL_24;
    }
    if ( (*(_DWORD *)(*((_QWORD *)Object + 1) + 4LL) & 0x80u) != 0 )
    {
      v9 = -1073741790;
      goto LABEL_22;
    }
    v16 = KeGetCurrentThread();
    --v16->KernelApcDisable;
    v17 = Object;
    v18 = Handle;
    if ( CmpCallBackCount && !CmpIsRegistryLockAcquired() )
    {
      v26[0] = v17;
      v26[1] = v18;
      LODWORD(v26[2]) = RestoreFlags;
      v19 = CmpCallCallBacksEx(0x29u, (__int64)v26, 0LL, 1, 0x2Au, 0LL, &v24);
      v9 = v19;
      if ( v19 < 0 )
      {
        if ( v19 == -1073740541 )
          v9 = 0;
LABEL_21:
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        v15 = Object;
        v13 = Handle;
        goto LABEL_22;
      }
      v6 = 1;
    }
    CmpAttachToRegistryProcess((__int64)v27);
    LOBYTE(v20) = PreviousMode;
    v9 = CmRestoreKey(v17, v18, RestoreFlags, v20);
    KiUnstackDetachProcess((__int64)v27, 0LL);
    if ( v6 )
      v9 = CmPostCallbackNotificationEx(0x2Au, (__int64)v17, v9, (__int64)v26, 0LL, &v24);
    goto LABEL_21;
  }
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  v9 = -1073741431;
LABEL_28:
  CmCleanupThreadInfo(v25);
  return v9;
}
