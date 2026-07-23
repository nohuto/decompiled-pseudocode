/*
 * XREFs of PspJobDelete @ 0x14008FD50
 * Callers:
 *     <none>
 * Callees:
 *     ExDeleteResourceLite @ 0x140020F50 (ExDeleteResourceLite.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1400BF8F0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwDeleteWnfStateName @ 0x1401B9D50 (ZwDeleteWnfStateName.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PsReturnSharedPoolQuota @ 0x1405CBCA8 (PsReturnSharedPoolQuota.c)
 *     SeReleaseSubjectContext @ 0x1405E2240 (SeReleaseSubjectContext.c)
 *     PsInvokeWin32Callout @ 0x1405F5E90 (PsInvokeWin32Callout.c)
 *     ExMapHandleToPointer @ 0x1405F66A0 (ExMapHandleToPointer.c)
 *     PspEmptyPropertySet @ 0x1405F8DBC (PspEmptyPropertySet.c)
 *     ExDestroyHandle @ 0x1405FC318 (ExDestroyHandle.c)
 *     PspUnlockJob @ 0x1405FF0C0 (PspUnlockJob.c)
 *     PspLockJobExclusive @ 0x1405FF100 (PspLockJobExclusive.c)
 *     PspUnlockJobConditionally @ 0x1405FF8B8 (PspUnlockJobConditionally.c)
 *     PspLockJobConditionally @ 0x1406016E4 (PspLockJobConditionally.c)
 *     PspUnlockJobsAndProcessExclusive @ 0x140606AEC (PspUnlockJobsAndProcessExclusive.c)
 *     PspLockJobsAndProcessExclusive @ 0x140606CC4 (PspLockJobsAndProcessExclusive.c)
 *     PspUnlockJobListExclusive @ 0x140607464 (PspUnlockJobListExclusive.c)
 *     PspGetJobLockHierarchyForDeletion @ 0x1406076F0 (PspGetJobLockHierarchyForDeletion.c)
 *     PspJobIoRateControlDisable @ 0x140607764 (PspJobIoRateControlDisable.c)
 *     PspJobDeleteStorageArrays @ 0x1406077C8 (PspJobDeleteStorageArrays.c)
 *     PspRemoveIoAttribution @ 0x14068DFB8 (PspRemoveIoAttribution.c)
 *     IoFreeMiniCompletionPacket @ 0x14068FA10 (IoFreeMiniCompletionPacket.c)
 *     PspRemoveCpuRateControl @ 0x140699B14 (PspRemoveCpuRateControl.c)
 *     PspLockRootJobExclusive @ 0x1406AE0D8 (PspLockRootJobExclusive.c)
 *     PspDeleteSilo @ 0x1408885FC (PspDeleteSilo.c)
 *     PspNetRateControlDispatch @ 0x14088B074 (PspNetRateControlDispatch.c)
 *     PspRemoveRateControl @ 0x14088B2DC (PspRemoveRateControl.c)
 */

