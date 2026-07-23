/*
 * XREFs of MiPfPutPagesInTransition @ 0x140064E60
 * Callers:
 *     MmPrefetchPagesEx @ 0x1406635F8 (MmPrefetchPagesEx.c)
 *     MmPrefetchForCacheManager @ 0x1406637F8 (MmPrefetchForCacheManager.c)
 *     MiPrefetchControlArea @ 0x1406C84E4 (MiPrefetchControlArea.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1400230C0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiPfnZeroingNeeded @ 0x14002BDB0 (MiPfnZeroingNeeded.c)
 *     MiInitializePageColorBase @ 0x14002C4C0 (MiInitializePageColorBase.c)
 *     MiGetInPageSupportBlock @ 0x14002C610 (MiGetInPageSupportBlock.c)
 *     MiFreeInPageSupportBlock @ 0x14002DC80 (MiFreeInPageSupportBlock.c)
 *     MiObtainProtoReference @ 0x14002DD34 (MiObtainProtoReference.c)
 *     MiLockProtoPoolPage @ 0x14002F030 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x14002F1F0 (MiUnlockProtoPoolPage.c)
 *     MiPrefetchNormally @ 0x140031280 (MiPrefetchNormally.c)
 *     MiZeroPhysicalPage @ 0x140032010 (MiZeroPhysicalPage.c)
 *     MiInvalidPteConforms @ 0x140039720 (MiInvalidPteConforms.c)
 *     MmAccessFault @ 0x140043DA0 (MmAccessFault.c)
 *     MiGetPage @ 0x140049D50 (MiGetPage.c)
 *     MiObtainFaultCharges @ 0x140064D50 (MiObtainFaultCharges.c)
 *     MiInitializeReadInProgressPfn @ 0x1400656D0 (MiInitializeReadInProgressPfn.c)
 *     MiUseSlabAllocator @ 0x140065C80 (MiUseSlabAllocator.c)
 *     MiReturnCommit @ 0x140065D30 (MiReturnCommit.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiUpdatePfnPriority @ 0x140082AA8 (MiUpdatePfnPriority.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x1400946E4 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     PsGetIoPriorityThread @ 0x1400B6A80 (PsGetIoPriorityThread.c)
 *     MiGetPagingFileOffset @ 0x14010FAA4 (MiGetPagingFileOffset.c)
 *     MiSetInPagePriority @ 0x140113C54 (MiSetInPagePriority.c)
 *     MiReduceMdl @ 0x14011A9A4 (MiReduceMdl.c)
 *     MiReturnFaultCharges @ 0x140134924 (MiReturnFaultCharges.c)
 *     MiIsPteInStore @ 0x140141908 (MiIsPteInStore.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     MiRefillPurgedExtents @ 0x1402B6E40 (MiRefillPurgedExtents.c)
 *     MiGetSlabPage @ 0x1402C2BCC (MiGetSlabPage.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14031C2A4 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14031C468 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     MiFreeReadListPages @ 0x140663B20 (MiFreeReadListPages.c)
 */

