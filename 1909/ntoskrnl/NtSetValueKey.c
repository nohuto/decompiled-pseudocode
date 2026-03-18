/*
 * XREFs of NtSetValueKey @ 0x140630190
 * Callers:
 *     ExpWatchProductTypeWork @ 0x1406E5580 (ExpWatchProductTypeWork.c)
 *     ExUpdateLicenseRegistry @ 0x1406E5BE0 (ExUpdateLicenseRegistry.c)
 *     ExpWatchLicenseInfoWork @ 0x14090A590 (ExpWatchLicenseInfoWork.c)
 *     IopStoreSystemPartitionInformation @ 0x1409F5680 (IopStoreSystemPartitionInformation.c)
 *     ExpUpdateProductSuiteTypeInRegistry @ 0x140A0AD8C (ExpUpdateProductSuiteTypeInRegistry.c)
 *     CmpAddDockingInfo @ 0x140A0BC54 (CmpAddDockingInfo.c)
 *     InitSafeBoot @ 0x140A384C0 (InitSafeBoot.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ExIsResourceAcquiredSharedLite @ 0x14003F300 (ExIsResourceAcquiredSharedLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtection_0 @ 0x140043C20 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140043CA0 (ExAcquireRundownProtection_0.c)
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
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
 *     CmpCallCallBacksEx @ 0x1405F8BA0 (CmpCallCallBacksEx.c)
 *     CmObReferenceObjectByHandle @ 0x1405FFB10 (CmObReferenceObjectByHandle.c)
 *     CmpDoesBufferRequireCapturing @ 0x1406003F0 (CmpDoesBufferRequireCapturing.c)
 *     CmSetValueKey @ 0x140630930 (CmSetValueKey.c)
 *     CmPostCallbackNotificationEx @ 0x14064DA30 (CmPostCallbackNotificationEx.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x14082B300 (CmKeyBodyNeedsVirtualImage.c)
 *     CmKeyBodyReplicateToVirtual @ 0x14082B648 (CmKeyBodyReplicateToVirtual.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913920 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtSetValueKey(
        HANDLE KeyHandle,
        PUNICODE_STRING ValueName,
        ULONG TitleIndex,
        ULONG Type,
        PVOID Data,
        ULONG DataSize)
{
  char v8; // r13
  KPROCESSOR_MODE PreviousMode; // r14
  char v10; // si
  struct _KTHREAD *CurrentThread; // rax
  __int64 v12; // r8
  BOOLEAN v13; // r15
  unsigned __int16 Length; // di
  wchar_t *v15; // rdx
  ULONG v16; // ebx
  void *v17; // r12
  unsigned int v18; // r15d
  unsigned int v19; // r14d
  unsigned int v20; // esi
  __int64 v21; // rcx
  PPRIVILEGE_SET v22; // rsi
  size_t v23; // r8
  wchar_t *v24; // rdi
  char v25; // r13
  char v26; // bl
  struct _KTHREAD *v27; // rax
  ULONG v28; // esi
  void *v29; // r14
  __int64 v31; // r8
  NTSTATUS v32; // edi
  bool v33; // zf
  __int64 v34; // rcx
  int v35; // [rsp+30h] [rbp-1B8h]
  BOOLEAN v36; // [rsp+40h] [rbp-1A8h]
  char v37; // [rsp+41h] [rbp-1A7h]
  NTSTATUS v38; // [rsp+44h] [rbp-1A4h]
  KPROCESSOR_MODE v39; // [rsp+48h] [rbp-1A0h]
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-198h] BYREF
  PVOID Object; // [rsp+60h] [rbp-188h] BYREF
  void *Src; // [rsp+68h] [rbp-180h]
  ULONG v43; // [rsp+70h] [rbp-178h]
  void *v44; // [rsp+78h] [rbp-170h]
  int v45; // [rsp+80h] [rbp-168h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+88h] [rbp-160h]
  ULONG v47; // [rsp+90h] [rbp-158h]
  __int64 v48; // [rsp+98h] [rbp-150h] BYREF
  int v49[2]; // [rsp+A0h] [rbp-148h]
  __int64 v50; // [rsp+A8h] [rbp-140h]
  _QWORD v51[2]; // [rsp+B0h] [rbp-138h] BYREF
  __int128 v52; // [rsp+C0h] [rbp-128h]
  struct _PRIVILEGE_SET *v53; // [rsp+D0h] [rbp-118h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+D8h] [rbp-110h] BYREF
  _QWORD v55[8]; // [rsp+100h] [rbp-E8h] BYREF
  LARGE_INTEGER v56[4]; // [rsp+140h] [rbp-A8h] BYREF
  _BYTE v57[64]; // [rsp+160h] [rbp-88h] BYREF

  v43 = Type;
  v47 = TitleIndex;
  *(_QWORD *)v49 = KeyHandle;
  Src = Data;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v48 = 0LL;
  memset(v56, 0, sizeof(v56));
  v50 = 0LL;
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
    EtwGetKernelTraceTimestamp(v56, 0x20000u);
  Object = 0LL;
  v8 = 0;
  v37 = 0;
  v51[1] = v51;
  v51[0] = v51;
  memset(v55, 0, sizeof(v55));
  RtlInitUnicodeString(&DestinationString, 0LL);
  v44 = 0LL;
  v53 = 0LL;
  v45 = 0;
  Privileges = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v39 = PreviousMode;
  v10 = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v13 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  v36 = v13;
  if ( !v13 )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v32 = -1073741431;
    v38 = -1073741431;
LABEL_89:
    v25 = 0;
    v26 = 0;
    goto LABEL_71;
  }
  v32 = CmObReferenceObjectByHandle(KeyHandle, 2u, v12, PreviousMode, &Object, &v48);
  v38 = v32;
  if ( v32 != -1073741790 )
  {
LABEL_6:
    v10 = v8;
    if ( v32 < 0 )
      goto LABEL_89;
    if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) && Object )
      v50 = *((_QWORD *)Object + 1);
    if ( PreviousMode == 1 )
    {
      v52 = 0uLL;
      if ( (unsigned __int64)ValueName >= 0x7FFFFFFF0000LL )
        ValueName = (PUNICODE_STRING)0x7FFFFFFF0000LL;
      LODWORD(v52) = *(_DWORD *)&ValueName->Length;
      *((_QWORD *)&v52 + 1) = ValueName->Buffer;
      DestinationString = (UNICODE_STRING)v52;
      DestinationString.MaximumLength = v52;
      Length = v52;
      if ( (_WORD)v52 )
      {
        if ( ((__int64)DestinationString.Buffer & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v15 = (wchar_t *)((char *)DestinationString.Buffer + (unsigned __int16)v52);
        if ( (unsigned __int64)v15 > 0x7FFFFFFF0000LL || v15 < DestinationString.Buffer )
        {
          MEMORY[0x7FFFFFFF0000] = 0;
          Length = DestinationString.Length;
        }
      }
      v16 = DataSize;
      v17 = Src;
      if ( !DataSize || (unsigned __int64)Src + DataSize <= 0x7FFFFFFF0000LL && (char *)Src + DataSize >= Src )
      {
LABEL_18:
        if ( Length > 0x7FFFu || (DestinationString.Length & 1) != 0 || v16 > 0x7FFFF000 )
        {
          v32 = -1073741811;
          v38 = -1073741811;
          v10 = v8;
          v25 = 0;
          v26 = 0;
          goto LABEL_71;
        }
        v18 = Length;
        v19 = (Length + 7) & 0xFFFFFFF8;
        v20 = v19 + v16;
        if ( v19 + v16 < v16 )
        {
          v32 = -1073741811;
          v38 = -1073741811;
          v10 = v8;
          v13 = v36;
          v25 = 0;
          v26 = 0;
          goto LABEL_71;
        }
        if ( CmpDoesBufferRequireCapturing(v39, (__int64)DestinationString.Buffer)
          || CmpDoesBufferRequireCapturing(v39, (__int64)v17) )
        {
          if ( v20 )
          {
            if ( v20 <= 0x40 )
              goto LABEL_25;
            if ( v16 <= 0x40 )
            {
              if ( Length <= 0x40u && v16 < Length )
                v18 = v16;
            }
            else
            {
              v18 = Length > 0x40u ? v19 + v16 : v16;
            }
            if ( v18 )
            {
              Privileges = (PPRIVILEGE_SET)CmpAllocateTransientPoolWithQuotaTag(v21, v18, 0x6E566D43u);
              if ( !Privileges )
              {
                v32 = -1073741670;
                v38 = -1073741670;
                v10 = v37;
                v13 = v36;
                v25 = 0;
                v26 = 0;
                goto LABEL_71;
              }
              Length = DestinationString.Length;
              if ( v18 == v16 )
              {
                v44 = v57;
                v22 = Privileges;
              }
              else
              {
                v44 = Privileges;
                if ( v18 == DestinationString.Length )
                  v22 = (PPRIVILEGE_SET)v57;
                else
                  v22 = (PPRIVILEGE_SET)((char *)Privileges + v19);
              }
            }
            else
            {
LABEL_25:
              v44 = v57;
              v22 = (PPRIVILEGE_SET)&v57[v19];
            }
          }
          else
          {
            v22 = v53;
          }
          if ( Length )
          {
            v23 = Length;
            v24 = (wchar_t *)v44;
            memmove(v44, DestinationString.Buffer, v23);
            DestinationString.Buffer = v24;
            Length = DestinationString.Length;
          }
          else
          {
            DestinationString.Buffer = 0LL;
          }
          if ( v16 )
          {
            memmove(v22, v17, v16);
            Src = v22;
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
            v33 = Length == 2;
            Length -= 2;
            DestinationString.Length = Length;
          }
          while ( !v33 );
        }
        if ( (*(_DWORD *)(*((_QWORD *)Object + 1) + 8LL) & 0x80u) != 0 )
        {
          v32 = -1073741790;
          v38 = -1073741790;
          v10 = v37;
          v25 = 0;
          v26 = 0;
          goto LABEL_70;
        }
        v27 = KeGetCurrentThread();
        --v27->KernelApcDisable;
        if ( !CmpCallBackCount || ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
        {
          v29 = Src;
          v25 = 0;
          v28 = v43;
        }
        else
        {
          v55[0] = Object;
          v55[1] = &DestinationString;
          v55[2] = __PAIR64__(v43, v47);
          v28 = v43;
          v29 = Src;
          v55[3] = Src;
          LODWORD(v55[4]) = v16;
          v32 = CmpCallCallBacksEx(1u, (__int64)v55, 0LL, 1, 0x10u, (__int64)Object, (__int64)v51);
          if ( v32 < 0 )
          {
            if ( v32 == -1073740541 )
              v32 = 0;
            v38 = v32;
            v10 = v37;
            v25 = 0;
            goto LABEL_69;
          }
          v25 = 1;
        }
        if ( v37 )
        {
          v32 = CmKeyBodyReplicateToVirtual(&Object, (unsigned __int8)v39, 2LL, &SubjectContext, &v45);
          v38 = v32;
          v10 = v37;
          if ( v32 < 0 )
            goto LABEL_69;
          v28 = v43;
        }
        LOBYTE(v35) = (v48 & 4) != 0;
        v32 = CmSetValueKey(Object, &DestinationString, v28, v29, v16, *(_QWORD *)v49, v35);
        v38 = v32;
        v10 = v37;
LABEL_69:
        v26 = 1;
LABEL_70:
        v13 = v36;
        goto LABEL_71;
      }
      MEMORY[0x7FFFFFFF0000] = 0;
    }
    else
    {
      DestinationString = *ValueName;
      v44 = 0LL;
      v16 = DataSize;
      v17 = Src;
    }
    Length = DestinationString.Length;
    goto LABEL_18;
  }
  SeCaptureSubjectContext(&SubjectContext);
  v10 = 1;
  if ( !CmDoVirtualTest((__int64)&SubjectContext, (__int64)&v45) )
  {
    v32 = -1073741790;
    v38 = -1073741790;
    v25 = 0;
    v26 = 0;
    goto LABEL_71;
  }
  v32 = CmObReferenceObjectByHandle(*(void **)v49, 0x20019u, v31, PreviousMode, &Object, &v48);
  v38 = v32;
  if ( v32 < 0 )
    goto LABEL_89;
  if ( (unsigned __int8)CmKeyBodyNeedsVirtualImage(Object) )
  {
    v8 = 1;
    v37 = 1;
    goto LABEL_6;
  }
  v32 = -1073741790;
  v38 = -1073741790;
  v25 = 0;
  v26 = 0;
LABEL_71:
  if ( v10 )
    SeReleaseSubjectContext(&SubjectContext);
  if ( v25 )
  {
    v32 = CmPostCallbackNotificationEx(16, (_DWORD)Object, v32, (unsigned int)v55, 0LL, (__int64)v51);
    v38 = v32;
  }
  if ( v26 )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v32 = v38;
  }
  if ( Object )
    ObfDereferenceObject(Object);
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
  {
    v34 = v50;
    LOBYTE(v34) = 14;
    (*(void (__fastcall **)(__int64, LARGE_INTEGER *, _QWORD, _QWORD, __int64, UNICODE_STRING *))((char *)&NlsMbCodePageTag
                                                                                                + 7))(
      v34,
      v56,
      (unsigned int)v32,
      0LL,
      v50,
      &DestinationString);
  }
  if ( Privileges )
    CmSiFreeMemory(Privileges);
  if ( v13 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return v38;
  }
  return v32;
}
