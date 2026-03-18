/*
 * XREFs of NtRestoreKey @ 0x140824F70
 * Callers:
 *     <none>
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
 *     CmRestoreKey @ 0x14083A914 (CmRestoreKey.c)
 *     IoConvertFileHandleToKernelHandle @ 0x140856070 (IoConvertFileHandleToKernelHandle.c)
 */

NTSTATUS __stdcall NtRestoreKey(HANDLE KeyHandle, HANDLE FileHandle, ULONG RestoreFlags)
{
  char v6; // r12
  KPROCESSOR_MODE PreviousMode; // si
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v9; // ebx
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
  HANDLE Handle; // [rsp+40h] [rbp-69h] BYREF
  PVOID Object; // [rsp+48h] [rbp-61h] BYREF
  _QWORD v24[2]; // [rsp+50h] [rbp-59h] BYREF
  _QWORD v25[6]; // [rsp+60h] [rbp-49h] BYREF
  _BYTE v26[48]; // [rsp+90h] [rbp-19h] BYREF

  memset(v25, 0, sizeof(v25));
  memset(v26, 0, sizeof(v26));
  Object = 0LL;
  Handle = 0LL;
  v6 = 0;
  v24[1] = v24;
  v24[0] = v24;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
  {
    v9 = CmCheckNoTxContext();
    if ( v9 < 0 )
    {
LABEL_27:
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      return v9;
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
    if ( (*(_DWORD *)(*((_QWORD *)Object + 1) + 8LL) & 0x80u) != 0 )
    {
      v9 = -1073741790;
      goto LABEL_22;
    }
    v16 = KeGetCurrentThread();
    --v16->KernelApcDisable;
    v17 = Object;
    v18 = Handle;
    if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
    {
      v25[0] = v17;
      v25[1] = v18;
      LODWORD(v25[2]) = RestoreFlags;
      v19 = CmpCallCallBacksEx(0x29u, (__int64)v25, 0LL, 1, 0x2Au, 0LL, (__int64)v24);
      v9 = v19;
      if ( v19 < 0 )
      {
        if ( v19 == -1073740541 )
          v9 = 0;
LABEL_21:
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        v15 = Object;
        v13 = Handle;
        goto LABEL_22;
      }
      v6 = 1;
    }
    CmpAttachToRegistryProcess((__int64)v26);
    LOBYTE(v20) = PreviousMode;
    v9 = CmRestoreKey(v17, v18, RestoreFlags, v20);
    KiUnstackDetachProcess((struct _KTHREAD *)v26, 0);
    if ( v6 )
      v9 = CmPostCallbackNotificationEx(0x2Au, (__int64)v17, v9, (__int64)v25, 0LL, v24);
    goto LABEL_21;
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return -1073741431;
}
