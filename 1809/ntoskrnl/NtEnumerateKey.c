/*
 * XREFs of NtEnumerateKey @ 0x1405D32F0
 * Callers:
 *     AdtpObjsInitialize @ 0x140738418 (AdtpObjsInitialize.c)
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
 *     CmEnumerateKey @ 0x1405D3A20 (CmEnumerateKey.c)
 *     CmpBounceContextStart @ 0x1405D3F60 (CmpBounceContextStart.c)
 *     CmpCallCallBacksEx @ 0x1405E6AE0 (CmpCallCallBacksEx.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x14063FDD0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     ExRaiseAccessViolation @ 0x1408D7860 (ExRaiseAccessViolation.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtEnumerateKey(
        HANDLE KeyHandle,
        ULONG Index,
        KEY_INFORMATION_CLASS KeyInformationClass,
        PVOID KeyInformation,
        ULONG Length,
        PULONG ResultLength)
{
  ULONG v8; // r12d
  __int64 v10; // r15
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN v12; // r13
  int v13; // ebx
  KPROCESSOR_MODE PreviousMode; // r12
  PVOID v15; // rcx
  ULONG v16; // esi
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rdx
  PULONG v20; // rbx
  __int64 v21; // rcx
  struct _KTHREAD *v22; // rax
  int v23; // r9d
  int v24; // eax
  int v25; // eax
  ULONG v26; // eax
  struct _KTHREAD *v27; // rcx
  bool v28; // zf
  void *v29; // rcx
  struct _KTHREAD *v30; // rcx
  char v32; // [rsp+41h] [rbp-1D7h]
  char v33; // [rsp+42h] [rbp-1D6h]
  PVOID v35; // [rsp+48h] [rbp-1D0h] BYREF
  KEY_INFORMATION_CLASS v36; // [rsp+50h] [rbp-1C8h]
  _DWORD v37[3]; // [rsp+54h] [rbp-1C4h] BYREF
  PULONG v38; // [rsp+60h] [rbp-1B8h]
  __int64 v39; // [rsp+68h] [rbp-1B0h]
  PVOID v40; // [rsp+70h] [rbp-1A8h] BYREF
  _QWORD v41[2]; // [rsp+78h] [rbp-1A0h] BYREF
  PVOID Object; // [rsp+88h] [rbp-190h] BYREF
  PVOID v43; // [rsp+90h] [rbp-188h] BYREF
  PVOID v44; // [rsp+98h] [rbp-180h]
  _QWORD *v45; // [rsp+A0h] [rbp-178h]
  __int64 v46; // [rsp+A8h] [rbp-170h]
  _QWORD v47[3]; // [rsp+B0h] [rbp-168h] BYREF
  __int64 v48; // [rsp+C8h] [rbp-150h]
  __int64 v49; // [rsp+D0h] [rbp-148h]
  __int64 v50; // [rsp+D8h] [rbp-140h]
  __int64 v51; // [rsp+E0h] [rbp-138h]
  PVOID v52; // [rsp+F0h] [rbp-128h] BYREF
  unsigned __int64 v53; // [rsp+F8h] [rbp-120h]
  PVOID v54; // [rsp+100h] [rbp-118h]
  __int64 v55; // [rsp+108h] [rbp-110h]
  PULONG v56; // [rsp+110h] [rbp-108h]
  __int64 v57; // [rsp+118h] [rbp-100h]
  __int64 v58; // [rsp+120h] [rbp-F8h]
  __int64 v59; // [rsp+128h] [rbp-F0h]
  __int64 v60; // [rsp+130h] [rbp-E8h]
  PVOID v61[2]; // [rsp+138h] [rbp-E0h] BYREF
  LARGE_INTEGER v62[5]; // [rsp+148h] [rbp-D0h] BYREF
  void *v63; // [rsp+170h] [rbp-A8h] BYREF
  void *Src; // [rsp+178h] [rbp-A0h]
  char v65; // [rsp+180h] [rbp-98h]
  char v66; // [rsp+181h] [rbp-97h] BYREF

  v36 = KeyInformationClass;
  v8 = Index;
  v37[1] = Index;
  v38 = ResultLength;
  memset(v62, 0, 32);
  v10 = 0LL;
  v39 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp(v62, 0x20000u);
  v32 = 0;
  v33 = 0;
  v52 = 0LL;
  v53 = 0LL;
  v54 = 0LL;
  v55 = 0LL;
  v56 = 0LL;
  v57 = 0LL;
  v58 = 0LL;
  v59 = 0LL;
  v35 = 0LL;
  v37[0] = 0;
  v63 = 0LL;
  Src = 0LL;
  v65 = 0;
  v41[1] = v41;
  v41[0] = v41;
  CmpInitializeThreadInfo(v61);
  v40 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v12 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( !v12 )
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    v13 = -1073741431;
    goto LABEL_50;
  }
  if ( (unsigned int)KeyInformationClass > KeyFullInformation )
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
    goto LABEL_50;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v60 = 0LL;
  v13 = ObReferenceObjectByHandle(KeyHandle, 8u, (POBJECT_TYPE)CmKeyObjectType, PreviousMode, &v43, 0LL);
  v15 = v43;
  v44 = v43;
  if ( v13 >= 0 )
  {
    if ( *(_DWORD *)v43 == 1803104306 )
    {
      v35 = v43;
      v15 = 0LL;
      v44 = 0LL;
      v13 = 0;
    }
    else
    {
      v13 = -1073741816;
    }
  }
  if ( v15 )
    ObfDereferenceObject(v15);
  if ( v13 < 0 )
    goto LABEL_49;
  if ( CmpTraceRoutine && v35 )
  {
    v10 = *((_QWORD *)v35 + 1);
    v39 = v10;
  }
  if ( PreviousMode == 1 )
  {
    v16 = Length;
    if ( Length )
    {
      v17 = (unsigned __int64)KeyInformation;
      if ( ((unsigned __int8)KeyInformation & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v18 = (unsigned __int64)KeyInformation + Length - 1;
      if ( (unsigned __int64)KeyInformation > v18 || v18 >= 0x7FFFFFFF0000LL )
        ExRaiseAccessViolation();
      v19 = (v18 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      do
      {
        *(_BYTE *)v17 = *(_BYTE *)v17;
        v17 = (v17 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      }
      while ( v17 != v19 );
    }
    v20 = v38;
    v21 = (__int64)v38;
    if ( (unsigned __int64)v38 >= 0x7FFFFFFF0000LL )
      v21 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v21 = *(_DWORD *)v21;
  }
  else
  {
    v16 = Length;
    v20 = v38;
  }
  v22 = KeGetCurrentThread();
  --v22->KernelApcDisable;
  v33 = 1;
  if ( CmpCallBackCount && !CmpIsRegistryLockAcquired() )
  {
    v52 = v35;
    v53 = __PAIR64__(v36, Index);
    v54 = KeyInformation;
    LODWORD(v55) = v16;
    v56 = v20;
    LOBYTE(v23) = 1;
    v24 = CmpCallCallBacksEx(5, (unsigned int)&v52, 0, v23, 20, (__int64)v35, (__int64)v41);
    v13 = v24;
    if ( v24 < 0 )
    {
      v8 = Index;
      if ( v24 == -1073740541 )
        v13 = 0;
      goto LABEL_50;
    }
    v32 = 1;
  }
  v13 = CmKeyBodyRemapToVirtualForEnum(&v35, (unsigned __int8)PreviousMode, 8LL, &v40);
  if ( v13 < 0 || (v13 = CmpBounceContextStart(&v63, KeyInformation, v16, (unsigned int)PreviousMode, 0), v13 < 0) )
  {
LABEL_49:
    v8 = Index;
    goto LABEL_50;
  }
  v8 = Index;
  v25 = CmEnumerateKey((_DWORD)v35, (_DWORD)v40, Index, v36, (__int64)Src, v16, (__int64)v37);
  v13 = v25;
  if ( v25 >= 0 || v25 == -1073741789 || v25 == -2147483643 )
  {
    v26 = v37[0];
    *v38 = v37[0];
    if ( v13 != -1073741789 )
    {
      if ( v16 < v26 )
        v26 = v16;
      if ( v63 != Src )
        memmove(v63, Src, v26);
    }
  }
LABEL_50:
  if ( v40 )
    ObfDereferenceObject(v40);
  if ( v32 && CmpCallBackCount && !CmpIsRegistryLockAcquired() && (_QWORD *)v41[0] != v41 )
  {
    v49 = 0LL;
    v50 = 0LL;
    v51 = 0LL;
    v47[0] = v35;
    v47[1] = (unsigned int)v13;
    v48 = (unsigned int)v13;
    v47[2] = &v52;
    v45 = v47;
    v46 = 0LL;
    CmpCallCallBacksEx(20, (unsigned int)v47, 0, 0, 20, (__int64)v35, (__int64)v41);
    v13 = v48;
  }
  if ( v33 )
  {
    v27 = KeGetCurrentThread();
    v28 = v27->KernelApcDisable++ == -1;
    if ( v28
      && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)v27->ApcState.ApcListHead[0].Flink != &v27->152
      && !v27->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery((__int64)v27);
    }
  }
  if ( v35 )
    ObfDereferenceObject(v35);
  v29 = Src;
  if ( Src && Src != v63 && Src != &v66 )
  {
    if ( (v65 & 1) != 0 )
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
    LOBYTE(v29) = 17;
    CmpTraceRoutine(v29, v62, (unsigned int)v13, v8, v10, 0LL);
  }
  if ( v12 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    v30 = KeGetCurrentThread();
    v28 = v30->KernelApcDisable++ == -1;
    if ( v28
      && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)v30->ApcState.ApcListHead[0].Flink != &v30->152
      && !v30->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery((__int64)v30);
    }
  }
  CmCleanupThreadInfo(v61);
  return v13;
}
