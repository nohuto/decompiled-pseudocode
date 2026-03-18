/*
 * XREFs of NtDeleteValueKey @ 0x14063C850
 * Callers:
 *     ExpWatchProductTypeWork @ 0x1406E5580 (ExpWatchProductTypeWork.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14003DF60 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ExIsResourceAcquiredSharedLite @ 0x14003F300 (ExIsResourceAcquiredSharedLite.c)
 *     CmSiFreeMemory @ 0x14008CFE0 (CmSiFreeMemory.c)
 *     CmpAllocateTransientPoolWithQuotaTag @ 0x14008CFF8 (CmpAllocateTransientPoolWithQuotaTag.c)
 *     CmDoVirtualTest @ 0x1400F40D0 (CmDoVirtualTest.c)
 *     EtwGetKernelTraceTimestamp @ 0x1401094D0 (EtwGetKernelTraceTimestamp.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     SeCaptureSubjectContext @ 0x1405DE350 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1405F3AE0 (SeReleaseSubjectContext.c)
 *     CmpReleaseShutdownRundown @ 0x1405FF930 (CmpReleaseShutdownRundown.c)
 *     CmpAcquireShutdownRundown @ 0x1405FFA40 (CmpAcquireShutdownRundown.c)
 *     CmObReferenceObjectByHandle @ 0x1405FFB10 (CmObReferenceObjectByHandle.c)
 *     CmpDoesBufferRequireCapturing @ 0x1406003F0 (CmpDoesBufferRequireCapturing.c)
 *     CmPostCallbackNotification @ 0x14060072C (CmPostCallbackNotification.c)
 *     CmpCallCallBacks @ 0x1406007F8 (CmpCallCallBacks.c)
 *     CmDeleteValueKey @ 0x14063CCDC (CmDeleteValueKey.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x14082B300 (CmKeyBodyNeedsVirtualImage.c)
 *     CmKeyBodyRemapToVirtual @ 0x14082B3B4 (CmKeyBodyRemapToVirtual.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913920 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtDeleteValueKey(HANDLE KeyHandle, PUNICODE_STRING ValueName)
{
  char v4; // r14
  char v5; // r13
  KPROCESSOR_MODE PreviousMode; // r12
  char v7; // si
  __int64 v8; // r8
  unsigned __int64 v9; // rdx
  int v10; // edi
  int v11; // eax
  wchar_t *Buffer; // rcx
  unsigned __int16 v13; // di
  char *v14; // rsi
  __int64 v15; // rcx
  struct _PRIVILEGE_SET *TransientPoolWithQuotaTag; // rax
  char v17; // r15
  char *i; // rcx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v23; // r8
  __int64 v24; // rcx
  char v25; // [rsp+43h] [rbp-115h]
  PVOID Object; // [rsp+48h] [rbp-110h] BYREF
  void *Src[2]; // [rsp+50h] [rbp-108h] BYREF
  int v28; // [rsp+60h] [rbp-F8h]
  int v29; // [rsp+64h] [rbp-F4h] BYREF
  __int64 v30; // [rsp+68h] [rbp-F0h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+70h] [rbp-E8h]
  int v32[2]; // [rsp+78h] [rbp-E0h]
  __int64 v33; // [rsp+80h] [rbp-D8h]
  _QWORD v34[3]; // [rsp+88h] [rbp-D0h] BYREF
  __int128 v35; // [rsp+A0h] [rbp-B8h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+B0h] [rbp-A8h] BYREF
  __int128 v37; // [rsp+D0h] [rbp-88h] BYREF
  _QWORD v38[5]; // [rsp+E0h] [rbp-78h] BYREF
  LARGE_INTEGER v39[4]; // [rsp+108h] [rbp-50h] BYREF

  *(_QWORD *)v32 = KeyHandle;
  memset(v38, 0, sizeof(v38));
  v30 = 0LL;
  Src[0] = 0LL;
  Src[1] = 0LL;
  Privileges = 0LL;
  v4 = 0;
  v29 = 0;
  memset(v39, 0, sizeof(v39));
  v33 = 0LL;
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
    EtwGetKernelTraceTimestamp(v39, 0x20000u);
  v5 = 0;
  Object = 0LL;
  v34[1] = v34;
  v34[0] = v34;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v7 = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v25 = CmpAcquireShutdownRundown();
  if ( !v25 )
  {
    v10 = -1073741431;
    goto LABEL_51;
  }
  v10 = CmObReferenceObjectByHandle(KeyHandle, 2u, v8, PreviousMode, &Object, &v30);
  v28 = v10;
  if ( v10 == -1073741790 )
  {
    SeCaptureSubjectContext(&SubjectContext);
    v7 = 1;
    if ( !CmDoVirtualTest((__int64)&SubjectContext, (__int64)&v29) )
      goto LABEL_50;
    v10 = CmObReferenceObjectByHandle(*(void **)v32, 0x20019u, v23, PreviousMode, &Object, &v30);
    v28 = v10;
    if ( v10 < 0 )
      goto LABEL_51;
    if ( !(unsigned __int8)CmKeyBodyNeedsVirtualImage(Object) )
    {
LABEL_50:
      v10 = -1073741790;
      goto LABEL_51;
    }
    v4 = 1;
  }
  v7 = v4;
  if ( v10 < 0 )
  {
LABEL_51:
    v17 = 0;
    goto LABEL_34;
  }
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) && Object )
    v33 = *((_QWORD *)Object + 1);
  if ( PreviousMode == 1 )
  {
    v35 = 0uLL;
    if ( (unsigned __int64)ValueName >= 0x7FFFFFFF0000LL )
      ValueName = (PUNICODE_STRING)0x7FFFFFFF0000LL;
    v11 = *(_DWORD *)&ValueName->Length;
    LODWORD(v35) = v11;
    Buffer = ValueName->Buffer;
    *((_QWORD *)&v35 + 1) = Buffer;
    *(_OWORD *)Src = v35;
    if ( (_WORD)v11 )
    {
      if ( ((unsigned __int8)Buffer & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v9 = (unsigned __int64)Buffer + (unsigned __int16)v11;
      if ( v9 > 0x7FFFFFFF0000LL || v9 < (unsigned __int64)Buffer )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  else
  {
    *(UNICODE_STRING *)Src = *ValueName;
  }
  v13 = (unsigned __int16)Src[0];
  v14 = (char *)((unsigned __int64)Src[1] & -(__int64)(LOWORD(Src[0]) != 0));
  Src[1] = v14;
  WORD1(Src[0]) = Src[0];
  if ( LOWORD(Src[0]) && CmpDoesBufferRequireCapturing(PreviousMode, (__int64)v14) )
  {
    TransientPoolWithQuotaTag = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithQuotaTag(v15, v13, 0x62634D43u);
    v14 = (char *)TransientPoolWithQuotaTag;
    Privileges = TransientPoolWithQuotaTag;
    if ( !TransientPoolWithQuotaTag )
    {
      v10 = -1073741670;
      v28 = -1073741670;
      v7 = v4;
      v17 = 0;
      goto LABEL_34;
    }
    memmove(TransientPoolWithQuotaTag, Src[1], LOWORD(Src[0]));
    Src[1] = v14;
    v13 = (unsigned __int16)Src[0];
  }
  if ( ((__int64)Src[0] & 1) != 0 )
  {
    LOWORD(Src[0]) = 0;
    v10 = -1073741811;
LABEL_62:
    v7 = v4;
    v17 = 0;
    goto LABEL_34;
  }
  if ( (*(_DWORD *)(*((_QWORD *)Object + 1) + 8LL) & 0x80u) != 0 )
  {
    v10 = -1073741790;
    goto LABEL_62;
  }
  for ( i = &v14[2 * ((unsigned __int64)v13 >> 1) - 2]; v13 && !*(_WORD *)i; i -= 2 )
  {
    v13 -= 2;
    LOWORD(Src[0]) = v13;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = 1;
  if ( !CmpCallBackCount || ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
  {
    v17 = 0;
    goto LABEL_31;
  }
  v38[0] = Object;
  v38[1] = Src;
  v10 = CmpCallCallBacks(2u, (__int64)v38, v20, 0x11u, (__int64)Object, (__int64)v34);
  if ( v10 < 0 )
  {
    if ( v10 == -1073740541 )
      v10 = 0;
    goto LABEL_62;
  }
  v17 = 1;
LABEL_31:
  if ( !v4 )
    goto LABEL_32;
  LOBYTE(v9) = PreviousMode;
  v10 = CmKeyBodyRemapToVirtual((unsigned int)&Object, v9, 2, (unsigned int)&SubjectContext, (__int64)&v29);
  v7 = v4;
  if ( v10 >= 0 )
  {
    if ( !CmpVEEnabled || (*(_DWORD *)(*((_QWORD *)Object + 1) + 184LL) & 0x1000000) == 0 )
    {
      v10 = -1073741790;
      goto LABEL_33;
    }
LABEL_32:
    v37 = *(_OWORD *)Src;
    v21 = (unsigned int)v30 >> 2;
    LOBYTE(v21) = (v30 & 4) != 0;
    v10 = CmDeleteValueKey(Object, &v37, *(_QWORD *)v32, v21);
LABEL_33:
    v7 = v4;
  }
LABEL_34:
  if ( v7 )
    SeReleaseSubjectContext(&SubjectContext);
  if ( v17 )
    v10 = CmPostCallbackNotification(0x11u, (__int64)Object, v10, (__int64)v38, v34);
  if ( v5 )
    KeLeaveCriticalRegion();
  if ( Object )
    ObfDereferenceObject(Object);
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
  {
    v24 = v33;
    LOBYTE(v24) = 15;
    (*(void (__fastcall **)(__int64, LARGE_INTEGER *, _QWORD, _QWORD, __int64, void **))((char *)&NlsMbCodePageTag + 7))(
      v24,
      v39,
      (unsigned int)v10,
      0LL,
      v33,
      Src);
  }
  if ( Privileges )
    CmSiFreeMemory(Privileges);
  if ( v25 )
    CmpReleaseShutdownRundown();
  return v10;
}
