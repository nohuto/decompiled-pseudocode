/*
 * XREFs of NtSetInformationKey @ 0x1406981A0
 * Callers:
 *     <none>
 * Callees:
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
 *     SeReleaseSubjectContext @ 0x1405E2240 (SeReleaseSubjectContext.c)
 *     CmpCallCallBacksEx @ 0x1405E6AE0 (CmpCallCallBacksEx.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     SeCaptureSubjectContext @ 0x140632AA0 (SeCaptureSubjectContext.c)
 *     CmSetKeyFlags @ 0x1407F061C (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x1407F0AAC (CmSetLastWriteTimeKey.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x1407F2B48 (CmKeyBodyNeedsVirtualImage.c)
 *     CmKeyBodyReplicateToVirtual @ 0x1407F2E74 (CmKeyBodyReplicateToVirtual.c)
 */

NTSTATUS __stdcall NtSetInformationKey(
        HANDLE KeyHandle,
        KEY_SET_INFORMATION_CLASS KeySetInformationClass,
        PVOID KeySetInformation,
        ULONG KeySetInformationLength)
{
  char v7; // r14
  char v8; // si
  struct _KTHREAD *CurrentThread; // rax
  KEY_SET_INFORMATION_CLASS v10; // r12d
  unsigned __int64 v11; // rcx
  int v12; // ebx
  _QWORD *v13; // rdi
  __int64 v14; // r14
  char PreviousMode; // dl
  char v16; // r12
  char *v17; // r8
  ACCESS_MASK v18; // edx
  struct _KTHREAD *v19; // rax
  int v20; // eax
  char v22; // [rsp+40h] [rbp-178h]
  unsigned __int8 v23; // [rsp+41h] [rbp-177h]
  char v24; // [rsp+42h] [rbp-176h]
  __int64 v25; // [rsp+48h] [rbp-170h]
  PVOID v26; // [rsp+50h] [rbp-168h] BYREF
  __int64 v27; // [rsp+58h] [rbp-160h] BYREF
  ULONG v28; // [rsp+60h] [rbp-158h]
  int v29; // [rsp+64h] [rbp-154h] BYREF
  KEY_SET_INFORMATION_CLASS v30; // [rsp+68h] [rbp-150h]
  _SLIST_ENTRY v31; // [rsp+70h] [rbp-148h] BYREF
  PVOID Object; // [rsp+80h] [rbp-138h] BYREF
  PVOID v33; // [rsp+88h] [rbp-130h] BYREF
  PVOID v34; // [rsp+90h] [rbp-128h] BYREF
  PVOID v35[3]; // [rsp+A0h] [rbp-118h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+B8h] [rbp-100h] BYREF
  _QWORD v37[3]; // [rsp+D8h] [rbp-E0h] BYREF
  __int64 v38; // [rsp+F0h] [rbp-C8h]
  __int64 v39; // [rsp+F8h] [rbp-C0h]
  __int64 v40; // [rsp+100h] [rbp-B8h]
  __int64 v41; // [rsp+108h] [rbp-B0h]
  PVOID v42; // [rsp+110h] [rbp-A8h] BYREF
  __int64 v43; // [rsp+118h] [rbp-A0h]
  __int64 *v44; // [rsp+120h] [rbp-98h]
  __int64 v45; // [rsp+128h] [rbp-90h]
  __int64 v46; // [rsp+130h] [rbp-88h]
  __int64 v47; // [rsp+138h] [rbp-80h]
  __int64 v48; // [rsp+140h] [rbp-78h]
  PVOID v49[2]; // [rsp+148h] [rbp-70h] BYREF
  LARGE_INTEGER v50[4]; // [rsp+158h] [rbp-60h] BYREF

  v28 = KeySetInformationLength;
  v30 = KeySetInformationClass;
  memset(v50, 0, sizeof(v50));
  v25 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp(v50, 0x20000u);
  v24 = 0;
  v26 = 0LL;
  v7 = 0;
  v42 = 0LL;
  v43 = 0LL;
  v44 = 0LL;
  v45 = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  *((_QWORD *)&v31.Next + 1) = &v31;
  v31.Next = &v31;
  CmpInitializeThreadInfo(v49);
  v29 = 0;
  v8 = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  LOBYTE(v10) = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  v22 = v10;
  if ( !(_BYTE)v10 )
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    v12 = -1073741431;
    v13 = v26;
    v14 = 0LL;
    LOBYTE(KeyHandle) = 0;
    goto LABEL_65;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v23 = PreviousMode;
  v11 = 0x140000000uLL;
  switch ( KeySetInformationClass )
  {
    case KeyWriteTimeInformation:
      v11 = 8LL;
      goto LABEL_9;
    case KeyWow64FlagsInformation:
    case KeySetDebugInformation:
      v11 = 4LL;
LABEL_9:
      v16 = 1;
      goto LABEL_10;
    case KeyControlFlagsInformation:
    case KeySetVirtualizationInformation:
    case KeySetHandleTagsInformation:
      v11 = 4LL;
      v16 = 0;
LABEL_10:
      if ( v28 != (_DWORD)v11 )
      {
        if ( CmpTraceRoutine
          && KeyHandle
          && ObReferenceObjectByHandle(
               KeyHandle,
               0,
               (POBJECT_TYPE)CmKeyObjectType,
               KeGetCurrentThread()->PreviousMode,
               &Object,
               0LL) >= 0 )
        {
          v25 = *((_QWORD *)Object + 1);
          ObfDereferenceObject(Object);
        }
        v12 = -1073741820;
        v13 = v26;
        goto LABEL_62;
      }
      v27 = 0LL;
      if ( PreviousMode )
      {
        v17 = (char *)KeySetInformation + (unsigned int)v11;
        if ( (unsigned __int64)v17 > 0x7FFFFFFF0000LL || v17 < KeySetInformation )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      memmove(&v27, KeySetInformation, (unsigned int)v11);
      v18 = 0;
      if ( KeySetInformationClass != KeySetHandleTagsInformation )
        v18 = 2;
      v12 = ObReferenceObjectByHandle(KeyHandle, v18, (POBJECT_TYPE)CmKeyObjectType, v23, &v33, 0LL);
      v13 = v33;
      v26 = v33;
      if ( v12 != -1073741790 )
        goto LABEL_31;
      if ( !v16 )
        goto LABEL_24;
      SeCaptureSubjectContext(&SubjectContext);
      v8 = 1;
      if ( CmDoVirtualTest((__int64)&SubjectContext, (__int64)&v29) )
      {
        v12 = ObReferenceObjectByHandle(KeyHandle, 0x20019u, (POBJECT_TYPE)CmKeyObjectType, v23, &v34, 0LL);
        v13 = v34;
        v26 = v34;
        if ( v12 < 0 )
          goto LABEL_24;
        if ( !(unsigned __int8)CmKeyBodyNeedsVirtualImage(v34) )
        {
          v12 = -1073741790;
          v14 = 0LL;
          LOBYTE(KeyHandle) = 0;
          goto LABEL_64;
        }
        v12 = 0;
        v7 = 1;
LABEL_31:
        v8 = v7;
        if ( v12 < 0 )
        {
LABEL_24:
          v14 = 0LL;
          LOBYTE(KeyHandle) = 0;
          goto LABEL_64;
        }
        if ( CmpTraceRoutine && v13 )
          v25 = v13[1];
        v10 = v30;
        if ( v30 == KeySetHandleTagsInformation
          || (v11 = v13[1], (*(_DWORD *)(v11 + 4) & 0x80u) == 0)
          && (*(_DWORD *)(*(_QWORD *)(v11 + 24) + 160LL) & 0x100000) == 0 )
        {
          v19 = KeGetCurrentThread();
          --v19->KernelApcDisable;
          v24 = 1;
          if ( !CmpCallBackCount || CmpIsRegistryLockAcquired() )
          {
            v13 = v26;
            LOBYTE(KeyHandle) = 0;
          }
          else
          {
            v13 = v26;
            v42 = v26;
            LODWORD(v43) = v10;
            v44 = &v27;
            LODWORD(v45) = v28;
            v20 = CmpCallCallBacksEx(3u, (__int64)&v42, 0LL, 1, 0x12u, (__int64)v26, &v31);
            v12 = v20;
            if ( v20 < 0 )
            {
              if ( v20 == -1073740541 )
                v12 = 0;
              goto LABEL_61;
            }
            LOBYTE(KeyHandle) = 1;
          }
          if ( !v7
            || (v12 = CmKeyBodyReplicateToVirtual(&v26, v23, 2LL, &SubjectContext, &v29), v8 = v7, v13 = v26, v12 >= 0) )
          {
            v8 = v7;
            switch ( (int)v13 )
            {
              case 0:
                v12 = CmSetLastWriteTimeKey(v13, &v27);
                v8 = v7;
                goto LABEL_63;
              case 1:
                v12 = CmSetKeyFlags(v13, 1LL, (unsigned int)v27);
                v8 = v7;
                goto LABEL_63;
              case 2:
                v12 = CmSetKeyFlags(v13, 2LL, (unsigned int)v27);
                v8 = v7;
                goto LABEL_63;
              case 3:
                v12 = CmSetKeyFlags(v13, 3LL, (unsigned int)v27);
                v8 = v7;
                goto LABEL_63;
              case 4:
                v12 = CmSetKeyFlags(v13, 4LL, (unsigned int)v27);
                v8 = v7;
                goto LABEL_63;
              case 5:
                *((_WORD *)v13 + 25) = v27;
                v12 = 0;
                v8 = v7;
                goto LABEL_63;
              default:
                goto LABEL_55;
            }
          }
          goto LABEL_63;
        }
        v12 = -1073741790;
LABEL_61:
        v8 = v7;
LABEL_62:
        LOBYTE(KeyHandle) = 0;
LABEL_63:
        v14 = v25;
        goto LABEL_64;
      }
      v12 = -1073741790;
      v14 = 0LL;
      LOBYTE(KeyHandle) = 0;
LABEL_64:
      LOBYTE(v10) = v22;
LABEL_65:
      if ( v8 )
        SeReleaseSubjectContext(&SubjectContext);
      if ( (_BYTE)KeyHandle && CmpCallBackCount && !CmpIsRegistryLockAcquired() && v31.Next != &v31 )
      {
        v39 = 0LL;
        v40 = 0LL;
        v41 = 0LL;
        v37[0] = v13;
        v37[1] = (unsigned int)v12;
        v38 = (unsigned int)v12;
        v37[2] = &v42;
        v35[1] = v37;
        v35[2] = 0LL;
        CmpCallCallBacksEx(0x12u, (__int64)v37, 0LL, 0, 0x12u, (__int64)v13, &v31);
        v12 = v38;
      }
      if ( v24 )
      {
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        v13 = v26;
      }
      if ( v13 )
        ObfDereferenceObject(v13);
      if ( CmpTraceRoutine )
      {
        LOBYTE(v11) = 20;
        CmpTraceRoutine(v11, v50, (unsigned int)v12, 0LL, v14, 0LL);
      }
      if ( (_BYTE)v10 )
      {
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      }
      CmCleanupThreadInfo(v49);
      return v12;
    default:
LABEL_55:
      if ( CmpTraceRoutine
        && KeyHandle
        && ObReferenceObjectByHandle(
             KeyHandle,
             0,
             (POBJECT_TYPE)CmKeyObjectType,
             KeGetCurrentThread()->PreviousMode,
             v35,
             0LL) >= 0 )
      {
        v14 = *((_QWORD *)v35[0] + 1);
        ObfDereferenceObject(v35[0]);
        v12 = -1073741821;
        v13 = v26;
        LOBYTE(KeyHandle) = 0;
      }
      else
      {
        v14 = 0LL;
        v12 = -1073741821;
        v13 = v26;
        LOBYTE(KeyHandle) = 0;
      }
      goto LABEL_65;
  }
}
