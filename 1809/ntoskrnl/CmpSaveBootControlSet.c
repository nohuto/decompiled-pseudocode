/*
 * XREFs of CmpSaveBootControlSet @ 0x1407E9AD0
 * Callers:
 *     CmpAcceptBoot @ 0x14071F028 (CmpAcceptBoot.c)
 * Callees:
 *     _TlgKeywordOn @ 0x140012A04 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x140012EE4 (_TlgWrite.c)
 *     CmSiFreeMemory @ 0x140013000 (CmSiFreeMemory.c)
 *     CmpAllocateTransientPoolWithTag @ 0x140013040 (CmpAllocateTransientPoolWithTag.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14004D320 (ExAcquireRundownProtection_0.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     RtlUnicodeStringPrintf @ 0x14015D81C (RtlUnicodeStringPrintf.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401B8530 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x1401B8690 (ZwCreateKey.c)
 *     ZwQuerySecurityObject @ 0x1401BAD70 (ZwQuerySecurityObject.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     CmpRebuildKcbCache @ 0x1405A9F78 (CmpRebuildKcbCache.c)
 *     CmpCleanupRollbackPacket @ 0x1405B0F78 (CmpCleanupRollbackPacket.c)
 *     CmpLockRegistryExclusive @ 0x1405B26C8 (CmpLockRegistryExclusive.c)
 *     CmObReferenceObjectByHandle @ 0x1405CE4CC (CmObReferenceObjectByHandle.c)
 *     CmpAttachToRegistryProcess @ 0x1405D5048 (CmpAttachToRegistryProcess.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1405D78BC (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpUnlockRegistry @ 0x140646170 (CmpUnlockRegistry.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x1406D0908 (CmpLogTransactionAbortedWithChildName.c)
 *     CmpAbortRollbackPacket @ 0x140703A6C (CmpAbortRollbackPacket.c)
 *     CmpTryAcquireKcbIXLocks @ 0x14071D37C (CmpTryAcquireKcbIXLocks.c)
 *     CmpPrepareForSubtreeInvalidation @ 0x14071FC9C (CmpPrepareForSubtreeInvalidation.c)
 *     CmpInvalidateSubtree @ 0x1407200FC (CmpInvalidateSubtree.c)
 *     CmpRetryBackOff @ 0x1407F9CA4 (CmpRetryBackOff.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x1407FAE88 (CmpEnumerateAllHigherLayerKcbs.c)
 *     CmpCopySyncTree @ 0x1407FDD60 (CmpCopySyncTree.c)
 */

