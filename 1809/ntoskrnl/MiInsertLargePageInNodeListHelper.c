/*
 * XREFs of MiInsertLargePageInNodeListHelper @ 0x14009BA00
 * Callers:
 *     MiInsertLargePageInNodeList @ 0x140028C1C (MiInsertLargePageInNodeList.c)
 *     MiInsertLargePageInFreeOrZeroList @ 0x140036320 (MiInsertLargePageInFreeOrZeroList.c)
 *     MiCoalesceFreePages @ 0x1400390D0 (MiCoalesceFreePages.c)
 *     MiConstructNewLargeFreePage @ 0x1400910F0 (MiConstructNewLargeFreePage.c)
 *     MiDeleteClusterPage @ 0x1402C641C (MiDeleteClusterPage.c)
 *     MiFreeLargePageChain @ 0x1402CCA1C (MiFreeLargePageChain.c)
 *     MiMoveLargeFreePage @ 0x1402CCB34 (MiMoveLargeFreePage.c)
 *     MiScrubNodeLargePageList @ 0x1402CCD80 (MiScrubNodeLargePageList.c)
 *     MxCreateFreePfns @ 0x1409BBD10 (MxCreateFreePfns.c)
 * Callees:
 *     KxWaitForLockChainValid @ 0x140022C50 (KxWaitForLockChainValid.c)
 *     KxWaitForLockOwnerShip @ 0x14007DF10 (KxWaitForLockOwnerShip.c)
 *     MiIncreaseAvailablePages @ 0x14009CE20 (MiIncreaseAvailablePages.c)
 *     MiPageToChannel @ 0x14009CF2C (MiPageToChannel.c)
 *     MiPageToNode @ 0x14009CF50 (MiPageToNode.c)
 *     MiQueueLargeFreeZeroRebuild @ 0x14009D110 (MiQueueLargeFreeZeroRebuild.c)
 *     KxAcquireQueuedSpinLock @ 0x1400AC8F0 (KxAcquireQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140290BF0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140290CA8 (KiReleaseQueuedSpinLockInstrumented.c)
 *     MiArePageContentsZero @ 0x1402BF958 (MiArePageContentsZero.c)
 */

__int64 __fastcall MiInsertLargePageInNodeListHelper(
        ULONG_PTR BugCheckParameter2,
        unsigned __int64 a2,
        int a3,
        __int64 a4)
{
  __int64 v4; // r15
  unsigned __int64 v5; // r8
  ULONG_PTR v7; // rbx
  __int64 v8; // rdi
  unsigned int v9; // esi
  __int64 *v10; // rax
  unsigned __int64 v11; // r12
  unsigned __int64 v12; // rbp
  unsigned int v13; // eax
  __int64 v14; // r10
  __int64 v15; // r13
  unsigned __int64 v16; // rcx
  __int64 v17; // r11
  ULONG_PTR v18; // rcx
  unsigned __int64 v19; // r8
  __int64 v20; // r10
  __int64 v21; // r8
  __int64 v22; // rax
  __int64 v23; // rdi
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  _QWORD *v26; // rdx
  ULONG_PTR *v27; // rax
  __int64 v28; // rcx
  __int64 result; // rax
  struct _KPRCB *v30; // rcx
  _DWORD *v31; // rdx
  ULONG_PTR *i; // rax
  ULONG_PTR *v33; // rdx
  int v34; // eax
  __int64 v35; // [rsp+28h] [rbp-70h]
  ULONG_PTR v36; // [rsp+30h] [rbp-68h]
  __int64 v37; // [rsp+40h] [rbp-58h]
  __int64 v38; // [rsp+48h] [rbp-50h] BYREF
  volatile signed __int64 *v39; // [rsp+50h] [rbp-48h]
  __int64 v40; // [rsp+58h] [rbp-40h]
  void *retaddr; // [rsp+98h] [rbp+0h]
  char v44; // [rsp+B8h] [rbp+20h]

  v44 = a4;
  v4 = a3;
  v38 = 0LL;
  v5 = a2;
  v39 = 0LL;
  v40 = 0LL;
  v7 = 48 * BugCheckParameter2 - 0x58000000000LL;
  v36 = v7 + 48 * a2;
  v8 = *(_QWORD *)(qword_14043B808 + 8 * ((*(_QWORD *)(v7 + 40) >> 40) & 0x3FFLL));
  v37 = v8;
  v9 = 0;
  v10 = MiLargePageContainingFrames;
  while ( (*(_QWORD *)(v7 + 40) & 0xFFFFFFFFFLL) != *v10 )
  {
    ++v9;
    ++v10;
    if ( v9 >= 3 )
    {
      v9 = -1;
      break;
    }
  }
  v11 = MiLargePageSizes[v9];
  if ( (_DWORD)v4 != 1 && (MiFlags & 0x80u) != 0 && (++dword_14043B92C & MmPageValidationFrequency) == 0 )
  {
    MiArePageContentsZero(BugCheckParameter2);
    v5 = a2;
  }
  if ( v11 == 16 )
    v12 = v5 >> 4;
  else
    v12 = v5 / v11;
  MiPageToNode(BugCheckParameter2, 1LL, v5, a4);
  v13 = MiPageToChannel(BugCheckParameter2);
  v15 = *(_QWORD *)(v8 + 16) + 1984 * v14;
  v16 = MiLargePageSizes[v9];
  v17 = v13;
  if ( v16 == 16 )
    v18 = BugCheckParameter2 >> 4;
  else
    v18 = BugCheckParameter2 / v16;
  v19 = (unsigned int)dword_14043B1C0[v9];
  if ( v19 == 16 )
    LODWORD(v18) = v18 & 0xF;
  else
    v18 %= v19;
  v35 = v13;
  v20 = 4 * (v4 + (BugCheckParameter2 < 0x100000 ? 2 : 0));
  v21 = v20 + v13;
  v22 = *(_QWORD *)(v15 + 272LL * v9 + 8 * v21 + 144);
  v39 = (volatile signed __int64 *)(v15 + 1928);
  v38 = 0LL;
  v23 = v22 + 24LL * (unsigned int)v18;
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v34 = SchedulerAssist[5];
      SchedulerAssist[5] = v34 + 1;
      if ( v34 == -1 )
      {
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        v20 = 4 * (v4 + (BugCheckParameter2 < 0x100000 ? 2 : 0));
        v17 = v35;
      }
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&v38, v15 + 1928);
  }
  else
  {
    v26 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)(v15 + 1928), (__int64)&v38);
    if ( !v26 )
      goto LABEL_15;
    KxWaitForLockOwnerShip((__int64)&v38, v26, v21);
  }
  v17 = v35;
  v20 = 4 * (v4 + (BugCheckParameter2 < 0x100000 ? 2 : 0));
