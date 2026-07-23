/*
 * XREFs of MiSetPagesModified @ 0x1402C315C
 * Callers:
 *     MiCreateNewSection @ 0x14064FBD4 (MiCreateNewSection.c)
 * Callees:
 *     MiReferenceControlAreaFile @ 0x140009BF0 (MiReferenceControlAreaFile.c)
 *     MiDereferenceControlAreaFile @ 0x140009CFC (MiDereferenceControlAreaFile.c)
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     MiGetSystemRegionType @ 0x14003EA70 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14003EE20 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003EEB0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x14003F230 (MmGetSessionIdEx.c)
 *     MiLockLowestValidPageTable @ 0x14004AE30 (MiLockLowestValidPageTable.c)
 *     MiChargeCommit @ 0x140052270 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x140059030 (MiReturnCommit.c)
 *     MiLockWorkingSetShared @ 0x14005D6D0 (MiLockWorkingSetShared.c)
 *     KiAbEntryRemoveFromTree @ 0x140061200 (KiAbEntryRemoveFromTree.c)
 *     MiGetCommittedPages @ 0x1400716F8 (MiGetCommittedPages.c)
 *     MiReleasePageFileInfo @ 0x14008A250 (MiReleasePageFileInfo.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockWorkingSetShared @ 0x1400AC920 (MiUnlockWorkingSetShared.c)
 *     MiUpdateControlAreaCommitCount @ 0x1400C01D8 (MiUpdateControlAreaCommitCount.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     MiGetEffectivePagePriorityThread @ 0x1400CAEEC (MiGetEffectivePagePriorityThread.c)
 *     KiCheckForKernelApcDelivery @ 0x1400EF3A0 (KiCheckForKernelApcDelivery.c)
 *     MiUnlockPageTableInternal @ 0x1401000D0 (MiUnlockPageTableInternal.c)
 *     MiCapturePageFileInfoInline @ 0x140119998 (MiCapturePageFileInfoInline.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     MiMapImageInSystemSpace @ 0x140643C44 (MiMapImageInSystemSpace.c)
 *     MiUnmapImageInSystemSpace @ 0x14064437C (MiUnmapImageInSystemSpace.c)
 *     MiDeleteFileExtents @ 0x14064E8E0 (MiDeleteFileExtents.c)
 *     MiPrefetchControlArea @ 0x1406E7830 (MiPrefetchControlArea.c)
 */

