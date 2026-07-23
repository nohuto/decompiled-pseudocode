/*
 * XREFs of MiWaitForInPageComplete @ 0x14001B7E0
 * Callers:
 *     MiPfCompleteInPageSupport @ 0x14001A0B8 (MiPfCompleteInPageSupport.c)
 *     MiIssueHardFault @ 0x14001BCD0 (MiIssueHardFault.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     PfHardFaultLog @ 0x140019F24 (PfHardFaultLog.c)
 *     MiIsRetryIoStatus @ 0x140022E18 (MiIsRetryIoStatus.c)
 *     MiLockPageInline @ 0x14002CE40 (MiLockPageInline.c)
 *     MiValidateInPage @ 0x14002EC10 (MiValidateInPage.c)
 *     MiZeroPhysicalPage @ 0x140032010 (MiZeroPhysicalPage.c)
 *     MmUnmapLockedPages @ 0x140033F00 (MmUnmapLockedPages.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14003AB00 (MiUnmapPageInHyperSpaceWorker.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     MiGetSharedVm @ 0x140064D20 (MiGetSharedVm.c)
 *     MiIsAddressValid @ 0x140068590 (MiIsAddressValid.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140082770 (MiMapPageInHyperSpaceWorker.c)
 *     MiDeleteControlArea @ 0x140094C5C (MiDeleteControlArea.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x140097DE0 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiFindContiguousPages @ 0x14009A050 (MiFindContiguousPages.c)
 *     MiCopyPage @ 0x1400B1B90 (MiCopyPage.c)
 *     MiPrefetchRestOfCluster @ 0x140139198 (MiPrefetchRestOfCluster.c)
 *     MiFlowThroughRemoveNode @ 0x14013B830 (MiFlowThroughRemoveNode.c)
 *     MiStoreFaultComplete @ 0x140157D60 (MiStoreFaultComplete.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     MiExceptionForMappedVa @ 0x1402A5A6C (MiExceptionForMappedVa.c)
 *     MiRetardMdl @ 0x1402A85DC (MiRetardMdl.c)
 *     MiFlushAllFilesystemPages @ 0x1402AB1E0 (MiFlushAllFilesystemPages.c)
 *     MiValidatePagefilePageHash @ 0x1402CC704 (MiValidatePagefilePageHash.c)
 */

