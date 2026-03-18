/*
 * XREFs of NtCompactKeys @ 0x140823B40
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtection_0 @ 0x140043820 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1400438A0 (ExAcquireRundownProtection_0.c)
 *     CmSiFreeMemory @ 0x14008BCE0 (CmSiFreeMemory.c)
 *     CmpAllocateTransientPoolWithQuotaTag @ 0x14008BCF8 (CmpAllocateTransientPoolWithQuotaTag.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     CmpUnlockRegistry @ 0x1405F5E50 (CmpUnlockRegistry.c)
 *     CmObReferenceObjectByHandle @ 0x1405FE0E0 (CmObReferenceObjectByHandle.c)
 *     CmpLockRegistryExclusive @ 0x140631CA8 (CmpLockRegistryExclusive.c)
 *     CmCheckNoTxContext @ 0x14063A848 (CmCheckNoTxContext.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140650290 (CmpPerformKeyBodyDeletionCheck.c)
 *     SeSinglePrivilegeCheck @ 0x140672D30 (SeSinglePrivilegeCheck.c)
 *     CmpLogUnsupportedOperation @ 0x140833384 (CmpLogUnsupportedOperation.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913EC0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtCompactKeys(ULONG Count, PHANDLE KeyArray)
{
  struct _PRIVILEGE_SET *TransientPoolWithQuotaTag; // rsi
  unsigned int v5; // r12d
  BOOLEAN v6; // r13
  NTSTATUS v7; // edi
  __int64 v8; // rcx
  char v9; // al
  SIZE_T v10; // r12
  __int64 v11; // r8
  ULONG v12; // r15d
  void **v13; // r12
  int v14; // r13d
  struct _KTHREAD *CurrentThread; // rax
  ULONG v16; // r15d
  __int64 *v17; // r12
  __int64 v18; // r13
  __int64 v19; // rax
  __int64 v20; // rcx
  __int16 v21; // cx
  __int64 v22; // rdx
  PVOID *v23; // rbx
  __int64 v24; // r14
  KPROCESSOR_MODE PreviousMode; // [rsp+30h] [rbp-48h]
  int v27; // [rsp+34h] [rbp-44h]
  __int64 v28; // [rsp+38h] [rbp-40h]
  char v29; // [rsp+90h] [rbp+18h]
  BOOLEAN v30; // [rsp+98h] [rbp+20h]

  TransientPoolWithQuotaTag = 0LL;
  v5 = 0;
  v27 = 0;
  v29 = 0;
  v6 = 0;
  v7 = CmCheckNoTxContext();
  if ( v7 < 0 )
    goto LABEL_4;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !SeSinglePrivilegeCheck(SeBackupPrivilege, PreviousMode) )
  {
    v7 = -1073741727;
LABEL_4:
    v9 = 0;
    goto LABEL_40;
  }
  if ( !Count )
  {
    v7 = 0;
    goto LABEL_4;
  }
  if ( Count >= 0x1FFFFFFF )
  {
    v7 = -1073741811;
    goto LABEL_4;
  }
  v10 = 8 * Count;
  TransientPoolWithQuotaTag = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithQuotaTag(v8, v10, 0x61624D43u);
  if ( !TransientPoolWithQuotaTag )
  {
    v7 = -1073741670;
    v5 = 0;
    goto LABEL_4;
  }
  if ( PreviousMode == 1 && (_DWORD)v10 )
  {
    if ( ((unsigned __int8)KeyArray & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)&KeyArray[v10 / 8] > 0x7FFFFFFF0000LL || &KeyArray[v10 / 8] < KeyArray )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  memmove(TransientPoolWithQuotaTag, KeyArray, (unsigned int)v10);
  v12 = 0;
  v13 = (void **)TransientPoolWithQuotaTag;
  v14 = 0;
  do
  {
    v7 = CmObReferenceObjectByHandle(
           *v13,
           0x20006u,
           v11,
           PreviousMode,
           (_QWORD *)&TransientPoolWithQuotaTag->PrivilegeCount + v12,
           0LL);
    if ( v7 < 0 )
    {
      v6 = 0;
      v9 = 0;
      goto LABEL_39;
    }
    v27 = ++v14;
    ++v12;
    ++v13;
  }
  while ( v12 < Count );
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v6 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  v30 = v6;
  if ( v6 )
  {
    CmpLockRegistryExclusive();
    v29 = 1;
    v28 = 0LL;
    v16 = 0;
    v17 = (__int64 *)TransientPoolWithQuotaTag;
    while ( 1 )
    {
      v18 = *v17;
      v7 = CmpPerformKeyBodyDeletionCheck(*v17, 0LL);
      if ( v7 < 0 )
        break;
      v19 = *(_QWORD *)(v18 + 8);
      if ( v16 )
      {
        v20 = v28;
      }
      else
      {
        v20 = *(_QWORD *)(v19 + 32);
        v28 = v20;
      }
      if ( v20 != *(_QWORD *)(v19 + 32) || (v21 = *(_WORD *)(v19 + 186), (v21 & 4) != 0) || (v21 & 0x10) != 0 )
      {
        v7 = -1073741811;
        break;
      }
      if ( *(_WORD *)(v19 + 66) )
      {
        v7 = -1073741822;
        break;
      }
      ++v16;
      ++v17;
      if ( v16 >= Count )
      {
        v6 = v30;
        v7 = 0;
        CmpUnlockRegistry();
        CmpLogUnsupportedOperation(7LL, v22);
        v9 = 0;
        goto LABEL_39;
      }
    }
    v6 = v30;
  }
  else
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v7 = -1073741431;
  }
  v9 = v29;
LABEL_39:
  v5 = v27;
LABEL_40:
  if ( v9 )
    CmpUnlockRegistry();
  if ( v6 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  if ( TransientPoolWithQuotaTag )
  {
    if ( v5 )
    {
      v23 = (PVOID *)TransientPoolWithQuotaTag;
      v24 = v5;
      do
      {
        ObfDereferenceObject(*v23++);
        --v24;
      }
      while ( v24 );
    }
    CmSiFreeMemory(TransientPoolWithQuotaTag);
  }
  return v7;
}
