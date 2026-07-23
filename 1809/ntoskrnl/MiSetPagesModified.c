/*
 * XREFs of MiSetPagesModified @ 0x1402AA9DC
 * Callers:
 *     MiCreateNewSection @ 0x14061C7E0 (MiCreateNewSection.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x140004530 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x140005A50 (KiCheckForKernelApcDelivery.c)
 *     MiGetEffectivePagePriorityThread @ 0x14001AEA8 (MiGetEffectivePagePriorityThread.c)
 *     MiDereferenceControlAreaFile @ 0x14001CA78 (MiDereferenceControlAreaFile.c)
 *     MiReferenceControlAreaFile @ 0x14001CBB0 (MiReferenceControlAreaFile.c)
 *     MiReleasePageFileInfo @ 0x14002A628 (MiReleasePageFileInfo.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockWorkingSetShared @ 0x140046970 (MiUnlockWorkingSetShared.c)
 *     MiChargeCommit @ 0x14004CF20 (MiChargeCommit.c)
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14004EFD0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     MiReturnCommit @ 0x140065D30 (MiReturnCommit.c)
 *     MiLockLowestValidPageTable @ 0x14006C590 (MiLockLowestValidPageTable.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiLockWorkingSetShared @ 0x140076040 (MiLockWorkingSetShared.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     MiGetCommittedPages @ 0x1400957D4 (MiGetCommittedPages.c)
 *     MiUpdateControlAreaCommitCount @ 0x140095ED4 (MiUpdateControlAreaCommitCount.c)
 *     MiUnlockPageTableInternal @ 0x140104B10 (MiUnlockPageTableInternal.c)
 *     MiCapturePageFileInfoInline @ 0x140119E40 (MiCapturePageFileInfoInline.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     MiUnmapImageInSystemSpace @ 0x140651A4C (MiUnmapImageInSystemSpace.c)
 *     MiMapImageInSystemSpace @ 0x140652000 (MiMapImageInSystemSpace.c)
 *     MiPrefetchControlArea @ 0x1406C84E4 (MiPrefetchControlArea.c)
 */

