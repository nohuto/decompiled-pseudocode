/*
 * XREFs of NtQueryKey @ 0x1406010E0
 * Callers:
 *     IopLoadDriver @ 0x14070AF00 (IopLoadDriver.c)
 *     PiDevCfgConfigureDeviceLocation @ 0x14071EE88 (PiDevCfgConfigureDeviceLocation.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x1408665C0 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgQueryPolicyStringList @ 0x14086848C (PiDevCfgQueryPolicyStringList.c)
 *     ExpWatchLicenseInfoWork @ 0x14090A590 (ExpWatchLicenseInfoWork.c)
 *     ExpWatchProductTypeInitialization @ 0x140A0A8D8 (ExpWatchProductTypeInitialization.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ExIsResourceAcquiredSharedLite @ 0x14003F300 (ExIsResourceAcquiredSharedLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtection_0 @ 0x140043C20 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140043CA0 (ExAcquireRundownProtection_0.c)
 *     CmSiFreeMemory @ 0x14008CFE0 (CmSiFreeMemory.c)
 *     KiCheckForKernelApcDelivery @ 0x1400EF3A0 (KiCheckForKernelApcDelivery.c)
 *     EtwGetKernelTraceTimestamp @ 0x1401094D0 (EtwGetKernelTraceTimestamp.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401CC5B0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     CmpCallCallBacksEx @ 0x1405F8BA0 (CmpCallCallBacksEx.c)
 *     ObReferenceObjectByHandle @ 0x1405FB4B0 (ObReferenceObjectByHandle.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1405FFBB0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmpBounceContextStart @ 0x1406002B0 (CmpBounceContextStart.c)
 *     CmQueryKey @ 0x140667F60 (CmQueryKey.c)
 *     ExRaiseAccessViolation @ 0x140913900 (ExRaiseAccessViolation.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913920 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtQueryKey(
        HANDLE KeyHandle,
        KEY_INFORMATION_CLASS KeyInformationClass,
        PVOID KeyInformation,
        ULONG Length,
        PULONG ResultLength)
{
  size_t v5; // r12
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v10; // ebx
  KPROCESSOR_MODE PreviousMode; // dl
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rdx
  __int64 v15; // rcx
  _QWORD *v16; // rax
  struct _KTHREAD *v17; // rax
  ULONG IsResourceAcquiredSharedLite; // eax
  unsigned __int16 *v19; // r15
  int v20; // eax
  int Key; // eax
  unsigned int v22; // eax
  struct _KTHREAD *v23; // rcx
  bool v24; // zf
  void *v25; // rcx
  struct _KTHREAD *v26; // rcx
  NTSTATUS v28; // [rsp+40h] [rbp-1B8h]
  char v29; // [rsp+44h] [rbp-1B4h]
  char v30; // [rsp+45h] [rbp-1B3h]
  char v31; // [rsp+46h] [rbp-1B2h]
  BOOLEAN v32; // [rsp+47h] [rbp-1B1h]
  PVOID v33; // [rsp+50h] [rbp-1A8h] BYREF
  PVOID v34; // [rsp+58h] [rbp-1A0h] BYREF
  BOOL v35; // [rsp+60h] [rbp-198h]
  ULONG v36; // [rsp+64h] [rbp-194h] BYREF
  PVOID v37; // [rsp+68h] [rbp-190h] BYREF
  __int64 v38; // [rsp+70h] [rbp-188h]
  _QWORD v39[2]; // [rsp+78h] [rbp-180h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+88h] [rbp-170h] BYREF
  PVOID Object; // [rsp+90h] [rbp-168h] BYREF
  PVOID v42; // [rsp+A0h] [rbp-158h] BYREF
  __int64 v43; // [rsp+A8h] [rbp-150h]
  PVOID v44; // [rsp+B0h] [rbp-148h]
  __int64 v45; // [rsp+B8h] [rbp-140h]
  PULONG v46; // [rsp+C0h] [rbp-138h]
  __int64 v47; // [rsp+C8h] [rbp-130h]
  __int64 v48; // [rsp+D0h] [rbp-128h]
  __int64 v49; // [rsp+D8h] [rbp-120h]
  PVOID v50; // [rsp+E0h] [rbp-118h] BYREF
  NTSTATUS v51; // [rsp+E8h] [rbp-110h]
  int v52; // [rsp+ECh] [rbp-10Ch]
  PVOID *v53; // [rsp+F0h] [rbp-108h]
  NTSTATUS v54; // [rsp+F8h] [rbp-100h]
  __int128 v55; // [rsp+FCh] [rbp-FCh]
  __int64 v56; // [rsp+10Ch] [rbp-ECh]
  int v57; // [rsp+114h] [rbp-E4h]
  PVOID *v58; // [rsp+118h] [rbp-E0h]
  __int64 v59; // [rsp+120h] [rbp-D8h]
  void *v60; // [rsp+130h] [rbp-C8h] BYREF
  void *Src; // [rsp+138h] [rbp-C0h]
  char v62; // [rsp+140h] [rbp-B8h]
  _BYTE v63[64]; // [rsp+141h] [rbp-B7h] BYREF
  int v64; // [rsp+181h] [rbp-77h]
  __int16 v65; // [rsp+185h] [rbp-73h]
  char v66; // [rsp+187h] [rbp-71h]
  LARGE_INTEGER v67[4]; // [rsp+190h] [rbp-68h] BYREF

  v5 = Length;
  HandleInformation = 0LL;
  memset(v63, 0, sizeof(v63));
  v64 = 0;
  v65 = 0;
  v66 = 0;
  memset(v67, 0, sizeof(v67));
  v38 = 0LL;
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
    EtwGetKernelTraceTimestamp(v67, 0x20000u);
  v30 = 0;
  v31 = 0;
  v33 = 0LL;
  v42 = 0LL;
  v43 = 0LL;
  v44 = 0LL;
  v45 = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  v49 = 0LL;
  v60 = 0LL;
  Src = 0LL;
  v62 = 0;
  v39[1] = v39;
  v39[0] = v39;
  v37 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v32 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( !v32 )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v10 = -1073741431;
LABEL_56:
    v28 = v10;
    goto LABEL_57;
  }
  if ( (unsigned int)KeyInformationClass > KeyTrustInformation )
  {
    if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7)
      && KeyHandle
      && ObReferenceObjectByHandle(
           KeyHandle,
           0,
           (POBJECT_TYPE)CmKeyObjectType,
           KeGetCurrentThread()->PreviousMode,
           &Object,
           0LL) >= 0 )
    {
      v38 = *((_QWORD *)Object + 1);
      ObfDereferenceObject(Object);
    }
    v10 = -1073741811;
    goto LABEL_56;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v29 = PreviousMode;
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
  v35 = ((KeyInformationClass - 3) & 0xFFFFFFFB) != 0;
  v10 = ObReferenceObjectByHandle(KeyHandle, v35, (POBJECT_TYPE)CmKeyObjectType, PreviousMode, &v34, &HandleInformation);
  v16 = v34;
  v33 = v34;
  v28 = v10;
  if ( v10 >= 0 )
  {
    if ( *(_DWORD *)v34 != 1803104306 )
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
        v28 = -1073741789;
        goto LABEL_57;
      }
      *(_QWORD *)KeyInformation = 0LL;
      *((_QWORD *)KeyInformation + 1) = 0LL;
      *((_QWORD *)KeyInformation + 2) = 0LL;
      *((_QWORD *)KeyInformation + 3) = 0LL;
      *((_QWORD *)KeyInformation + 4) = 0LL;
      *((_DWORD *)KeyInformation + 5) = *(_DWORD *)(v16[1] + 96LL);
      goto LABEL_33;
    }
    if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
      v38 = *((_QWORD *)v34 + 1);
    if ( ((KeyInformationClass - 3) & 0xFFFFFFFB) == 0 && !HandleInformation.GrantedAccess )
    {
      v10 = -1073741790;
      goto LABEL_56;
    }
    v17 = KeGetCurrentThread();
    --v17->KernelApcDisable;
    v31 = 1;
    if ( CmpCallBackCount )
    {
      IsResourceAcquiredSharedLite = ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock);
      v19 = (unsigned __int16 *)v34;
      if ( !IsResourceAcquiredSharedLite )
      {
        v42 = v34;
        LODWORD(v43) = KeyInformationClass;
        v44 = KeyInformation;
        LODWORD(v45) = v5;
        v46 = ResultLength;
        v20 = CmpCallCallBacksEx(7u, (__int64)&v42, 0LL, 1, 0x16u, (__int64)v34, (__int64)v39);
        v10 = v20;
        v28 = v20;
        if ( v20 < 0 )
        {
          if ( v20 != -1073740541 )
            goto LABEL_57;
LABEL_33:
          v10 = 0;
          goto LABEL_56;
        }
        v30 = 1;
      }
    }
    else
    {
      v19 = (unsigned __int16 *)v34;
    }
    if ( KeyInformationClass == KeyHandleTagsInformation )
    {
      *ResultLength = 4;
      if ( (unsigned int)v5 < 4 )
      {
        v10 = -1073741789;
        v28 = -1073741789;
        goto LABEL_57;
      }
      *(_DWORD *)KeyInformation = v19[25];
      goto LABEL_33;
    }
    v10 = CmKeyBodyRemapToVirtualForEnum(&v33, v29, v35, &v37);
    v28 = v10;
    if ( v10 >= 0 )
    {
      v10 = CmpBounceContextStart((__int64)&v60, KeyInformation, v5, (unsigned int)v29, 2);
      v28 = v10;
      if ( v10 >= 0 )
      {
        Key = CmQueryKey((_DWORD)v33, (_DWORD)v37, v5, (__int64)&v36);
        v10 = Key;
        v28 = Key;
        if ( Key >= 0 || Key == -1073741789 || Key == -2147483643 )
        {
          v22 = v36;
          *ResultLength = v36;
          if ( v10 != -1073741789 )
          {
            if ( (unsigned int)v5 < v22 )
              v22 = v5;
            if ( v60 != Src )
              memmove(v60, Src, v22);
          }
        }
      }
    }
  }
LABEL_57:
  if ( v37 )
    ObfDereferenceObject(v37);
  if ( v30 )
  {
    if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) && (_QWORD *)v39[0] != v39 )
    {
      v52 = 0;
      v55 = 0LL;
      v56 = 0LL;
      v57 = 0;
      v50 = v33;
      v51 = v10;
      v54 = v10;
      v53 = &v42;
      v58 = &v50;
      v59 = 0LL;
      CmpCallCallBacksEx(0x16u, (__int64)&v50, 0LL, 0, 0x16u, (__int64)v33, (__int64)v39);
      v10 = v54;
    }
    v28 = v10;
  }
  if ( v31 )
  {
    v23 = KeGetCurrentThread();
    v24 = v23->KernelApcDisable++ == -1;
    if ( v24
      && ($C6908ADE9723D0A04AF8EE82D8D15C40 *)v23->ApcState.ApcListHead[0].Flink != &v23->152
      && !v23->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery((__int64)v23);
    }
    v10 = v28;
  }
  if ( v33 )
    ObfDereferenceObject(v33);
  v25 = Src;
  if ( Src && Src != v60 && Src != v63 )
  {
    if ( (v62 & 1) != 0 )
    {
      ++dword_1404F2D9C;
      if ( LOWORD(CmpBounceBufferLookaside.Alignment) < (unsigned __int16)word_1404F2D90 )
      {
        RtlpInterlockedPushEntrySList(&CmpBounceBufferLookaside, (PSLIST_ENTRY)Src);
      }
      else
      {
        ++dword_1404F2DA0;
        ((void (__fastcall *)(void *, _SLIST_HEADER *))qword_1404F2DB8)(Src, &CmpBounceBufferLookaside);
      }
    }
    else
    {
      CmSiFreeMemory((PPRIVILEGE_SET)Src);
    }
  }
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
  {
    LOBYTE(v25) = 13;
    (*(void (__fastcall **)(void *, LARGE_INTEGER *, _QWORD, _QWORD, __int64, _QWORD))((char *)&NlsMbCodePageTag + 7))(
      v25,
      v67,
      (unsigned int)v10,
      (unsigned int)KeyInformationClass,
      v38,
      0LL);
  }
  if ( v32 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    v26 = KeGetCurrentThread();
    v24 = v26->KernelApcDisable++ == -1;
    if ( v24
      && ($C6908ADE9723D0A04AF8EE82D8D15C40 *)v26->ApcState.ApcListHead[0].Flink != &v26->152
      && !v26->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery((__int64)v26);
    }
    return v28;
  }
  return v10;
}
