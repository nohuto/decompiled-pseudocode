/*
 * XREFs of NtSetInformationKey @ 0x1406B8050
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14003DF60 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ExIsResourceAcquiredSharedLite @ 0x14003F300 (ExIsResourceAcquiredSharedLite.c)
 *     CmDoVirtualTest @ 0x1400F40D0 (CmDoVirtualTest.c)
 *     EtwGetKernelTraceTimestamp @ 0x1401094D0 (EtwGetKernelTraceTimestamp.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     SeCaptureSubjectContext @ 0x1405DE350 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1405F3AE0 (SeReleaseSubjectContext.c)
 *     ObReferenceObjectByHandle @ 0x1405FB4B0 (ObReferenceObjectByHandle.c)
 *     CmpReleaseShutdownRundown @ 0x1405FF930 (CmpReleaseShutdownRundown.c)
 *     CmpAcquireShutdownRundown @ 0x1405FFA40 (CmpAcquireShutdownRundown.c)
 *     CmPostCallbackNotification @ 0x14060072C (CmPostCallbackNotification.c)
 *     CmpCallCallBacks @ 0x1406007F8 (CmpCallCallBacks.c)
 *     CmSetKeyFlags @ 0x14082937C (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x1408297E0 (CmSetLastWriteTimeKey.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x14082B300 (CmKeyBodyNeedsVirtualImage.c)
 *     CmKeyBodyReplicateToVirtual @ 0x14082B648 (CmKeyBodyReplicateToVirtual.c)
 */

NTSTATUS __stdcall NtSetInformationKey(
        HANDLE KeyHandle,
        KEY_SET_INFORMATION_CLASS KeySetInformationClass,
        PVOID KeySetInformation,
        ULONG KeySetInformationLength)
{
  _QWORD *v6; // rdi
  char v7; // r13
  char v8; // r15
  __int64 v9; // rcx
  KPROCESSOR_MODE PreviousMode; // bl
  char *v11; // rdx
  ACCESS_MASK v12; // edx
  int v13; // ebx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v15; // r8
  char v16; // r12
  char v17; // r14
  __int64 v18; // r13
  __int32 v20; // r14d
  __int32 v21; // r14d
  __int32 v22; // r14d
  __int64 v23; // r8
  __int64 v24; // rdx
  int v25; // eax
  char v26; // [rsp+40h] [rbp-128h]
  unsigned __int8 v27; // [rsp+41h] [rbp-127h]
  char v28; // [rsp+45h] [rbp-123h]
  __int64 v29; // [rsp+48h] [rbp-120h]
  PVOID v30; // [rsp+50h] [rbp-118h] BYREF
  __int64 v31; // [rsp+58h] [rbp-110h] BYREF
  ULONG v32; // [rsp+60h] [rbp-108h]
  int v33; // [rsp+64h] [rbp-104h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-100h]
  _QWORD v35[2]; // [rsp+70h] [rbp-F8h] BYREF
  PVOID v36; // [rsp+80h] [rbp-E8h] BYREF
  PVOID v37; // [rsp+88h] [rbp-E0h] BYREF
  PVOID Object; // [rsp+90h] [rbp-D8h] BYREF
  PVOID v39; // [rsp+98h] [rbp-D0h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+A8h] [rbp-C0h] BYREF
  _QWORD v41[7]; // [rsp+C8h] [rbp-A0h] BYREF
  LARGE_INTEGER v42[4]; // [rsp+100h] [rbp-68h] BYREF

  v32 = KeySetInformationLength;
  Handle = KeyHandle;
  memset(v42, 0, sizeof(v42));
  v29 = 0LL;
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
    EtwGetKernelTraceTimestamp(v42, 0x20000u);
  v6 = 0LL;
  v30 = 0LL;
  v7 = 0;
  memset(v41, 0, sizeof(v41));
  v35[1] = v35;
  v35[0] = v35;
  v33 = 0;
  v8 = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v28 = CmpAcquireShutdownRundown();
  if ( !v28 )
  {
    v13 = -1073741431;
    goto LABEL_42;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v27 = PreviousMode;
  if ( KeySetInformationClass == KeySetHandleTagsInformation )
    goto LABEL_5;
  if ( KeySetInformationClass )
  {
    if ( KeySetInformationClass != KeyWow64FlagsInformation )
    {
      if ( KeySetInformationClass == KeyControlFlagsInformation
        || (v9 = (unsigned int)(KeySetInformationClass - 3), KeySetInformationClass == KeySetVirtualizationInformation) )
      {
LABEL_5:
        v26 = 0;
LABEL_6:
        v9 = 4LL;
        goto LABEL_7;
      }
      if ( KeySetInformationClass != KeySetDebugInformation )
      {
        if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7)
          && (v9 = (__int64)Handle) != 0
          && ObReferenceObjectByHandle(
               Handle,
               0,
               (POBJECT_TYPE)CmKeyObjectType,
               KeGetCurrentThread()->PreviousMode,
               &v36,
               0LL) >= 0 )
        {
          v18 = *((_QWORD *)v36 + 1);
          ObfDereferenceObject(v36);
        }
        else
        {
          v18 = 0LL;
        }
        v13 = -1073741821;
        v6 = v30;
        v16 = 0;
        v17 = 0;
        goto LABEL_27;
      }
    }
    v26 = 1;
    goto LABEL_6;
  }
  v9 = 8LL;
  v26 = 1;
