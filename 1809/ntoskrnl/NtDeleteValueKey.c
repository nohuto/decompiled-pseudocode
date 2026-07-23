/*
 * XREFs of NtDeleteValueKey @ 0x1405B7030
 * Callers:
 *     ExpWatchProductTypeWork @ 0x1406C0BB0 (ExpWatchProductTypeWork.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140013000 (CmSiFreeMemory.c)
 *     CmpAllocateTransientPoolWithQuotaTag @ 0x140013018 (CmpAllocateTransientPoolWithQuotaTag.c)
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14004D320 (ExAcquireRundownProtection_0.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     EtwGetKernelTraceTimestamp @ 0x14010E9A0 (EtwGetKernelTraceTimestamp.c)
 *     CmDoVirtualTest @ 0x14012959C (CmDoVirtualTest.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     CmCleanupThreadInfo @ 0x1401B307C (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x1401B30BC (CmpInitializeThreadInfo.c)
 *     CmpIsRegistryLockAcquired @ 0x1401B30F8 (CmpIsRegistryLockAcquired.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     CmDeleteValueKey @ 0x1405B7634 (CmDeleteValueKey.c)
 *     CmpDoesBufferRequireCapturing @ 0x1405CE49C (CmpDoesBufferRequireCapturing.c)
 *     CmObReferenceObjectByHandle @ 0x1405CE4CC (CmObReferenceObjectByHandle.c)
 *     SeReleaseSubjectContext @ 0x1405E2240 (SeReleaseSubjectContext.c)
 *     CmpCallCallBacksEx @ 0x1405E6AE0 (CmpCallCallBacksEx.c)
 *     SeCaptureSubjectContext @ 0x140632AA0 (SeCaptureSubjectContext.c)
 *     CmPostCallbackNotificationEx @ 0x140640AC0 (CmPostCallbackNotificationEx.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x1407F2B48 (CmKeyBodyNeedsVirtualImage.c)
 *     CmKeyBodyRemapToVirtual @ 0x1407F2BFC (CmKeyBodyRemapToVirtual.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtDeleteValueKey(HANDLE KeyHandle, PUNICODE_STRING ValueName)
{
  char v3; // r14
  __int64 v4; // r13
  char PreviousMode; // r12
  char v6; // si
  struct _KTHREAD *CurrentThread; // rax
  int v8; // r8d
  int v9; // r9d
  NTSTATUS v10; // ebx
  unsigned __int64 v11; // rdx
  int v12; // r8d
  int v13; // r9d
  int v14; // eax
  wchar_t *Buffer; // rcx
  unsigned __int16 v16; // bx
  char *v17; // rsi
  __int64 v18; // rcx
  char v19; // r15
  char v20; // r14
  char *i; // rcx
  struct _KTHREAD *v22; // rax
  int v23; // r9d
  int v24; // eax
  __int64 v25; // r9
  void **v26; // rcx
  char v28; // [rsp+40h] [rbp-138h]
  int v29; // [rsp+44h] [rbp-134h]
  BOOLEAN v30; // [rsp+4Ah] [rbp-12Eh]
  PVOID Object[2]; // [rsp+50h] [rbp-128h] BYREF
  void *Src[2]; // [rsp+60h] [rbp-118h] BYREF
  int v33; // [rsp+70h] [rbp-108h] BYREF
  HANDLE v34; // [rsp+78h] [rbp-100h]
  PPRIVILEGE_SET Privileges; // [rsp+80h] [rbp-F8h]
  __int64 v36; // [rsp+88h] [rbp-F0h] BYREF
  __int64 v37; // [rsp+90h] [rbp-E8h]
  _QWORD v38[3]; // [rsp+98h] [rbp-E0h] BYREF
  __int128 v39; // [rsp+B0h] [rbp-C8h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+C0h] [rbp-B8h] BYREF
  __int128 v41; // [rsp+E0h] [rbp-98h] BYREF
  PVOID v42[2]; // [rsp+F0h] [rbp-88h] BYREF
  _QWORD v43[5]; // [rsp+100h] [rbp-78h] BYREF
  LARGE_INTEGER v44[4]; // [rsp+128h] [rbp-50h] BYREF

  v34 = KeyHandle;
  memset(v43, 0, sizeof(v43));
  Src[0] = 0LL;
  Src[1] = 0LL;
  Privileges = 0LL;
  v3 = 0;
  v33 = 0;
  memset(v44, 0, sizeof(v44));
  v4 = 0LL;
  v37 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp(v44, 0x20000u);
  v28 = 0;
  Object[0] = 0LL;
  v38[1] = v38;
  v38[0] = v38;
  CmpInitializeThreadInfo(v42);
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v6 = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v30 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( v30 )
  {
    LOBYTE(v9) = PreviousMode;
    v10 = CmObReferenceObjectByHandle((_DWORD)v34, 2, v8, v9, (__int64)Object, (__int64)&v36);
    v29 = v10;
    if ( v10 == -1073741790 )
    {
      SeCaptureSubjectContext(&SubjectContext);
      v6 = 1;
      if ( !CmDoVirtualTest((__int64)&SubjectContext, (__int64)&v33) )
        goto LABEL_8;
      LOBYTE(v13) = PreviousMode;
      v10 = CmObReferenceObjectByHandle((_DWORD)v34, 131097, v12, v13, (__int64)Object, (__int64)&v36);
      v29 = v10;
      if ( v10 < 0 )
        goto LABEL_54;
      if ( !(unsigned __int8)CmKeyBodyNeedsVirtualImage(Object[0]) )
      {
LABEL_8:
        v10 = -1073741790;
        goto LABEL_5;
      }
      v3 = 1;
    }
    v6 = v3;
    if ( v10 < 0 )
      goto LABEL_54;
    if ( CmpTraceRoutine && Object[0] )
    {
      v4 = *((_QWORD *)Object[0] + 1);
      v37 = v4;
    }
    if ( PreviousMode == 1 )
    {
      if ( (unsigned __int64)ValueName >= 0x7FFFFFFF0000LL )
        ValueName = (PUNICODE_STRING)0x7FFFFFFF0000LL;
      v14 = *(_DWORD *)&ValueName->Length;
      LODWORD(v39) = v14;
      Buffer = ValueName->Buffer;
      *((_QWORD *)&v39 + 1) = Buffer;
      *(_OWORD *)Src = v39;
      if ( (_WORD)v14 )
      {
        if ( ((unsigned __int8)Buffer & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v11 = (unsigned __int64)Buffer + (unsigned __int16)v14;
        if ( v11 > 0x7FFFFFFF0000LL || v11 < (unsigned __int64)Buffer )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
    }
    else
    {
      *(UNICODE_STRING *)Src = *ValueName;
    }
    v16 = (unsigned __int16)Src[0];
    v17 = (char *)((unsigned __int64)Src[1] & -(__int64)(LOWORD(Src[0]) != 0));
    Src[1] = v17;
    WORD1(Src[0]) = Src[0];
    if ( v17 && (unsigned __int8)CmpDoesBufferRequireCapturing((unsigned int)PreviousMode, v17) )
    {
      Privileges = (PPRIVILEGE_SET)CmpAllocateTransientPoolWithQuotaTag(v18, v16, 0x62634D43u);
      if ( !Privileges )
      {
        v10 = -1073741670;
        v29 = -1073741670;
        v6 = v3;
        v19 = 0;
        v20 = 0;
        goto LABEL_55;
      }
      v17 = (char *)Privileges;
      memmove(Privileges, Src[1], LOWORD(Src[0]));
      Src[1] = v17;
      v16 = (unsigned __int16)Src[0];
    }
    if ( ((__int64)Src[0] & 1) != 0 )
    {
      LOWORD(Src[0]) = 0;
      v10 = -1073741811;
LABEL_32:
      v29 = v10;
      v6 = v3;
      v19 = 0;
      v20 = 0;
      goto LABEL_55;
    }
    if ( (*(_DWORD *)(*((_QWORD *)Object[0] + 1) + 4LL) & 0x80u) != 0 )
    {
      v10 = -1073741790;
      goto LABEL_32;
    }
    for ( i = &v17[2 * ((unsigned __int64)v16 >> 1) - 2]; v16 && !*(_WORD *)i; i -= 2 )
    {
      v16 -= 2;
      LOWORD(Src[0]) = v16;
    }
    v22 = KeGetCurrentThread();
    --v22->KernelApcDisable;
    v19 = 1;
    if ( CmpCallBackCount && !CmpIsRegistryLockAcquired() )
    {
      v43[0] = Object[0];
      v43[1] = Src;
      LOBYTE(v23) = 1;
      v24 = CmpCallCallBacksEx(2, (unsigned int)v43, 0, v23, 17, (__int64)Object[0], (__int64)v38);
      v10 = v24;
      if ( v24 < 0 )
      {
        if ( v24 == -1073740541 )
          v10 = 0;
        goto LABEL_44;
      }
      v28 = 1;
    }
    if ( !v3 )
      goto LABEL_53;
    LOBYTE(v11) = PreviousMode;
    v10 = CmKeyBodyRemapToVirtual((unsigned int)Object, v11, 2, (unsigned int)&SubjectContext, (__int64)&v33);
    v29 = v10;
    v6 = v3;
    if ( v10 < 0 )
      goto LABEL_46;
    if ( CmpVEEnabled && (*(_DWORD *)(*((_QWORD *)Object[0] + 1) + 176LL) & 0x1000000) != 0 )
    {
LABEL_53:
      v41 = *(_OWORD *)Src;
      v25 = (unsigned int)v36 >> 2;
      LOBYTE(v25) = (v36 & 4) != 0;
      v10 = CmDeleteValueKey(Object[0], &v41, v34, v25);
      v29 = v10;
      goto LABEL_45;
    }
    v10 = -1073741790;
LABEL_44:
    v29 = v10;
LABEL_45:
    v6 = v3;
LABEL_46:
    v20 = v28;
    goto LABEL_55;
  }
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  v10 = -1073741431;
LABEL_5:
  v29 = v10;
LABEL_54:
  v19 = 0;
  v20 = 0;
LABEL_55:
  if ( v6 )
    SeReleaseSubjectContext(&SubjectContext);
  if ( v20 )
  {
    v10 = CmPostCallbackNotificationEx(17, Object[0], v10, (unsigned int)v43, 0LL, (__int64)v38);
    v29 = v10;
  }
  if ( v19 )
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    v10 = v29;
  }
  if ( Object[0] )
    ObfDereferenceObject(Object[0]);
  if ( CmpTraceRoutine )
  {
    v26 = Src;
    LOBYTE(v26) = 15;
    CmpTraceRoutine(v26, v44, (unsigned int)v10, 0LL, v4, Src);
  }
  if ( Privileges )
    CmSiFreeMemory(Privileges);
  if ( v30 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    v10 = v29;
  }
  CmCleanupThreadInfo(v42);
  return v10;
}
