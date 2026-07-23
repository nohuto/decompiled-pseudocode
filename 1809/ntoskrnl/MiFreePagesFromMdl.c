/*
 * XREFs of MiFreePagesFromMdl @ 0x14002A000
 * Callers:
 *     MiAllocatePagesForMdl @ 0x140011048 (MiAllocatePagesForMdl.c)
 *     MmFreePagesFromMdl @ 0x1401374D0 (MmFreePagesFromMdl.c)
 *     ?StReleaseRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x140145554 (-StReleaseRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     BgpFwFreeMemory @ 0x14016EDEC (BgpFwFreeMemory.c)
 *     BgpFwAllocateMemory @ 0x14016F5D8 (BgpFwAllocateMemory.c)
 *     PpmHeteroInitializeHgsSupport @ 0x140192BC0 (PpmHeteroInitializeHgsSupport.c)
 *     MmFreePagesFromMdlEx @ 0x1402AA7F0 (MmFreePagesFromMdlEx.c)
 *     MiFreePhysicalPageChain @ 0x1402B07AC (MiFreePhysicalPageChain.c)
 *     MmFreeSecureKernelPages @ 0x1402C3324 (MmFreeSecureKernelPages.c)
 *     ?StDmLazyRegionsWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z @ 0x1403053B4 (-StDmLazyRegionsWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z.c)
 *     MiFreeCombineMdls @ 0x1406D314C (MiFreeCombineMdls.c)
 *     NtAllocateUserPhysicalPages @ 0x1408518F0 (NtAllocateUserPhysicalPages.c)
 *     NtFreeUserPhysicalPages @ 0x140852170 (NtFreeUserPhysicalPages.c)
 *     MiAllocatePartitionPhysicalPages @ 0x1408610C4 (MiAllocatePartitionPhysicalPages.c)
 *     KiComputeNumaCosts @ 0x1409C6C3C (KiComputeNumaCosts.c)
 * Callees:
 *     MiReturnResidentAvailable @ 0x140022D18 (MiReturnResidentAvailable.c)
 *     MiFreeMdlPageRun @ 0x140029DE0 (MiFreeMdlPageRun.c)
 *     MiLockPageInline @ 0x14002CE40 (MiLockPageInline.c)
 *     MmUnmapLockedPages @ 0x140033F00 (MmUnmapLockedPages.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14003AB00 (MiUnmapPageInHyperSpaceWorker.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14005C0C0 (MmMapLockedPagesSpecifyCache.c)
 *     MiReturnCommit @ 0x140065D30 (MiReturnCommit.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140082770 (MiMapPageInHyperSpaceWorker.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     KeZeroPages @ 0x1401C0A90 (KeZeroPages.c)
 *     MiRetardMdl @ 0x1402A85DC (MiRetardMdl.c)
 *     MiLogMdlRangeEvent @ 0x1402AA388 (MiLogMdlRangeEvent.c)
 */

