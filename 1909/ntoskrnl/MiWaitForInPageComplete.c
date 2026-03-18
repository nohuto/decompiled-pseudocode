/*
 * XREFs of MiWaitForInPageComplete @ 0x140006C70
 * Callers:
 *     MiIssueHardFault @ 0x140007190 (MiIssueHardFault.c)
 *     MiPfCompleteInPageSupport @ 0x14009553C (MiPfCompleteInPageSupport.c)
 * Callees:
 *     MmIsAddressValidEx @ 0x14001F910 (MmIsAddressValidEx.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140026E50 (MiUnmapPageInHyperSpaceWorker.c)
 *     RtlAvlRemoveNode @ 0x140029C60 (RtlAvlRemoveNode.c)
 *     MiCopyPage @ 0x14002C9C0 (MiCopyPage.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14002E160 (MiMapPageInHyperSpaceWorker.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiGetSystemRegionType @ 0x14003EA70 (MiGetSystemRegionType.c)
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400447C0 (KeAcquireInStackQueuedSpinLock.c)
 *     MmUnmapLockedPages @ 0x14006AF70 (MmUnmapLockedPages.c)
 *     MiZeroPhysicalPage @ 0x14006F000 (MiZeroPhysicalPage.c)
 *     MiGetSharedVm @ 0x140072E80 (MiGetSharedVm.c)
 *     MiValidateInPage @ 0x14008D440 (MiValidateInPage.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiFindContiguousPages @ 0x1400B9E60 (MiFindContiguousPages.c)
 *     MiDereferenceControlAreaProbe @ 0x1400BF650 (MiDereferenceControlAreaProbe.c)
 *     MiIsRetryIoStatus @ 0x1400BF9D0 (MiIsRetryIoStatus.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1400C4AC8 (MiSetOriginalPtePfnFromFreeList.c)
 *     KiUnstackDetachProcess @ 0x1400CDDC0 (KiUnstackDetachProcess.c)
 *     MiLockPageInline @ 0x1400DDE20 (MiLockPageInline.c)
 *     PfHardFaultLog @ 0x14012784C (PfHardFaultLog.c)
 *     MiPrefetchRestOfCluster @ 0x14013B2EC (MiPrefetchRestOfCluster.c)
 *     MiValidatePagefilePageHash @ 0x140164C9C (MiValidatePagefilePageHash.c)
 *     MiStoreFaultComplete @ 0x140165AAC (MiStoreFaultComplete.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     MiExceptionForMappedVa @ 0x1402BC970 (MiExceptionForMappedVa.c)
 *     MiRetardMdl @ 0x1402BF9DC (MiRetardMdl.c)
 *     MiFlushAllFilesystemPages @ 0x1402C3960 (MiFlushAllFilesystemPages.c)
 */

