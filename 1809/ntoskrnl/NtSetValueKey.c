/*
 * XREFs of NtSetValueKey @ 0x1405CD8E0
 * Callers:
 *     ExpWatchProductTypeWork @ 0x1406C0BB0 (ExpWatchProductTypeWork.c)
 *     ExUpdateLicenseRegistry @ 0x1406C1558 (ExUpdateLicenseRegistry.c)
 *     ExpWatchLicenseInfoWork @ 0x1408CE820 (ExpWatchLicenseInfoWork.c)
 *     CmpAddDockingInfo @ 0x1409C2B6C (CmpAddDockingInfo.c)
 *     ExpUpdateProductSuiteTypeInRegistry @ 0x1409D6BCC (ExpUpdateProductSuiteTypeInRegistry.c)
 *     IopStoreSystemPartitionInformation @ 0x1409D72F4 (IopStoreSystemPartitionInformation.c)
 *     InitSafeBoot @ 0x1409F4348 (InitSafeBoot.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140013000 (CmSiFreeMemory.c)
 *     CmpAllocateTransientPoolWithQuotaTag @ 0x140013018 (CmpAllocateTransientPoolWithQuotaTag.c)
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14004D320 (ExAcquireRundownProtection_0.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     EtwGetKernelTraceTimestamp @ 0x14010E9A0 (EtwGetKernelTraceTimestamp.c)
 *     CmDoVirtualTest @ 0x14012959C (CmDoVirtualTest.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     CmCleanupThreadInfo @ 0x1401B307C (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x1401B30BC (CmpInitializeThreadInfo.c)
 *     CmpIsRegistryLockAcquired @ 0x1401B30F8 (CmpIsRegistryLockAcquired.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     CmSetValueKey @ 0x1405CCE28 (CmSetValueKey.c)
 *     CmpDoesBufferRequireCapturing @ 0x1405CE49C (CmpDoesBufferRequireCapturing.c)
 *     CmObReferenceObjectByHandle @ 0x1405CE4CC (CmObReferenceObjectByHandle.c)
 *     SeReleaseSubjectContext @ 0x1405E2240 (SeReleaseSubjectContext.c)
 *     CmpCallCallBacksEx @ 0x1405E6AE0 (CmpCallCallBacksEx.c)
 *     SeCaptureSubjectContext @ 0x140632AA0 (SeCaptureSubjectContext.c)
 *     CmPostCallbackNotificationEx @ 0x140640AC0 (CmPostCallbackNotificationEx.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x1407F2B48 (CmKeyBodyNeedsVirtualImage.c)
 *     CmKeyBodyReplicateToVirtual @ 0x1407F2E74 (CmKeyBodyReplicateToVirtual.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtSetValueKey(
        HANDLE KeyHandle,
        PUNICODE_STRING ValueName,
        ULONG TitleIndex,
        ULONG Type,
        PVOID Data,
        ULONG DataSize)
{
  int v7; // r12d
  char v8; // r15
  unsigned __int8 v9; // r14
  char v10; // di
  struct _KTHREAD *CurrentThread; // rax
  int v12; // r8d
  NTSTATUS v13; // ebx
  char v14; // r12
  char v15; // si
  int v16; // r8d
  unsigned __int16 Length; // bx
  wchar_t *v18; // rdx
  ULONG v19; // esi
  void *v20; // r13
  unsigned int v21; // edi
  unsigned int v22; // r12d
  unsigned int v23; // r14d
  __int64 v24; // rcx
  PPRIVILEGE_SET v25; // rdi
  size_t v26; // r8
  wchar_t *v27; // rbx
  bool v28; // zf
  struct _KTHREAD *v29; // rax
  int v30; // r9d
  void *v31; // r14
  int v32; // eax
  __int64 v33; // rcx
  char v35; // [rsp+40h] [rbp-1A8h]
  int v36; // [rsp+44h] [rbp-1A4h]
  signed __int8 v37; // [rsp+48h] [rbp-1A0h]
  BOOLEAN v38; // [rsp+4Ah] [rbp-19Eh]
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-198h] BYREF
  PVOID Object; // [rsp+60h] [rbp-188h] BYREF
  void *Src; // [rsp+68h] [rbp-180h]
  void *v42; // [rsp+70h] [rbp-178h]
  int v43; // [rsp+78h] [rbp-170h] BYREF
  ULONG v44; // [rsp+7Ch] [rbp-16Ch]
  PPRIVILEGE_SET Privileges; // [rsp+80h] [rbp-168h]
  ULONG v46; // [rsp+88h] [rbp-160h]
  int v47; // [rsp+90h] [rbp-158h] BYREF
  __int64 v48; // [rsp+98h] [rbp-150h]
  _QWORD v49[2]; // [rsp+A0h] [rbp-148h] BYREF
  struct _PRIVILEGE_SET *v50; // [rsp+B0h] [rbp-138h]
  HANDLE v51; // [rsp+B8h] [rbp-130h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+C0h] [rbp-128h] BYREF
  PVOID v53; // [rsp+E0h] [rbp-108h] BYREF
  UNICODE_STRING *p_DestinationString; // [rsp+E8h] [rbp-100h]
  unsigned __int64 v55; // [rsp+F0h] [rbp-F8h]
  void *v56; // [rsp+F8h] [rbp-F0h]
  __int64 v57; // [rsp+100h] [rbp-E8h]
  __int64 v58; // [rsp+108h] [rbp-E0h]
  __int64 v59; // [rsp+110h] [rbp-D8h]
  __int64 v60; // [rsp+118h] [rbp-D0h]
  __int128 v61; // [rsp+120h] [rbp-C8h]
  PVOID v62[2]; // [rsp+130h] [rbp-B8h] BYREF
  LARGE_INTEGER v63[4]; // [rsp+140h] [rbp-A8h] BYREF
  _BYTE v64[64]; // [rsp+160h] [rbp-88h] BYREF

  v44 = Type;
  v46 = TitleIndex;
  v7 = (int)KeyHandle;
  v51 = KeyHandle;
  Src = Data;
  memset(v63, 0, sizeof(v63));
  v48 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp(v63, 0x20000u);
  CmpInitializeThreadInfo(v62);
  Object = 0LL;
  v8 = 0;
  v35 = 0;
  v49[1] = v49;
  v49[0] = v49;
  v53 = 0LL;
  p_DestinationString = 0LL;
  v55 = 0LL;
  v56 = 0LL;
  v57 = 0LL;
  v58 = 0LL;
  v59 = 0LL;
  v60 = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  v42 = 0LL;
  v50 = 0LL;
  v43 = 0;
  Privileges = 0LL;
  v9 = KeGetCurrentThread()->$86A1A36C0FEBA810544B2F2B35F40C82::gap0[10];
  v37 = v9;
  v10 = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v38 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( !v38 )
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    v13 = -1073741431;
    v36 = -1073741431;
LABEL_5:
    v14 = 0;
    v15 = 0;
    goto LABEL_82;
  }
  v13 = CmObReferenceObjectByHandle(v7, 2, v12, v9, (__int64)&Object, (__int64)&v47);
  v36 = v13;
  if ( v13 == -1073741790 )
  {
    SeCaptureSubjectContext(&SubjectContext);
    v10 = 1;
    if ( !CmDoVirtualTest((__int64)&SubjectContext, (__int64)&v43) )
    {
      v36 = -1073741790;
      v14 = 0;
      v15 = 0;
      goto LABEL_82;
    }
    v13 = CmObReferenceObjectByHandle(v7, 131097, v16, v9, (__int64)&Object, (__int64)&v47);
    v36 = v13;
    if ( v13 < 0 )
      goto LABEL_5;
    if ( !(unsigned __int8)CmKeyBodyNeedsVirtualImage(Object) )
    {
      v13 = -1073741790;
      v36 = -1073741790;
      v14 = 0;
      v15 = 0;
      goto LABEL_82;
    }
    v8 = 1;
    v35 = 1;
  }
  v10 = v8;
  if ( v13 < 0 )
    goto LABEL_5;
  if ( CmpTraceRoutine && Object )
    v48 = *((_QWORD *)Object + 1);
  if ( v9 != 1 )
  {
    DestinationString = *ValueName;
    v42 = 0LL;
    v19 = DataSize;
    v20 = Src;
    goto LABEL_30;
  }
  if ( (unsigned __int64)ValueName >= 0x7FFFFFFF0000LL )
    ValueName = (PUNICODE_STRING)0x7FFFFFFF0000LL;
  LODWORD(v61) = *(_DWORD *)&ValueName->Length;
  *((_QWORD *)&v61 + 1) = ValueName->Buffer;
  DestinationString = (UNICODE_STRING)v61;
  DestinationString.MaximumLength = v61;
  Length = v61;
  if ( (_WORD)v61 )
  {
    if ( ((__int64)DestinationString.Buffer & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v18 = (wchar_t *)((char *)DestinationString.Buffer + (unsigned __int16)v61);
    if ( (unsigned __int64)v18 > 0x7FFFFFFF0000LL || v18 < DestinationString.Buffer )
    {
      MEMORY[0x7FFFFFFF0000] = 0;
      Length = DestinationString.Length;
    }
  }
  v19 = DataSize;
  v20 = Src;
  if ( DataSize && ((unsigned __int64)Src + DataSize > 0x7FFFFFFF0000LL || (char *)Src + DataSize < Src) )
  {
    MEMORY[0x7FFFFFFF0000] = 0;
LABEL_30:
    Length = DestinationString.Length;
  }
  if ( Length > 0x7FFFu || (DestinationString.Length & 1) != 0 || v19 > 0x7FFFF000 )
  {
    v13 = -1073741811;
    v36 = -1073741811;
    v10 = v8;
    v14 = 0;
    v15 = 0;
    goto LABEL_82;
  }
  v21 = Length;
  v22 = (Length + 7) & 0xFFFFFFF8;
  v23 = v22 + v19;
  if ( v22 + v19 < v19 )
  {
    v13 = -1073741811;
    v36 = -1073741811;
    v10 = v8;
    v14 = 0;
    v15 = 0;
    goto LABEL_82;
  }
  if ( (unsigned __int8)CmpDoesBufferRequireCapturing((unsigned int)v37, DestinationString.Buffer)
    || (unsigned __int8)CmpDoesBufferRequireCapturing((unsigned int)v37, v20) )
  {
    if ( v23 )
    {
      if ( v23 <= 0x40 )
        goto LABEL_56;
      if ( v19 > 0x40 )
      {
        v21 = v22 + v19;
        if ( Length <= 0x40u )
          v21 = v19;
      }
      else if ( Length <= 0x40u && v19 < Length )
      {
        v21 = v19;
      }
      if ( v21 )
      {
        Privileges = (PPRIVILEGE_SET)CmpAllocateTransientPoolWithQuotaTag(v24, v21, 0x6E566D43u);
        if ( !Privileges )
        {
          v13 = -1073741670;
          v36 = -1073741670;
          v10 = v35;
          v14 = 0;
          v15 = 0;
          goto LABEL_82;
        }
        Length = DestinationString.Length;
        if ( v21 == v19 )
        {
          v42 = v64;
          v25 = Privileges;
        }
        else
        {
          v42 = Privileges;
          if ( v21 == DestinationString.Length )
            v25 = (PPRIVILEGE_SET)v64;
          else
            v25 = (PPRIVILEGE_SET)((char *)Privileges + v22);
        }
      }
      else
      {
LABEL_56:
        v42 = v64;
        v25 = (PPRIVILEGE_SET)&v64[v22];
      }
    }
    else
    {
      v25 = v50;
    }
    if ( Length )
    {
      v26 = Length;
      v27 = (wchar_t *)v42;
      memmove(v42, DestinationString.Buffer, v26);
      DestinationString.Buffer = v27;
      Length = DestinationString.Length;
    }
    else
    {
      DestinationString.Buffer = 0LL;
    }
    if ( v19 )
    {
      memmove(v25, v20, v19);
      Src = v25;
      Length = DestinationString.Length;
    }
    else
    {
      Src = 0LL;
    }
  }
  if ( Length )
  {
    do
    {
      if ( DestinationString.Buffer[((unsigned __int64)Length >> 1) - 1] )
        break;
      v28 = Length == 2;
      Length -= 2;
      DestinationString.Length = Length;
    }
    while ( !v28 );
  }
  if ( (*(_DWORD *)(*((_QWORD *)Object + 1) + 4LL) & 0x80u) != 0 )
  {
    v13 = -1073741790;
    v36 = -1073741790;
    v10 = v35;
    v14 = 0;
    v15 = 0;
    goto LABEL_82;
  }
  v29 = KeGetCurrentThread();
  --v29->KernelApcDisable;
  if ( !CmpCallBackCount || CmpIsRegistryLockAcquired() )
  {
    v31 = Src;
    v14 = 0;
    goto LABEL_77;
  }
  v53 = Object;
  p_DestinationString = &DestinationString;
  v55 = __PAIR64__(v44, v46);
  v31 = Src;
  v56 = Src;
  LODWORD(v57) = v19;
  LOBYTE(v30) = 1;
  v32 = CmpCallCallBacksEx(1, (unsigned int)&v53, 0, v30, 16, (__int64)Object, (__int64)v49);
  v13 = v32;
  if ( v32 >= 0 )
  {
    v14 = 1;
LABEL_77:
    if ( !v35
      || (v13 = CmKeyBodyReplicateToVirtual(&Object, (unsigned __int8)v37, 2LL, &SubjectContext, &v43),
          v36 = v13,
          v10 = v35,
          v13 >= 0) )
    {
      v13 = CmSetValueKey(Object, &DestinationString, v44, v31, v19, (__int64)v51, (v47 & 4) != 0);
      v36 = v13;
      v10 = v35;
    }
    goto LABEL_81;
  }
  if ( v32 == -1073740541 )
    v13 = 0;
  v36 = v13;
  v10 = v35;
  v14 = 0;
LABEL_81:
  v15 = 1;
LABEL_82:
  if ( v10 )
    SeReleaseSubjectContext(&SubjectContext);
  if ( v14 )
  {
    v13 = CmPostCallbackNotificationEx(16, (_DWORD)Object, v13, (unsigned int)&v53, 0LL, (__int64)v49);
    v36 = v13;
  }
  if ( v15 )
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    v13 = v36;
  }
  if ( Object )
    ObfDereferenceObject(Object);
  if ( CmpTraceRoutine )
  {
    v33 = v48;
    LOBYTE(v33) = 14;
    CmpTraceRoutine(v33, v63, (unsigned int)v13, 0LL, v48, &DestinationString);
  }
  if ( Privileges )
    CmSiFreeMemory(Privileges);
  if ( v38 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    v13 = v36;
  }
  CmCleanupThreadInfo(v62);
  return v13;
}