ULONG_PTR *__fastcall MiFreePagesFromMdl(ULONG_PTR BugCheckParameter2, unsigned int a2)
{
  __int16 v2; // ax
  ULONG_PTR v4; // rbp
  __int16 v5; // ax
  ULONG_PTR *BugCheckParameter4; // rbx
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // r13
  unsigned __int64 v10; // rsi
  ULONG_PTR *result; // rax
  int v12; // r12d
  ULONG_PTR v13; // rcx
  __int64 v14; // r10
  __int64 v15; // r8
  unsigned __int64 v16; // rdx
  __int64 v17; // rcx
  ULONG_PTR v18; // r9
  _QWORD *v19; // rcx
  __int64 v20; // rcx
  char v21; // r13
  ULONG_PTR *v22; // rbx
  ULONG_PTR v23; // rcx
  __int64 v24; // rdx
  PVOID v25; // rcx
  PVOID v26; // rax
  _QWORD *v27; // r14
  unsigned __int64 i; // rsi
  __int64 v29; // rbx
  __int64 v30; // rdx
  unsigned __int8 v31; // al
  unsigned __int8 v32; // r13
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int64 v34; // rdx
  unsigned __int64 v35; // r8
  __int64 v36; // [rsp+30h] [rbp-58h]
  ULONG_PTR *v37; // [rsp+38h] [rbp-50h]
  char v38; // [rsp+90h] [rbp+8h] BYREF
  unsigned int v39; // [rsp+98h] [rbp+10h]
  __int64 v40; // [rsp+A0h] [rbp+18h]
  unsigned __int64 v41; // [rsp+A8h] [rbp+20h]

  v39 = a2;
  v2 = *(_WORD *)(BugCheckParameter2 + 10);
  v4 = 0LL;
  if ( (v2 & 0x200) != 0 )
  {
    v39 = a2 & 0xFFFFFFFE;
    MiRetardMdl(BugCheckParameter2);
    goto LABEL_3;
  }
  if ( (a2 & 1) == 0 )
    goto LABEL_3;
  if ( (v2 & 1) != 0 )
  {
    v24 = *(unsigned int *)(BugCheckParameter2 + 40);
    v25 = *(PVOID *)(BugCheckParameter2 + 24);
LABEL_51:
    KeZeroPages(v25, v24);
    goto LABEL_3;
  }
  v26 = MmMapLockedPagesSpecifyCache((PMDL)BugCheckParameter2, 0, MmCached, 0LL, 0, 0x40000020u);
  v24 = *(unsigned int *)(BugCheckParameter2 + 40);
  if ( v26 )
  {
    v25 = v26;
    goto LABEL_51;
  }
  v27 = (_QWORD *)(BugCheckParameter2 + 48);
  for ( i = (((*(_DWORD *)(BugCheckParameter2 + 32) + *(_DWORD *)(BugCheckParameter2 + 44)) & 0xFFFuLL) + v24 + 4095) >> 12;
        i;
        --i )
  {
    v29 = MiMapPageInHyperSpaceWorker(*v27, &v38, 0x80000000LL);
    KeZeroPages(v29, 4096LL);
    LOBYTE(v30) = v38;
    MiUnmapPageInHyperSpaceWorker(v29, v30, 0x80000000LL);
    ++v27;
  }
LABEL_3:
  v5 = *(_WORD *)(BugCheckParameter2 + 10);
  if ( (v5 & 1) != 0 )
  {
    MmUnmapLockedPages(*(PVOID *)(BugCheckParameter2 + 24), (PMDL)BugCheckParameter2);
    v5 = *(_WORD *)(BugCheckParameter2 + 10);
  }
  if ( (v5 & 0x801) != 0 )
    KeBugCheckEx(0x1Au, 0x1238uLL, BugCheckParameter2, v5, 0LL);
  BugCheckParameter4 = (ULONG_PTR *)(BugCheckParameter2 + 48);
  v7 = 0LL;
  v8 = (((*(_QWORD *)(BugCheckParameter2 + 32) + *(unsigned int *)(BugCheckParameter2 + 44)) & 0xFFFLL)
      + (unsigned __int64)*(unsigned int *)(BugCheckParameter2 + 40)
      + 4095) >> 12;
  v41 = v8;
  v9 = v8;
  if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
    MiLogMdlRangeEvent(BugCheckParameter2 + 48, 633LL, v8);
  v10 = 0LL;
  result = &MiSystemPartition;
  v12 = 1;
  if ( v8 )
  {
    while ( 1 )
    {
      v13 = *BugCheckParameter4;
      v37 = BugCheckParameter4;
      v14 = 48 * *BugCheckParameter4;
      v36 = v14;
      v15 = v14 - 0x58000000000LL;
      v16 = *(_QWORD *)(v14 - 0x58000000000LL + 40);
      v40 = v14 - 0x58000000000LL;
      if ( (v16 & 0xFFFFFFFFFLL) != 0xFFFFFFFFDLL )
        KeBugCheckEx(0x1Au, 0x1236uLL, BugCheckParameter2, (ULONG_PTR)BugCheckParameter4, v13);
      v17 = (v16 >> 40) & 0x3FF;
      v18 = *(_QWORD *)(qword_14043B808 + 8 * v17);
      if ( v4 != v18 )
      {
        if ( v4 )
          KeBugCheckEx(0x1Au, 0x1301uLL, v4, v18, (ULONG_PTR)BugCheckParameter4);
        v4 = *(_QWORD *)(qword_14043B808 + 8 * v17);
      }
      if ( ((v16 >> 54) & 7) == 3 )
      {
        v31 = MiLockPageInline(v15);
        v15 = v40;
        v32 = v31;
        *(_QWORD *)(v40 + 40) &= 0xFE3FFFFFFFFFFFFFuLL;
        _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v31 < 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          v15 = v40;
        }
        __writecr8(v32);
        _InterlockedDecrement64(&qword_14043B240);
        v14 = v36;
      }
      if ( !v10 )
        break;
      v19 = (_QWORD *)qword_14043B248;
      if ( qword_14043B248 && ((*(_QWORD *)(v15 + 40) >> 54) & 7) == 1 )
      {
        v34 = v14 / 48;
        while ( v19 )
        {
          v35 = v19[3];
          if ( v34 < v35 )
          {
            v19 = (_QWORD *)*v19;
          }
          else
          {
            if ( v34 - v35 < v19[4] )
              goto LABEL_32;
            v19 = (_QWORD *)v19[1];
          }
        }
      }
      v20 = *(BugCheckParameter4 - 1);
      if ( *BugCheckParameter4 == v20 + 1 )
      {
        if ( v12 != 1 && v10 != 1 )
          goto LABEL_37;
        v12 = 1;
      }
      else
      {
        if ( *BugCheckParameter4 != v20 - 1 || v10 != 1 && v12 )
        {
LABEL_32:
          if ( v12 == 1 )
            v23 = BugCheckParameter4[-v10];
          else
LABEL_37:
            v23 = *(BugCheckParameter4 - 1);
          v21 = v39;
          v7 += MiFreeMdlPageRun(v23, v10, v39);
LABEL_35:
          v10 = 1LL;
          goto LABEL_18;
        }
        v12 = 0;
      }
      v21 = v39;
      ++v10;
LABEL_18:
      ++BugCheckParameter4;
      if ( !--v8 )
      {
        if ( v10 )
        {
          if ( v12 == 1 )
            v22 = &BugCheckParameter4[-v10];
          else
            v22 = v37;
          v7 += MiFreeMdlPageRun(*v22, v10, v21);
        }
        result = &MiSystemPartition;
        if ( v7 )
        {
          if ( (ULONG_PTR *)v4 == &MiSystemPartition )
            MiReturnResidentAvailable(v7);
          else
            _InterlockedExchangeAdd64((volatile signed __int64 *)(v4 + 7360), v7);
          MiReturnCommit(v4, v7);
          result = &MiSystemPartition;
        }
        v9 = v41;
        goto LABEL_28;
      }
    }
    v21 = v39;
    goto LABEL_35;
  }
LABEL_28:
  if ( (ULONG_PTR *)v4 == &MiSystemPartition )
    _InterlockedExchangeAdd64(&qword_14043C0D8, -(__int64)v9);
  *(_WORD *)(BugCheckParameter2 + 10) &= ~2u;
  return result;
}