__int64 __fastcall MiSetPagesModified(__int64 *a1, int a2)
{
  __int64 v4; // r15
  unsigned __int64 v5; // rsi
  unsigned __int64 v7; // r13
  unsigned int EffectivePagePriorityThread; // eax
  int v9; // ebx
  __int64 v10; // rbx
  __int64 v11; // r9
  unsigned __int64 v12; // rdi
  __int64 v13; // r12
  __int64 v14; // r9
  unsigned __int8 v15; // r15
  unsigned __int64 valid; // rax
  unsigned __int64 v17; // r15
  unsigned __int64 v18; // rbx
  unsigned __int8 v19; // al
  __int64 v20; // rdi
  __int64 CommittedPages; // rbx
  unsigned __int64 v22; // rsi
  unsigned __int64 v23; // r12
  struct _KTHREAD *v24; // r15
  ULONG_PTR v25; // rsi
  signed __int64 v26; // rax
  struct _KTHREAD *v27; // rbx
  ULONG_PTR SessionId; // r9
  unsigned __int8 v29; // r12
  _KLOCK_ENTRY *v30; // rdi
  unsigned int v31; // r8d
  __int64 v32; // rcx
  _KLOCK_ENTRY *v33; // rdx
  bool v34; // zf
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rcx
  unsigned __int8 v38; // [rsp+30h] [rbp-138h]
  int v39; // [rsp+38h] [rbp-130h] BYREF
  _QWORD *v40; // [rsp+40h] [rbp-128h]
  _DWORD v41[2]; // [rsp+48h] [rbp-120h] BYREF
  __int64 v42; // [rsp+50h] [rbp-118h]
  __int64 v43; // [rsp+58h] [rbp-110h]
  __int64 v44; // [rsp+60h] [rbp-108h]
  _QWORD v45[2]; // [rsp+68h] [rbp-100h] BYREF
  __int64 v46; // [rsp+78h] [rbp-F0h]
  __int64 v47; // [rsp+80h] [rbp-E8h]
  unsigned __int64 v48; // [rsp+88h] [rbp-E0h]
  unsigned __int64 v49; // [rsp+90h] [rbp-D8h]
  unsigned __int64 v50; // [rsp+98h] [rbp-D0h]
  __int64 v51; // [rsp+A0h] [rbp-C8h]
  __int64 v52; // [rsp+A8h] [rbp-C0h]
  unsigned __int64 v53; // [rsp+B0h] [rbp-B8h]
  unsigned __int64 v54; // [rsp+B8h] [rbp-B0h]
  struct _KTHREAD *CurrentThread; // [rsp+C0h] [rbp-A8h]
  unsigned __int64 v56[3]; // [rsp+C8h] [rbp-A0h] BYREF
  _QWORD v57[10]; // [rsp+E0h] [rbp-88h] BYREF

  v40 = a1;
  memset(v57, 0, sizeof(v57));
  v4 = *(_QWORD *)(qword_140465E88 + 8LL * (*((_WORD *)a1 + 30) & 0x3FF));
  v46 = v4;
  v45[1] = v4;
  v52 = *a1;
  v47 = v52;
  v5 = *(unsigned int *)(v52 + 8);
  v48 = v5;
  if ( !(unsigned int)MiChargeCommit(v4, (unsigned int)v5, 0) )
    return 3221225773LL;
  v7 = a1[17];
  v49 = v7;
  v53 = v7 + 8 * v5;
  CurrentThread = KeGetCurrentThread();
  EffectivePagePriorityThread = MiGetEffectivePagePriorityThread((__int64)CurrentThread);
  if ( EffectivePagePriorityThread > 5 )
    EffectivePagePriorityThread = 5;
  MiPrefetchControlArea((_DWORD)a1, CLFS_LSN_NULL_EXT[0], 0, EffectivePagePriorityThread, 0, a2);
  v9 = MiMapImageInSystemSpace(a1, 3LL, v57);
  if ( v9 >= 0 )
  {
    v10 = v57[3];
    v42 = v57[3];
    v11 = v57[0];
    v44 = v57[0];
    v12 = ((v57[0] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v13 = 0LL;
    v43 = 0LL;
    while ( 1 )
    {
      v51 = v11;
      v50 = v12;
      if ( v7 >= v53 )
        break;
      v45[0] = MI_READ_PTE_LOCK_FREE(v7);
      if ( v45[0] )
      {
        while ( 1 )
        {
          v15 = MiLockWorkingSetShared(v10);
          v38 = v15;
          valid = MiLockLowestValidPageTable(v10, v12, v56);
          v54 = valid;
          if ( valid == ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL && (*(_BYTE *)v12 & 1) != 0 )
            break;
          MiUnlockPageTableInternal(v10, valid);
          MiUnlockWorkingSetShared(v10, v15);
        }
        v43 = ++v13;
        v45[0] = MI_READ_PTE_LOCK_FREE(v12);
        v17 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)v45) >> 12) & 0xFFFFFFFFFLL);
        if ( (*(_QWORD *)(v17 - 0x58000000000LL + 40) & 0x200000000000000LL) != 0 )
        {
          v18 = 0LL;
          v41[0] = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v17 - 0x58000000000LL + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(v41);
            while ( *(__int64 *)(v17 - 0x58000000000LL + 24) < 0 );
          }
          v19 = *(_BYTE *)(v17 - 0x58000000000LL + 34);
          if ( (((*(_QWORD *)(v17 - 0x57FFFFFFFF0LL) & 0x400LL) == 0) & (unsigned __int8)~(v19 >> 3)) != 0 )
          {
            v18 = MiCapturePageFileInfoInline((_QWORD *)(v17 - 0x57FFFFFFFF0LL), 1, 0);
            v19 = *(_BYTE *)(v17 - 0x58000000000LL + 34);
          }
          *(_BYTE *)(v17 - 0x58000000000LL + 34) = v19 | 0x10;
          _InterlockedAnd64((volatile signed __int64 *)(v17 - 0x58000000000LL + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v18 )
            MiReleasePageFileInfo(
              *(_QWORD *)(qword_140465E88 + 8 * ((*(_QWORD *)(v17 - 0x58000000000LL + 40) >> 40) & 0x3FFLL)),
              v18,
              1);
          v10 = v42;
        }
        MiUnlockPageTableInternal(v10, v54);
        MiUnlockWorkingSetShared(v10, v38);
        v14 = v44;
        v4 = v46;
      }
      v7 += 8LL;
      v49 = v7;
      v12 += 8LL;
      v11 = v14 + 4096;
      v44 = v11;
    }
    v20 = v52;
    MiUnmapImageInSystemSpace(v57);
    CommittedPages = MiGetCommittedPages(v40);
    v22 = CommittedPages - v13 + v5;
    if ( v22 )
      MiReturnCommit(v4, v22);
    v23 = v13 - CommittedPages;
    if ( v23 )
    {
      v24 = CurrentThread;
      --CurrentThread->SpecialApcDisable;
      v25 = v20 + 40;
      ExAcquirePushLockExclusiveEx(v20 + 40, 0LL);
      MiUpdateControlAreaCommitCount((__int64)v40, v23);
      v26 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v20 + 40), 0xFFFFFFFFFFFFFFFFuLL);
      v56[1] = v26;
      if ( (v26 & 2) != 0 && (v26 & 4) == 0 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v20 + 40));
      v39 = 0;
      v27 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(v20 + 40) == 1 )
        SessionId = (unsigned int)MmGetSessionIdEx((__int64)v27->ApcState.Process);
      else
        SessionId = 0xFFFFFFFFLL;
      --v27->SpecialApcDisable;
      v29 = ++v27->AbAllocationRegionCount;
      v30 = 0LL;
      v31 = ((char)v27->AbEntrySummary | (char)v27->AbOrphanedEntrySummary) ^ 0x3F;
      while ( 1 )
      {
        v34 = !_BitScanReverse((unsigned int *)&v35, v31);
        v41[1] = v35;
        if ( v34 )
          break;
        v31 &= ~(1 << v35);
        v32 = v35;
        v33 = &v27->LockEntries[v32];
        if ( (v33->AcquiredByte & 1) != 0
          && (*(_DWORD *)&v33->LockState.0 & 1) == 0
          && (*(_QWORD *)&v33->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v25 & 0x7FFFFFFFFFFFFFFCLL)
          && v33->LockState.SessionId == (_DWORD)SessionId )
        {
          v33->AcquiredByte &= ~1u;
          if ( v33->LockState.0 )
          {
            v30 = &v27->LockEntries[v32];
            break;
          }
        }
      }
      if ( v30 )
      {
        v30->CrossThreadReleasableAndBusyByte |= 2u;
        if ( (__int64)v30->LockState.LockState < 0 )
          KiAbEntryRemoveFromTree(&v30->TreeNode);
        v39 = v30->BoostBitmap.AllFields & 0x1FFFF;
        v30->BoostBitmap.AllFields &= 0xFFFE0000;
        v30->ThreadLocalFlags &= ~1u;
        v30->LockState.0 = 0LL;
        v36 = ((char *)v30 - (char *)v27 - 800) / 96;
        if ( v29 == 1 )
          v27->AbEntrySummary |= 1 << v36;
        else
          _InterlockedOr8((volatile signed __int8 *)&v27->AbOrphanedEntrySummary, 1 << v36);
      }
      else if ( (*((_DWORD *)&v27->0 + 1) & 0x10000) == 0 )
      {
        KeBugCheckEx(0x162u, (ULONG_PTR)v27, v25, SessionId, 0LL);
      }
      --v27->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v27, v25, &v39);
      v34 = v27->SpecialApcDisable++ == -1;
      if ( v34 && ($C6908ADE9723D0A04AF8EE82D8D15C40 *)v27->ApcState.ApcListHead[0].Flink != &v27->152 )
        KiCheckForKernelApcDelivery(v37);
      KiLeaveGuardedRegionUnsafe((__int64)v24);
    }
    MiDeleteFileExtents(v40);
    return 0LL;
  }
  else
  {
    MiReturnCommit(v4, v5);
    return (unsigned int)v9;
  }
}
