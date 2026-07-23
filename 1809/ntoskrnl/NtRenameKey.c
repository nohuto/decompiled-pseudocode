/*
 * XREFs of NtRenameKey @ 0x1407EAD80
 * Callers:
 *     <none>
 * Callees:
 *     CmSiFreeMemory @ 0x140013000 (CmSiFreeMemory.c)
 *     CmpAllocateTransientPoolWithQuotaTag @ 0x140013018 (CmpAllocateTransientPoolWithQuotaTag.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14004D320 (ExAcquireRundownProtection_0.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     CmDoVirtualTest @ 0x14012959C (CmDoVirtualTest.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     CmCleanupThreadInfo @ 0x1401B307C (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x1401B30BC (CmpInitializeThreadInfo.c)
 *     CmpIsRegistryLockAcquired @ 0x1401B30F8 (CmpIsRegistryLockAcquired.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     CmpDoesBufferRequireCapturing @ 0x1405CE49C (CmpDoesBufferRequireCapturing.c)
 *     CmObReferenceObjectByHandle @ 0x1405CE4CC (CmObReferenceObjectByHandle.c)
 *     CmpAttachToRegistryProcess @ 0x1405D5048 (CmpAttachToRegistryProcess.c)
 *     SeReleaseSubjectContext @ 0x1405E2240 (SeReleaseSubjectContext.c)
 *     CmpCallCallBacksEx @ 0x1405E6AE0 (CmpCallCallBacksEx.c)
 *     SeCaptureSubjectContext @ 0x140632AA0 (SeCaptureSubjectContext.c)
 *     CmPostCallbackNotificationEx @ 0x140640AC0 (CmPostCallbackNotificationEx.c)
 *     CmRenameKey @ 0x1407EECF4 (CmRenameKey.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x1407F2B48 (CmKeyBodyNeedsVirtualImage.c)
 *     CmKeyBodyReplicateToVirtual @ 0x1407F2E74 (CmKeyBodyReplicateToVirtual.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtRenameKey(HANDLE KeyHandle, PUNICODE_STRING NewName)
{
  char v3; // r13
  KPROCESSOR_MODE PreviousMode; // r12
  char v5; // r15
  char v6; // r14
  struct _KTHREAD *CurrentThread; // rax
  int v8; // ebx
  char v9; // si
  int v10; // eax
  wchar_t *Buffer; // rcx
  unsigned __int64 v12; // rdx
  unsigned __int16 v13; // bx
  PPRIVILEGE_SET v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // r8
  unsigned int v17; // ecx
  void *v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // r8
  struct _KTHREAD *v21; // rax
  int v22; // eax
  __int64 v23; // r8
  int v25; // [rsp+44h] [rbp-124h]
  BOOLEAN v26; // [rsp+4Ah] [rbp-11Eh]
  PVOID Object; // [rsp+50h] [rbp-118h] BYREF
  int v28; // [rsp+58h] [rbp-110h] BYREF
  void *Src[2]; // [rsp+60h] [rbp-108h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+70h] [rbp-F8h]
  _SLIST_ENTRY v31; // [rsp+78h] [rbp-F0h] BYREF
  HANDLE v32; // [rsp+88h] [rbp-E0h]
  __int128 v33; // [rsp+90h] [rbp-D8h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+A0h] [rbp-C8h] BYREF
  __int128 v35; // [rsp+C0h] [rbp-A8h] BYREF
  PVOID v36[2]; // [rsp+D0h] [rbp-98h] BYREF
  _QWORD v37[5]; // [rsp+E0h] [rbp-88h] BYREF
  _BYTE v38[48]; // [rsp+108h] [rbp-60h] BYREF

  v32 = KeyHandle;
  CmpInitializeThreadInfo(v36);
  v3 = 0;
  Object = 0LL;
  Privileges = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v5 = 0;
  memset(v37, 0, sizeof(v37));
  *((_QWORD *)&v31.Next + 1) = &v31;
  v31.Next = &v31;
  v28 = 0;
  v6 = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v26 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( !v26 )
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    v8 = -1073741431;
    v25 = -1073741431;
    v9 = 0;
    goto LABEL_44;
  }
  if ( PreviousMode == 1 )
  {
    if ( (unsigned __int64)NewName >= 0x7FFFFFFF0000LL )
      NewName = (PUNICODE_STRING)0x7FFFFFFF0000LL;
    v10 = *(_DWORD *)&NewName->Length;
    LODWORD(v33) = v10;
    Buffer = NewName->Buffer;
    *((_QWORD *)&v33 + 1) = Buffer;
    *(_OWORD *)Src = v33;
    if ( (_WORD)v10 )
    {
      if ( ((unsigned __int8)Buffer & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v12 = (unsigned __int64)Buffer + (unsigned __int16)v10;
      if ( v12 > 0x7FFFFFFF0000LL || v12 < (unsigned __int64)Buffer )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  else
  {
    *(UNICODE_STRING *)Src = *NewName;
  }
  v13 = (unsigned __int16)Src[0];
  if ( (unsigned __int16)(LOWORD(Src[0]) - 1) > 0x1FFu
    || ((__int64)Src[0] & 1) != 0
    || (v14 = (PPRIVILEGE_SET)Src[1], !*(_WORD *)Src[1]) )
  {
    v8 = -1073741811;
    v25 = -1073741811;
    v9 = 0;
  }
  else
  {
    if ( CmpDoesBufferRequireCapturing(PreviousMode, (__int64)Src[1]) )
    {
      Privileges = (PPRIVILEGE_SET)CmpAllocateTransientPoolWithQuotaTag(v15, LOWORD(Src[0]), 0x426E4D43u);
      if ( !Privileges )
      {
        v8 = -1073741670;
        v25 = -1073741670;
        v9 = 0;
        goto LABEL_44;
      }
      v14 = Privileges;
      memmove(Privileges, Src[1], LOWORD(Src[0]));
      Src[1] = Privileges;
      v13 = (unsigned __int16)Src[0];
      WORD1(Src[0]) = Src[0];
    }
    v17 = 0;
    if ( v13 >> 1 )
    {
      while ( *((_WORD *)&v14->PrivilegeCount + v17) != 92 )
      {
        if ( ++v17 >= v13 >> 1 )
          goto LABEL_22;
      }
      v8 = -1073741811;
      goto LABEL_26;
    }
LABEL_22:
    v18 = v32;
    v8 = CmObReferenceObjectByHandle(v32, 0x20006u, v16, PreviousMode, &Object, 0LL);
    v25 = v8;
    if ( v8 == -1073741790 )
    {
      SeCaptureSubjectContext(&SubjectContext);
      v6 = 1;
      if ( !CmDoVirtualTest((__int64)&SubjectContext, (__int64)&v28) )
        goto LABEL_24;
      v8 = CmObReferenceObjectByHandle(v18, 0x20019u, v20, PreviousMode, &Object, 0LL);
      v25 = v8;
      if ( v8 < 0 )
        goto LABEL_27;
      if ( !(unsigned __int8)CmKeyBodyNeedsVirtualImage(Object) )
      {
LABEL_24:
        v8 = -1073741790;
LABEL_26:
        v25 = v8;
LABEL_27:
        v9 = 0;
        goto LABEL_44;
      }
      v5 = 1;
    }
    v6 = v5;
    if ( v8 < 0 )
      goto LABEL_27;
    v21 = KeGetCurrentThread();
    --v21->KernelApcDisable;
    v9 = 1;
    if ( CmpCallBackCount && !CmpIsRegistryLockAcquired() )
    {
      v37[0] = Object;
      v37[1] = Src;
      v22 = CmpCallCallBacksEx(4u, (__int64)v37, 0LL, 1, 0x13u, (__int64)Object, &v31);
      v8 = v22;
      if ( v22 < 0 )
      {
        if ( v22 == -1073740541 )
          v8 = 0;
        v25 = v8;
        goto LABEL_38;
      }
      v3 = 1;
    }
    if ( !v5
      || (LOBYTE(v19) = PreviousMode,
          v8 = CmKeyBodyReplicateToVirtual(&Object, v19, 131078LL, &SubjectContext, &v28),
          v25 = v8,
          v6 = v5,
          v8 >= 0) )
    {
      CmpAttachToRegistryProcess((__int64)v38);
      v35 = *(_OWORD *)Src;
      LOBYTE(v23) = PreviousMode;
      v8 = CmRenameKey(Object, &v35, v23);
      v25 = v8;
      KiUnstackDetachProcess((__int64)v38, 0LL);
LABEL_38:
      v6 = v5;
    }
  }
LABEL_44:
  if ( v6 )
    SeReleaseSubjectContext(&SubjectContext);
  if ( v3 )
  {
    v8 = CmPostCallbackNotificationEx(0x13u, (__int64)Object, v8, (__int64)v37, 0LL, &v31);
    v25 = v8;
  }
  if ( v9 )
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    v8 = v25;
  }
  if ( Object )
    ObfDereferenceObject(Object);
  if ( Privileges )
    CmSiFreeMemory(Privileges);
  if ( v26 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    v8 = v25;
  }
  CmCleanupThreadInfo(v36);
  return v8;
}