LONG_PTR __fastcall PspJobDelete(char *Object)
{
  struct _KTHREAD *CurrentThread; // rdi
  void *v3; // rcx
  __int64 v4; // rcx
  char **v5; // rdx
  PVOID *v6; // rcx
  void *v7; // rcx
  char *v8; // rax
  char *v9; // rdx
  struct _KTHREAD *v10; // rax
  unsigned int v11; // eax
  __int64 v12; // rax
  LONG_PTR result; // rax
  void *v14; // rcx
  void *v15; // rcx
  char **v16; // rcx
  void *v17; // rcx
  __int64 v18; // rsi
  __int64 v19; // [rsp+30h] [rbp-39h] BYREF
  unsigned int v20; // [rsp+38h] [rbp-31h] BYREF
  char *v21; // [rsp+40h] [rbp-29h] BYREF
  int v22; // [rsp+48h] [rbp-21h]
  __int64 v23; // [rsp+50h] [rbp-19h]
  _QWORD v24[5]; // [rsp+58h] [rbp-11h] BYREF
  _BYTE v25[40]; // [rsp+80h] [rbp+17h] BYREF

  CurrentThread = KeGetCurrentThread();
  PspEmptyPropertySet(Object + 1264);
  PspJobDeleteStorageArrays(Object);
  if ( *((_QWORD *)Object + 126) || *((_QWORD *)Object + 162) )
  {
    PspLockRootJobExclusive(Object, CurrentThread, &v19);
    PspLockJobConditionally(Object, &v19);
    if ( *((_QWORD *)Object + 126) )
      PspRemoveCpuRateControl(Object);
    v18 = *((_QWORD *)Object + 162);
    if ( v18 )
    {
      memset(v24, 0, sizeof(v24));
      LODWORD(v24[4]) = 4;
      v24[0] = *(_QWORD *)(v18 + 56);
      PspNetRateControlDispatch(v24);
      PspRemoveRateControl(Object);
    }
    PspUnlockJobConditionally(Object, &v19);
    PspUnlockJob(v19, CurrentThread);
  }
  PspJobIoRateControlDisable(Object);
  if ( *((_QWORD *)Object + 167) )
  {
    PspLockRootJobExclusive(Object, CurrentThread, &v19);
    PspLockJobConditionally(Object, &v19);
    if ( *((_QWORD *)Object + 167) )
      PspRemoveIoAttribution(Object);
    PspUnlockJobConditionally(Object, &v19);
    PspUnlockJob(v19, CurrentThread);
  }
  v20 = *((_DWORD *)Object + 120);
  if ( v20 <= 0xFFFFFFFD )
  {
    v21 = Object;
    v22 = 2;
    v23 = 0LL;
    PspLockJobExclusive(Object, CurrentThread);
    PsInvokeWin32Callout(6LL, &v21, 1LL, &v20);
    PspUnlockJob(Object, CurrentThread);
  }
  v3 = (void *)*((_QWORD *)Object + 57);
  *((_DWORD *)Object + 64) = 0;
  if ( v3 )
  {
    ObfDereferenceObjectWithTag(v3, 0x624A7350u);
    *((_QWORD *)Object + 57) = 0LL;
  }
  v4 = *((_QWORD *)Object + 54);
  if ( v4 )
  {
    SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)(v4 + 8));
    ExFreePoolWithTag(*((PVOID *)Object + 54), 0x614A7350u);
    PsReturnSharedPoolQuota(*((PVOID *)Object + 55));
  }
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PspJobListLock, 0LL);
  v5 = (char **)*((_QWORD *)Object + 3);
  if ( v5[1] != Object + 24 )
    goto LABEL_40;
  v6 = (PVOID *)*((_QWORD *)Object + 4);
  if ( *v6 != Object + 24 )
    goto LABEL_40;
  *v6 = v5;
  v5[1] = (char *)v6;
  PspUnlockJobListExclusive(CurrentThread);
  v7 = (void *)*((_QWORD *)Object + 123);
  if ( v7 )
  {
    ExFreePoolWithTag(v7, 0x624A7350u);
    v17 = (void *)*((_QWORD *)Object + 124);
    *((_QWORD *)Object + 123) = 0LL;
    PsReturnSharedPoolQuota(v17);
  }
  if ( *((_QWORD *)Object + 125) )
    IoFreeMiniCompletionPacket();
  if ( (*((_DWORD *)Object + 326) & 0x800) != 0 )
    ZwDeleteWnfStateName((PCWNF_STATE_NAME)Object + 110);
  PspGetJobLockHierarchyForDeletion(Object, v25);
  PspLockJobsAndProcessExclusive(v25, 0LL, CurrentThread, 0LL);
  v8 = Object + 1040;
  v9 = (char *)*((_QWORD *)Object + 130);
  if ( v9 != Object + 1040 )
  {
    if ( *((char **)v9 + 1) == v8 )
    {
      v16 = (char **)*((_QWORD *)Object + 131);
      if ( *v16 == v8 )
      {
        *v16 = v9;
        *((_QWORD *)v9 + 1) = v16;
        *((_QWORD *)Object + 131) = Object + 1040;
        *(_QWORD *)v8 = v8;
        ObDereferenceObjectDeferDeleteWithTag(*((PVOID *)Object + 134), 0x746C6644u);
        *((_QWORD *)Object + 134) = 0LL;
        goto LABEL_19;
      }
    }
LABEL_40:
    __fastfail(3u);
  }
LABEL_19:
  PspUnlockJobsAndProcessExclusive(v25, 0LL, CurrentThread);
  ExDeleteResourceLite((PERESOURCE)(Object + 56));
  if ( *((_QWORD *)Object + 138) )
  {
    v15 = (void *)*((_QWORD *)Object + 139);
    if ( v15 )
    {
      ExFreePoolWithTag(v15, 0x624A7350u);
      *((_QWORD *)Object + 139) = 0LL;
    }
  }
  if ( (*((_DWORD *)Object + 326) & 0x40000000) != 0 )
    PspDeleteSilo(Object);
  v10 = KeGetCurrentThread();
  --v10->KernelApcDisable;
  v11 = *((_DWORD *)Object + 305);
  if ( v11 )
  {
    v12 = ExMapHandleToPointer(PspUniqueJobIdTable, v11);
    ExDestroyHandle(PspUniqueJobIdTable, *((unsigned int *)Object + 305), v12);
  }
  result = KiLeaveCriticalRegionUnsafe(KeGetCurrentThread());
  v14 = (void *)*((_QWORD *)Object + 193);
  if ( v14 )
    return ObfDereferenceObjectWithTag(v14, 0x624A7350u);
  return result;
}
