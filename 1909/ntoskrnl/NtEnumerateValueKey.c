/*
 * XREFs of NtEnumerateValueKey @ 0x140660AE0
 * Callers:
 *     AdtpObjsInitialize @ 0x140778CF4 (AdtpObjsInitialize.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14003DF60 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ExIsResourceAcquiredSharedLite @ 0x14003F300 (ExIsResourceAcquiredSharedLite.c)
 *     EtwGetKernelTraceTimestamp @ 0x1401094D0 (EtwGetKernelTraceTimestamp.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ObReferenceObjectByHandle @ 0x1405FB4B0 (ObReferenceObjectByHandle.c)
 *     CmpDetachFromRegistryProcess @ 0x1405FE58C (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x1405FEFA0 (CmpAttachToRegistryProcess.c)
 *     CmpReleaseShutdownRundown @ 0x1405FF930 (CmpReleaseShutdownRundown.c)
 *     CmpAcquireShutdownRundown @ 0x1405FFA40 (CmpAcquireShutdownRundown.c)
 *     CmpBounceContextCleanup @ 0x1405FFA80 (CmpBounceContextCleanup.c)
 *     CmObReferenceObjectByHandle @ 0x1405FFB10 (CmObReferenceObjectByHandle.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1405FFBB0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmpBounceContextStart @ 0x1406002B0 (CmpBounceContextStart.c)
 *     CmPostCallbackNotification @ 0x14060072C (CmPostCallbackNotification.c)
 *     CmpCallCallBacks @ 0x1406007F8 (CmpCallCallBacks.c)
 *     CmEnumerateValueKey @ 0x140660F30 (CmEnumerateValueKey.c)
 *     CmpBounceContextCopyDataToCallerBuffer @ 0x140661940 (CmpBounceContextCopyDataToCallerBuffer.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x14082AEF4 (CmEnumerateValueKeyFromMergedView.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913920 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtEnumerateValueKey(
        HANDLE KeyHandle,
        ULONG Index,
        KEY_VALUE_INFORMATION_CLASS KeyValueInformationClass,
        PVOID KeyValueInformation,
        ULONG Length,
        PULONG ResultLength)
{
  ULONG v8; // edi
  __int64 v10; // r14
  __int64 v11; // r8
  char v12; // r15
  KPROCESSOR_MODE PreviousMode; // r14
  int v14; // ebx
  ULONG v15; // edi
  PULONG v16; // rbx
  __int64 v17; // rcx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v19; // r8
  int v20; // eax
  ULONG v21; // eax
  __int64 v22; // rcx
  char v24; // [rsp+51h] [rbp-197h]
  char v25; // [rsp+52h] [rbp-196h]
  PVOID Object; // [rsp+58h] [rbp-190h] BYREF
  __int64 v28; // [rsp+60h] [rbp-188h] BYREF
  __int64 v29; // [rsp+68h] [rbp-180h]
  ULONG v30; // [rsp+70h] [rbp-178h]
  PVOID v31; // [rsp+78h] [rbp-170h] BYREF
  PULONG v32; // [rsp+80h] [rbp-168h]
  __int64 v33; // [rsp+88h] [rbp-160h]
  _QWORD v34[2]; // [rsp+90h] [rbp-158h] BYREF
  PVOID v35; // [rsp+A0h] [rbp-148h] BYREF
  _QWORD v36[8]; // [rsp+B0h] [rbp-138h] BYREF
  __int64 v37; // [rsp+F0h] [rbp-F8h] BYREF
  size_t v38; // [rsp+F8h] [rbp-F0h]
  char v39; // [rsp+100h] [rbp-E8h]
  _BYTE v40[71]; // [rsp+101h] [rbp-E7h] BYREF
  LARGE_INTEGER v41[4]; // [rsp+150h] [rbp-98h] BYREF
  _BYTE v42[48]; // [rsp+170h] [rbp-78h] BYREF

  v8 = Index;
  v30 = Index;
  v32 = ResultLength;
  memset(v42, 0, sizeof(v42));
  memset(v40, 0, sizeof(v40));
  memset(v41, 0, sizeof(v41));
  v10 = 0LL;
  v29 = 0LL;
  v33 = 0LL;
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
    EtwGetKernelTraceTimestamp(v41, 0x20000u);
  v24 = 0;
  v25 = 0;
  memset(v36, 0, sizeof(v36));
  Object = 0LL;
  LODWORD(v28) = 0;
  v37 = 0LL;
  v38 = 0LL;
  v39 = 0;
  v34[1] = v34;
  v34[0] = v34;
  v31 = 0LL;
  v12 = CmpAcquireShutdownRundown();
  if ( !v12 )
  {
    v14 = -1073741431;
    goto LABEL_32;
  }
  if ( (unsigned int)KeyValueInformationClass > KeyValuePartialInformation )
  {
    if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7)
      && KeyHandle
      && ObReferenceObjectByHandle(
           KeyHandle,
           0,
           (POBJECT_TYPE)CmKeyObjectType,
           KeGetCurrentThread()->PreviousMode,
           &v35,
           0LL) >= 0 )
    {
      v10 = *((_QWORD *)v35 + 1);
      ObfDereferenceObject(v35);
    }
    v14 = -1073741811;
  }
  else
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    v14 = CmObReferenceObjectByHandle(KeyHandle, 1u, v11, PreviousMode, &Object, 0LL);
    if ( v14 < 0 )
    {
      v10 = 0LL;
      goto LABEL_32;
    }
    if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) && Object )
    {
      v29 = *((_QWORD *)Object + 1);
      v33 = v29;
    }
    if ( PreviousMode == 1 )
    {
      v15 = Length;
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
      v16 = v32;
      v17 = (__int64)v32;
      if ( (unsigned __int64)v32 >= 0x7FFFFFFF0000LL )
        v17 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v17 = *(_DWORD *)v17;
    }
    else
    {
      v15 = Length;
      v16 = v32;
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v25 = 1;
    if ( !CmpCallBackCount || ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
      goto LABEL_22;
    v36[0] = Object;
    v36[1] = __PAIR64__(KeyValueInformationClass, Index);
    v36[2] = KeyValueInformation;
    LODWORD(v36[3]) = v15;
    v36[4] = v16;
    v20 = CmpCallCallBacks(6u, (__int64)v36, v19, 0x15u, (__int64)Object, (__int64)v34);
    v14 = v20;
    if ( v20 >= 0 )
    {
      v24 = 1;
LABEL_22:
      v14 = CmKeyBodyRemapToVirtualForEnum(&Object, PreviousMode, 1, &v31);
      if ( v14 < 0 )
        goto LABEL_47;
      v14 = CmpBounceContextStart((__int64)&v37, KeyValueInformation, v15, (unsigned int)PreviousMode, 1);
      if ( v14 < 0 )
        goto LABEL_47;
      if ( v31 )
      {
        CmpAttachToRegistryProcess((__int64)v42);
        v14 = CmEnumerateValueKeyFromMergedView(
                (int)Object,
                (int)v31,
                0,
                Index,
                KeyValueInformationClass,
                v38,
                v15,
                (__int64)&v28,
                0LL);
        CmpDetachFromRegistryProcess((struct _KTHREAD *)v42);
      }
      else
      {
        v14 = CmEnumerateValueKey(Object, Index, (unsigned int)KeyValueInformationClass, v38, v15, &v28);
      }
      if ( v14 >= 0 || v14 == -2147483643 || v14 == -1073741789 )
      {
        v21 = v28;
        *v32 = v28;
        if ( v14 != -1073741789 )
        {
          if ( v15 >= v21 )
            v15 = v21;
          CmpBounceContextCopyDataToCallerBuffer(&v37, v15);
        }
        v8 = Index;
        v10 = v29;
      }
      else
      {
LABEL_47:
        v10 = v29;
        v8 = Index;
      }
      goto LABEL_32;
    }
    v8 = Index;
    v10 = v29;
    if ( v20 == -1073740541 )
      v14 = 0;
  }
LABEL_32:
  if ( v31 )
    ObfDereferenceObject(v31);
  if ( v24 )
    v14 = CmPostCallbackNotification(0x15u, (__int64)Object, v14, (__int64)v36, v34);
  if ( v25 )
    KeLeaveCriticalRegion();
  if ( Object )
    ObfDereferenceObject(Object);
  CmpBounceContextCleanup((__int64)&v37);
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
  {
    LOBYTE(v22) = 18;
    (*(void (__fastcall **)(__int64, LARGE_INTEGER *, _QWORD, _QWORD, __int64, _QWORD))((char *)&NlsMbCodePageTag + 7))(
      v22,
      v41,
      (unsigned int)v14,
      v8,
      v10,
      0LL);
  }
  if ( v12 )
    CmpReleaseShutdownRundown();
  return v14;
}
