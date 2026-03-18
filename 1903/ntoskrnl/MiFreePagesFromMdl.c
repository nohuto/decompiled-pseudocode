/*
 * XREFs of MiFreePagesFromMdl @ 0x1400F0784
 * Callers:
 *     MiAllocatePagesForMdl @ 0x1400EF404 (MiAllocatePagesForMdl.c)
 *     MmFreePagesFromMdl @ 0x1400EFC40 (MmFreePagesFromMdl.c)
 *     MmFreePagesFromMdlEx @ 0x14015CBD0 (MmFreePagesFromMdlEx.c)
 *     ?StReleaseRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x140161E80 (-StReleaseRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     BgpFwAllocateMemory @ 0x140178CE0 (BgpFwAllocateMemory.c)
 *     PpmHeteroInitializeHgsSupport @ 0x14019CA48 (PpmHeteroInitializeHgsSupport.c)
 *     MiFreePhysicalPageChain @ 0x1402D5CE0 (MiFreePhysicalPageChain.c)
 *     MmFreeSecureKernelPages @ 0x1402DD3AC (MmFreeSecureKernelPages.c)
 *     ?StDmLazyRegionsWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z @ 0x140322B28 (-StDmLazyRegionsWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z.c)
 *     MiFreeCombineMdls @ 0x1406F7ADC (MiFreeCombineMdls.c)
 *     NtAllocateUserPhysicalPages @ 0x140896E60 (NtAllocateUserPhysicalPages.c)
 *     NtFreeUserPhysicalPages @ 0x140897730 (NtFreeUserPhysicalPages.c)
 *     MiAllocatePartitionPhysicalPages @ 0x14089C1B0 (MiAllocatePartitionPhysicalPages.c)
 *     KiComputeNumaCosts @ 0x1409FE4E0 (KiComputeNumaCosts.c)
 * Callees:
 *     MiUnmapPageInHyperSpaceWorker @ 0x140026A60 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14002DD70 (MiMapPageInHyperSpaceWorker.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14002FA50 (MmMapLockedPagesSpecifyCache.c)
 *     MiReturnCommit @ 0x140058F90 (MiReturnCommit.c)
 *     MmUnmapLockedPages @ 0x14006AD00 (MmUnmapLockedPages.c)
 *     MiReturnResidentAvailable @ 0x140091BF0 (MiReturnResidentAvailable.c)
 *     MiFreeMdlPageRun @ 0x1400F04E4 (MiFreeMdlPageRun.c)
 *     MiLockPageInline @ 0x1400F0710 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     KeZeroPages @ 0x1401C7A10 (KeZeroPages.c)
 *     MiRetardMdl @ 0x1402BFC7C (MiRetardMdl.c)
 *     MiLogMdlRangeEvent @ 0x1402C2BEC (MiLogMdlRangeEvent.c)
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
  ULONG_PTR *v21; // rbx
  ULONG_PTR v22; // rcx
  PVOID v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rdx
  PVOID v26; // rcx
  __int64 *v27; // r14
  unsigned __int64 i; // rsi
  unsigned __int64 v29; // rbx
  __int64 v30; // rdx
  unsigned __int8 v31; // al
  unsigned __int8 v32; // r13
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int64 v34; // rdx
  unsigned __int64 v35; // r8
  __int64 v36; // [rsp+30h] [rbp-58h]
  ULONG_PTR *v37; // [rsp+38h] [rbp-50h]
  unsigned __int8 v38; // [rsp+90h] [rbp+8h] BYREF
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
  }
  else
  {
    if ( (a2 & 1) == 0 )
      goto LABEL_3;
    if ( (v2 & 1) != 0 )
    {
      v25 = *(unsigned int *)(BugCheckParameter2 + 40);
      v26 = *(PVOID *)(BugCheckParameter2 + 24);
      goto LABEL_44;
    }
    v23 = MmMapLockedPagesSpecifyCache((PMDL)BugCheckParameter2, 0, MmCached, 0LL, 0, 0x40000020u);
    v24 = *(unsigned int *)(BugCheckParameter2 + 40);
    if ( v23 )
    {
      v25 = (unsigned int)v24;
      v26 = v23;
LABEL_44:
      KeZeroPages(v26, v25);
      goto LABEL_3;
    }
    v27 = (__int64 *)(BugCheckParameter2 + 48);
    for ( i = (((*(_DWORD *)(BugCheckParameter2 + 32) + *(_DWORD *)(BugCheckParameter2 + 44)) & 0xFFFuLL) + v24 + 4095) >> 12;
          i;
          --i )
    {
      v29 = MiMapPageInHyperSpaceWorker(*v27, &v38, 0x80000000);
      KeZeroPages(v29, 4096LL);
      LOBYTE(v30) = v38;
      MiUnmapPageInHyperSpaceWorker(v29, v30, 0x80000000LL);
      ++v27;
    }
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
      v18 = *(_QWORD *)(qword_140466188 + 8 * v17);
      if ( v4 != v18 )
      {
        if ( v4 )
          KeBugCheckEx(0x1Au, 0x1301uLL, v4, v18, (ULONG_PTR)BugCheckParameter4);
        v4 = *(_QWORD *)(qword_140466188 + 8 * v17);
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
        _InterlockedDecrement64(&qword_140465BC0);
        v14 = v36;
      }
      if ( !v10 )
        goto LABEL_35;
      v19 = (_QWORD *)qword_140465BC8;
      if ( qword_140465BC8 && ((*(_QWORD *)(v15 + 40) >> 54) & 7) == 1 )
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
          goto LABEL_71;
        v12 = 1;
      }
      else
      {
        if ( *BugCheckParameter4 != v20 - 1 || v10 != 1 && v12 )
        {
LABEL_32:
          if ( v12 == 1 )
            v22 = BugCheckParameter4[-v10];
          else
LABEL_71:
            v22 = *(BugCheckParameter4 - 1);
          v7 += MiFreeMdlPageRun(v22, v10);
LABEL_35:
          v10 = 1LL;
          goto LABEL_18;
        }
        v12 = 0;
      }
      ++v10;
LABEL_18:
      ++BugCheckParameter4;
      if ( !--v8 )
      {
        if ( v10 )
        {
          if ( v12 == 1 )
            v21 = &BugCheckParameter4[-v10];
          else
            v21 = v37;
          v7 += MiFreeMdlPageRun(*v21, v10);
        }
        result = &MiSystemPartition;
        if ( v7 )
        {
          if ( (ULONG_PTR *)v4 == &MiSystemPartition )
            MiReturnResidentAvailable(v7);
          else
            _InterlockedExchangeAdd64((volatile signed __int64 *)(v4 + 8128), v7);
          MiReturnCommit(v4, v7);
          result = &MiSystemPartition;
        }
        v9 = v41;
        break;
      }
    }
  }
  if ( (ULONG_PTR *)v4 == &MiSystemPartition )
    _InterlockedExchangeAdd64(&qword_140466A38, -(__int64)v9);
  *(_WORD *)(BugCheckParameter2 + 10) &= ~2u;
  return result;
}
