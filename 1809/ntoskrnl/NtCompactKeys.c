/*
 * XREFs of NtCompactKeys @ 0x1407EA0B0
 * Callers:
 *     <none>
 * Callees:
 *     CmSiFreeMemory @ 0x140013000 (CmSiFreeMemory.c)
 *     CmpAllocateTransientPoolWithQuotaTag @ 0x140013018 (CmpAllocateTransientPoolWithQuotaTag.c)
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14004D320 (ExAcquireRundownProtection_0.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     CmCleanupThreadInfo @ 0x1401B307C (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x1401B30BC (CmpInitializeThreadInfo.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     CmpLockRegistryExclusive @ 0x1405B26C8 (CmpLockRegistryExclusive.c)
 *     CmCheckNoTxContext @ 0x1405B8B6C (CmCheckNoTxContext.c)
 *     CmObReferenceObjectByHandle @ 0x1405CE4CC (CmObReferenceObjectByHandle.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1405D78BC (CmpPerformKeyBodyDeletionCheck.c)
 *     SeSinglePrivilegeCheck @ 0x140613160 (SeSinglePrivilegeCheck.c)
 *     CmpUnlockRegistry @ 0x140646170 (CmpUnlockRegistry.c)
 *     CmpLogUnsupportedOperation @ 0x1407FB244 (CmpLogUnsupportedOperation.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
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
  PVOID *v22; // rbx
  __int64 v23; // r14
  KPROCESSOR_MODE PreviousMode; // [rsp+30h] [rbp-58h]
  int v26; // [rsp+34h] [rbp-54h]
  __int64 v27; // [rsp+38h] [rbp-50h]
  PVOID v28[3]; // [rsp+48h] [rbp-40h] BYREF
  char v29; // [rsp+A0h] [rbp+18h]
  BOOLEAN v30; // [rsp+A8h] [rbp+20h]

  TransientPoolWithQuotaTag = 0LL;
  v5 = 0;
  v26 = 0;
  v29 = 0;
  v6 = 0;
  CmpInitializeThreadInfo(v28);
  v7 = CmCheckNoTxContext();
  if ( v7 < 0 )
    goto LABEL_4;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !SeSinglePrivilegeCheck(SeBackupPrivilege, PreviousMode) )
  {
    v7 = -1073741727;
LABEL_4:
    v9 = 0;
    goto LABEL_39;
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
      goto LABEL_38;
    }
    v26 = ++v14;
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
    v27 = 0LL;
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
        v20 = v27;
      }
      else
      {
        v20 = *(_QWORD *)(v19 + 24);
        v27 = v20;
      }
      if ( v20 != *(_QWORD *)(v19 + 24) || (v21 = *(_WORD *)(v19 + 178), (v21 & 4) != 0) || (v21 & 0x10) != 0 )
      {
        v7 = -1073741811;
        break;
      }
      if ( *(_WORD *)(v19 + 58) )
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
        CmpLogUnsupportedOperation(7LL);
        v9 = 0;
        goto LABEL_38;
      }
    }
    v6 = v30;
  }
  else
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    v7 = -1073741431;
  }
  v9 = v29;
LABEL_38:
  v5 = v26;
LABEL_39:
  if ( v9 )
    CmpUnlockRegistry();
  if ( v6 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  if ( TransientPoolWithQuotaTag )
  {
    if ( v5 )
    {
      v22 = (PVOID *)TransientPoolWithQuotaTag;
      v23 = v5;
      do
      {
        ObfDereferenceObject(*v22++);
        --v23;
      }
      while ( v23 );
    }
    CmSiFreeMemory(TransientPoolWithQuotaTag);
  }
  CmCleanupThreadInfo(v28);
  return v7;
}
