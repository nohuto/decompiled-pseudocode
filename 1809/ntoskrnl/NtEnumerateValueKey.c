/*
 * XREFs of NtEnumerateValueKey @ 0x1405D4890
 * Callers:
 *     AdtpObjsInitialize @ 0x140738418 (AdtpObjsInitialize.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14004D320 (ExAcquireRundownProtection_0.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     EtwGetKernelTraceTimestamp @ 0x14010E9A0 (EtwGetKernelTraceTimestamp.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     CmCleanupThreadInfo @ 0x1401B307C (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x1401B30BC (CmpInitializeThreadInfo.c)
 *     CmpIsRegistryLockAcquired @ 0x1401B30F8 (CmpIsRegistryLockAcquired.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     CmpBounceContextCopyDataToCallerBuffer @ 0x1405D2B00 (CmpBounceContextCopyDataToCallerBuffer.c)
 *     CmpBounceContextStart @ 0x1405D3F60 (CmpBounceContextStart.c)
 *     CmpBounceContextCleanup @ 0x1405D4F34 (CmpBounceContextCleanup.c)
 *     CmpAttachToRegistryProcess @ 0x1405D5048 (CmpAttachToRegistryProcess.c)
 *     CmEnumerateValueKey @ 0x1405D5080 (CmEnumerateValueKey.c)
 *     CmpCallCallBacksEx @ 0x1405E6AE0 (CmpCallCallBacksEx.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x14063FDD0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x1407F2744 (CmEnumerateValueKeyFromMergedView.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtEnumerateValueKey(
        HANDLE KeyHandle,
        ULONG Index,
        KEY_VALUE_INFORMATION_CLASS KeyValueInformationClass,
        PVOID KeyValueInformation,
        ULONG Length,
        PULONG ResultLength)
{
  __int64 v10; // r14
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN v12; // r12
  NTSTATUS v13; // ebx
  KPROCESSOR_MODE PreviousMode; // si
  PVOID v15; // rcx
  ULONG v16; // esi
  PULONG v17; // rbx
  __int64 v18; // rcx
  struct _KTHREAD *v19; // rax
  int v20; // r9d
  int v21; // eax
  ULONG v22; // eax
  __int64 v23; // rcx
  KPROCESSOR_MODE v25; // [rsp+50h] [rbp-208h]
  char v26; // [rsp+52h] [rbp-206h]
  char v27; // [rsp+53h] [rbp-205h]
  PVOID v28; // [rsp+58h] [rbp-200h] BYREF
  int v29; // [rsp+60h] [rbp-1F8h]
  _DWORD v30[3]; // [rsp+64h] [rbp-1F4h] BYREF
  PVOID v31; // [rsp+70h] [rbp-1E8h] BYREF
  PULONG v32; // [rsp+78h] [rbp-1E0h]
  __int64 v33; // [rsp+80h] [rbp-1D8h]
  _QWORD v34[2]; // [rsp+88h] [rbp-1D0h] BYREF
  PVOID Object; // [rsp+98h] [rbp-1C0h] BYREF
  PVOID v36; // [rsp+A0h] [rbp-1B8h] BYREF
  PVOID v37; // [rsp+A8h] [rbp-1B0h]
  _QWORD *v38; // [rsp+B0h] [rbp-1A8h]
  __int64 v39; // [rsp+B8h] [rbp-1A0h]
  _QWORD v40[3]; // [rsp+C0h] [rbp-198h] BYREF
  __int64 v41; // [rsp+D8h] [rbp-180h]
  __int64 v42; // [rsp+E0h] [rbp-178h]
  __int64 v43; // [rsp+E8h] [rbp-170h]
  __int64 v44; // [rsp+F0h] [rbp-168h]
  PVOID v45; // [rsp+100h] [rbp-158h] BYREF
  unsigned __int64 v46; // [rsp+108h] [rbp-150h]
  PVOID v47; // [rsp+110h] [rbp-148h]
  __int64 v48; // [rsp+118h] [rbp-140h]
  PULONG v49; // [rsp+120h] [rbp-138h]
  __int64 v50; // [rsp+128h] [rbp-130h]
  __int64 v51; // [rsp+130h] [rbp-128h]
  __int64 v52; // [rsp+138h] [rbp-120h]
  __int64 v53; // [rsp+140h] [rbp-118h]
  PVOID v54[2]; // [rsp+148h] [rbp-110h] BYREF
  LARGE_INTEGER v55[5]; // [rsp+158h] [rbp-100h] BYREF
  __int64 v56; // [rsp+180h] [rbp-D8h] BYREF
  void *v57; // [rsp+188h] [rbp-D0h]
  char v58; // [rsp+190h] [rbp-C8h]
  _BYTE v59[48]; // [rsp+1E0h] [rbp-78h] BYREF

  v29 = KeyValueInformationClass;
  v30[1] = Index;
  v32 = ResultLength;
  memset(v55, 0, 32);
  v10 = 0LL;
  v33 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp(v55, 0x20000u);
  v26 = 0;
  v27 = 0;
  v45 = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  v49 = 0LL;
  v50 = 0LL;
  v51 = 0LL;
  v52 = 0LL;
  v28 = 0LL;
  v30[0] = 0;
  v56 = 0LL;
  v57 = 0LL;
  v58 = 0;
  v34[1] = v34;
  v34[0] = v34;
  CmpInitializeThreadInfo(v54);
  v31 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v12 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( !v12 )
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    v13 = -1073741431;
    goto LABEL_49;
  }
  if ( (unsigned int)KeyValueInformationClass > KeyValuePartialInformation )
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
      v10 = *((_QWORD *)Object + 1);
      ObfDereferenceObject(Object);
    }
    v13 = -1073741811;
    goto LABEL_49;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v25 = PreviousMode;
  v53 = 0LL;
  v13 = ObReferenceObjectByHandle(KeyHandle, 1u, (POBJECT_TYPE)CmKeyObjectType, PreviousMode, &v36, 0LL);
  v15 = v36;
  v37 = v36;
  if ( v13 >= 0 )
  {
    if ( *(_DWORD *)v36 == 1803104306 )
    {
      v28 = v36;
      v15 = 0LL;
      v37 = 0LL;
      v13 = 0;
    }
    else
    {
      v13 = -1073741816;
    }
  }
  if ( v15 )
    ObfDereferenceObject(v15);
  if ( v13 >= 0 )
  {
    if ( CmpTraceRoutine && v28 )
    {
      v10 = *((_QWORD *)v28 + 1);
      v33 = v10;
    }
    if ( PreviousMode == 1 )
    {
      v16 = Length;
      if ( Length )
      {
        if ( ((unsigned __int8)KeyValueInformation & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( (unsigned __int64)KeyValueInformation + Length > 0x7FFFFFFF0000LL
          || (char *)KeyValueInformation + Length < KeyValueInformation )
        {
          MEMORY[0x7FFFFFFF0000] = 0;
        }
      }
      v17 = v32;
      v18 = (__int64)v32;
      if ( (unsigned __int64)v32 >= 0x7FFFFFFF0000LL )
        v18 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v18 = *(_DWORD *)v18;
    }
    else
    {
      v16 = Length;
      v17 = v32;
    }
    v19 = KeGetCurrentThread();
    --v19->KernelApcDisable;
    v27 = 1;
    if ( CmpCallBackCount && !CmpIsRegistryLockAcquired() )
    {
      v45 = v28;
      v46 = __PAIR64__(v29, Index);
      v47 = KeyValueInformation;
      LODWORD(v48) = v16;
      v49 = v17;
      LOBYTE(v20) = 1;
      v21 = CmpCallCallBacksEx(6, (unsigned int)&v45, 0, v20, 21, (__int64)v28, (__int64)v34);
      v13 = v21;
      if ( v21 < 0 )
      {
        if ( v21 == -1073740541 )
          v13 = 0;
        goto LABEL_49;
      }
      v26 = 1;
    }
    v13 = CmKeyBodyRemapToVirtualForEnum(&v28, (unsigned __int8)v25, 1LL, &v31);
    if ( v13 >= 0 )
    {
      v13 = CmpBounceContextStart((__int64)&v56, KeyValueInformation, v16, (unsigned int)v25, 1);
      if ( v13 >= 0 )
      {
        if ( v31 )
        {
          CmpAttachToRegistryProcess(v59);
          v13 = CmEnumerateValueKeyFromMergedView((int)v28, (int)v31, 0, Index, v29, v57, v16, (__int64)v30, 0LL);
          KiUnstackDetachProcess((__int64)v59, 0LL);
        }
        else
        {
          v13 = CmEnumerateValueKey(v28, Index, (unsigned int)v29, v57, v16, v30);
        }
        if ( v13 >= 0 || v13 == -1073741789 || v13 == -2147483643 )
        {
          v22 = v30[0];
          *v32 = v30[0];
          if ( v13 != -1073741789 )
          {
            if ( v16 < v22 )
              v22 = v16;
            CmpBounceContextCopyDataToCallerBuffer((__int64)&v56, v22);
          }
        }
      }
    }
  }
LABEL_49:
  if ( v31 )
    ObfDereferenceObject(v31);
  if ( v26 && CmpCallBackCount && !CmpIsRegistryLockAcquired() && (_QWORD *)v34[0] != v34 )
  {
    v42 = 0LL;
    v43 = 0LL;
    v44 = 0LL;
    v40[0] = v28;
    v40[1] = (unsigned int)v13;
    v41 = (unsigned int)v13;
    v40[2] = &v45;
    v38 = v40;
    v39 = 0LL;
    CmpCallCallBacksEx(21, (unsigned int)v40, 0, 0, 21, (__int64)v28, (__int64)v34);
    v13 = v41;
  }
  if ( v27 )
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v28 )
    ObfDereferenceObject(v28);
  CmpBounceContextCleanup(&v56);
  if ( CmpTraceRoutine )
  {
    LOBYTE(v23) = 18;
    CmpTraceRoutine(v23, v55, (unsigned int)v13, Index, v10, 0LL);
  }
  if ( v12 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  CmCleanupThreadInfo(v54);
  return v13;
}