__int64 __fastcall CmpSaveBootControlSet(unsigned __int16 a1)
{
  char v2; // r13
  struct _PRIVILEGE_SET *TransientPoolWithTag; // rdi
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN v5; // r12
  signed int v6; // ebx
  _QWORD *v7; // r14
  ULONG_PTR *v8; // rdi
  int v9; // esi
  __int64 v10; // r8
  __int64 v11; // r8
  char v12; // r12
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r15
  int v16; // eax
  int v17; // eax
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // r8
  char v21; // bl
  BOOLEAN v23; // [rsp+48h] [rbp-C0h]
  ULONG Length; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v25; // [rsp+50h] [rbp-B8h] BYREF
  HANDLE KeyHandle; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v27; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v28; // [rsp+68h] [rbp-A0h]
  PVOID Object; // [rsp+70h] [rbp-98h] BYREF
  PVOID v30; // [rsp+78h] [rbp-90h] BYREF
  int v31; // [rsp+80h] [rbp-88h] BYREF
  ULONG Disposition; // [rsp+84h] [rbp-84h] BYREF
  int v33; // [rsp+88h] [rbp-80h] BYREF
  signed int v34; // [rsp+8Ch] [rbp-7Ch] BYREF
  HANDLE Handle; // [rsp+90h] [rbp-78h] BYREF
  _DWORD v36[2]; // [rsp+98h] [rbp-70h] BYREF
  UNICODE_STRING DestinationString; // [rsp+A0h] [rbp-68h] BYREF
  _QWORD v38[3]; // [rsp+B0h] [rbp-58h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+C8h] [rbp-40h] BYREF
  _BYTE v40[48]; // [rsp+F8h] [rbp-10h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+128h] [rbp+20h] BYREF
  int *v42; // [rsp+148h] [rbp+40h]
  __int64 v43; // [rsp+150h] [rbp+48h]
  EVENT_DATA_DESCRIPTOR v44; // [rsp+158h] [rbp+50h] BYREF
  signed int *v45; // [rsp+178h] [rbp+70h]
  __int64 v46; // [rsp+180h] [rbp+78h]
  char v47; // [rsp+188h] [rbp+80h] BYREF

  KeyHandle = 0LL;
  Object = 0LL;
  v2 = 0;
  LODWORD(v25) = 0;
  memset(v40, 0, sizeof(v40));
  Handle = 0LL;
  v27 = 0LL;
  TransientPoolWithTag = 0LL;
  v28 = 0LL;
  Length = 0;
  CurrentThread = KeGetCurrentThread();
  v30 = 0LL;
  v31 = 0;
  --CurrentThread->KernelApcDisable;
  v23 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  v5 = v23;
  if ( !v23 )
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    v6 = -1073741431;
LABEL_3:
    v7 = Object;
    v8 = (ULONG_PTR *)v30;
    goto LABEL_34;
  }
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &CmRegistryMachineSystemCurrentControlSet;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v6 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v6 < 0 )
    goto LABEL_3;
  v9 = 1;
  if ( ZwQuerySecurityObject(KeyHandle, 4u, 0LL, 0, &Length) == -1073741789 )
  {
    TransientPoolWithTag = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithTag(PagedPool, Length, 0x20204D43u);
    if ( TransientPoolWithTag )
    {
      if ( ZwQuerySecurityObject(KeyHandle, 4u, TransientPoolWithTag, Length, &Length) < 0 )
      {
        CmSiFreeMemory(TransientPoolWithTag);
        TransientPoolWithTag = 0LL;
      }
    }
  }
  *(_QWORD *)&DestinationString.Length = 0x1000000LL;
  DestinationString.Buffer = (wchar_t *)&v47;
  RtlUnicodeStringPrintf(&DestinationString, L"\\Registry\\Machine\\System\\ControlSet%03d", a1);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.SecurityDescriptor = TransientPoolWithTag;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  v6 = ZwCreateKey(&Handle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 0, &Disposition);
  if ( TransientPoolWithTag )
    CmSiFreeMemory(TransientPoolWithTag);
  if ( v6 < 0 )
    goto LABEL_3;
  v6 = CmObReferenceObjectByHandle(KeyHandle, 0x20019u, v10, 0, &Object, 0LL);
  if ( v6 < 0 )
    goto LABEL_3;
  v6 = CmObReferenceObjectByHandle(Handle, 0x20006u, v11, 0, &v30, 0LL);
  if ( v6 < 0 )
    goto LABEL_3;
  CmpLockRegistryExclusive();
  v7 = Object;
  v8 = (ULONG_PTR *)v30;
  while ( 1 )
  {
    v12 = 0;
    v6 = CmpPerformKeyBodyDeletionCheck((__int64)v7, 0LL);
    if ( v6 < 0 )
      break;
    v6 = CmpPerformKeyBodyDeletionCheck((__int64)v8, 0LL);
    if ( v6 < 0 )
      break;
    v15 = v8[1];
    LOBYTE(v13) = 1;
    v16 = CmpTryAcquireKcbIXLocks(v15, v13, v14, (__int64)&v27);
    v6 = v16;
    if ( v16 == -1073741267 )
    {
      v12 = 1;
    }
    else if ( v16 < 0 )
    {
      break;
    }
    v38[0] = 0LL;
    v38[2] = 0LL;
    v38[1] = &v27;
    CmpEnumerateAllHigherLayerKcbs(
      v15,
      (unsigned int)CmpCleanUpHigherLayerKcbCachesPreCallback,
      (unsigned int)CmpPrepareToInvalidateAllHigherLayerKcbsPostCallback,
      (unsigned int)v38,
      1,
      1);
    v6 = v38[0];
    if ( LODWORD(v38[0]) == -1073741267 )
    {
      v12 = 1;
    }
    else if ( SLODWORD(v38[0]) < 0 )
    {
      break;
    }
    v17 = CmpPrepareForSubtreeInvalidation(v15, 0, (__int64)&v27);
    v6 = v17;
    if ( v17 != -1073741267 )
    {
      if ( v17 < 0 )
        break;
      if ( !v12 )
      {
        v36[1] = 0;
        v36[0] = 8;
        CmpEnumerateAllHigherLayerKcbs(
          v15,
          (unsigned int)CmpCleanUpHigherLayerKcbCachesPreCallback,
          (unsigned int)CmpInvalidateAllHigherLayerKcbsPostCallback,
          (unsigned int)v36,
          1,
          1);
        CmpInvalidateSubtree(v15, 8u, 0, &v25);
        CmpAttachToRegistryProcess((__int64)v40);
        v2 = 1;
        if ( Disposition == 1 )
          v9 = 0;
        v21 = CmpCopySyncTree(*(_QWORD *)(v7[1] + 24LL), 2, v9);
        CmpRebuildKcbCache(v8[1]);
        v6 = v21 == 0 ? 0xC000014C : 0;
        break;
      }
    }
    CmpLogTransactionAbortedWithChildName(v15, 0LL, 0xCu, v18, v27);
    CmpUnlockRegistry();
    v6 = CmpAbortRollbackPacket((__int64)&v27, 0LL);
    if ( v6 < 0 )
      goto LABEL_33;
    CmpRetryBackOff(&v31, v19, v20);
    CmpCleanupRollbackPacket((__int64)&v27);
    v27 = 0LL;
    v28 = 0LL;
    CmpLockRegistryExclusive();
  }
  CmpUnlockRegistry();
  if ( v2 )
    KiUnstackDetachProcess((__int64)v40, 0LL);
LABEL_33:
  v5 = v23;
LABEL_34:
  CmpCleanupRollbackPacket((__int64)&v27);
  if ( v7 )
    ObfDereferenceObject(v7);
  if ( v8 )
    ObfDereferenceObject(v8);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Handle )
    ZwClose(Handle);
  if ( v5 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  if ( v6 < 0 )
  {
    if ( stru_140400AA0.LevelPlus1 > 5 && TlgKeywordOn(&stru_140400AA0, 0x400000000000uLL) )
    {
      v34 = v6;
      v45 = &v34;
      v46 = 4LL;
      TlgWrite(&stru_140400AA0, &unk_14036C9D9, 0LL, 0LL, 3u, &v44);
    }
  }
  else if ( stru_140400AA0.LevelPlus1 > 5 && TlgKeywordOn(&stru_140400AA0, 0x400000000000uLL) )
  {
    v33 = v25;
    v42 = &v33;
    v43 = 4LL;
    TlgWrite(&stru_140400AA0, &unk_14036CA0E, 0LL, 0LL, 3u, &pData);
  }
  return (unsigned int)v6;
}
