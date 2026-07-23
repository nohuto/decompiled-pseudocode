/*
 * XREFs of PspProcessDelete @ 0x140608590
 * Callers:
 *     <none>
 * Callees:
 *     SmpKeyedStoreEntryGet @ 0x140011FDC (SmpKeyedStoreEntryGet.c)
 *     CmSiFreeMemory @ 0x140013000 (CmSiFreeMemory.c)
 *     KiStackAttachProcess @ 0x140016DB0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     KeInsertQueueDpc @ 0x140062190 (KeInsertQueueDpc.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x140068560 (PsReturnProcessNonPagedPoolQuota.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14008CE50 (KiQueryUnbiasedInterruptTime.c)
 *     IoSetDiskIoAttributionOnProcess @ 0x140090364 (IoSetDiskIoAttributionOnProcess.c)
 *     PsDereferencePartition @ 0x140090C00 (PsDereferencePartition.c)
 *     PspUnlockProcessListExclusive @ 0x140091D20 (PspUnlockProcessListExclusive.c)
 *     KeInitializeDpc @ 0x1400A5630 (KeInitializeDpc.c)
 *     PsGetProcessId @ 0x1400A5650 (PsGetProcessId.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1400BF8F0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     SmKmStoreRefFromStoreIndex @ 0x1400E12A8 (SmKmStoreRefFromStoreIndex.c)
 *     SmKmStoreDeleteWhenEmpty @ 0x140138428 (SmKmStoreDeleteWhenEmpty.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwDeleteWnfStateName @ 0x1401B9D50 (ZwDeleteWnfStateName.c)
 *     KeBugCheck @ 0x1401BBD00 (KeBugCheck.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     KeUnsecureProcess @ 0x14028EA28 (KeUnsecureProcess.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PspDereferenceQuotaBlock @ 0x1405CBCF4 (PspDereferenceQuotaBlock.c)
 *     ExMapHandleToPointer @ 0x1405F66A0 (ExMapHandleToPointer.c)
 *     ExDestroyHandle @ 0x1405FC318 (ExDestroyHandle.c)
 *     PspRemoveProcessFromJobChain @ 0x140601410 (PspRemoveProcessFromJobChain.c)
 *     PoEnergyContextCleanup @ 0x1406088D0 (PoEnergyContextCleanup.c)
 *     ExWnfExitProcess @ 0x140608A48 (ExWnfExitProcess.c)
 *     LpcExitProcess @ 0x140609018 (LpcExitProcess.c)
 *     EtwExitProcess @ 0x1406090F8 (EtwExitProcess.c)
 *     SeDeassignPrimaryToken @ 0x14060995C (SeDeassignPrimaryToken.c)
 *     WbRemoveWarbirdProcess @ 0x140609988 (WbRemoveWarbirdProcess.c)
 *     MmDeleteProcessAddressSpace @ 0x140609AD0 (MmDeleteProcessAddressSpace.c)
 *     PspExitProcess @ 0x140609E0C (PspExitProcess.c)
 *     ObDereferenceDeviceMap @ 0x140609F0C (ObDereferenceDeviceMap.c)
 *     VmpProcessContextCleanup @ 0x1408B1D88 (VmpProcessContextCleanup.c)
 */

