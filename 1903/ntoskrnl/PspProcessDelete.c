/*
 * XREFs of PspProcessDelete @ 0x140670B40
 * Callers:
 *     <none>
 * Callees:
 *     PsGetProcessId @ 0x1400045E0 (PsGetProcessId.c)
 *     KeStackAttachProcess @ 0x140013AD0 (KeStackAttachProcess.c)
 *     KeUnstackDetachProcess @ 0x14003A6B0 (KeUnstackDetachProcess.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003F170 (KiLeaveGuardedRegionUnsafe.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x140059060 (PsReturnProcessNonPagedPoolQuota.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x140065650 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140082998 (KiQueryUnbiasedInterruptTime.c)
 *     PsDereferencePartition @ 0x1400A0388 (PsDereferencePartition.c)
 *     IoSetDiskIoAttributionOnProcess @ 0x1400ADA4C (IoSetDiskIoAttributionOnProcess.c)
 *     PspUnlockProcessListExclusive @ 0x1400ADB30 (PspUnlockProcessListExclusive.c)
 *     PspLockProcessListExclusive @ 0x1400ADD20 (PspLockProcessListExclusive.c)
 *     KeInitializeDpc @ 0x1400B8D00 (KeInitializeDpc.c)
 *     KeInsertQueueDpc @ 0x1400BCAD0 (KeInsertQueueDpc.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwDeleteWnfStateName @ 0x1401C1B50 (ZwDeleteWnfStateName.c)
 *     KeBugCheck @ 0x1401C3B00 (KeBugCheck.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     KeUnsecureProcess @ 0x1402A5304 (KeUnsecureProcess.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PspDereferenceQuotaBlock @ 0x1405C86B8 (PspDereferenceQuotaBlock.c)
 *     ExMapHandleToPointer @ 0x14060F3C0 (ExMapHandleToPointer.c)
 *     ExDestroyHandle @ 0x14060F860 (ExDestroyHandle.c)
 *     PspRemoveProcessFromJobChain @ 0x140613394 (PspRemoveProcessFromJobChain.c)
 *     MmDeleteProcessAddressSpace @ 0x1406709CC (MmDeleteProcessAddressSpace.c)
 *     PoEnergyContextCleanup @ 0x140671134 (PoEnergyContextCleanup.c)
 *     ExWnfExitProcess @ 0x1406712B4 (ExWnfExitProcess.c)
 *     LpcExitProcess @ 0x1406718C4 (LpcExitProcess.c)
 *     EtwExitProcess @ 0x140671A5C (EtwExitProcess.c)
 *     SeDeassignPrimaryToken @ 0x140671BD0 (SeDeassignPrimaryToken.c)
 *     PspExitProcess @ 0x140671BFC (PspExitProcess.c)
 *     WbRemoveWarbirdProcess @ 0x140671CFC (WbRemoveWarbirdProcess.c)
 *     ObDereferenceDeviceMap @ 0x140671E58 (ObDereferenceDeviceMap.c)
 *     SmProcessDeleteNotification @ 0x1408E8090 (SmProcessDeleteNotification.c)
 *     VmpProcessContextCleanup @ 0x1408EDFC8 (VmpProcessContextCleanup.c)
 */