__int64 __fastcall MiPfPutPagesInTransition(__int64 a1, _QWORD *a2, int a3)
{
  char *v3; // rdi
  unsigned int v4; // esi
  __int64 v5; // r13
  _QWORD *v6; // r12
  __int64 v7; // r14
  __int64 v8; // r10
  __int64 v9; // r8
  int IoPriorityThread; // eax
  __int64 v11; // r10
  _QWORD *v12; // r15
  int v13; // edx
  __int64 v14; // r11
  int v15; // edi
  _QWORD *v16; // rbx
  unsigned __int64 v17; // r12
  char *v18; // rdx
  unsigned int v19; // eax
  unsigned __int64 v20; // r8
  int v21; // esi
  _QWORD *v22; // rax
  __int64 v23; // rdx
  unsigned __int64 v24; // r12
  __int64 v25; // rbx
  unsigned __int64 v26; // rax
  __int64 v27; // rsi
  __int64 v28; // rbx
  __int64 v29; // rsi
  ULONG_PTR v30; // rsi
  int v31; // r15d
  ULONG_PTR v32; // r9
  __int64 v33; // r10
  __int64 v34; // r11
  __int64 v35; // rax
  _QWORD *v36; // r8
  _QWORD *v37; // r14
  _BYTE *v38; // r14
  __int64 v39; // rbx
  unsigned __int8 CurrentIrql; // r13
  struct _KPRCB *CurrentPrcb; // r15
  _DWORD *SchedulerAssist; // rcx
  signed __int32 v43; // edx
  struct _KPRCB *v44; // rcx
  ULONG_PTR v45; // rbx
  _QWORD *v46; // rsi
  __int64 v47; // rax
  __int64 v49; // rax
  BOOL v50; // eax
  int v51; // r9d
  _DWORD *v52; // rcx
  bool v53; // zf
  signed __int32 v54; // eax
  _QWORD *v55; // rax
  char *v56; // rcx
  PVOID *v57; // rdx
  __int64 v58; // rcx
  unsigned __int64 v59; // rax
  unsigned __int64 v60; // rdx
  __int64 v61; // rax
  __int64 v62; // rdx
  ULONG_PTR *v63; // r10
  unsigned int v64; // r11d
  __int16 v65; // cx
  __int64 SlabPage; // rax
  unsigned int v67; // r8d
  int v68; // eax
  int v69; // eax
  int v70; // eax
  struct _KPRCB *v71; // rcx
  unsigned int PagingFileOffset; // eax
  __int64 v73; // r15
  int IsPteInStore; // r14d
  __int64 v75; // rbx
  bool v76; // cc
  __int64 v77; // rcx
  __int64 v78; // r13
  ULONG_PTR v79; // rsi
  __int64 *v80; // r8
  __int64 v81; // rax
  unsigned __int8 v82; // dl
  int v83; // ecx
  _QWORD *v84; // rax
  _QWORD *v85; // rax
  __int64 v86; // rdx
  _QWORD *v87; // rbx
  __int64 v88; // [rsp+30h] [rbp-99h]
  __int64 v89; // [rsp+38h] [rbp-91h]
  __int64 v90; // [rsp+40h] [rbp-89h]
  __int64 v91; // [rsp+48h] [rbp-81h]
  int v92; // [rsp+50h] [rbp-79h]
  int v93; // [rsp+54h] [rbp-75h]
  unsigned int v94; // [rsp+58h] [rbp-71h]
  int v95; // [rsp+5Ch] [rbp-6Dh] BYREF
  int v96; // [rsp+60h] [rbp-69h]
  unsigned int v97; // [rsp+64h] [rbp-65h]
  __int64 v98; // [rsp+68h] [rbp-61h] BYREF
  _QWORD *v99; // [rsp+70h] [rbp-59h]
  _BYTE *v100; // [rsp+78h] [rbp-51h]
  _DWORD v101[2]; // [rsp+80h] [rbp-49h] BYREF
  unsigned __int64 v102; // [rsp+88h] [rbp-41h]
  _QWORD *v103; // [rsp+90h] [rbp-39h]
  __int64 v104; // [rsp+98h] [rbp-31h]
  void *Src; // [rsp+A0h] [rbp-29h]
  unsigned __int64 v106; // [rsp+A8h] [rbp-21h]
  __int64 v107; // [rsp+B0h] [rbp-19h] BYREF
  __int64 *v108; // [rsp+B8h] [rbp-11h]
  unsigned __int64 v109; // [rsp+C0h] [rbp-9h]
  PVOID P; // [rsp+C8h] [rbp-1h]
  volatile signed __int32 *v111; // [rsp+D0h] [rbp+7h] BYREF
  __int16 v112; // [rsp+D8h] [rbp+Fh]
  unsigned __int16 v113; // [rsp+DAh] [rbp+11h]
  void *retaddr; // [rsp+128h] [rbp+5Fh]
  int v117; // [rsp+140h] [rbp+77h] BYREF
  int v118; // [rsp+148h] [rbp+7Fh]

  v117 = a3;
  v3 = 0LL;
  v4 = *(_DWORD *)(a1 + 56);
  v5 = a1;
  v97 = *(_DWORD *)(a1 + 60);
  v6 = 0LL;
  v7 = 0LL;
  v8 = *(_QWORD *)(a1 + 8);
  v94 = v4;
  v103 = 0LL;
  v9 = *(_WORD *)(v8 + 60) & 0x3FF;
  v88 = 0LL;
  v104 = 0LL;
  LOBYTE(v117) = 17;
  v91 = *(_QWORD *)(qword_14043B808 + 8 * v9);
  v101[1] = *(_DWORD *)(a1 + 64) + 1;
  IoPriorityThread = PsGetIoPriorityThread(KeGetCurrentThread());
  v12 = *(_QWORD **)(v5 + 96);
  v13 = (*(_DWORD *)(v11 + 56) >> 20) & 0x3F;
  v96 = IoPriorityThread;
  v108 = (__int64 *)(v5 + 96);
  v89 = (__int64)v12;
  v92 = v4 & 7 | 0x18;
  v90 = 0LL;
  MiInitializePageColorBase(v14 + 1280, v13, (__int64)&v111);
  if ( v12 != (_QWORD *)(v5 + 96) )
  {
    v15 = v4 & 7 | 0x18;
    while ( 1 )
    {
      P = v12;
      if ( v96 < 2 )
      {
        *((_DWORD *)v12 + 48) |= 0x80u;
      }
      else if ( (*(_DWORD *)(v5 + 80) & 1) != 0 )
      {
        *((_DWORD *)v12 + 48) |= 0x20u;
      }
      v16 = (_QWORD *)v12[30];
      v17 = v12[25] + 8LL;
      v100 = v16;
      v109 = v17;
      v12[30] = *v16 & 0xFFFFFFFFFFFFFFFCuLL;
      v106 = *v16 & 0xFFFFFFFFFFFFFFFCuLL;
      Src = (void *)v12[32];
      v18 = (char *)Src + 48;
      v19 = 0;
      v20 = (((*((_DWORD *)Src + 8) + *((_DWORD *)Src + 11)) & 0xFFF)
           + (unsigned __int64)*((unsigned int *)Src + 10)
           + 4095) >> 12;
      if ( v20 )
      {
        do
        {
          ++v19;
          *(_QWORD *)v18 = qword_14043BE98;
          v18 += 8;
        }
        while ( v19 < v20 );
      }
      v21 = 0;
      v118 = 0;
      if ( !v90 )
      {
        v22 = MiGetInPageSupportBlock(0);
        v90 = (__int64)v22;
        if ( v22 )
        {
          v23 = v97;
          v22[31] = 0LL;
          MiSetInPagePriority(v22, v23, v94);
        }
      }
      if ( (unsigned __int64)v16 >= v17 )
        goto LABEL_57;
      while ( 2 )
      {
        v24 = *v16 & 0xFFFFFFFFFFFFFFFCuLL;
        if ( v7 )
        {
          if ( v104 == ((v24 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
            goto LABEL_14;
          MiUnlockProtoPoolPage(v7, v117);
        }
        v104 = ((v24 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        while ( 1 )
        {
          v49 = MiLockProtoPoolPage(v24, (unsigned __int8 *)&v117);
          v88 = v49;
          if ( v49 )
            break;
          MmAccessFault(2uLL, v24, 0LL, 0LL);
        }
        v15 = v92;
        v7 = v49;
        v5 = a1;
        while ( 1 )
        {
LABEL_14:
          while ( 1 )
          {
            v25 = *(_QWORD *)v24;
            v26 = *(_QWORD *)v24;
            if ( (*(_QWORD *)v24 & 1) == 0 )
              break;
LABEL_83:
            if ( (*(_QWORD *)(48 * ((v26 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFD8LL) & 0x20000000000000LL) != 0 )
            {
              v27 = 48 * ((v26 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
              v101[0] = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v27 + 24), 0x3FuLL) )
              {
                do
                  KeYieldProcessorEx(v101);
                while ( *(__int64 *)(v27 + 24) < 0 );
              }
              if ( *(_QWORD *)v24 == v25 )
                goto LABEL_17;
              _InterlockedAnd64((volatile signed __int64 *)(v27 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            }
          }
          if ( (*(_QWORD *)v24 & 0xC00LL) != 0x800 )
            break;
          if ( MiInvalidPteConforms(*(_QWORD *)v24) )
          {
            v26 = v25;
            if ( qword_14043B180 && (v25 & 0x10) == 0 )
              v26 = v25 & ~qword_14043B180;
            goto LABEL_83;
          }
        }
        v27 = 0LL;
LABEL_17:
        v28 = *(_QWORD *)v24;
        if ( v24 >= 0xFFFFF6FB7DBED000uLL
          && v24 <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v28 & 1) != 0
          && ((v28 & 0x20) == 0 || (v28 & 0x42) == 0) )
        {
          v60 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
          if ( v60 )
          {
            v61 = *(_QWORD *)(v60 + 8 * ((v24 >> 3) & 0x1FF));
            v62 = v28 | 0x20;
            if ( (v61 & 0x20) == 0 )
              v62 = *(_QWORD *)v24;
            v28 = v62;
            if ( (v61 & 0x42) != 0 )
              v28 = v62 | 0x42;
          }
        }
        v107 = v28;
        if ( v27 )
        {
          MiUpdatePfnPriority(v27, v94, 0LL);
          _InterlockedAnd64((volatile signed __int64 *)(v27 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          goto LABEL_51;
        }
        if ( (v28 & 0x400) != 0 )
        {
          v29 = v28;
          if ( qword_14043B180 && (v28 & 0x10) == 0 )
            v29 = v28 & ~qword_14043B180;
          v30 = v29 >> 16;
          if ( (*(_DWORD *)(*(_QWORD *)(v5 + 8) + 56LL) & 0x40000000) == 0 )
          {
            v31 = 1;
            if ( !(unsigned int)MiUseSlabAllocator(v91, v30, v28) )
              goto LABEL_25;
            v35 = 48LL;
            goto LABEL_26;
          }
          MiUnlockProtoPoolPage(v7, v117);
          v7 = 0LL;
          v88 = 0LL;
          if ( (int)MiRefillPurgedExtents(v30) < 0 )
          {
            v21 = v118;
            goto LABEL_59;
          }
LABEL_51:
          v16 = v100 + 8;
          v100 = v16;
          if ( (unsigned __int64)v16 >= v109 )
            goto LABEL_56;
          continue;
        }
        break;
      }
      if ( !(unsigned int)IS_PTE_NOT_DEMAND_ZERO(v28) || !v90 )
        goto LABEL_51;
      v33 = v91;
      v31 = 2;
      v30 = v32;
      v34 = 1LL;
LABEL_25:
      v35 = 40LL;
LABEL_26:
      v36 = *(_QWORD **)(v35 + v5);
      v37 = (_QWORD *)(v35 + v5);
      v99 = v36;
      if ( v36 )
      {
        *v37 = *v36;
        v38 = v100;
        v98 = (__int64)(v36 + 0xB000000000LL) / 48;
        goto LABEL_28;
      }
      if ( MiPrefetchNormally(v33) )
      {
        if ( !a2 )
          goto LABEL_124;
        if ( *a2 )
        {
          --*a2;
LABEL_124:
          if ( (unsigned int)MiObtainFaultCharges(v63, v64, v64) )
          {
            v65 = _InterlockedExchangeAdd(v111, 1u);
            if ( v37 == (_QWORD *)(v5 + 48) )
            {
              SlabPage = MiGetSlabPage(v91, (*(unsigned __int16 *)(v30 + 32) >> 1) & 0x1F, 0LL, 0LL);
              v38 = v100;
            }
            else
            {
              v38 = v100;
              v67 = 770;
              if ( (*v100 & 1) == 0 )
                v67 = 512;
              SlabPage = MiGetPage(v91, (unsigned __int16)(v112 & v65) | (unsigned int)v113, v67);
            }
            v98 = SlabPage;
            if ( SlabPage != -1 )
            {
              v33 = v91;
              v36 = (_QWORD *)(48 * SlabPage - 0x58000000000LL);
              LODWORD(v32) = 0;
              v99 = v36;
              v34 = 1LL;
LABEL_28:
              v93 = v32;
              if ( (*v38 & 1) != 0 )
              {
                v50 = MiPfnZeroingNeeded((__int64)v36, v34);
                v36 = v99;
                if ( v50 )
                  v51 = v34;
                v93 = v51;
              }
              if ( v31 == 1 )
              {
                v12 = (_QWORD *)v89;
                if ( !*(_QWORD *)(v89 + 248) )
                  *(_QWORD *)(v89 + 248) = v36;
                ++v118;
                MiInitializeReadInProgressPfn(-1, (unsigned int)&v98, v34, v24, v89, v15);
                v39 = *(_QWORD *)(v5 + 8);
                if ( (*(_DWORD *)(v39 + 56) & 0x20) != 0 || !*(_QWORD *)(v39 + 64) )
                  v30 = 0LL;
                CurrentIrql = KeGetCurrentIrql();
                __writecr8(2uLL);
                if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
                  _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
                if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
                {
                  ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v39 + 72, CurrentIrql);
                }
                else
                {
                  CurrentPrcb = KeGetCurrentPrcb();
                  v95 = 0;
                  SchedulerAssist = CurrentPrcb->SchedulerAssist;
                  if ( SchedulerAssist )
                  {
                    if ( CurrentPrcb->NestingLevel <= 1u )
                    {
                      v68 = SchedulerAssist[5];
                      SchedulerAssist[5] = v68 + 1;
                      if ( v68 == -1 )
                        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                    }
                  }
                  if ( _interlockedbittestandset((volatile signed __int32 *)(v39 + 72), 0x1Fu) )
                  {
                    v52 = CurrentPrcb->SchedulerAssist;
                    if ( v52 )
                    {
                      if ( CurrentPrcb->NestingLevel <= 1u )
                      {
                        v69 = v52[5] - 1;
                        v52[5] = v69;
                        if ( !v69 )
                          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                      }
                    }
                    v95 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)(v39 + 72), CurrentIrql);
                  }
                  v43 = *(_DWORD *)(v39 + 72);
                  while ( (v43 & 0xBFFFFFFF) != 0x80000000 )
                  {
                    if ( (v43 & 0x40000000) == 0 )
                    {
                      v54 = _InterlockedCompareExchange((volatile signed __int32 *)(v39 + 72), v43 | 0x40000000, v43);
                      v53 = v43 == v54;
                      v43 = v54;
                      if ( !v53 )
                        continue;
                    }
                    KeYieldProcessorEx(&v95);
                    v43 = *(_DWORD *)(v39 + 72);
                  }
                  v12 = (_QWORD *)v89;
                }
                ++*(_QWORD *)(v39 + 32);
                if ( v30 )
                  ++*(_DWORD *)(v30 + 104);
                if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
                  ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v39 + 72, retaddr);
                else
                  *(_DWORD *)(v39 + 72) = 0;
                v44 = KeGetCurrentPrcb();
                v18 = (char *)v44->SchedulerAssist;
                if ( v18 )
                {
                  if ( v44->NestingLevel <= 1u )
                  {
                    v70 = *((_DWORD *)v18 + 5) - 1;
                    *((_DWORD *)v18 + 5) = v70;
                    if ( !v70 )
                      KiRemoveSystemWorkPriorityKick(v44);
                  }
                }
                if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
                {
                  v71 = KeGetCurrentPrcb();
                  _InterlockedAnd((volatile signed __int32 *)v71->SchedulerAssist, 0xFFFEFFFF);
                  KiRemoveSystemWorkPriorityKick(v71);
                }
                __writecr8(CurrentIrql);
                v45 = v98;
                v7 = v88;
                *((_QWORD *)Src + ((__int64)(v24 - v106) >> 3) + 6) = v98;
                if ( !v12[20] )
                {
                  MiObtainProtoReference(v88, 0);
                  v12[20] = v88;
                }
                if ( v93 == 1 )
                {
                  MiUnlockProtoPoolPage(v88, v117);
                  v88 = 0LL;
                  v7 = 0LL;
                  MiZeroPhysicalPage(v45, 1, *((unsigned __int8 *)v99 + 34) >> 6);
                }
LABEL_50:
                v5 = a1;
                goto LABEL_51;
              }
              MiReturnCommit(v33, v34);
              MiInitializeReadInProgressPfn(-1, (unsigned int)&v98, 1, v24, v90, v15);
              PagingFileOffset = MiGetPagingFileOffset(&v107);
              v73 = PagingFileOffset;
              LODWORD(v102) = PagingFileOffset;
              IsPteInStore = MiIsPteInStore(v91, v28);
              v75 = (unsigned __int16)v28 >> 12;
              v76 = v96 < 2;
              v78 = *(_QWORD *)(v77 + 8 * v75 + 7136);
              *(_QWORD *)(v90 + 256) = v90 + 272;
              if ( v76 )
                *(_DWORD *)(v90 + 192) |= 0x80u;
              v79 = v98;
              *(_QWORD *)(v90 + 272) = 0LL;
              *(_QWORD *)(v90 + 304) = 0LL;
              *(_DWORD *)(v90 + 280) = 56;
              *(_QWORD *)(v90 + 312) = 4096LL;
              *(_WORD *)(v90 + 282) |= 0x4042u;
              *(_QWORD *)(v90 + 320) = v79;
              MiObtainProtoReference(v88, 0);
              v80 = v108;
              *(_QWORD *)(v90 + 160) = v88;
              v81 = *v80;
              if ( *(__int64 **)(*v80 + 8) == v80 )
              {
                *(_QWORD *)v90 = v81;
                *(_QWORD *)(v90 + 8) = v80;
                *(_QWORD *)(v81 + 8) = v90;
                *v80 = v90;
                v82 = v117;
                ++*(_DWORD *)(a1 + 84);
                MiUnlockProtoPoolPage(v88, v82);
                v88 = 0LL;
                if ( v93 == 1 )
                  MiZeroPhysicalPage(v79, 1, *((unsigned __int8 *)v99 + 34) >> 6);
                *(_QWORD *)(v90 + 224) = 0LL;
                if ( IsPteInStore )
                {
                  *(_DWORD *)(v90 + 192) |= 0x100u;
                  *(_QWORD *)(v90 + 96) = v73 | (v75 << 60);
                }
                else
                {
                  v102 = (unsigned __int64)(unsigned int)v102 << 12;
                  *(_QWORD *)(v90 + 96) = v102;
                }
                v83 = *(_DWORD *)(v90 + 192) | 0x200000;
                *(_QWORD *)(v90 + 200) = *(_QWORD *)(v78 + 56);
                v84 = v99;
                *(_DWORD *)(v90 + 192) = v83;
                *(_QWORD *)(v90 + 240) = v24;
                *(_QWORD *)(v90 + 248) = v84;
                v85 = MiGetInPageSupportBlock(0);
                v90 = (__int64)v85;
                if ( v85 )
                {
                  v86 = v97;
                  v85[31] = 0LL;
                  MiSetInPagePriority(v85, v86, v94);
                }
                v12 = (_QWORD *)v89;
                v7 = 0LL;
                goto LABEL_50;
              }
LABEL_163:
              __fastfail(3u);
            }
            MiReturnFaultCharges(v91, 1LL, 1LL);
          }
        }
      }
      v7 = v88;
      v12 = (_QWORD *)v89;
LABEL_56:
      v21 = v118;
LABEL_57:
      if ( v7 )
      {
        MiUnlockProtoPoolPage(v7, v117);
        v7 = 0LL;
        v88 = 0LL;
      }
LABEL_59:
      if ( v21 )
      {
        v46 = Src;
        v47 = MiReduceMdl(Src, v18);
        if ( v47 )
        {
          v12[12] += v47 << 12;
          v58 = 48LL * v46[6] - 0x58000000000LL;
          v59 = *(_QWORD *)(v58 + 8) | 0x8000000000000000uLL;
          v12[31] = v58;
          v12[30] = v59;
        }
        if ( v46 != v12 + 34 && *((_DWORD *)v46 + 10) <= 0x10000u )
        {
          memmove(v12 + 34, v46, *((__int16 *)v46 + 4));
          *v46 = v103;
          v12[32] = v12 + 34;
          v103 = v46;
        }
        v12 = (_QWORD *)*v12;
        v89 = (__int64)v12;
      }
      else
      {
        v55 = (_QWORD *)*v12;
        v56 = (char *)P;
        v12 = v55;
        v89 = (__int64)v55;
        v57 = (PVOID *)*((_QWORD *)P + 1);
        if ( (PVOID)v55[1] != P || *v57 != P )
          goto LABEL_163;
        *v57 = v55;
        v55[1] = v57;
        --*(_DWORD *)(v5 + 84);
        MiFreeInPageSupportBlock(v56);
      }
      if ( v12 == (_QWORD *)(v5 + 96) )
      {
        v3 = (char *)v90;
        v6 = v103;
        break;
      }
    }
  }
  MiFreeReadListPages(v5);
  if ( v6 )
  {
    do
    {
      v87 = (_QWORD *)*v6;
      ExFreePoolWithTag(v6, 0);
      v6 = v87;
    }
    while ( v87 );
  }
  if ( v3 )
    MiFreeInPageSupportBlock(v3);
  return 0LL;
}
