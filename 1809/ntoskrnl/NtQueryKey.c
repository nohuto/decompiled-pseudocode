/*
 * XREFs of NtQueryKey @ 0x140640BB0
 * Callers:
 *     IopLoadDriver @ 0x140680BF4 (IopLoadDriver.c)
 *     PiDevCfgConfigureDeviceLocation @ 0x140703314 (PiDevCfgConfigureDeviceLocation.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x14082D898 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgQueryPolicyStringList @ 0x14082F73C (PiDevCfgQueryPolicyStringList.c)
 *     ExpWatchLicenseInfoWork @ 0x1408CE820 (ExpWatchLicenseInfoWork.c)
 *     ExpWatchProductTypeInitialization @ 0x1409D6738 (ExpWatchProductTypeInitialization.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x140005A50 (KiCheckForKernelApcDelivery.c)
 *     CmSiFreeMemory @ 0x140013000 (CmSiFreeMemory.c)
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14004D320 (ExAcquireRundownProtection_0.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     EtwGetKernelTraceTimestamp @ 0x14010E9A0 (EtwGetKernelTraceTimestamp.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     CmCleanupThreadInfo @ 0x1401B307C (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x1401B30BC (CmpInitializeThreadInfo.c)
 *     CmpIsRegistryLockAcquired @ 0x1401B30F8 (CmpIsRegistryLockAcquired.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401C5570 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     CmpBounceContextStart @ 0x1405D3F60 (CmpBounceContextStart.c)
 *     CmQueryKey @ 0x1405D7900 (CmQueryKey.c)
 *     CmpCallCallBacksEx @ 0x1405E6AE0 (CmpCallCallBacksEx.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x14063FDD0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     ExRaiseAccessViolation @ 0x1408D7860 (ExRaiseAccessViolation.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtQueryKey(
        HANDLE KeyHandle,
        KEY_INFORMATION_CLASS KeyInformationClass,
        PVOID KeyInformation,
        ULONG Length,
        PULONG ResultLength)
{
  size_t v5; // r15
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v10; // ebx
  KPROCESSOR_MODE PreviousMode; // dl
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rdx
  __int64 v15; // rcx
  _QWORD *v16; // rax
  struct _KTHREAD *v17; // rax
  unsigned __int16 *v18; // r12
  int v19; // eax
  int Key; // eax
  unsigned int v21; // eax
  struct _KTHREAD *v22; // rcx
  bool v23; // zf
  void *v24; // rcx
  struct _KTHREAD *v25; // rcx
  int v27; // [rsp+40h] [rbp-1B8h]
  char v28; // [rsp+44h] [rbp-1B4h]
  char v29; // [rsp+45h] [rbp-1B3h]
  char v30; // [rsp+46h] [rbp-1B2h]
  BOOLEAN v31; // [rsp+47h] [rbp-1B1h]
  PVOID v32; // [rsp+50h] [rbp-1A8h] BYREF
  ACCESS_MASK v33; // [rsp+58h] [rbp-1A0h]
  ULONG v34; // [rsp+5Ch] [rbp-19Ch] BYREF
  PVOID v35; // [rsp+60h] [rbp-198h] BYREF
  PVOID v36; // [rsp+68h] [rbp-190h] BYREF
  __int64 v37; // [rsp+70h] [rbp-188h]
  _SLIST_ENTRY v38; // [rsp+78h] [rbp-180h] BYREF
  PVOID Object; // [rsp+88h] [rbp-170h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+90h] [rbp-168h] BYREF
  _QWORD *v41; // [rsp+98h] [rbp-160h]
  __int64 v42; // [rsp+A0h] [rbp-158h]
  _QWORD v43[3]; // [rsp+A8h] [rbp-150h] BYREF
  __int64 v44; // [rsp+C0h] [rbp-138h]
  __int64 v45; // [rsp+C8h] [rbp-130h]
  __int64 v46; // [rsp+D0h] [rbp-128h]
  __int64 v47; // [rsp+D8h] [rbp-120h]
  PVOID v48; // [rsp+E0h] [rbp-118h] BYREF
  __int64 v49; // [rsp+E8h] [rbp-110h]
  PVOID v50; // [rsp+F0h] [rbp-108h]
  __int64 v51; // [rsp+F8h] [rbp-100h]
  PULONG v52; // [rsp+100h] [rbp-F8h]
  __int64 v53; // [rsp+108h] [rbp-F0h]
  __int64 v54; // [rsp+110h] [rbp-E8h]
  __int64 v55; // [rsp+118h] [rbp-E0h]
  PVOID v56[2]; // [rsp+120h] [rbp-D8h] BYREF
  LARGE_INTEGER v57[4]; // [rsp+130h] [rbp-C8h] BYREF
  void *v58; // [rsp+150h] [rbp-A8h] BYREF
  void *Src; // [rsp+158h] [rbp-A0h]
  char v60; // [rsp+160h] [rbp-98h]
  char v61; // [rsp+161h] [rbp-97h] BYREF

  v5 = Length;
  memset(v57, 0, sizeof(v57));
  v37 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp(v57, 0x20000u);
  v29 = 0;
  v30 = 0;
  v32 = 0LL;
  v48 = 0LL;
  v49 = 0LL;
  v50 = 0LL;
  v51 = 0LL;
  v52 = 0LL;
  v53 = 0LL;
  v54 = 0LL;
  v55 = 0LL;
  v58 = 0LL;
  Src = 0LL;
  v60 = 0;
  *((_QWORD *)&v38.Next + 1) = &v38;
  v38.Next = &v38;
  CmpInitializeThreadInfo(v56);
  v36 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v31 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( !v31 )
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    v10 = -1073741431;
LABEL_56:
    v27 = v10;
    goto LABEL_57;
  }
  if ( (unsigned int)KeyInformationClass > KeyTrustInformation )
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
      v37 = *((_QWORD *)Object + 1);
      ObfDereferenceObject(Object);
    }
    v10 = -1073741811;
    goto LABEL_56;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v28 = PreviousMode;
  if ( PreviousMode == 1 )
  {
    if ( (_DWORD)v5 )
    {
      v12 = (unsigned __int64)KeyInformation;
      if ( ((unsigned __int8)KeyInformation & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v13 = (unsigned __int64)KeyInformation + v5 - 1;
      if ( (unsigned __int64)KeyInformation > v13 || v13 >= 0x7FFFFFFF0000LL )
        ExRaiseAccessViolation();
      v14 = (v13 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      do
      {
        *(_BYTE *)v12 = *(_BYTE *)v12;
        v12 = (v12 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      }
      while ( v12 != v14 );
      PreviousMode = 1;
    }
    v15 = (__int64)ResultLength;
    if ( (unsigned __int64)ResultLength >= 0x7FFFFFFF0000LL )
      v15 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v15 = *(_DWORD *)v15;
  }
  v33 = ((KeyInformationClass - 3) & 0xFFFFFFFB) != 0;
  v10 = ObReferenceObjectByHandle(KeyHandle, v33, (POBJECT_TYPE)CmKeyObjectType, PreviousMode, &v35, &HandleInformation);
  v16 = v35;
  v32 = v35;
  v27 = v10;
  if ( v10 >= 0 )
  {
    if ( *(_DWORD *)v35 != 1803104306 )
    {
      if ( KeyInformationClass != KeyCachedInformation )
      {
        v10 = -1073741816;
        goto LABEL_56;
      }
      *ResultLength = 40;
      if ( (unsigned int)v5 < 0x28 )
      {
        v10 = -1073741789;
        v27 = -1073741789;
        goto LABEL_57;
      }
      *(_QWORD *)KeyInformation = 0LL;
      *((_QWORD *)KeyInformation + 1) = 0LL;
      *((_QWORD *)KeyInformation + 2) = 0LL;
      *((_QWORD *)KeyInformation + 3) = 0LL;
      *((_QWORD *)KeyInformation + 4) = 0LL;
      *((_DWORD *)KeyInformation + 5) = *(_DWORD *)(v16[1] + 88LL);
      goto LABEL_33;
    }
    if ( CmpTraceRoutine )
      v37 = *((_QWORD *)v35 + 1);
    if ( ((KeyInformationClass - 3) & 0xFFFFFFFB) == 0 && !HandleInformation.GrantedAccess )
    {
      v10 = -1073741790;
      goto LABEL_56;
    }
    v17 = KeGetCurrentThread();
    --v17->KernelApcDisable;
    v30 = 1;
    if ( !CmpCallBackCount || CmpIsRegistryLockAcquired() )
    {
      v18 = (unsigned __int16 *)v35;
    }
    else
    {
      v18 = (unsigned __int16 *)v35;
      v48 = v35;
      LODWORD(v49) = KeyInformationClass;
      v50 = KeyInformation;
      LODWORD(v51) = v5;
      v52 = ResultLength;
      v19 = CmpCallCallBacksEx(7u, (__int64)&v48, 0LL, 1, 0x16u, (__int64)v35, &v38);
      v10 = v19;
      v27 = v19;
      if ( v19 < 0 )
      {
        if ( v19 != -1073740541 )
          goto LABEL_57;
LABEL_33:
        v10 = 0;
        goto LABEL_56;
      }
      v29 = 1;
    }
    if ( KeyInformationClass == KeyHandleTagsInformation )
    {
      *ResultLength = 4;
      if ( (unsigned int)v5 < 4 )
      {
        v10 = -1073741789;
        v27 = -1073741789;
        goto LABEL_57;
      }
      *(_DWORD *)KeyInformation = v18[25];
      goto LABEL_33;
    }
    v10 = CmKeyBodyRemapToVirtualForEnum((__int64 *)&v32, v28, v33, &v36);
    v27 = v10;
    if ( v10 >= 0 )
    {
      v10 = CmpBounceContextStart((__int64)&v58, KeyInformation, v5, (unsigned int)v28, 2);
      v27 = v10;
      if ( v10 >= 0 )
      {
        Key = CmQueryKey((__int64)v32, (__int64)v36, KeyInformationClass, (unsigned int *)Src, v5, (__int64)&v34);
        v10 = Key;
        v27 = Key;
        if ( Key >= 0 || Key == -1073741789 || Key == -2147483643 )
        {
          v21 = v34;
          *ResultLength = v34;
          if ( v10 != -1073741789 )
          {
            if ( (unsigned int)v5 < v21 )
              v21 = v5;
            if ( v58 != Src )
              memmove(v58, Src, v21);
          }
        }
      }
    }
  }
LABEL_57:
  if ( v36 )
    ObfDereferenceObject(v36);
  if ( v29 )
  {
    if ( CmpCallBackCount && !CmpIsRegistryLockAcquired() && v38.Next != &v38 )
    {
      v45 = 0LL;
      v46 = 0LL;
      v47 = 0LL;
      v43[0] = v32;
      v43[1] = (unsigned int)v10;
      v44 = (unsigned int)v10;
      v43[2] = &v48;
      v41 = v43;
      v42 = 0LL;
      CmpCallCallBacksEx(0x16u, (__int64)v43, 0LL, 0, 0x16u, (__int64)v32, &v38);
      v10 = v44;
    }
    v27 = v10;
  }
  if ( v30 )
  {
    v22 = KeGetCurrentThread();
    v23 = v22->KernelApcDisable++ == -1;
    if ( v23
      && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)v22->ApcState.ApcListHead[0].Flink != &v22->152
      && !v22->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery((__int64)v22);
    }
    v10 = v27;
  }
  if ( v32 )
    ObfDereferenceObject(v32);
  v24 = Src;
  if ( Src && Src != v58 && Src != &v61 )
  {
    if ( (v60 & 1) != 0 )
    {
      ++dword_1404C7BDC;
      if ( LOWORD(CmpBounceBufferLookaside.Alignment) < (unsigned __int16)word_1404C7BD0 )
      {
        RtlpInterlockedPushEntrySList(&CmpBounceBufferLookaside, (PSLIST_ENTRY)Src);
      }
      else
      {
        ++dword_1404C7BE0;
        ((void (__fastcall *)(void *, _SLIST_HEADER *))qword_1404C7BF8)(Src, &CmpBounceBufferLookaside);
      }
    }
    else
    {
      CmSiFreeMemory((PPRIVILEGE_SET)Src);
    }
  }
  if ( CmpTraceRoutine )
  {
    LOBYTE(v24) = 13;
    CmpTraceRoutine(v24, v57, (unsigned int)v10, (unsigned int)KeyInformationClass, v37, 0LL);
  }
  if ( v31 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    v25 = KeGetCurrentThread();
    v23 = v25->KernelApcDisable++ == -1;
    if ( v23
      && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)v25->ApcState.ApcListHead[0].Flink != &v25->152
      && !v25->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery((__int64)v25);
    }
    v10 = v27;
  }
  CmCleanupThreadInfo(v56);
  return v10;
}