__int64 __fastcall MiWaitForInPageComplete(__int64 a1, ULONG_PTR a2, int *a3)
{
  ULONG_PTR v3; // rsi
  __int64 v4; // r8
  __int64 v5; // rbp
  __int64 v6; // r15
  ULONG_PTR v7; // rbx
  ULONG_PTR v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rdx
  int v13; // r8d
  int v14; // edx
  __int64 v15; // r13
  unsigned __int64 v16; // rax
  int v17; // eax
  volatile signed __int64 *v18; // rcx
  int v19; // r14d
  int v20; // r12d
  int *v21; // rax
  int v22; // r15d
  bool v23; // zf
  int IsRetryIoStatus; // r15d
  __int64 v25; // rdx
  int v26; // esi
  __int64 v27; // rbx
  __int64 result; // rax
  unsigned __int64 v29; // r13
  _QWORD *v30; // r12
  void *v31; // rsi
  ULONG_PTR *v32; // r14
  unsigned __int64 v33; // rsi
  unsigned __int64 v34; // rbx
  _BYTE *v35; // rdx
  unsigned __int64 v36; // r13
  int v37; // eax
  ULONG_PTR v38; // rdi
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rdx
  unsigned __int8 v43; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int64 v45; // [rsp+60h] [rbp-88h]
  int v46; // [rsp+60h] [rbp-88h]
  ULONG_PTR BugCheckParameter4; // [rsp+68h] [rbp-80h]
  unsigned __int64 v48; // [rsp+70h] [rbp-78h]
  __int64 v49; // [rsp+78h] [rbp-70h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+80h] [rbp-68h]
  __int64 v51; // [rsp+88h] [rbp-60h]
  _QWORD *v52; // [rsp+90h] [rbp-58h]
  unsigned __int8 v53; // [rsp+F0h] [rbp+8h] BYREF
  int v54; // [rsp+F8h] [rbp+10h]
  int *v55; // [rsp+100h] [rbp+18h]
  unsigned int v56; // [rsp+108h] [rbp+20h]

  v55 = a3;
  v3 = a2 + 272;
  v4 = *(_QWORD *)(a2 + 248);
  v5 = 0LL;
  v6 = *(_QWORD *)(a1 + 56);
  v7 = -1LL;
  BugCheckParameter1 = *(_QWORD *)(a2 + 232);
  BugCheckParameter4 = *(_QWORD *)(a2 + 224);
  v10 = *(_QWORD *)(a2 + 256);
  v56 = 0;
  v51 = v4;
  if ( v10 )
    v3 = v10;
  v49 = -1LL;
  v52 = (_QWORD *)(v4 + 8);
  v45 = v3 + 48;
  if ( *(__int64 *)(v4 + 8) >= 0 )
  {
    v36 = (v4 + 0x58000000000LL) / 48;
    if ( v36 < 0xFFFFFFFFFLL )
    {
      v37 = ~(*(_DWORD *)(a1 + 80) << 11) & 0x20000 | 0x40000008;
      if ( (void (__fastcall __noreturn *)())KeGetCurrentThread()[1].ApcState.ApcListHead[0].Blink != KeSwapProcessOrStack )
        v37 = ~(*(_DWORD *)(a1 + 80) << 11) & 0x20000 | 0x40000000;
      MiFindContiguousPages(
        *(_QWORD *)(qword_14043B808 + 8 * ((*(_QWORD *)(v4 + 40) >> 40) & 0x3FFLL)),
        v36 + 1,
        -1,
        0,
        1LL,
        *(unsigned __int8 *)(v4 + 34) >> 6,
        *(_QWORD *)(v4 + 40) >> 58,
        0x80000000,
        v37,
        0LL,
        (__int64)&v49);
    }
  }
  v11 = *(_QWORD *)(a1 + 16);
  if ( (v11 & 1) != 0 )
  {
    v35 = (_BYTE *)(v11 & 0xFFFFFFFFFFFFFFFEuLL);
    if ( *v35 == 2 )
    {
      if ( v6 )
        MiPrefetchRestOfCluster(a2, v35, v6);
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
  v14 = *(_DWORD *)(a2 + 192);
  if ( (v14 & 0x10) != 0 )
  {
    MiFlowThroughRemoveNode(a2);
    v14 = *(_DWORD *)(a2 + 192);
  }
  v15 = *(unsigned int *)(a2 + 184);
  v16 = ((*(_DWORD *)(v3 + 32) + *(_DWORD *)(v3 + 44)) & 0xFFF) + *(unsigned int *)(v3 + 40) + 4095LL;
  v54 = 0;
  v48 = v3 + 48 + 8 * ((v16 >> 12) - 1);
  if ( (v14 & 0x100) != 0 )
    MiStoreFaultComplete(a2);
  v17 = *(_DWORD *)(a2 + 80);
  if ( *(_QWORD *)(a2 + 208) )
  {
    if ( v17 >= 0 )
    {
      v54 = MiValidateInPage(a2);
      if ( v54 == -1073740748 )
        *(_DWORD *)(a2 + 192) |= 0x100000u;
    }
    v18 = *(volatile signed __int64 **)(a2 + 208);
    if ( _InterlockedExchangeAdd64(v18 + 14, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      MiDeleteControlArea((PVOID)v18);
  }
  else if ( v17 >= 0 && (*(_DWORD *)(a2 + 192) & 0x400000) != 0 )
  {
    v54 = MiValidatePagefilePageHash(a2);
  }
  v19 = *(_DWORD *)(a2 + 80);
  v20 = v56 & 1;
  if ( (v56 & 1) == 0 )
  {
    __incgsdword(0x2EA4u);
    __addgsdword(0x2EA0u, ((unsigned int)v15 >> 12) + ((v15 & 0xFFF) != 0));
    if ( v6 )
    {
      if ( (*(_DWORD *)(a2 + 192) & 8) == 0 )
        _InterlockedIncrement((volatile signed __int32 *)(v6 + 168));
    }
  }
  v21 = v55;
  v22 = 2 * v20;
  if ( *(_QWORD *)v55 )
  {
    PfHardFaultLog(*(_QWORD **)v55, v22, v13);
    v21 = v55;
  }
  v23 = (*(_BYTE *)(v3 + 10) & 1) == 0;
  *v21 = v22;
  if ( !v23 )
    MmUnmapLockedPages(*(PVOID *)(v3 + 24), (PMDL)v3);
  *(_DWORD *)(a2 + 188) = -1;
  IsRetryIoStatus = 0;
  if ( v19 >= 0 )
  {
    v25 = *(_QWORD *)(a2 + 88);
    if ( v25 != v15 )
    {
      if ( v25 || (*(_DWORD *)(a2 + 192) & 8) == 0 )
      {
        if ( (*(_DWORD *)(a2 + 192) & 0x200000) != 0 && !v20 )
          KeBugCheckEx(0x7Au, 4uLL, *(_QWORD *)(a2 + 88), a2, BugCheckParameter4);
        v46 = v25 & 0xFFF;
        v29 = 8
            * ((((*(_DWORD *)(v3 + 32) + *(_DWORD *)(v3 + 44)) & 0xFFF)
              - (unsigned __int64)(unsigned int)(v15 - *(_DWORD *)(v3 + 40))
              + v25
              + 4095) >> 12)
            + 40;
        v30 = (_QWORD *)(v3 + v29);
        if ( (v25 & 0xFFF) != 0 )
        {
          v31 = (void *)((v25 & 0xFFF) + MiMapPageInHyperSpaceWorker(*v30, &v53, 0x80000000LL));
          memset(v31, 0, (unsigned int)(4096 - v46));
          MiUnmapPageInHyperSpaceWorker(v31, v53, 0x80000000LL);
        }
        if ( (unsigned __int64)(v30 + 1) <= v48 )
          *(_DWORD *)(a2 + 188) = ((__int64)(v29 - 48) >> 3) + 1;
      }
      else
      {
        v19 = -1073741801;
      }
    }
    v26 = v54;
    if ( v54 != -1073741761 )
      goto LABEL_31;
LABEL_73:
    if ( BugCheckParameter4 > 0x7FFFFFFEFFFFLL
      && (unsigned int)MiGetSystemRegionType(BugCheckParameter4) != 8
      && !(unsigned int)MiExceptionForMappedVa(BugCheckParameter4) )
    {
      if ( !IsRetryIoStatus )
      {
        v38 = BugCheckParameter1;
        if ( (unsigned __int8)MiIsAddressValid(BugCheckParameter1) == 1 )
          v7 = MI_READ_PTE_LOCK_FREE(v38);
        MiFlushAllFilesystemPages(1LL);
        if ( v26 >= 0 )
          v26 = v19;
        KeBugCheckEx(0x7Au, v38, v26, v7, BugCheckParameter4);
      }
      if ( v26 != -1073741761 )
        v19 = -1073741801;
    }
    goto LABEL_31;
  }
  if ( v19 != -1073741807 )
  {
    if ( v19 == -2147483626 )
      goto LABEL_31;
    IsRetryIoStatus = MiIsRetryIoStatus((unsigned int)v19, *(unsigned int *)(v3 + 40));
    if ( IsRetryIoStatus && !dword_14043BE64 && (!v20 || (v56 & 2) != 0) )
      dword_14043BE64 = 32;
    if ( (*(_DWORD *)(a2 + 192) & 8) != 0 )
    {
      v19 = -1073741801;
      goto LABEL_31;
    }
    v26 = v54;
    goto LABEL_73;
  }
  if ( (*(_DWORD *)(a2 + 192) & 0x200000) != 0 )
    KeBugCheckEx(0x7Au, 3uLL, 0xFFFFFFFFC0000011uLL, a2, BugCheckParameter4);
  v32 = (ULONG_PTR *)(v3 + 48);
  v33 = 1LL;
  v34 = (v48 - v45 + 8) >> 3;
  if ( v45 > v48 )
    v34 = 0LL;
  if ( v34 )
  {
    do
    {
      MiZeroPhysicalPage(*v32);
      ++v33;
      ++v32;
    }
    while ( v33 <= v34 );
  }
  v19 = 0;
LABEL_31:
  v27 = v49;
  if ( v49 != -1 )
  {
    MiCopyPage(v49, (v51 + 0x58000000000LL) / 48, 0LL, 1LL);
    v5 = 48 * v27 - 0x58000000000LL;
    *(_QWORD *)(v5 + 16) = ZeroPte;
    MiSetOriginalPtePfnFromFreeList(v5 + 16, v39, v40, v41);
    if ( ((*(_QWORD *)(v5 + 40) >> 54) & 7) == 3 )
    {
      v43 = MiLockPageInline(48 * v27 - 0x58000000000LL);
      *(_QWORD *)(v5 + 8) = *v52;
      _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v43 < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb, v42);
      }
      __writecr8(v43);
    }
  }
  result = v56;
  *(_DWORD *)(a2 + 112) = v56;
  *(_QWORD *)(a2 + 104) = v5;
  *(_DWORD *)(a2 + 80) = v19;
  return result;
}