__int64 __fastcall MiWaitForInPageComplete(__int64 a1, ULONG_PTR a2, unsigned int *a3)
{
  ULONG_PTR v3; // rsi
  __int64 v4; // r8
  __int64 v5; // rbp
  __int64 v6; // r15
  ULONG_PTR v7; // rbx
  ULONG_PTR v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // edx
  __int64 v16; // r13
  unsigned __int64 v17; // rax
  int v18; // eax
  int v19; // r14d
  int v20; // r12d
  unsigned int *v21; // rax
  unsigned int v22; // r15d
  bool v23; // zf
  __int64 v24; // rdx
  int v25; // esi
  __int64 v26; // rbx
  __int64 result; // rax
  unsigned __int64 v28; // r13
  _QWORD *v29; // r12
  void *v30; // rsi
  ULONG_PTR *v31; // r14
  unsigned __int64 v32; // rsi
  unsigned __int64 v33; // rbx
  _BYTE *v34; // rdx
  __int64 v35; // r14
  unsigned __int64 v36; // r13
  int v37; // r9d
  __int64 v38; // rdx
  unsigned __int8 OldIrql; // r14
  struct _KPRCB *CurrentPrcb; // rcx
  int IsRetryIoStatus; // r13d
  ULONG_PTR v42; // rdi
  __int64 v43; // rdx
  unsigned __int8 v44; // bl
  struct _KPRCB *v45; // rcx
  unsigned __int64 v46; // [rsp+60h] [rbp-A8h]
  int v47; // [rsp+60h] [rbp-A8h]
  ULONG_PTR BugCheckParameter4; // [rsp+70h] [rbp-98h]
  unsigned __int64 v49; // [rsp+78h] [rbp-90h]
  __int64 v50; // [rsp+80h] [rbp-88h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+88h] [rbp-80h]
  __int64 v52; // [rsp+90h] [rbp-78h]
  _QWORD *v53; // [rsp+98h] [rbp-70h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+A0h] [rbp-68h] BYREF
  unsigned __int8 v55; // [rsp+110h] [rbp+8h] BYREF
  int v56; // [rsp+118h] [rbp+10h]
  unsigned int *v57; // [rsp+120h] [rbp+18h]
  unsigned int v58; // [rsp+128h] [rbp+20h]

  v57 = a3;
  v3 = a2 + 272;
  v4 = *(_QWORD *)(a2 + 248);
  v5 = 0LL;
  v6 = *(_QWORD *)(a1 + 56);
  v7 = -1LL;
  BugCheckParameter1 = *(_QWORD *)(a2 + 232);
  BugCheckParameter4 = *(_QWORD *)(a2 + 224);
  v10 = *(_QWORD *)(a2 + 256);
  v58 = 0;
  v52 = v4;
  if ( v10 )
    v3 = v10;
  v50 = -1LL;
  v53 = (_QWORD *)(v4 + 8);
  v46 = v3 + 48;
  if ( *(__int64 *)(v4 + 8) >= 0 )
  {
    v36 = (v4 + 0x58000000000LL) / 48;
    if ( v36 < 0xFFFFFFFFFLL )
    {
      v37 = ~(*(_DWORD *)(a1 + 80) << 11) & 0x20000 | 0x40000008;
      if ( (void (__fastcall __noreturn *)())KeGetCurrentThread()[1].ApcState.ApcListHead[0].Blink != KeSwapProcessOrStack )
        v37 = ~(*(_DWORD *)(a1 + 80) << 11) & 0x20000 | 0x40000000;
      MiFindContiguousPages(
        *(_QWORD *)(qword_140465E88 + 8 * ((*(_QWORD *)(v4 + 40) >> 40) & 0x3FFLL)),
        v36 + 1,
        -1,
        0,
        1LL,
        *(unsigned __int8 *)(v4 + 34) >> 6,
        *(_QWORD *)(v4 + 40) >> 58,
        0x80000000,
        v37,
        0LL,
        (__int64)&v50);
    }
  }
  v11 = *(_QWORD *)(a1 + 16);
  if ( (v11 & 1) != 0 )
  {
    v34 = (_BYTE *)(v11 & 0xFFFFFFFFFFFFFFFEuLL);
    if ( *v34 == 2 )
    {
      if ( v6 )
        MiPrefetchRestOfCluster(a2, v34, v6);
    }
  }
  KeWaitForSingleObject((PVOID)(a2 + 32), WrPageIn, 0, 0, 0LL);
  if ( *(_QWORD *)(a2 + 264) )
    KeBugCheckEx(0x1Au, 0x61947uLL, a2, *(_QWORD *)(a2 + 264), 0LL);
  if ( v6 && (*(_BYTE *)(v6 + 187) & 0x60) == 0x60 && !*(_QWORD *)(MiGetSharedVm(v6, v12) + 32) )
    KiUnstackDetachProcess(a2 + 104, 0LL);
  if ( (*(_WORD *)(v3 + 10) & 0x200) != 0 )
  {
    MiRetardMdl(v3);
    *(_DWORD *)(a2 + 80) = -1073741670;
    *(_QWORD *)(a2 + 88) = 0LL;
  }
  v15 = *(_DWORD *)(a2 + 192);
  if ( (v15 & 0x10) != 0 )
  {
    v35 = *(_QWORD *)(a2 + 336);
    memset(&LockHandle, 0, sizeof(LockHandle));
    if ( v35 )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v35 + 232), &LockHandle);
      RtlAvlRemoveNode(v35 + 248, a2 + 352);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb, v38);
      }
      __writecr8(OldIrql);
      v15 = *(_DWORD *)(a2 + 192);
    }
  }
  v16 = *(unsigned int *)(a2 + 184);
  v17 = ((*(_DWORD *)(v3 + 32) + *(_DWORD *)(v3 + 44)) & 0xFFF) + *(unsigned int *)(v3 + 40) + 4095LL;
  v56 = 0;
  v49 = v3 + 48 + 8 * ((v17 >> 12) - 1);
  if ( (v15 & 0x100) != 0 )
    MiStoreFaultComplete(a2);
  v18 = *(_DWORD *)(a2 + 80);
  if ( *(_QWORD *)(a2 + 208) )
  {
    if ( v18 >= 0 )
    {
      v56 = MiValidateInPage(a2);
      if ( v56 == -1073740748 )
        *(_DWORD *)(a2 + 192) |= 0x100000u;
    }
    MiDereferenceControlAreaProbe(*(_QWORD *)(a2 + 208), 0LL);
  }
  else if ( v18 >= 0 && (*(_DWORD *)(a2 + 192) & 0x400000) != 0 )
  {
    v56 = MiValidatePagefilePageHash(a2);
  }
  v19 = *(_DWORD *)(a2 + 80);
  v20 = v58 & 1;
  if ( (v58 & 1) == 0 )
  {
    __incgsdword(0x2EA4u);
    __addgsdword(0x2EA0u, ((unsigned int)v16 >> 12) + ((v16 & 0xFFF) != 0));
    if ( v6 )
    {
      if ( (*(_DWORD *)(a2 + 192) & 8) == 0 )
        _InterlockedIncrement((volatile signed __int32 *)(v6 + 168));
    }
  }
  v21 = v57;
  v22 = 2 * v20;
  if ( *(_QWORD *)v57 )
  {
    PfHardFaultLog(*(_QWORD *)v57, v22);
    v21 = v57;
  }
  v23 = (*(_BYTE *)(v3 + 10) & 1) == 0;
  *v21 = v22;
  if ( !v23 )
    MmUnmapLockedPages(*(PVOID *)(v3 + 24), (PMDL)v3);
  *(_DWORD *)(a2 + 188) = -1;
  if ( v19 >= 0 )
  {
    v24 = *(_QWORD *)(a2 + 88);
    if ( v24 != v16 )
    {
      v13 = (unsigned int)v24;
      if ( v24 || (*(_DWORD *)(a2 + 192) & 8) == 0 )
      {
        if ( (*(_DWORD *)(a2 + 192) & 0x200000) != 0 && !v20 )
          KeBugCheckEx(0x7Au, 4uLL, *(_QWORD *)(a2 + 88), a2, BugCheckParameter4);
        v13 = *(_QWORD *)(a2 + 88) & 0xFFFLL;
        v47 = v13;
        v28 = 8
            * ((((*(_DWORD *)(v3 + 32) + *(_DWORD *)(v3 + 44)) & 0xFFF)
              - (unsigned __int64)(unsigned int)(v16 - *(_DWORD *)(v3 + 40))
              + v24
              + 4095) >> 12)
            + 40;
        v29 = (_QWORD *)(v3 + v28);
        if ( (_DWORD)v13 )
        {
          v30 = (void *)((unsigned int)v13 + MiMapPageInHyperSpaceWorker(*v29, &v55, 0x80000000LL));
          memset(v30, 0, (unsigned int)(4096 - v47));
          MiUnmapPageInHyperSpaceWorker(v30, v55, 0x80000000LL);
        }
        if ( (unsigned __int64)(v29 + 1) <= v49 )
          *(_DWORD *)(a2 + 188) = ((__int64)(v28 - 48) >> 3) + 1;
      }
      else
      {
        v19 = -1073741801;
      }
    }
    v25 = v56;
    if ( v56 != -1073741761 )
      goto LABEL_28;
    IsRetryIoStatus = 0;
LABEL_80:
    if ( BugCheckParameter4 > 0x7FFFFFFEFFFFLL
      && (unsigned int)MiGetSystemRegionType(BugCheckParameter4, v24, v13, v14) != 8
      && !(unsigned int)MiExceptionForMappedVa(BugCheckParameter4) )
    {
      if ( !IsRetryIoStatus )
      {
        v42 = BugCheckParameter1;
        if ( (unsigned __int8)MmIsAddressValidEx(BugCheckParameter1) == 1 )
          v7 = MI_READ_PTE_LOCK_FREE(v42);
        MiFlushAllFilesystemPages(1LL);
        if ( v25 >= 0 )
          v25 = v19;
        KeBugCheckEx(0x7Au, v42, v25, v7, BugCheckParameter4);
      }
      if ( v25 != -1073741761 )
        v19 = -1073741801;
    }
    goto LABEL_28;
  }
  if ( v19 != -1073741807 )
  {
    if ( v19 == -2147483626 )
      goto LABEL_28;
    IsRetryIoStatus = MiIsRetryIoStatus((unsigned int)v19, *(unsigned int *)(v3 + 40));
    if ( IsRetryIoStatus && !dword_140466524 && (!v20 || (v58 & 2) != 0) )
      dword_140466524 = 32;
    if ( (*(_DWORD *)(a2 + 192) & 8) != 0 )
    {
      v19 = -1073741801;
      goto LABEL_28;
    }
    v25 = v56;
    goto LABEL_80;
  }
  if ( (*(_DWORD *)(a2 + 192) & 0x200000) != 0 )
    KeBugCheckEx(0x7Au, 3uLL, 0xFFFFFFFFC0000011uLL, a2, BugCheckParameter4);
  v31 = (ULONG_PTR *)(v3 + 48);
  v32 = 1LL;
  v33 = (v49 - v46 + 8) >> 3;
  if ( v46 > v49 )
    v33 = 0LL;
  if ( v33 )
  {
    do
    {
      MiZeroPhysicalPage(*v31);
      ++v32;
      ++v31;
    }
    while ( v32 <= v33 );
  }
  v19 = 0;
LABEL_28:
  v26 = v50;
  if ( v50 != -1 )
  {
    MiCopyPage(v50, (v52 + 0x58000000000LL) / 48, 0LL, 1LL);
    v5 = 48 * v26 - 0x58000000000LL;
    *(_QWORD *)(v5 + 16) = ZeroPte;
    MiSetOriginalPtePfnFromFreeList();
    if ( ((*(_QWORD *)(v5 + 40) >> 54) & 7) == 3 )
    {
      v44 = MiLockPageInline(48 * v26 - 0x58000000000LL);
      *(_QWORD *)(v5 + 8) = *v53;
      _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v44 < 2u )
      {
        v45 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v45->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v45, v43);
      }
      __writecr8(v44);
    }
  }
  result = v58;
  *(_DWORD *)(a2 + 112) = v58;
  *(_QWORD *)(a2 + 104) = v5;
  *(_DWORD *)(a2 + 80) = v19;
  return result;
}
