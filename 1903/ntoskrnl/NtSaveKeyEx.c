/*
 * XREFs of NtSaveKeyEx @ 0x140825240
 * Callers:
 *     NtSaveKey @ 0x140825220 (NtSaveKey.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     ExIsResourceAcquiredSharedLite @ 0x14003F5C0 (ExIsResourceAcquiredSharedLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtection_0 @ 0x140043820 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1400438A0 (ExAcquireRundownProtection_0.c)
 *     KiUnstackDetachProcess @ 0x140090690 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     CmpAttachToRegistryProcess @ 0x1405F31F0 (CmpAttachToRegistryProcess.c)
 *     CmpCallCallBacksEx @ 0x1405F7B50 (CmpCallCallBacksEx.c)
 *     CmObReferenceObjectByHandle @ 0x1405FE0E0 (CmObReferenceObjectByHandle.c)
 *     CmCheckNoTxContext @ 0x14063A848 (CmCheckNoTxContext.c)
 *     SeSinglePrivilegeCheck @ 0x140672D30 (SeSinglePrivilegeCheck.c)
 *     CmPostCallbackNotificationEx @ 0x140687860 (CmPostCallbackNotificationEx.c)
 *     CmDumpKey @ 0x14083A700 (CmDumpKey.c)
 *     CmSaveKey @ 0x14083B43C (CmSaveKey.c)
 *     IoConvertFileHandleToKernelHandle @ 0x140856070 (IoConvertFileHandleToKernelHandle.c)
 */

NTSTATUS __stdcall NtSaveKeyEx(HANDLE KeyHandle, HANDLE FileHandle, ULONG Flags)
{
  KPROCESSOR_MODE PreviousMode; // r14
  struct _KTHREAD *CurrentThread; // rax
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
  HANDLE Handle; // [rsp+40h] [rbp-69h] BYREF
  PVOID Object; // [rsp+48h] [rbp-61h] BYREF
  _QWORD v25[2]; // [rsp+50h] [rbp-59h] BYREF
  _QWORD v26[6]; // [rsp+60h] [rbp-49h] BYREF
  _BYTE v27[48]; // [rsp+90h] [rbp-19h] BYREF

  memset(v26, 0, sizeof(v26));
  memset(v27, 0, sizeof(v27));
  Object = 0LL;
  Handle = 0LL;
  v25[1] = v25;
  v25[0] = v25;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
  {
    v8 = CmCheckNoTxContext();
    if ( v8 < 0 )
    {
LABEL_31:
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      return v8;
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
        || ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock)
        || (v26[0] = v14,
            v26[1] = v15,
            LODWORD(v26[2]) = Flags,
            v16 = CmpCallCallBacksEx(0x2Bu, (__int64)v26, 0LL, 1, 0x2Cu, 0LL, (__int64)v25),
            v8 = v16,
            v16 >= 0) )
      {
        CmpAttachToRegistryProcess((__int64)v27);
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
        KiUnstackDetachProcess((struct _KTHREAD *)v27, 0);
        v8 = CmPostCallbackNotificationEx(0x2Cu, (__int64)v14, v21, (__int64)v26, 0LL, v25);
      }
      else if ( v16 == -1073740541 )
      {
        v8 = 0;
      }
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      v12 = Handle;
    }
    if ( Object )
      ObfDereferenceObject(Object);
    goto LABEL_27;
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return -1073741431;
}