void __fastcall PspProcessDelete(ULONG_PTR BugCheckParameter1)
{
  __int64 *v2; // rdi
  struct _KTHREAD *CurrentThread; // rsi
  __int64 *v4; // rcx
  __int64 **v5; // rax
  void *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // r8
  void *v9; // rcx
  __int64 v10; // rcx
  HANDLE ProcessId; // rax
  __int64 v12; // rcx
  signed __int64 *v13; // rax
  void *v14; // rcx
  __int128 *v15; // r9
  __int64 v16; // r8
  int v17; // r10d
  char v18; // di
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rax
  bool v22; // zf
  __int64 v23; // rdx
  _QWORD *v24; // r11
  const char *v25; // rax
  unsigned int v26; // r10d
  unsigned __int64 v27; // rcx
  __int64 v28; // r9
  unsigned __int64 v29; // rax
  __int64 v30; // rax
  __int128 *v31; // r10
  __int64 v32; // rax
  int v33; // r9d
  __int64 v34; // rax
  volatile signed __int32 *v35; // rcx
  void *v36; // rcx
  struct _KAPC_STATE ApcState; // [rsp+30h] [rbp-58h] BYREF

  memset(&ApcState, 0, sizeof(ApcState));
  *(_DWORD *)(BugCheckParameter1 + 780) &= ~0x4000000u;
  v2 = (__int64 *)(BugCheckParameter1 + 752);
  CurrentThread = KeGetCurrentThread();
  if ( *(_QWORD *)(BugCheckParameter1 + 752) )
  {
    PspLockProcessListExclusive((__int64)CurrentThread);
    v4 = (__int64 *)*v2;
    if ( *(__int64 **)(*v2 + 8) != v2 || (v5 = *(__int64 ***)(BugCheckParameter1 + 760), *v5 != v2) )
      __fastfail(3u);
    *v5 = v4;
    v4[1] = (__int64)v5;
    PspUnlockProcessListExclusive((__int64)CurrentThread);
  }
  v6 = *(void **)(BugCheckParameter1 + 1128);
  if ( v6 )
  {
    ExFreePoolWithTag(v6, 0);
    *(_QWORD *)(BugCheckParameter1 + 1128) = 0LL;
  }
  ObDereferenceDeviceMap(BugCheckParameter1);
  if ( *(_QWORD *)(BugCheckParameter1 + 2080) )
    ZwDeleteWnfStateName(BugCheckParameter1 + 2080, v7, v8);
  v9 = *(void **)(BugCheckParameter1 + 1056);
  if ( v9 )
  {
    ObfDereferenceObject(v9);
    *(_QWORD *)(BugCheckParameter1 + 1056) = 0LL;
  }
  v10 = *(_QWORD *)(BugCheckParameter1 + 856);
  if ( v10 )
  {
    ObfDereferenceObject((PVOID)(v10 & 0xFFFFFFFFFFFFFFF8uLL));
    *(_QWORD *)(BugCheckParameter1 + 856) = 0LL;
  }
  ProcessId = PsGetProcessId((PEPROCESS)BugCheckParameter1);
  WbRemoveWarbirdProcess(ProcessId);
  if ( (*(_DWORD *)(BugCheckParameter1 + 780) & 0x40000) != 0 )
  {
    KeStackAttachProcess((PRKPROCESS)BugCheckParameter1, &ApcState);
    if ( (*(_DWORD *)(BugCheckParameter1 + 776) & 0x400) != 0 )
      (*((void (__fastcall **)(ULONG_PTR))&xmmword_140436A10 + 1))(BugCheckParameter1);
    PspExitProcess(0LL, BugCheckParameter1);
    KeUnstackDetachProcess(&ApcState);
    MmDeleteProcessAddressSpace(BugCheckParameter1);
  }
  if ( *(_QWORD *)(BugCheckParameter1 + 952) )
  {
    PspRemoveProcessFromJobChain((PEPROCESS)BugCheckParameter1, 0LL, 1u, 0);
    ObDereferenceObjectDeferDeleteWithTag(*(PVOID *)(BugCheckParameter1 + 952), 0x73507350u);
    *(_QWORD *)(BugCheckParameter1 + 952) = 0LL;
    *(_QWORD *)(BugCheckParameter1 + 912) = 0LL;
    *(_QWORD *)(BugCheckParameter1 + 1776) = MmBadPointer;
  }
  v12 = *(_QWORD *)(BugCheckParameter1 + 2136);
  if ( v12 )
    PsDereferencePartition(v12);
  if ( *(_QWORD *)(BugCheckParameter1 + 728) )
    KeUnsecureProcess(BugCheckParameter1);
  if ( *(_QWORD *)(BugCheckParameter1 + 744) )
  {
    --CurrentThread->SpecialApcDisable;
    v13 = ExMapHandleToPointer((unsigned int *)PspCidTable, *(_QWORD *)(BugCheckParameter1 + 744));
    if ( !v13 )
      KeBugCheck(0x17u);
    ExDestroyHandle(PspCidTable, *(_QWORD *)(BugCheckParameter1 + 744), v13);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  }
  if ( *(_QWORD *)(BugCheckParameter1 + 864) )
    SeDeassignPrimaryToken(BugCheckParameter1);
  v14 = *(void **)(BugCheckParameter1 + 984);
  if ( v14 )
  {
    ExFreePoolWithTag(v14, 0);
    PsReturnProcessNonPagedPoolQuota((struct _KPROCESS *)BugCheckParameter1, 24616LL);
  }
  SmProcessDeleteNotification(BugCheckParameter1);
  EtwExitProcess(BugCheckParameter1);
  LpcExitProcess(BugCheckParameter1);
  ExWnfExitProcess(BugCheckParameter1, 1LL);
  IoSetDiskIoAttributionOnProcess(0LL, BugCheckParameter1);
  PoEnergyContextCleanup(BugCheckParameter1);
  if ( *(_QWORD *)(BugCheckParameter1 + 1904) )
  {
    VmpProcessContextCleanup();
    ExFreePoolWithTag(*(PVOID *)(BugCheckParameter1 + 1904), 0);
  }
  if ( KiQueryUnbiasedInterruptTime() >= (unsigned __int64)qword_140464330 )
  {
    v15 = &KeServiceDescriptorTable;
    _mm_prefetch((const char *)&KeServiceDescriptorTable, 0);
    v16 = qword_140464320;
    v17 = 64;
    v18 = qword_140464328;
    v19 = qword_140464320;
    v20 = 8LL;
    do
    {
      v19 = __ROR8__(v19 - *(_QWORD *)v15, qword_140464328);
      v15 = (__int128 *)((char *)v15 + 8);
      v17 -= 8;
      --v20;
    }
    while ( v20 );
    for ( ; v17; --v17 )
    {
      v21 = *(unsigned __int8 *)v15;
      v15 = (__int128 *)((char *)v15 + 1);
      v19 = __ROR8__(v19 - v21, qword_140464328);
    }
    v22 = qword_140464338 == v19;
    v23 = qword_1404642F0;
    if ( !v22 && !qword_1404642F0 )
    {
      v18 = qword_140464328;
      v16 = qword_140464320;
      v23 = (unsigned int)__ROR4__(2120, 35);
      qword_1404642F0 = (unsigned int)v23;
      qword_1404642F8 = 0LL;
      qword_140464300 = 0LL;
      qword_140464308 = 267LL;
      qword_140464310 = (__int64)&KeServiceDescriptorTable;
    }
    v24 = (_QWORD *)KeServiceDescriptorTable;
    v25 = (const char *)KeServiceDescriptorTable;
    v26 = 4 * xmmword_14058A890;
    v27 = KeServiceDescriptorTable + (unsigned int)(4 * xmmword_14058A890);
    if ( (unsigned __int64)KeServiceDescriptorTable < v27 )
    {
      do
      {
        _mm_prefetch(v25, 0);
        v25 += 64;
      }
      while ( (unsigned __int64)v25 < v27 );
    }
    v28 = v16;
    if ( v26 >= 8 )
    {
      v29 = (unsigned __int64)v26 >> 3;
      do
      {
        v28 = __ROR8__(v28 - *v24++, v18);
        v26 -= 8;
        --v29;
      }
      while ( v29 );
    }
    for ( ; v26; --v26 )
    {
      v30 = *(unsigned __int8 *)v24;
      v24 = (_QWORD *)((char *)v24 + 1);
      v28 = __ROR8__(v28 - v30, v18);
    }
    if ( qword_140464340 != v28 && !v23 )
    {
      v18 = qword_140464328;
      v16 = qword_140464320;
      v23 = (unsigned int)__ROR4__(1111490560, 150);
      qword_1404642F0 = (unsigned int)v23;
      qword_1404642F8 = 0LL;
      qword_140464300 = 0LL;
      qword_140464308 = 267LL;
      qword_140464310 = KeServiceDescriptorTable;
    }
    v31 = &KeServiceDescriptorTableShadow;
    _mm_prefetch((const char *)&KeServiceDescriptorTableShadow, 0);
    v32 = 4LL;
    v33 = 32;
    do
    {
      v16 = __ROR8__(v16 - *(_QWORD *)v31, v18);
      v31 = (__int128 *)((char *)v31 + 8);
      v33 -= 8;
      --v32;
    }
    while ( v32 );
    for ( ; v33; --v33 )
    {
      v34 = *(unsigned __int8 *)v31;
      v31 = (__int128 *)((char *)v31 + 1);
      v16 = __ROR8__(v16 - v34, v18);
    }
    if ( qword_140464348 != v16 && !v23 )
    {
      qword_1404642F8 = 0LL;
      v23 = (unsigned int)__ROR4__(603979780, 186);
      qword_1404642F0 = (unsigned int)v23;
      qword_140464300 = 0LL;
      qword_140464308 = 267LL;
      qword_140464310 = (__int64)&KeServiceDescriptorTableShadow;
    }
    if ( (_QWORD)KeServiceDescriptorTableShadow != (_QWORD)KeServiceDescriptorTable
      || (_DWORD)xmmword_140572A90 != (_DWORD)xmmword_14058A890 )
    {
      if ( v23 )
        goto LABEL_53;
      v23 = (unsigned int)__ROR4__(4240, 68);
      qword_1404642F0 = (unsigned int)v23;
      qword_1404642F8 = 0LL;
      qword_140464300 = 0LL;
      qword_140464308 = 267LL;
      qword_140464310 = KeServiceDescriptorTableShadow;
    }
    if ( !v23 )
    {
LABEL_58:
      qword_140464330 = KiQueryUnbiasedInterruptTime() + 41929663 * (__rdtsc() >> 4) % 0x12A05F2000LL + 288000000000LL;
      goto LABEL_59;
    }
LABEL_53:
    if ( (void (__fastcall __noreturn *)(struct _KDPC *, ULONG_PTR *, PVOID, PVOID))stru_1404642B0.DeferredRoutine != KiSchedulerDpc )
      KeInitializeDpc(&stru_1404642B0, (PKDEFERRED_ROUTINE)KiSchedulerDpc, &stru_1404642B0);
    qword_140464318 = 1845792LL;
    KeInsertQueueDpc(&stru_1404642B0, 0LL, 0LL);
    goto LABEL_58;
  }
LABEL_59:
  v35 = *(volatile signed __int32 **)(BugCheckParameter1 + 1040);
  if ( v35 )
  {
    _InterlockedAdd(v35 + 129, 0xFFFFFFFF);
    PspDereferenceQuotaBlock(v35);
  }
  v36 = *(void **)(BugCheckParameter1 + 1064);
  if ( v36 )
  {
    ExFreePoolWithTag(v36, 0);
    *(_QWORD *)(BugCheckParameter1 + 1064) = 0LL;
  }
}