__int64 __fastcall MiSetPagesModified(__int64 *a1, int a2)
{
  __int64 v4; // r12
  unsigned __int64 v5; // r14
  unsigned __int64 v7; // rbx
  unsigned int EffectivePagePriorityThread; // eax
  int v9; // esi
  __int64 v10; // r9
  unsigned __int64 v11; // rsi
  __int64 v12; // r13
  __int64 v13; // r9
  __int64 v14; // r10
  __int64 v15; // r9
  unsigned __int64 valid; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  unsigned __int64 v19; // r12
  unsigned __int64 v20; // rbx
  unsigned __int8 v21; // r8
  __int64 v22; // rsi
  __int64 CommittedPages; // rbx
  unsigned __int64 v24; // r14
  unsigned __int64 v25; // r13
  struct _KTHREAD *v26; // r12
  ULONG_PTR v27; // r14
  struct _KTHREAD *v28; // rbx
  __int64 v29; // rdx
  ULONG_PTR SessionId; // r9
  unsigned __int8 v31; // r13
  _KLOCK_ENTRY *v32; // rsi
  unsigned int v33; // r8d
  __int64 v34; // rcx
  bool v35; // zf
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rcx
  unsigned __int8 v39; // [rsp+30h] [rbp-128h]
  _DWORD v40[3]; // [rsp+34h] [rbp-124h] BYREF
  __int64 v41; // [rsp+40h] [rbp-118h]
  unsigned __int64 v42; // [rsp+48h] [rbp-110h]
  _QWORD *v43; // [rsp+50h] [rbp-108h]
  _DWORD v44[2]; // [rsp+58h] [rbp-100h] BYREF
  __int64 v45; // [rsp+60h] [rbp-F8h]
  unsigned __int64 v46; // [rsp+68h] [rbp-F0h]
  __int64 v47; // [rsp+70h] [rbp-E8h]
  _QWORD v48[2]; // [rsp+78h] [rbp-E0h] BYREF
  __int64 v49; // [rsp+88h] [rbp-D0h]
  __int64 v50; // [rsp+90h] [rbp-C8h]
  unsigned __int64 v51; // [rsp+98h] [rbp-C0h]
  unsigned __int64 v52; // [rsp+A0h] [rbp-B8h]
  unsigned __int64 v53; // [rsp+A8h] [rbp-B0h]
  __int64 v54; // [rsp+B0h] [rbp-A8h]
  __int64 v55; // [rsp+B8h] [rbp-A0h]
  unsigned __int64 v56; // [rsp+C0h] [rbp-98h]
  struct _KTHREAD *CurrentThread; // [rsp+C8h] [rbp-90h]
  unsigned __int64 v58; // [rsp+D0h] [rbp-88h] BYREF
  _QWORD v59[10]; // [rsp+E0h] [rbp-78h] BYREF

  v43 = a1;
  v4 = *(_QWORD *)(qword_14043B808 + 8LL * (*((_WORD *)a1 + 30) & 0x3FF));
  v49 = v4;
  v48[1] = v4;
  v55 = *a1;
  v50 = v55;
  v5 = *(unsigned int *)(v55 + 8);
  v51 = v5;
  if ( !(unsigned int)MiChargeCommit(v4, (unsigned int)v5, 0) )
    return 3221225773LL;
  v7 = a1[17];
  v46 = v7;
  v52 = v7;
  v56 = v7 + 8 * v5;
  CurrentThread = KeGetCurrentThread();
  EffectivePagePriorityThread = MiGetEffectivePagePriorityThread((__int64)CurrentThread);
  if ( EffectivePagePriorityThread > 5 )
    EffectivePagePriorityThread = 5;
  MiPrefetchControlArea((_DWORD)a1, RtlpInterceptorRoutines[0], 0, EffectivePagePriorityThread, 0, a2);
  v9 = MiMapImageInSystemSpace(a1, 3LL, v59);
  if ( v9 >= 0 )
  {
    v41 = v59[3];
    v10 = v59[0];
    v47 = v59[0];
    v11 = ((v59[0] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v12 = 0LL;
    v45 = 0LL;
    v40[1] = 0;
    while ( 1 )
    {
      v54 = v10;
      v53 = v11;
      LODWORD(v42) = 0;
      if ( v7 >= v56 )
        break;
      v48[0] = MI_READ_PTE_LOCK_FREE(v7);
      if ( v48[0] )
      {
        while ( 1 )
        {
          v39 = MiLockWorkingSetShared(v14);
          valid = MiLockLowestValidPageTable(v41, v11, &v58, v15);
          v42 = valid;
          if ( valid == ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL && (*(_BYTE *)v11 & 1) != 0 )
            break;
          MiUnlockPageTableInternal(v41, valid);
          MiUnlockWorkingSetShared(v41, v39);
          v14 = v41;
        }
        v45 = ++v12;
        v48[0] = MI_READ_PTE_LOCK_FREE(v11);
        v19 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)v48) >> 12) & 0xFFFFFFFFFLL);
        if ( (*(_QWORD *)(v19 - 0x58000000000LL + 40) & 0x200000000000000LL) != 0 )
        {
          v20 = 0LL;
          v44[0] = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v19 - 0x58000000000LL + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(v44, v17, v18);
            while ( *(__int64 *)(v19 - 0x58000000000LL + 24) < 0 );
          }
          v21 = *(_BYTE *)(v19 - 0x58000000000LL + 34);
          if ( (((*(_QWORD *)(v19 - 0x57FFFFFFFF0LL) & 0x400LL) == 0) & (unsigned __int8)~(v21 >> 3)) != 0 )
          {
            v20 = MiCapturePageFileInfoInline((_QWORD *)(v19 - 0x57FFFFFFFF0LL), 1, 0);
            v21 = *(_BYTE *)(v19 - 0x58000000000LL + 34);
          }
          *(_BYTE *)(v19 - 0x58000000000LL + 34) = v21 | 0x10;
          _InterlockedAnd64((volatile signed __int64 *)(v19 - 0x58000000000LL + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v20 )
            MiReleasePageFileInfo(
              *(struct _KEVENT **)(qword_14043B808 + 8 * ((*(_QWORD *)(v19 - 0x58000000000LL + 40) >> 40) & 0x3FFLL)),
              v20,
              1);
          v7 = v46;
        }
        MiUnlockPageTableInternal(v41, v42);
        MiUnlockWorkingSetShared(v41, v39);
        v4 = v49;
        v13 = v47;
      }
      v7 += 8LL;
      v46 = v7;
      v52 = v7;
      v11 += 8LL;
      v10 = v13 + 4096;
      v47 = v10;
    }
    v22 = v55;
    MiUnmapImageInSystemSpace(v59);
    CommittedPages = MiGetCommittedPages(v43);
    v24 = CommittedPages - v12 + v5;
    if ( v24 )
      MiReturnCommit(v4, v24);
    v25 = v12 - CommittedPages;
    if ( v25 )
    {
      v26 = CurrentThread;
      --CurrentThread->SpecialApcDisable;
      v27 = v22 + 40;
      ExAcquirePushLockExclusiveEx(v22 + 40, 0LL);
      MiUpdateControlAreaCommitCount((__int64)v43, v25);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v22 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v22 + 40));
      v40[0] = 0;
      v28 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(v22 + 40) == 1 )
        SessionId = (unsigned int)MmGetSessionIdEx((__int64)v28->ApcState.Process);
      else
        SessionId = 0xFFFFFFFFLL;
      --v28->SpecialApcDisable;
      v31 = ++v28->AbAllocationRegionCount;
      v32 = 0LL;
      v33 = ((char)v28->AbEntrySummary | (char)v28->AbOrphanedEntrySummary) ^ 0x3F;
      while ( 1 )
      {
        v35 = !_BitScanReverse((unsigned int *)&v36, v33);
        v44[1] = v36;
        if ( v35 )
          break;
        v33 &= ~(1 << v36);
        v34 = v36;
        v29 = (__int64)&v28->LockEntries[v34];
        if ( (*(_BYTE *)(v29 + 26) & 1) != 0
          && (*(_DWORD *)(v29 + 32) & 1) == 0
          && (*(_QWORD *)(v29 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v27 & 0x7FFFFFFFFFFFFFFCLL)
          && *(_DWORD *)(v29 + 40) == (_DWORD)SessionId )
        {
          *(_BYTE *)(v29 + 26) &= ~1u;
          if ( *(_QWORD *)(v29 + 32) )
          {
            v32 = &v28->LockEntries[v34];
            break;
          }
        }
      }
      if ( v32 )
      {
        v32->CrossThreadReleasableAndBusyByte |= 2u;
        if ( (__int64)v32->LockState.LockState < 0 )
          KiAbEntryRemoveFromTree(&v32->TreeNode, v29);
        v40[0] = 0;
        v40[0] = v32->BoostBitmap.AllFields & 0x1FFFF;
        v32->BoostBitmap.AllFields &= 0xFFFE0000;
        v32->ThreadLocalFlags &= ~1u;
        v32->LockState.0 = 0LL;
        v37 = ((char *)v32 - (char *)v28 - 800) / 96;
        if ( v31 == 1 )
          v28->AbEntrySummary |= 1 << v37;
        else
          _InterlockedOr8((volatile signed __int8 *)&v28->AbOrphanedEntrySummary, 1 << v37);
      }
      else if ( (*((_DWORD *)&v28->0 + 1) & 0x10000) == 0 )
      {
        KeBugCheckEx(0x162u, (ULONG_PTR)v28, v27, SessionId, 0LL);
      }
      --v28->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v28, v27, (__int64)v40);
      v35 = v28->SpecialApcDisable++ == -1;
      if ( v35 && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)v28->ApcState.ApcListHead[0].Flink != &v28->152 )
        KiCheckForKernelApcDelivery(v38);
      KiLeaveGuardedRegionUnsafe((__int64)v26);
    }
    return (unsigned int)v42;
  }
  else
  {
    MiReturnCommit(v4, v5);
    return (unsigned int)v9;
  }
}
