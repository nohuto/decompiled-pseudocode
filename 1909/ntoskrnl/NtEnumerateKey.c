/*
 * XREFs of NtEnumerateKey @ 0x140662B00
 * Callers:
 *     AdtpObjsInitialize @ 0x140778CF4 (AdtpObjsInitialize.c)
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
 *     memset @ 0x1401D77C0 (memset.c)
 *     CmpCallCallBacksEx @ 0x1405F8BA0 (CmpCallCallBacksEx.c)
 *     ObReferenceObjectByHandle @ 0x1405FB4B0 (ObReferenceObjectByHandle.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1405FFBB0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmpBounceContextStart @ 0x1406002B0 (CmpBounceContextStart.c)
 *     CmEnumerateKey @ 0x1406630F0 (CmEnumerateKey.c)
 *     ExRaiseAccessViolation @ 0x140913900 (ExRaiseAccessViolation.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913920 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtEnumerateKey(
        HANDLE KeyHandle,
        ULONG Index,
        KEY_INFORMATION_CLASS KeyInformationClass,
        PVOID KeyInformation,
        ULONG Length,
        PULONG ResultLength)
{
  ULONG v8; // r15d
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN v11; // di
  KPROCESSOR_MODE PreviousMode; // r15
  PVOID v13; // rcx
  ULONG v14; // edi
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rcx
  __int64 v18; // rcx
  struct _KTHREAD *v19; // rax
  int v20; // eax
  ULONG v21; // eax
  __int64 v22; // r14
  struct _KTHREAD *v23; // rcx
  void *v25; // rcx
  NTSTATUS v27; // ebx
  BOOLEAN v28; // [rsp+40h] [rbp-1C8h]
  char v29; // [rsp+41h] [rbp-1C7h]
  char v30; // [rsp+42h] [rbp-1C6h]
  PVOID v32; // [rsp+48h] [rbp-1C0h] BYREF
  __int64 v33; // [rsp+50h] [rbp-1B8h]
  _DWORD v34[4]; // [rsp+58h] [rbp-1B0h] BYREF
  __int64 v35; // [rsp+68h] [rbp-1A0h]
  PVOID v36; // [rsp+70h] [rbp-198h] BYREF
  _QWORD v37[2]; // [rsp+78h] [rbp-190h] BYREF
  PVOID v38; // [rsp+88h] [rbp-180h] BYREF
  PVOID Object; // [rsp+90h] [rbp-178h] BYREF
  PVOID v40; // [rsp+98h] [rbp-170h]
  PVOID v41; // [rsp+A0h] [rbp-168h] BYREF
  NTSTATUS v42; // [rsp+A8h] [rbp-160h]
  int v43; // [rsp+ACh] [rbp-15Ch]
  _QWORD *v44; // [rsp+B0h] [rbp-158h]
  NTSTATUS v45; // [rsp+B8h] [rbp-150h]
  __int128 v46; // [rsp+BCh] [rbp-14Ch]
  __int64 v47; // [rsp+CCh] [rbp-13Ch]
  int v48; // [rsp+D4h] [rbp-134h]
  _QWORD v49[12]; // [rsp+E0h] [rbp-128h] BYREF
  void *v50; // [rsp+140h] [rbp-C8h] BYREF
  void *Src; // [rsp+148h] [rbp-C0h]
  char v52; // [rsp+150h] [rbp-B8h]
  _BYTE v53[71]; // [rsp+151h] [rbp-B7h] BYREF
  LARGE_INTEGER v54[4]; // [rsp+1A0h] [rbp-68h] BYREF

  v8 = Index;
  v34[2] = Index;
  memset(v53, 0, sizeof(v53));
  memset(v54, 0, sizeof(v54));
  v33 = 0LL;
  v35 = 0LL;
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
    EtwGetKernelTraceTimestamp(v54, 0x20000u);
  v29 = 0;
  v30 = 0;
  memset(v49, 0, 0x40uLL);
  v32 = 0LL;
  v34[0] = 0;
  v50 = 0LL;
  Src = 0LL;
  v52 = 0;
  v37[1] = v37;
  v37[0] = v37;
  v36 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v11 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  v28 = v11;
  if ( !v11 )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v27 = -1073741431;
LABEL_79:
    v22 = 0LL;
    goto LABEL_39;
  }
  if ( (unsigned int)KeyInformationClass > KeyFullInformation )
  {
    if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7)
      && KeyHandle
      && ObReferenceObjectByHandle(
           KeyHandle,
           0,
           (POBJECT_TYPE)CmKeyObjectType,
           KeGetCurrentThread()->PreviousMode,
           &v38,
           0LL) >= 0 )
    {
      v22 = *((_QWORD *)v38 + 1);
      ObfDereferenceObject(v38);
    }
    else
    {
      v22 = 0LL;
    }
    v27 = -1073741811;
    goto LABEL_39;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v49[8] = 0LL;
  v27 = ObReferenceObjectByHandle(KeyHandle, 8u, (POBJECT_TYPE)CmKeyObjectType, PreviousMode, &Object, 0LL);
  v13 = Object;
  v40 = Object;
  if ( v27 >= 0 )
  {
    if ( *(_DWORD *)Object == 1803104306 )
    {
      v32 = Object;
      v13 = 0LL;
      v40 = 0LL;
      v27 = 0;
    }
    else
    {
      v27 = -1073741816;
    }
  }
  if ( v13 )
    ObfDereferenceObject(v13);
  if ( v27 < 0 )
  {
    v8 = Index;
    goto LABEL_79;
  }
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) && v32 )
  {
    v33 = *((_QWORD *)v32 + 1);
    v35 = v33;
  }
  if ( PreviousMode == 1 )
  {
    v14 = Length;
    if ( Length )
    {
      v15 = (unsigned __int64)KeyInformation;
      if ( ((unsigned __int8)KeyInformation & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v16 = (unsigned __int64)KeyInformation + Length - 1;
      if ( (unsigned __int64)KeyInformation > v16 || v16 >= 0x7FFFFFFF0000LL )
        ExRaiseAccessViolation();
      v17 = (v16 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      do
      {
        *(_BYTE *)v15 = *(_BYTE *)v15;
        v15 = (v15 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      }
      while ( v15 != v17 );
    }
    v18 = (__int64)ResultLength;
    if ( (unsigned __int64)ResultLength >= 0x7FFFFFFF0000LL )
      v18 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v18 = *(_DWORD *)v18;
  }
  else
  {
    v14 = Length;
  }
  v19 = KeGetCurrentThread();
  --v19->KernelApcDisable;
  v30 = 1;
  if ( !CmpCallBackCount || ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
    goto LABEL_30;
  v49[0] = v32;
  v49[1] = __PAIR64__(KeyInformationClass, Index);
  v49[2] = KeyInformation;
  LODWORD(v49[3]) = v14;
  v49[4] = ResultLength;
  v20 = CmpCallCallBacksEx(5u, (__int64)v49, 0LL, 1, 0x14u, (__int64)v32, (__int64)v37);
  v27 = v20;
  if ( v20 >= 0 )
  {
    v29 = 1;
LABEL_30:
    v27 = CmKeyBodyRemapToVirtualForEnum(&v32, PreviousMode, 8, &v36);
    if ( v27 < 0
      || (v27 = CmpBounceContextStart((__int64)&v50, KeyInformation, v14, (unsigned int)PreviousMode, 0), v27 < 0) )
    {
      v11 = v28;
      v8 = Index;
      v22 = v33;
    }
    else
    {
      v8 = Index;
      v27 = CmEnumerateKey((_DWORD)v32, (_DWORD)v36, Index, KeyInformationClass, (__int64)Src, v14, (__int64)v34);
      if ( v27 >= 0 || v27 == -2147483643 || v27 == -1073741789 )
      {
        v21 = v34[0];
        *ResultLength = v34[0];
        if ( v27 != -1073741789 )
        {
          if ( v14 >= v21 )
            v14 = v21;
          if ( v50 != Src )
            memmove(v50, Src, v14);
        }
        v11 = v28;
        v22 = v33;
      }
      else
      {
        v11 = v28;
        v22 = v33;
      }
    }
    goto LABEL_39;
  }
  v11 = v28;
  v8 = Index;
  v22 = v33;
  if ( v20 == -1073740541 )
    v27 = 0;
LABEL_39:
  if ( v36 )
    ObfDereferenceObject(v36);
  if ( v29
    && CmpCallBackCount
    && !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock)
    && (_QWORD *)v37[0] != v37 )
  {
    v43 = 0;
    v46 = 0LL;
    v47 = 0LL;
    v48 = 0;
    v41 = v32;
    v42 = v27;
    v45 = v27;
    v44 = v49;
    v49[9] = &v41;
    v49[10] = 0LL;
    CmpCallCallBacksEx(0x14u, (__int64)&v41, 0LL, 0, 0x14u, (__int64)v32, (__int64)v37);
    v27 = v45;
  }
  if ( v30 )
  {
    v23 = KeGetCurrentThread();
    if ( v23->KernelApcDisable++ == -1
      && ($C6908ADE9723D0A04AF8EE82D8D15C40 *)v23->ApcState.ApcListHead[0].Flink != &v23->152
      && !v23->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery((__int64)v23);
    }
  }
  if ( v32 )
    ObfDereferenceObject(v32);
  v25 = Src;
  if ( Src && Src != v50 && Src != v53 )
  {
    if ( (v52 & 1) != 0 )
    {
      ++dword_1404F2D9C;
      if ( LOWORD(CmpBounceBufferLookaside.Alignment) >= (unsigned __int16)word_1404F2D90 )
      {
        ++dword_1404F2DA0;
        ((void (__fastcall *)(void *, _SLIST_HEADER *))qword_1404F2DB8)(Src, &CmpBounceBufferLookaside);
      }
      else
      {
        RtlpInterlockedPushEntrySList(&CmpBounceBufferLookaside, (PSLIST_ENTRY)Src);
      }
    }
    else
    {
      CmSiFreeMemory((PPRIVILEGE_SET)Src);
    }
  }
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
  {
    LOBYTE(v25) = 17;
    (*(void (__fastcall **)(void *, LARGE_INTEGER *, _QWORD, _QWORD, __int64, _QWORD))((char *)&NlsMbCodePageTag + 7))(
      v25,
      v54,
      (unsigned int)v27,
      v8,
      v22,
      0LL);
  }
  if ( v11 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return v27;
}
