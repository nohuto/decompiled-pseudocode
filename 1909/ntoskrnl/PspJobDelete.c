/*
 * XREFs of PspJobDelete @ 0x1400EB730
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14003DF60 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     ObDereferenceObjectDeferDelete @ 0x140066AD0 (ObDereferenceObjectDeferDelete.c)
 *     ExDeleteResourceLite @ 0x1400797C0 (ExDeleteResourceLite.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwDeleteWnfStateName @ 0x1401C26D0 (ZwDeleteWnfStateName.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PsReturnSharedPoolQuota @ 0x1405C8B6C (PsReturnSharedPoolQuota.c)
 *     PsInvokeWin32Callout @ 0x1405EBC10 (PsInvokeWin32Callout.c)
 *     SeReleaseSubjectContext @ 0x1405F3AE0 (SeReleaseSubjectContext.c)
 *     PspEmptyPropertySet @ 0x140610A04 (PspEmptyPropertySet.c)
 *     ExMapHandleToPointer @ 0x140610ED0 (ExMapHandleToPointer.c)
 *     ExDestroyHandle @ 0x140611370 (ExDestroyHandle.c)
 *     PspUnlockJob @ 0x140613420 (PspUnlockJob.c)
 *     PspLockJobExclusive @ 0x140613460 (PspLockJobExclusive.c)
 *     PspUnlockJobConditionally @ 0x140613C14 (PspUnlockJobConditionally.c)
 *     PspLockJobConditionally @ 0x140615178 (PspLockJobConditionally.c)
 *     PspLockRootJobExclusive @ 0x140617730 (PspLockRootJobExclusive.c)
 *     PspUnlockJobsAndProcessExclusive @ 0x140689624 (PspUnlockJobsAndProcessExclusive.c)
 *     PspLockJobsAndProcessExclusive @ 0x1406897FC (PspLockJobsAndProcessExclusive.c)
 *     PspUnlockJobListExclusive @ 0x140689F7C (PspUnlockJobListExclusive.c)
 *     PspLockJobListExclusive @ 0x140689FBC (PspLockJobListExclusive.c)
 *     PspGetJobLockHierarchyForDeletion @ 0x14068A530 (PspGetJobLockHierarchyForDeletion.c)
 *     PspJobIoRateControlDisable @ 0x14068A5A4 (PspJobIoRateControlDisable.c)
 *     PspJobDeleteStorageArrays @ 0x14068A608 (PspJobDeleteStorageArrays.c)
 *     IoFreeMiniCompletionPacket @ 0x14068AC90 (IoFreeMiniCompletionPacket.c)
 *     PspRemoveIoAttribution @ 0x14068AD98 (PspRemoveIoAttribution.c)
 *     PspRemoveCpuRateControl @ 0x1406BD23C (PspRemoveCpuRateControl.c)
 *     PspDeleteSilo @ 0x1408C4FFC (PspDeleteSilo.c)
 *     PspNetRateControlDispatch @ 0x1408C7624 (PspNetRateControlDispatch.c)
 *     PspRemoveRateControl @ 0x1408C7898 (PspRemoveRateControl.c)
 */

void __fastcall PspJobDelete(char *Object)
{
  struct _KTHREAD *CurrentThread; // rdi
  void *v3; // rcx
  __int64 v4; // rcx
  char **v5; // rdx
  PVOID *v6; // rcx
  void *v7; // rcx
  char *v8; // rax
  char *v9; // rcx
  struct _KTHREAD *v10; // rax
  unsigned int v11; // eax
  __int64 v12; // rax
  void *v13; // rcx
  char **v14; // rdx
  void *v15; // rcx
  void *v16; // rcx
  __int64 v17; // rax
  __int64 v18; // [rsp+30h] [rbp-39h] BYREF
  unsigned int v19; // [rsp+38h] [rbp-31h] BYREF
  char *v20; // [rsp+40h] [rbp-29h] BYREF
  __int64 v21; // [rsp+48h] [rbp-21h]
  __int64 v22; // [rsp+50h] [rbp-19h]
  _QWORD v23[5]; // [rsp+58h] [rbp-11h] BYREF
  _BYTE v24[40]; // [rsp+80h] [rbp+17h] BYREF

  memset(v24, 0, sizeof(v24));
  memset(v23, 0, sizeof(v23));
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  CurrentThread = KeGetCurrentThread();
  PspEmptyPropertySet(Object + 1264);
  PspJobDeleteStorageArrays(Object);
  if ( *((_QWORD *)Object + 126) || *((_QWORD *)Object + 162) )
  {
    PspLockRootJobExclusive(Object, CurrentThread, &v18);
    PspLockJobConditionally(Object, &v18);
    if ( *((_QWORD *)Object + 126) )
      PspRemoveCpuRateControl(Object);
    v17 = *((_QWORD *)Object + 162);
    if ( v17 )
    {
      LODWORD(v23[4]) = 4;
      v23[0] = *(_QWORD *)(v17 + 56);
      PspNetRateControlDispatch(v23);
      PspRemoveRateControl(Object);
    }
    PspUnlockJobConditionally(Object, &v18);
    PspUnlockJob(v18, CurrentThread);
  }
  PspJobIoRateControlDisable(Object);
  if ( *((_QWORD *)Object + 167) )
  {
    PspLockRootJobExclusive(Object, CurrentThread, &v18);
    PspLockJobConditionally(Object, &v18);
    if ( *((_QWORD *)Object + 167) )
      PspRemoveIoAttribution(Object);
    PspUnlockJobConditionally(Object, &v18);
    PspUnlockJob(v18, CurrentThread);
  }
  v19 = *((_DWORD *)Object + 120);
  if ( v19 <= 0xFFFFFFFD )
  {
    v20 = Object;
    LODWORD(v21) = 2;
    v22 = 0LL;
    PspLockJobExclusive(Object, CurrentThread);
    PsInvokeWin32Callout(6LL, &v20, 1LL, &v19);
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
  PspLockJobListExclusive(CurrentThread);
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
    v16 = (void *)*((_QWORD *)Object + 124);
    *((_QWORD *)Object + 123) = 0LL;
    PsReturnSharedPoolQuota(v16);
  }
  if ( *((_QWORD *)Object + 125) )
    IoFreeMiniCompletionPacket();
  if ( (*((_DWORD *)Object + 326) & 0x800) != 0 )
    ZwDeleteWnfStateName((PCWNF_STATE_NAME)Object + 110);
  PspGetJobLockHierarchyForDeletion(Object, v24);
  PspLockJobsAndProcessExclusive(v24, 0LL, CurrentThread, 0LL);
  v8 = Object + 1040;
  v9 = (char *)*((_QWORD *)Object + 130);
  if ( v9 != Object + 1040 )
  {
    if ( *((char **)v9 + 1) == v8 )
    {
      v14 = (char **)*((_QWORD *)Object + 131);
      if ( *v14 == v8 )
      {
        *v14 = v9;
        *((_QWORD *)v9 + 1) = v14;
        *((_QWORD *)Object + 131) = Object + 1040;
        *(_QWORD *)v8 = v8;
        ObDereferenceObjectDeferDelete(*((PVOID *)Object + 134));
        *((_QWORD *)Object + 134) = 0LL;
        goto LABEL_19;
      }
    }
LABEL_40:
    __fastfail(3u);
  }
LABEL_19:
  PspUnlockJobsAndProcessExclusive(v24, 0LL, CurrentThread);
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
  KeLeaveCriticalRegion();
  v13 = (void *)*((_QWORD *)Object + 193);
  if ( v13 )
    ObfDereferenceObjectWithTag(v13, 0x624A7350u);
}
