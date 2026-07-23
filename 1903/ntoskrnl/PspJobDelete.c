/*
 * XREFs of PspJobDelete @ 0x1400E6790
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14003E220 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     ObDereferenceObjectDeferDelete @ 0x140066860 (ObDereferenceObjectDeferDelete.c)
 *     ExDeleteResourceLite @ 0x140079400 (ExDeleteResourceLite.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwDeleteWnfStateName @ 0x1401C1B50 (ZwDeleteWnfStateName.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PsReturnSharedPoolQuota @ 0x1405C866C (PsReturnSharedPoolQuota.c)
 *     PsInvokeWin32Callout @ 0x1405EB440 (PsInvokeWin32Callout.c)
 *     SeReleaseSubjectContext @ 0x1405F3180 (SeReleaseSubjectContext.c)
 *     PspEmptyPropertySet @ 0x14060EEF4 (PspEmptyPropertySet.c)
 *     ExMapHandleToPointer @ 0x14060F3C0 (ExMapHandleToPointer.c)
 *     ExDestroyHandle @ 0x14060F860 (ExDestroyHandle.c)
 *     PspUnlockJob @ 0x140611910 (PspUnlockJob.c)
 *     PspLockJobExclusive @ 0x140611950 (PspLockJobExclusive.c)
 *     PspUnlockJobConditionally @ 0x140612104 (PspUnlockJobConditionally.c)
 *     PspLockJobConditionally @ 0x140613668 (PspLockJobConditionally.c)
 *     PspLockRootJobExclusive @ 0x140615C20 (PspLockRootJobExclusive.c)
 *     PspUnlockJobsAndProcessExclusive @ 0x1406960B4 (PspUnlockJobsAndProcessExclusive.c)
 *     PspLockJobsAndProcessExclusive @ 0x14069628C (PspLockJobsAndProcessExclusive.c)
 *     PspUnlockJobListExclusive @ 0x140696A0C (PspUnlockJobListExclusive.c)
 *     PspLockJobListExclusive @ 0x140696A4C (PspLockJobListExclusive.c)
 *     PspGetJobLockHierarchyForDeletion @ 0x140696FC0 (PspGetJobLockHierarchyForDeletion.c)
 *     PspJobIoRateControlDisable @ 0x140697034 (PspJobIoRateControlDisable.c)
 *     PspJobDeleteStorageArrays @ 0x140697098 (PspJobDeleteStorageArrays.c)
 *     IoFreeMiniCompletionPacket @ 0x140697720 (IoFreeMiniCompletionPacket.c)
 *     PspRemoveIoAttribution @ 0x140697828 (PspRemoveIoAttribution.c)
 *     PspRemoveCpuRateControl @ 0x140698874 (PspRemoveCpuRateControl.c)
 *     PspDeleteSilo @ 0x1408C571C (PspDeleteSilo.c)
 *     PspNetRateControlDispatch @ 0x1408C7D44 (PspNetRateControlDispatch.c)
 *     PspRemoveRateControl @ 0x1408C7FB8 (PspRemoveRateControl.c)
 */

void __fastcall PspJobDelete(char *Object)
{
  struct _KTHREAD *CurrentThread; // rdi
  void *v3; // rcx
  __int64 v4; // rcx
  char **v5; // rdx
  PVOID *v6; // rcx
  void *v7; // rcx
  __int64 v8; // rcx
  char *v9; // rax
  char *v10; // rcx
  struct _KTHREAD *v11; // rax
  unsigned int v12; // eax
  __int64 v13; // rax
  void *v14; // rcx
  char **v15; // rdx
  void *v16; // rcx
  void *v17; // rcx
  __int64 v18; // rax
  __int64 v19; // [rsp+30h] [rbp-39h] BYREF
  unsigned int v20; // [rsp+38h] [rbp-31h] BYREF
  char *v21; // [rsp+40h] [rbp-29h] BYREF
  __int64 v22; // [rsp+48h] [rbp-21h]
  __int64 v23; // [rsp+50h] [rbp-19h]
  _QWORD v24[5]; // [rsp+58h] [rbp-11h] BYREF
  _BYTE v25[40]; // [rsp+80h] [rbp+17h] BYREF

  memset(v25, 0, sizeof(v25));
  memset(v24, 0, sizeof(v24));
  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
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
    LODWORD(v22) = 2;
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
    v17 = (void *)*((_QWORD *)Object + 124);
    *((_QWORD *)Object + 123) = 0LL;
    PsReturnSharedPoolQuota(v17);
  }
  v8 = *((_QWORD *)Object + 125);
  if ( v8 )
    IoFreeMiniCompletionPacket(v8);
  if ( (*((_DWORD *)Object + 326) & 0x800) != 0 )
    ZwDeleteWnfStateName((PCWNF_STATE_NAME)Object + 110);
  PspGetJobLockHierarchyForDeletion(Object, v25);
  PspLockJobsAndProcessExclusive(v25, 0LL, CurrentThread, 0LL);
  v9 = Object + 1040;
  v10 = (char *)*((_QWORD *)Object + 130);
  if ( v10 != Object + 1040 )
  {
    if ( *((char **)v10 + 1) == v9 )
    {
      v15 = (char **)*((_QWORD *)Object + 131);
      if ( *v15 == v9 )
      {
        *v15 = v10;
        *((_QWORD *)v10 + 1) = v15;
        *((_QWORD *)Object + 131) = Object + 1040;
        *(_QWORD *)v9 = v9;
        ObDereferenceObjectDeferDelete(*((PVOID *)Object + 134));
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
    v16 = (void *)*((_QWORD *)Object + 139);
    if ( v16 )
    {
      ExFreePoolWithTag(v16, 0x624A7350u);
      *((_QWORD *)Object + 139) = 0LL;
    }
  }
  if ( (*((_DWORD *)Object + 326) & 0x40000000) != 0 )
    PspDeleteSilo(Object);
  v11 = KeGetCurrentThread();
  --v11->KernelApcDisable;
  v12 = *((_DWORD *)Object + 305);
  if ( v12 )
  {
    v13 = ExMapHandleToPointer(PspUniqueJobIdTable, v12);
    ExDestroyHandle(PspUniqueJobIdTable, *((unsigned int *)Object + 305), v13);
  }
  KeLeaveCriticalRegion();
  v14 = (void *)*((_QWORD *)Object + 193);
  if ( v14 )
    ObfDereferenceObjectWithTag(v14, 0x624A7350u);
}