LABEL_7:
  if ( v32 != (_DWORD)v9 )
  {
    if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7)
      && (v9 = (__int64)Handle) != 0
      && ObReferenceObjectByHandle(
           Handle,
           0,
           (POBJECT_TYPE)CmKeyObjectType,
           KeGetCurrentThread()->PreviousMode,
           &v37,
           0LL) >= 0 )
    {
      v18 = *((_QWORD *)v37 + 1);
      ObfDereferenceObject(v37);
    }
    else
    {
      v18 = 0LL;
    }
    v13 = -1073741820;
    v6 = v30;
    v16 = 0;
    v17 = 0;
    goto LABEL_27;
  }
  v31 = 0LL;
  if ( PreviousMode )
  {
    v11 = (char *)KeySetInformation + (unsigned int)v9;
    if ( (unsigned __int64)v11 > 0x7FFFFFFF0000LL || v11 < KeySetInformation )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  memmove(&v31, KeySetInformation, (unsigned int)v9);
  if ( KeySetInformationClass == KeySetHandleTagsInformation )
    v12 = 0;
  else
    v12 = 2;
  v13 = ObReferenceObjectByHandle(Handle, v12, (POBJECT_TYPE)CmKeyObjectType, PreviousMode, &Object, 0LL);
  v6 = Object;
  v30 = Object;
  if ( v13 != -1073741790 )
  {
LABEL_15:
    v8 = v7;
    if ( v13 >= 0 )
    {
      if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) && v6 )
        v29 = v6[1];
      if ( KeySetInformationClass != KeySetHandleTagsInformation )
      {
        v9 = v6[1];
        if ( (*(_DWORD *)(v9 + 8) & 0x80u) != 0 )
        {
          v13 = -1073741790;
          v8 = v7;
          v16 = 0;
          v17 = 0;
          goto LABEL_26;
        }
        if ( (*(_DWORD *)(*(_QWORD *)(v9 + 32) + 160LL) & 0x100000) != 0 )
        {
          v13 = -1073741790;
          v8 = v7;
          v16 = 0;
          v17 = 0;
          goto LABEL_26;
        }
      }
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      if ( !CmpCallBackCount || ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
      {
        v6 = v30;
        v16 = 0;
      }
      else
      {
        v6 = v30;
        v41[0] = v30;
        LODWORD(v41[1]) = KeySetInformationClass;
        v41[2] = KeySetInformation;
        LODWORD(v41[3]) = v32;
        v13 = CmpCallCallBacks(3u, (__int64)v41, v15, 0x12u, (__int64)v30, (__int64)v35);
        if ( v13 < 0 )
        {
          if ( v13 == -1073740541 )
            v13 = 0;
          v16 = 0;
          goto LABEL_90;
        }
        v16 = 1;
      }
      if ( v7 )
      {
        v13 = CmKeyBodyReplicateToVirtual(&v30, v27, 2LL, &SubjectContext, &v33);
        v8 = v7;
        v6 = v30;
        if ( v13 < 0 )
          goto LABEL_25;
      }
      v8 = v7;
      if ( KeySetInformationClass == KeySetHandleTagsInformation )
      {
        *((_WORD *)v6 + 25) = v31;
        v13 = 0;
LABEL_25:
        v17 = 1;
LABEL_26:
        v18 = v29;
        goto LABEL_27;
      }
      if ( KeySetInformationClass )
      {
        v20 = KeySetInformationClass - 1;
        if ( v20 )
        {
          v21 = v20 - 1;
          if ( v21 )
          {
            v22 = v21 - 1;
            if ( v22 )
            {
              if ( v22 != 1 )
                goto LABEL_25;
              v23 = (unsigned int)v31;
              v24 = 4LL;
            }
            else
            {
              v23 = (unsigned int)v31;
              v24 = 3LL;
            }
          }
          else
          {
            v23 = (unsigned int)v31;
            v24 = 2LL;
          }
        }
        else
        {
          v23 = (unsigned int)v31;
          v24 = 1LL;
        }
        v25 = CmSetKeyFlags(v6, v24, v23);
      }
      else
      {
        v25 = CmSetLastWriteTimeKey(v6, &v31);
      }
      v13 = v25;
LABEL_90:
      v8 = v7;
      goto LABEL_25;
    }
    goto LABEL_42;
  }
  if ( !v26 )
  {
    v13 = -1073741790;
    v16 = 0;
    v17 = 0;
    v18 = 0LL;
    goto LABEL_27;
  }
  SeCaptureSubjectContext(&SubjectContext);
  v8 = 1;
  if ( !CmDoVirtualTest((__int64)&SubjectContext, (__int64)&v33) )
  {
    v13 = -1073741790;
    v16 = 0;
    v17 = 0;
    v18 = 0LL;
    goto LABEL_27;
  }
  v13 = ObReferenceObjectByHandle(Handle, 0x20019u, (POBJECT_TYPE)CmKeyObjectType, v27, &v39, 0LL);
  v6 = v39;
  v30 = v39;
  if ( v13 < 0 )
  {
LABEL_42:
    v16 = 0;
    v17 = 0;
    v18 = 0LL;
    goto LABEL_27;
  }
  if ( (unsigned __int8)CmKeyBodyNeedsVirtualImage(v39) )
  {
    v13 = 0;
    v7 = 1;
    goto LABEL_15;
  }
  v13 = -1073741790;
  v16 = 0;
  v17 = 0;
  v18 = 0LL;
LABEL_27:
  if ( v8 )
    SeReleaseSubjectContext(&SubjectContext);
  if ( v16 )
    v13 = CmPostCallbackNotification(0x12u, (__int64)v6, v13, (__int64)v41, v35);
  if ( v17 )
    KeLeaveCriticalRegion();
  if ( v6 )
    ObfDereferenceObject(v6);
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
  {
    LOBYTE(v9) = 20;
    (*(void (__fastcall **)(__int64, LARGE_INTEGER *, _QWORD, _QWORD, __int64, _QWORD))((char *)&NlsMbCodePageTag + 7))(
      v9,
      v42,
      (unsigned int)v13,
      0LL,
      v18,
      0LL);
  }
  if ( v28 )
    CmpReleaseShutdownRundown();
  return v13;
}
