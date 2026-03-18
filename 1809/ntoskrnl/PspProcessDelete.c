/*
 * XREFs of PspProcessDelete @ 0x140607590
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
 *     PsReturnProcessNonPagedPoolQuota @ 0x140068570 (PsReturnProcessNonPagedPoolQuota.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14008CF10 (KiQueryUnbiasedInterruptTime.c)
 *     IoSetDiskIoAttributionOnProcess @ 0x140090424 (IoSetDiskIoAttributionOnProcess.c)
 *     PsDereferencePartition @ 0x140090CC0 (PsDereferencePartition.c)
 *     PspUnlockProcessListExclusive @ 0x140091DE0 (PspUnlockProcessListExclusive.c)
 *     KeInitializeDpc @ 0x1400A56D0 (KeInitializeDpc.c)
 *     PsGetProcessId @ 0x1400A56F0 (PsGetProcessId.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1400BF990 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     SmKmStoreRefFromStoreIndex @ 0x1400E1208 (SmKmStoreRefFromStoreIndex.c)
 *     SmKmStoreDeleteWhenEmpty @ 0x140138308 (SmKmStoreDeleteWhenEmpty.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     ZwDeleteWnfStateName @ 0x1401B9BD0 (ZwDeleteWnfStateName.c)
 *     KeBugCheck @ 0x1401BBB80 (KeBugCheck.c)
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 *     KeUnsecureProcess @ 0x14028E738 (KeUnsecureProcess.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     PspDereferenceQuotaBlock @ 0x1405CACF4 (PspDereferenceQuotaBlock.c)
 *     ExMapHandleToPointer @ 0x1405F56A0 (ExMapHandleToPointer.c)
 *     ExDestroyHandle @ 0x1405FB318 (ExDestroyHandle.c)
 *     PspRemoveProcessFromJobChain @ 0x140600410 (PspRemoveProcessFromJobChain.c)
 *     PoEnergyContextCleanup @ 0x1406078D0 (PoEnergyContextCleanup.c)
 *     ExWnfExitProcess @ 0x140607A48 (ExWnfExitProcess.c)
 *     LpcExitProcess @ 0x140608018 (LpcExitProcess.c)
 *     EtwExitProcess @ 0x1406080F8 (EtwExitProcess.c)
 *     SeDeassignPrimaryToken @ 0x14060895C (SeDeassignPrimaryToken.c)
 *     WbRemoveWarbirdProcess @ 0x140608988 (WbRemoveWarbirdProcess.c)
 *     MmDeleteProcessAddressSpace @ 0x140608AD0 (MmDeleteProcessAddressSpace.c)
 *     PspExitProcess @ 0x140608E0C (PspExitProcess.c)
 *     ObDereferenceDeviceMap @ 0x140608F0C (ObDereferenceDeviceMap.c)
 *     VmpProcessContextCleanup @ 0x1408B0B48 (VmpProcessContextCleanup.c)
 */