LABEL_15:
  if ( (MiFlags & 0x30) != 0 )
  {
    *(_BYTE *)(v7 + 34) ^= (v4 ^ *(_BYTE *)(v7 + 34)) & 7;
    v27 = *(ULONG_PTR **)(v23 + 8);
    if ( *v27 == v23 )
    {
      *(_QWORD *)v7 = v23;
      *(_QWORD *)(v7 + 8) = v27;
      *v27 = v7;
      *(_QWORD *)(v23 + 8) = v7;
      goto LABEL_18;
    }
LABEL_57:
    __fastfail(3u);
  }
  if ( v7 < v36 )
  {
    for ( i = *(ULONG_PTR **)(v23 + 8); ; i = v33 )
    {
      v33 = (ULONG_PTR *)v7;
      if ( *i != v23 )
        break;
      *(_QWORD *)(v7 + 8) = i;
      *(_QWORD *)v7 = v23;
      *i = v7;
      *(_QWORD *)(v23 + 8) = v7;
      v7 += 48 * v11;
      if ( v7 >= v36 )
        goto LABEL_18;
    }
    goto LABEL_57;
  }
LABEL_18:
  *(_QWORD *)(v23 + 16) += v12;
  *(_QWORD *)(v15 + 8 * (v17 + v20 + 34LL * v9) + 16) += v12;
  *(_QWORD *)(v15 + 8 * (34LL * v9 + v4)) += v12;
  v28 = 2176LL;
  if ( (_DWORD)v4 )
    v28 = 2240LL;
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v28 + v37), a2);
  MiIncreaseAvailablePages(v37, a2);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    result = KiReleaseQueuedSpinLockInstrumented(&v38, retaddr);
    goto LABEL_23;
  }
  _m_prefetchw(&v38);
  result = v38;
  if ( v38 )
    goto LABEL_45;
  result = _InterlockedCompareExchange64(v39, 0LL, (signed __int64)&v38);
  if ( (__int64 *)result != &v38 )
  {
    result = KxWaitForLockChainValid(&v38);
LABEL_45:
    v38 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(result + 8), 1uLL);
  }
LABEL_23:
  v30 = KeGetCurrentPrcb();
  v31 = v30->SchedulerAssist;
  if ( v31 )
  {
    if ( v30->NestingLevel <= 1u )
    {
      result = (unsigned int)(v31[5] - 1);
      v31[5] = result;
      if ( !(_DWORD)result )
        result = KiRemoveSystemWorkPriorityKick(v30);
    }
  }
  if ( (_DWORD)v4 == 1 && !*(_BYTE *)(v37 + 6552) )
  {
    v38 = 0LL;
    v39 = (volatile signed __int64 *)(v37 + 4864);
    KxAcquireQueuedSpinLock(&v38);
    if ( !*(_BYTE *)(v37 + 6552) )
    {
      *(_BYTE *)(v37 + 6552) = 1;
      KeSetEvent((PRKEVENT)(v37 + 6528), 0, 0);
    }
    result = KxReleaseQueuedSpinLock(&v38);
  }
  if ( (v44 & 1) == 0 && v9 && (v9 != 1 || (KeFeatureBits & 0x2000000000LL) != 0) )
  {
    result = (unsigned int)MiFlags;
    if ( (MiFlags & 0x30) != 0 )
      return MiQueueLargeFreeZeroRebuild(v37, BugCheckParameter2 & ~(MiLargePageSizes[v9 - 1] - 1));
  }
  return result;
}
