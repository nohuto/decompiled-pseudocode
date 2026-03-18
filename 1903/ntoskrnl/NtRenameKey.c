/*
 * XREFs of NtRenameKey @ 0x140824780
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14003E220 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     ExIsResourceAcquiredSharedLite @ 0x14003F5C0 (ExIsResourceAcquiredSharedLite.c)
 *     CmSiFreeMemory @ 0x14008BCE0 (CmSiFreeMemory.c)
 *     CmpAllocateTransientPoolWithQuotaTag @ 0x14008BCF8 (CmpAllocateTransientPoolWithQuotaTag.c)
 *     CmDoVirtualTest @ 0x1400FB3F0 (CmDoVirtualTest.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     SeCaptureSubjectContext @ 0x1405DDBB0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1405F3180 (SeReleaseSubjectContext.c)
 *     CmpAttachToRegistryProcess @ 0x1405F31F0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x1405FD4FC (CmpDetachFromRegistryProcess.c)
 *     CmpReleaseShutdownRundown @ 0x1405FDF00 (CmpReleaseShutdownRundown.c)
 *     CmpAcquireShutdownRundown @ 0x1405FE010 (CmpAcquireShutdownRundown.c)
 *     CmObReferenceObjectByHandle @ 0x1405FE0E0 (CmObReferenceObjectByHandle.c)
 *     CmpDoesBufferRequireCapturing @ 0x1405FE9C0 (CmpDoesBufferRequireCapturing.c)
 *     CmPostCallbackNotification @ 0x1405FECFC (CmPostCallbackNotification.c)
 *     CmpCallCallBacks @ 0x1405FEDC8 (CmpCallCallBacks.c)
 *     CmRenameKey @ 0x14082855C (CmRenameKey.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x14082BC00 (CmKeyBodyNeedsVirtualImage.c)
 *     CmKeyBodyReplicateToVirtual @ 0x14082BF48 (CmKeyBodyReplicateToVirtual.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913EC0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtRenameKey(HANDLE KeyHandle, PUNICODE_STRING NewName)
{
  char v3; // r13
  char v4; // si
  KPROCESSOR_MODE PreviousMode; // r12
  char v6; // r15
  char v7; // r14
  int v8; // ebx
  int v9; // eax
  wchar_t *Buffer; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int16 v12; // bx
  PPRIVILEGE_SET v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // r8
  unsigned int v16; // eax
  void *v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // r8
  struct _KTHREAD *CurrentThread; // rax
  __int64 v21; // r8
  int v22; // eax
  __int64 v23; // r8
  char v25; // [rsp+33h] [rbp-115h]
  PVOID Object; // [rsp+38h] [rbp-110h] BYREF
  void *Src[2]; // [rsp+40h] [rbp-108h] BYREF
  int v28; // [rsp+50h] [rbp-F8h] BYREF
  int v29; // [rsp+54h] [rbp-F4h]
  PPRIVILEGE_SET Privileges; // [rsp+58h] [rbp-F0h]
  __int128 v31; // [rsp+60h] [rbp-E8h] BYREF
  __int128 v32; // [rsp+70h] [rbp-D8h]
  int v33; // [rsp+80h] [rbp-C8h]
  int v34[2]; // [rsp+88h] [rbp-C0h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+90h] [rbp-B8h] BYREF
  __int128 v36; // [rsp+B0h] [rbp-98h] BYREF
  _QWORD v37[5]; // [rsp+C0h] [rbp-88h] BYREF
  _BYTE v38[48]; // [rsp+E8h] [rbp-60h] BYREF

  *(_QWORD *)v34 = KeyHandle;
  Src[0] = 0LL;
  Src[1] = 0LL;
  v31 = 0LL;
  memset(v38, 0, sizeof(v38));
  v3 = 0;
  v4 = 0;
  Object = 0LL;
  Privileges = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v6 = 0;
  memset(v37, 0, sizeof(v37));
  v33 = -1;
  *((_QWORD *)&v31 + 1) = &v31;
  *(_QWORD *)&v31 = &v31;
  v28 = 0;
  v7 = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v25 = CmpAcquireShutdownRundown();
  if ( !v25 )
  {
    v8 = -1073741431;
    goto LABEL_42;
  }
  if ( PreviousMode == 1 )
  {
    v32 = 0uLL;
    if ( (unsigned __int64)NewName >= 0x7FFFFFFF0000LL )
      NewName = (PUNICODE_STRING)0x7FFFFFFF0000LL;
    v9 = *(_DWORD *)&NewName->Length;
    LODWORD(v32) = v9;
    Buffer = NewName->Buffer;
    *((_QWORD *)&v32 + 1) = Buffer;
    *(_OWORD *)Src = v32;
    if ( (_WORD)v9 )
    {
      if ( ((unsigned __int8)Buffer & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v11 = (unsigned __int64)Buffer + (unsigned __int16)v9;
      if ( v11 > 0x7FFFFFFF0000LL || v11 < (unsigned __int64)Buffer )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  else
  {
    *(UNICODE_STRING *)Src = *NewName;
  }
  v12 = (unsigned __int16)Src[0];
  if ( (unsigned __int16)(LOWORD(Src[0]) - 1) > 0x1FFu || ((__int64)Src[0] & 1) != 0 )
  {
    v8 = -1073741811;
    v29 = -1073741811;
  }
  else
  {
    v13 = (PPRIVILEGE_SET)Src[1];
    if ( CmpDoesBufferRequireCapturing(PreviousMode, (__int64)Src[1]) )
    {
      Privileges = (PPRIVILEGE_SET)CmpAllocateTransientPoolWithQuotaTag(v14, LOWORD(Src[0]), 0x426E4D43u);
      if ( !Privileges )
      {
        v8 = -1073741670;
        v29 = -1073741670;
        v4 = 0;
        goto LABEL_42;
      }
      v13 = Privileges;
      memmove(Privileges, Src[1], LOWORD(Src[0]));
      Src[1] = Privileges;
      v12 = (unsigned __int16)Src[0];
      WORD1(Src[0]) = Src[0];
    }
    v16 = 0;
    if ( v12 >> 1 )
    {
      while ( LOWORD(v13->PrivilegeCount) != 92 )
      {
        ++v16;
        v13 = (PPRIVILEGE_SET)((char *)v13 + 2);
        if ( v16 >= v12 >> 1 )
          goto LABEL_22;
      }
      v8 = -1073741811;
      goto LABEL_26;
    }
LABEL_22:
    v17 = *(void **)v34;
    v8 = CmObReferenceObjectByHandle(*(void **)v34, 0x20006u, v15, PreviousMode, &Object, 0LL);
    if ( v8 == -1073741790 )
    {
      SeCaptureSubjectContext(&SubjectContext);
      v7 = 1;
      if ( !CmDoVirtualTest((__int64)&SubjectContext, (__int64)&v28) )
        goto LABEL_24;
      v8 = CmObReferenceObjectByHandle(v17, 0x20019u, v19, PreviousMode, &Object, 0LL);
      if ( v8 < 0 )
        goto LABEL_26;
      if ( !(unsigned __int8)CmKeyBodyNeedsVirtualImage(Object) )
      {
LABEL_24:
        v8 = -1073741790;
LABEL_26:
        v4 = 0;
        goto LABEL_42;
      }
      v6 = 1;
    }
    v7 = v6;
    if ( v8 < 0 )
      goto LABEL_26;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v4 = 1;
    if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
    {
      v37[0] = Object;
      v37[1] = Src;
      v22 = CmpCallCallBacks(4u, (__int64)v37, v21, 0x13u, (__int64)Object, (__int64)&v31);
      v8 = v22;
      if ( v22 < 0 )
      {
        if ( v22 == -1073740541 )
          v8 = 0;
        goto LABEL_36;
      }
      v3 = 1;
    }
    if ( !v6
      || (LOBYTE(v18) = PreviousMode,
          v8 = CmKeyBodyReplicateToVirtual(&Object, v18, 131078LL, &SubjectContext, &v28),
          v7 = v6,
          v8 >= 0) )
    {
      CmpAttachToRegistryProcess((__int64)v38);
      v36 = *(_OWORD *)Src;
      LOBYTE(v23) = PreviousMode;
      v8 = CmRenameKey(Object, &v36, v23);
      CmpDetachFromRegistryProcess((struct _KTHREAD *)v38);
LABEL_36:
      v7 = v6;
    }
  }
LABEL_42:
  if ( v7 )
    SeReleaseSubjectContext(&SubjectContext);
  if ( v3 )
    v8 = CmPostCallbackNotification(0x13u, (__int64)Object, v8, (__int64)v37, &v31);
  if ( v4 )
    KeLeaveCriticalRegion();
  if ( Object )
    ObfDereferenceObject(Object);
  if ( Privileges )
    CmSiFreeMemory(Privileges);
  if ( v25 )
    CmpReleaseShutdownRundown();
  return v8;
}