void __fastcall PspProcessDelete(ULONG_PTR BugCheckParameter1)
{
  _QWORD *v1; // rbx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v4; // rcx
  _QWORD *v5; // rax
  void *v6; // rcx
  void *v7; // rcx
  __int64 v8; // rcx
  HANDLE ProcessId; // rax
  __int64 v10; // rcx
  signed __int64 *v11; // rax
  void *v12; // rcx
  __int64 v13; // rax
  volatile signed __int32 *v14; // rcx
  void *v15; // rcx
  __int16 v16; // bx
  unsigned int v17; // ebx
  __int64 *v18; // rax
  __int64 v19; // rcx
  struct _EX_RUNDOWN_REF *v20; // rax
  __int128 *v21; // r9
  __int64 v22; // r8
  int v23; // r10d
  char v24; // r11
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rax
  bool v28; // zf
  __int64 v29; // rdx
  _QWORD *v30; // rbx
  const char *v31; // rax
  unsigned int v32; // r10d
  unsigned __int64 v33; // rcx
  __int64 v34; // r9
  unsigned __int64 v35; // rax
  __int64 v36; // rax
  __int128 *v37; // r10
  __int64 v38; // rax
  int v39; // r9d
  __int64 v40; // rax
  ULONG_PTR v41; // [rsp+30h] [rbp-40h] BYREF
  _BYTE v42[48]; // [rsp+38h] [rbp-38h] BYREF

  *(_DWORD *)(BugCheckParameter1 + 772) &= ~0x4000000u;
  v1 = (_QWORD *)(BugCheckParameter1 + 744);
  CurrentThread = KeGetCurrentThread();
  if ( *(_QWORD *)(BugCheckParameter1 + 744) )
  {
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&PspActiveProcessLock, 0LL);
    v4 = *v1;
    if ( *(_QWORD **)(*v1 + 8LL) != v1 || (v5 = (_QWORD *)v1[1], (_QWORD *)*v5 != v1) )
      __fastfail(3u);
    *v5 = v4;
    *(_QWORD *)(v4 + 8) = v5;
    PspUnlockProcessListExclusive((__int64)CurrentThread);
  }
  v6 = *(void **)(BugCheckParameter1 + 1128);
  if ( v6 )
  {
    ExFreePoolWithTag(v6, 0);
    *(_QWORD *)(BugCheckParameter1 + 1128) = 0LL;
  }
  ObDereferenceDeviceMap(BugCheckParameter1);
  if ( *(_QWORD *)(BugCheckParameter1 + 2032) )
    ZwDeleteWnfStateName((PCWNF_STATE_NAME)(BugCheckParameter1 + 2032));
  v7 = *(void **)(BugCheckParameter1 + 1056);
  if ( v7 )
  {
    ObfDereferenceObject(v7);
    *(_QWORD *)(BugCheckParameter1 + 1056) = 0LL;
  }
  v8 = *(_QWORD *)(BugCheckParameter1 + 848);
  if ( v8 )
  {
    ObfDereferenceObject((PVOID)(v8 & 0xFFFFFFFFFFFFFFF8uLL));
    *(_QWORD *)(BugCheckParameter1 + 848) = 0LL;
  }
  ProcessId = PsGetProcessId((PEPROCESS)BugCheckParameter1);
  WbRemoveWarbirdProcess(ProcessId);
  if ( (*(_DWORD *)(BugCheckParameter1 + 772) & 0x40000) != 0 )
  {
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0LL, (__int64)v42);
    if ( (*(_DWORD *)(BugCheckParameter1 + 768) & 0x400) != 0 )
      (*((void (__fastcall **)(ULONG_PTR))&xmmword_14040F330 + 1))(BugCheckParameter1);
    PspExitProcess(0LL, BugCheckParameter1);
    KiUnstackDetachProcess((__int64)v42, 0LL);
    MmDeleteProcessAddressSpace(BugCheckParameter1);
  }
  if ( *(_QWORD *)(BugCheckParameter1 + 944) )
  {
    PspRemoveProcessFromJobChain((PEPROCESS)BugCheckParameter1, 0LL, 1u, 0);
    ObDereferenceObjectDeferDeleteWithTag(*(PVOID *)(BugCheckParameter1 + 944), 0x73507350u);
    *(_QWORD *)(BugCheckParameter1 + 944) = 0LL;
    *(_QWORD *)(BugCheckParameter1 + 904) = 0LL;
    *(_QWORD *)(BugCheckParameter1 + 1728) = MmBadPointer;
  }
  v10 = *(_QWORD *)(BugCheckParameter1 + 2088);
  if ( v10 )
    PsDereferencePartition(v10);
  if ( *(_QWORD *)(BugCheckParameter1 + 720) )
    KeUnsecureProcess(BugCheckParameter1);
  if ( *(_QWORD *)(BugCheckParameter1 + 736) )
  {
    --CurrentThread->SpecialApcDisable;
    v11 = ExMapHandleToPointer((unsigned int *)PspCidTable, *(_QWORD *)(BugCheckParameter1 + 736));
    if ( !v11 )
      KeBugCheck(0x17u);
    ExDestroyHandle(PspCidTable, *(_QWORD *)(BugCheckParameter1 + 736), v11);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  }
  if ( *(_QWORD *)(BugCheckParameter1 + 856) )
    SeDeassignPrimaryToken(BugCheckParameter1);
  v12 = *(void **)(BugCheckParameter1 + 976);
  if ( v12 )
  {
    ExFreePoolWithTag(v12, 0);
    PsReturnProcessNonPagedPoolQuota((struct _KPROCESS *)BugCheckParameter1, 24616LL);
  }
  v41 = BugCheckParameter1;
  v13 = SmpKeyedStoreEntryGet((ULONG_PTR)&qword_14055C188, &v41, 2, 0);
  if ( v13 )
  {
    v16 = *(_WORD *)(v13 + 16);
    CmSiFreeMemory((PPRIVILEGE_SET)v13);
    v17 = v16 & 0x3FF;
    v18 = (__int64 *)SmKmStoreRefFromStoreIndex((__int64)&SmGlobals, v17);
    SmKmStoreDeleteWhenEmpty(v19, *v18);
    v20 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex((__int64)&SmGlobals, v17);
    ExReleaseRundownProtection_0(v20 + 1);
  }
  EtwExitProcess(BugCheckParameter1);
  LpcExitProcess(BugCheckParameter1);
  ExWnfExitProcess(BugCheckParameter1, 1LL);
  IoSetDiskIoAttributionOnProcess(0LL, BugCheckParameter1);
  PoEnergyContextCleanup(BugCheckParameter1);
  if ( *(_QWORD *)(BugCheckParameter1 + 1856) )
  {
    VmpProcessContextCleanup();
    ExFreePoolWithTag(*(PVOID *)(BugCheckParameter1 + 1856), 0);
  }
  if ( KiQueryUnbiasedInterruptTime() >= (unsigned __int64)qword_140439960 )
  {
    v21 = &KeServiceDescriptorTable;
    _mm_prefetch((const char *)&KeServiceDescriptorTable, 0);
    v22 = qword_140439950;
    v23 = 64;
    v24 = qword_140439958;
    v25 = qword_140439950;
    v26 = 8LL;
    do
    {
      v25 = __ROR8__(v25 - *(_QWORD *)v21, qword_140439958);
      v21 = (__int128 *)((char *)v21 + 8);
      v23 -= 8;
      --v26;
    }
    while ( v26 );
    for ( ; v23; --v23 )
    {
      v27 = *(unsigned __int8 *)v21;
      v21 = (__int128 *)((char *)v21 + 1);
      v25 = __ROR8__(v25 - v27, qword_140439958);
    }
    v28 = qword_140439968 == v25;
    v29 = qword_140439920;
    if ( !v28 && !qword_140439920 )
    {
      v24 = qword_140439958;
      v22 = qword_140439950;
      v29 = (unsigned int)__ROR4__(2120, 35);
      qword_140439920 = (unsigned int)v29;
      qword_140439928 = 0LL;
      qword_140439930 = 0LL;
      qword_140439938 = 267LL;
      qword_140439940 = (__int64)&KeServiceDescriptorTable;
    }
    v30 = (_QWORD *)KeServiceDescriptorTable;
    v31 = (const char *)KeServiceDescriptorTable;
    v32 = 4 * xmmword_14055A890;
    v33 = KeServiceDescriptorTable + (unsigned int)(4 * xmmword_14055A890);
    if ( (unsigned __int64)KeServiceDescriptorTable < v33 )
    {
      do
      {
        _mm_prefetch(v31, 0);
        v31 += 64;
      }
      while ( (unsigned __int64)v31 < v33 );
    }
    v34 = v22;
    if ( v32 >= 8 )
    {
      v35 = (unsigned __int64)v32 >> 3;
      do
      {
        v34 = __ROR8__(v34 - *v30++, v24);
        v32 -= 8;
        --v35;
      }
      while ( v35 );
    }
    for ( ; v32; --v32 )
    {
      v36 = *(unsigned __int8 *)v30;
      v30 = (_QWORD *)((char *)v30 + 1);
      v34 = __ROR8__(v34 - v36, v24);
    }
    if ( qword_140439970 != v34 && !v29 )
    {
      v24 = qword_140439958;
      v22 = qword_140439950;
      v29 = (unsigned int)__ROR4__(1111490560, 150);
      qword_140439920 = (unsigned int)v29;
      qword_140439928 = 0LL;
      qword_140439930 = 0LL;
      qword_140439938 = 267LL;
      qword_140439940 = KeServiceDescriptorTable;
    }
    v37 = &KeServiceDescriptorTableShadow;
    _mm_prefetch((const char *)&KeServiceDescriptorTableShadow, 0);
    v38 = 4LL;
    v39 = 32;
    do
    {
      v22 = __ROR8__(v22 - *(_QWORD *)v37, v24);
      v37 = (__int128 *)((char *)v37 + 8);
      v39 -= 8;
      --v38;
    }
    while ( v38 );
    for ( ; v39; --v39 )
    {
      v40 = *(unsigned __int8 *)v37;
      v37 = (__int128 *)((char *)v37 + 1);
      v22 = __ROR8__(v22 - v40, v24);
    }
    if ( qword_140439978 != v22 && !v29 )
    {
      qword_140439928 = 0LL;
      v29 = (unsigned int)__ROR4__(603979780, 186);
      qword_140439920 = (unsigned int)v29;
      qword_140439930 = 0LL;
      qword_140439938 = 267LL;
      qword_140439940 = (__int64)&KeServiceDescriptorTableShadow;
    }
    if ( (_QWORD)KeServiceDescriptorTableShadow != (_QWORD)KeServiceDescriptorTable
      || (_DWORD)xmmword_140542990 != (_DWORD)xmmword_14055A890 )
    {
      if ( v29 )
        goto LABEL_70;
      v29 = (unsigned int)__ROR4__(4240, 68);
      qword_140439920 = (unsigned int)v29;
      qword_140439928 = 0LL;
      qword_140439930 = 0LL;
      qword_140439938 = 267LL;
      qword_140439940 = KeServiceDescriptorTableShadow;
    }
    if ( !v29 )
    {
LABEL_73:
      qword_140439960 = KiQueryUnbiasedInterruptTime() + 41929663 * (__rdtsc() >> 4) % 0x12A05F2000LL + 288000000000LL;
      goto LABEL_35;
    }
LABEL_70:
    if ( (void (__fastcall __noreturn *)(struct _KDPC *, ULONG_PTR *, PVOID, PVOID))stru_1404398E0.DeferredRoutine != KiSchedulerDpc )
      KeInitializeDpc(&stru_1404398E0, (PKDEFERRED_ROUTINE)KiSchedulerDpc, &stru_1404398E0);
    qword_140439948 = 1845792LL;
    KeInsertQueueDpc(&stru_1404398E0, 0LL, 0LL);
    goto LABEL_73;
  }
LABEL_35:
  v14 = *(volatile signed __int32 **)(BugCheckParameter1 + 1040);
  if ( v14 )
  {
    _InterlockedAdd(v14 + 129, 0xFFFFFFFF);
    PspDereferenceQuotaBlock(v14);
  }
  v15 = *(void **)(BugCheckParameter1 + 1064);
  if ( v15 )
  {
    ExFreePoolWithTag(v15, 0);
    *(_QWORD *)(BugCheckParameter1 + 1064) = 0LL;
  }
}