void __fastcall PspProcessDelete(ULONG_PTR BugCheckParameter1)
{
  _QWORD *v1; // rbx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v4; // rcx
  _QWORD *v5; // rax
  void *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // r8
  void *v9; // rcx
  __int64 v10; // rcx
  HANDLE ProcessId; // rax
  __int64 v12; // rcx
  signed __int64 *v13; // rax
  void *v14; // rcx
  __int64 v15; // rax
  volatile signed __int32 *v16; // rcx
  void *v17; // rcx
  __int16 v18; // bx
  unsigned int v19; // ebx
  __int64 *v20; // rax
  __int64 v21; // rcx
  struct _EX_RUNDOWN_REF *v22; // rax
  __int128 *v23; // r9
  __int64 v24; // r8
  int v25; // r10d
  char v26; // r11
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rax
  bool v30; // zf
  __int64 v31; // rdx
  _QWORD *v32; // rbx
  const char *v33; // rax
  unsigned int v34; // r10d
  unsigned __int64 v35; // rcx
  __int64 v36; // r9
  unsigned __int64 v37; // rax
  __int64 v38; // rax
  __int128 *v39; // r10
  __int64 v40; // rax
  int v41; // r9d
  __int64 v42; // rax
  ULONG_PTR v43; // [rsp+30h] [rbp-40h] BYREF
  _BYTE v44[48]; // [rsp+38h] [rbp-38h] BYREF

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
    ZwDeleteWnfStateName(BugCheckParameter1 + 2032, v7, v8);
  v9 = *(void **)(BugCheckParameter1 + 1056);
  if ( v9 )
  {
    ObfDereferenceObject(v9);
    *(_QWORD *)(BugCheckParameter1 + 1056) = 0LL;
  }
  v10 = *(_QWORD *)(BugCheckParameter1 + 848);
  if ( v10 )
  {
    ObfDereferenceObject((PVOID)(v10 & 0xFFFFFFFFFFFFFFF8uLL));
    *(_QWORD *)(BugCheckParameter1 + 848) = 0LL;
  }
  ProcessId = PsGetProcessId((PEPROCESS)BugCheckParameter1);
  WbRemoveWarbirdProcess(ProcessId);
  if ( (*(_DWORD *)(BugCheckParameter1 + 772) & 0x40000) != 0 )
  {
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0LL, (__int64)v44);
    if ( (*(_DWORD *)(BugCheckParameter1 + 768) & 0x400) != 0 )
      (*((void (__fastcall **)(ULONG_PTR))&xmmword_14040E2F0 + 1))(BugCheckParameter1);
    PspExitProcess(0LL, BugCheckParameter1);
    KiUnstackDetachProcess((__int64)v44, 0LL);
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
  v12 = *(_QWORD *)(BugCheckParameter1 + 2088);
  if ( v12 )
    PsDereferencePartition(v12);
  if ( *(_QWORD *)(BugCheckParameter1 + 720) )
    KeUnsecureProcess(BugCheckParameter1);
  if ( *(_QWORD *)(BugCheckParameter1 + 736) )
  {
    --CurrentThread->SpecialApcDisable;
    v13 = ExMapHandleToPointer((unsigned int *)PspCidTable, *(_QWORD *)(BugCheckParameter1 + 736));
    if ( !v13 )
      KeBugCheck(0x17u);
    ExDestroyHandle(PspCidTable, *(_QWORD *)(BugCheckParameter1 + 736), v13);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  }
  if ( *(_QWORD *)(BugCheckParameter1 + 856) )
    SeDeassignPrimaryToken(BugCheckParameter1);
  v14 = *(void **)(BugCheckParameter1 + 976);
  if ( v14 )
  {
    ExFreePoolWithTag(v14, 0);
    PsReturnProcessNonPagedPoolQuota((struct _KPROCESS *)BugCheckParameter1, 24616LL);
  }
  v43 = BugCheckParameter1;
  v15 = SmpKeyedStoreEntryGet((ULONG_PTR)&qword_14055B188, &v43, 2, 0);
  if ( v15 )
  {
    v18 = *(_WORD *)(v15 + 16);
    CmSiFreeMemory((PPRIVILEGE_SET)v15);
    v19 = v18 & 0x3FF;
    v20 = (__int64 *)SmKmStoreRefFromStoreIndex((__int64)&SmGlobals, v19);
    SmKmStoreDeleteWhenEmpty(v21, *v20);
    v22 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex((__int64)&SmGlobals, v19);
    ExReleaseRundownProtection_0(v22 + 1);
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
  if ( KiQueryUnbiasedInterruptTime() >= (unsigned __int64)qword_1404388A0 )
  {
    v23 = &KeServiceDescriptorTable;
    _mm_prefetch((const char *)&KeServiceDescriptorTable, 0);
    v24 = qword_140438890;
    v25 = 64;
    v26 = qword_140438898;
    v27 = qword_140438890;
    v28 = 8LL;
    do
    {
      v27 = __ROR8__(v27 - *(_QWORD *)v23, qword_140438898);
      v23 = (__int128 *)((char *)v23 + 8);
      v25 -= 8;
      --v28;
    }
    while ( v28 );
    for ( ; v25; --v25 )
    {
      v29 = *(unsigned __int8 *)v23;
      v23 = (__int128 *)((char *)v23 + 1);
      v27 = __ROR8__(v27 - v29, qword_140438898);
    }
    v30 = qword_1404388A8 == v27;
    v31 = qword_140438860;
    if ( !v30 && !qword_140438860 )
    {
      v26 = qword_140438898;
      v24 = qword_140438890;
      v31 = (unsigned int)__ROR4__(2120, 35);
      qword_140438860 = (unsigned int)v31;
      qword_140438868 = 0LL;
      qword_140438870 = 0LL;
      qword_140438878 = 267LL;
      qword_140438880 = (__int64)&KeServiceDescriptorTable;
    }
    v32 = (_QWORD *)KeServiceDescriptorTable;
    v33 = (const char *)KeServiceDescriptorTable;
    v34 = 4 * xmmword_140559890;
    v35 = KeServiceDescriptorTable + (unsigned int)(4 * xmmword_140559890);
    if ( (unsigned __int64)KeServiceDescriptorTable < v35 )
    {
      do
      {
        _mm_prefetch(v33, 0);
        v33 += 64;
      }
      while ( (unsigned __int64)v33 < v35 );
    }
    v36 = v24;
    if ( v34 >= 8 )
    {
      v37 = (unsigned __int64)v34 >> 3;
      do
      {
        v36 = __ROR8__(v36 - *v32++, v26);
        v34 -= 8;
        --v37;
      }
      while ( v37 );
    }
    for ( ; v34; --v34 )
    {
      v38 = *(unsigned __int8 *)v32;
      v32 = (_QWORD *)((char *)v32 + 1);
      v36 = __ROR8__(v36 - v38, v26);
    }
    if ( qword_1404388B0 != v36 && !v31 )
    {
      v26 = qword_140438898;
      v24 = qword_140438890;
      v31 = (unsigned int)__ROR4__(1111490560, 150);
      qword_140438860 = (unsigned int)v31;
      qword_140438868 = 0LL;
      qword_140438870 = 0LL;
      qword_140438878 = 267LL;
      qword_140438880 = KeServiceDescriptorTable;
    }
    v39 = &KeServiceDescriptorTableShadow;
    _mm_prefetch((const char *)&KeServiceDescriptorTableShadow, 0);
    v40 = 4LL;
    v41 = 32;
    do
    {
      v24 = __ROR8__(v24 - *(_QWORD *)v39, v26);
      v39 = (__int128 *)((char *)v39 + 8);
      v41 -= 8;
      --v40;
    }
    while ( v40 );
    for ( ; v41; --v41 )
    {
      v42 = *(unsigned __int8 *)v39;
      v39 = (__int128 *)((char *)v39 + 1);
      v24 = __ROR8__(v24 - v42, v26);
    }
    if ( qword_1404388B8 != v24 && !v31 )
    {
      qword_140438868 = 0LL;
      v31 = (unsigned int)__ROR4__(603979780, 186);
      qword_140438860 = (unsigned int)v31;
      qword_140438870 = 0LL;
      qword_140438878 = 267LL;
      qword_140438880 = (__int64)&KeServiceDescriptorTableShadow;
    }
    if ( (_QWORD)KeServiceDescriptorTableShadow != (_QWORD)KeServiceDescriptorTable
      || (_DWORD)xmmword_140541990 != (_DWORD)xmmword_140559890 )
    {
      if ( v31 )
        goto LABEL_70;
      v31 = (unsigned int)__ROR4__(4240, 68);
      qword_140438860 = (unsigned int)v31;
      qword_140438868 = 0LL;
      qword_140438870 = 0LL;
      qword_140438878 = 267LL;
      qword_140438880 = KeServiceDescriptorTableShadow;
    }
    if ( !v31 )
    {
LABEL_73:
      qword_1404388A0 = KiQueryUnbiasedInterruptTime() + 41929663 * (__rdtsc() >> 4) % 0x12A05F2000LL + 288000000000LL;
      goto LABEL_35;
    }
LABEL_70:
    if ( (void (__fastcall __noreturn *)(struct _KDPC *, ULONG_PTR *, PVOID, PVOID))stru_140438820.DeferredRoutine != KiSchedulerDpc )
      KeInitializeDpc(&stru_140438820, (PKDEFERRED_ROUTINE)KiSchedulerDpc, &stru_140438820);
    qword_140438888 = 1845792LL;
    KeInsertQueueDpc(&stru_140438820, 0LL, 0LL);
    goto LABEL_73;
  }
LABEL_35:
  v16 = *(volatile signed __int32 **)(BugCheckParameter1 + 1040);
  if ( v16 )
  {
    _InterlockedAdd(v16 + 129, 0xFFFFFFFF);
    PspDereferenceQuotaBlock(v16);
  }
  v17 = *(void **)(BugCheckParameter1 + 1064);
  if ( v17 )
  {
    ExFreePoolWithTag(v17, 0);
    *(_QWORD *)(BugCheckParameter1 + 1064) = 0LL;
  }
}
