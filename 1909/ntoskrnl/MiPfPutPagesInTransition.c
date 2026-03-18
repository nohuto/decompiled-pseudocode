/*
 * XREFs of MiPfPutPagesInTransition @ 0x140092240
 * Callers:
 *     MmPrefetchPagesEx @ 0x140647408 (MmPrefetchPagesEx.c)
 *     MmPrefetchForCacheManager @ 0x1406475F8 (MmPrefetchForCacheManager.c)
 *     MiPrefetchControlArea @ 0x1406E7830 (MiPrefetchControlArea.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     MiObtainFaultCharges @ 0x140053830 (MiObtainFaultCharges.c)
 *     MiLockProtoPoolPage @ 0x140054DD0 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x140055030 (MiUnlockProtoPoolPage.c)
 *     MiReturnCommit @ 0x140059030 (MiReturnCommit.c)
 *     PsGetIoPriorityThread @ 0x14005A5C0 (PsGetIoPriorityThread.c)
 *     MiZeroPhysicalPage @ 0x14006F000 (MiZeroPhysicalPage.c)
 *     MiGetPagingFileOffset @ 0x140076424 (MiGetPagingFileOffset.c)
 *     MiInitializeReadInProgressPfn @ 0x140092AB0 (MiInitializeReadInProgressPfn.c)
 *     MiReduceMdl @ 0x140092FF0 (MiReduceMdl.c)
 *     MiSetInPagePriority @ 0x140093164 (MiSetInPagePriority.c)
 *     MiInitializePageColorBase @ 0x1400938D8 (MiInitializePageColorBase.c)
 *     MiGetInPageSupportBlock @ 0x140093A1C (MiGetInPageSupportBlock.c)
 *     MiObtainProtoReference @ 0x140093DC0 (MiObtainProtoReference.c)
 *     MiPfnZeroingNeeded @ 0x14009735C (MiPfnZeroingNeeded.c)
 *     MmAccessFault @ 0x1400AA630 (MmAccessFault.c)
 *     MiGetPage @ 0x1400AFCC0 (MiGetPage.c)
 *     MiPrefetchNormally @ 0x1400BADA8 (MiPrefetchNormally.c)
 *     MiInvalidPteConforms @ 0x1400BD280 (MiInvalidPteConforms.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x1400BFAD4 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiUpdatePfnPriority @ 0x1400CAF14 (MiUpdatePfnPriority.c)
 *     MiFreeInPageSupportBlock @ 0x1400CEFD0 (MiFreeInPageSupportBlock.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1400F3400 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiReturnFaultCharges @ 0x140136414 (MiReturnFaultCharges.c)
 *     MiIsPteInStore @ 0x140158E7C (MiIsPteInStore.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     MiRefillPurgedExtents @ 0x1402CCC34 (MiRefillPurgedExtents.c)
 *     MiGetSlabAllocator @ 0x1402DC0F8 (MiGetSlabAllocator.c)
 *     MiGetSlabPage @ 0x1402DC244 (MiGetSlabPage.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14033AAB4 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14033AC78 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     MiFreeReadListPages @ 0x140647C68 (MiFreeReadListPages.c)
 */

__int64 __fastcall MiPfPutPagesInTransition(__int64 a1, _QWORD *a2, int a3)
{
  unsigned int v3; // r12d
  void *v4; // rdi
  __int64 v5; // r13
  _QWORD *v6; // r14
  __int64 v7; // r8
  __int64 v8; // rcx
  int v9; // eax
  int IoPriorityThread; // eax
  __int64 v11; // r8
  unsigned int v12; // edx
  _QWORD *v13; // r15
  __int64 v14; // r10
  int v15; // esi
  ULONG_PTR v16; // r11
  int v17; // edi
  _QWORD *v18; // r14
  ULONG_PTR v19; // r10
  _QWORD *v20; // rbx
  unsigned __int64 v21; // r12
  _QWORD *v22; // rdx
  unsigned __int64 v23; // r8
  unsigned int i; // eax
  int v25; // esi
  __int64 v26; // rax
  __int64 v27; // rdx
  unsigned __int64 v28; // r12
  unsigned __int64 v29; // rbx
  unsigned __int64 v30; // rax
  __int64 v31; // rsi
  __int64 v32; // rbx
  __int64 v33; // r14
  ULONG_PTR v34; // r14
  unsigned __int64 v35; // r11
  int v36; // r15d
  int v37; // eax
  __int64 v38; // rcx
  _QWORD *v39; // r8
  _QWORD *v40; // rsi
  _BYTE *v41; // rsi
  __int64 v42; // rbx
  unsigned __int8 CurrentIrql; // r13
  struct _KPRCB *CurrentPrcb; // r15
  _DWORD *SchedulerAssist; // rcx
  signed __int32 v46; // edx
  struct _KPRCB *v47; // rcx
  ULONG_PTR v48; // rbx
  __int64 v49; // rax
  int v51; // eax
  int v52; // r9d
  _DWORD *v53; // rcx
  bool v54; // zf
  signed __int32 v55; // eax
  _QWORD *v56; // rax
  PVOID v57; // rcx
  PVOID *v58; // rdx
  __int64 v59; // rcx
  unsigned __int64 v60; // rax
  _QWORD *v61; // rbx
  unsigned __int64 DeepFreezeStartTime; // rdx
  __int64 v63; // rax
  __int64 v64; // rdx
  int v65; // eax
  __int64 SlabAllocator; // rax
  ULONG_PTR *v67; // rcx
  unsigned int v68; // r11d
  signed __int32 v69; // ecx
  __int64 Page; // rax
  __int64 v71; // r8
  int v72; // eax
  int v73; // eax
  int v74; // eax
  struct _KPRCB *v75; // rcx
  unsigned int PagingFileOffset; // eax
  __int64 v77; // r15
  int IsPteInStore; // r14d
  __int64 v79; // rbx
  bool v80; // cc
  __int64 v81; // r13
  ULONG_PTR v82; // rsi
  __int64 *v83; // r8
  __int64 v84; // rax
  unsigned __int8 v85; // dl
  int v86; // ecx
  _QWORD *v87; // rax
  __int64 v88; // rax
  __int64 v89; // rdx
  ULONG_PTR v90; // [rsp+30h] [rbp-A9h]
  __int64 v91; // [rsp+38h] [rbp-A1h]
  _QWORD *v92; // [rsp+40h] [rbp-99h]
  __int64 v93; // [rsp+48h] [rbp-91h]
  int v94; // [rsp+50h] [rbp-89h]
  int v95; // [rsp+54h] [rbp-85h]
  unsigned int v96; // [rsp+58h] [rbp-81h]
  __int64 v97; // [rsp+60h] [rbp-79h]
  int v98; // [rsp+68h] [rbp-71h] BYREF
  unsigned int v99; // [rsp+6Ch] [rbp-6Dh]
  int v100; // [rsp+70h] [rbp-69h]
  __int64 v101; // [rsp+78h] [rbp-61h] BYREF
  _QWORD *v102; // [rsp+80h] [rbp-59h]
  _BYTE *v103; // [rsp+88h] [rbp-51h]
  unsigned __int64 v104; // [rsp+90h] [rbp-49h]
  int v105; // [rsp+98h] [rbp-41h] BYREF
  unsigned int v106; // [rsp+9Ch] [rbp-3Dh]
  _QWORD *v107; // [rsp+A0h] [rbp-39h]
  __int64 v108; // [rsp+A8h] [rbp-31h]
  volatile signed __int32 *v109; // [rsp+B0h] [rbp-29h] BYREF
  __int64 v110; // [rsp+B8h] [rbp-21h]
  unsigned __int64 v111; // [rsp+C0h] [rbp-19h]
  __int64 v112; // [rsp+C8h] [rbp-11h] BYREF
  __int64 *v113; // [rsp+D0h] [rbp-9h]
  unsigned __int64 v114; // [rsp+D8h] [rbp-1h]
  PVOID P; // [rsp+E0h] [rbp+7h]
  void *retaddr; // [rsp+138h] [rbp+5Fh]
  int v119; // [rsp+150h] [rbp+77h] BYREF
  int v120; // [rsp+158h] [rbp+7Fh]

  v119 = a3;
  v3 = *(_DWORD *)(a1 + 80);
  v109 = 0LL;
  v4 = 0LL;
  v110 = 0LL;
  v5 = a1;
  v6 = 0LL;
  v99 = *(_DWORD *)(a1 + 84);
  v7 = *(_QWORD *)(a1 + 8);
  v104 = 0LL;
  v96 = v3;
  v8 = *(_WORD *)(v7 + 60) & 0x3FF;
  v107 = 0LL;
  v90 = 0LL;
  v108 = 0LL;
  v97 = *(_QWORD *)(qword_140465E88 + 8 * v8);
  v9 = *(_DWORD *)(v5 + 88) + 1;
  LOBYTE(v119) = 17;
  v106 = v9;
  IoPriorityThread = PsGetIoPriorityThread((__int64)KeGetCurrentThread());
  v12 = *(_DWORD *)(v11 + 56);
  v13 = *(_QWORD **)(v5 + 120);
  v100 = IoPriorityThread;
  v94 = v3 & 7 | 0x18;
  v113 = (__int64 *)(v5 + 120);
  v15 = IoPriorityThread;
  v91 = (__int64)v13;
  v93 = 0LL;
  MiInitializePageColorBase(v14 + 1280, (v12 >> 20) & 0x3F, &v109);
  if ( v13 == (_QWORD *)(v5 + 120) )
    goto LABEL_62;
  v17 = v3 & 7 | 0x18;
  while ( 2 )
  {
    P = v13;
    if ( v15 < 2 )
    {
      *((_DWORD *)v13 + 48) |= 0x80u;
    }
    else if ( (*(_DWORD *)(v5 + 104) & 1) != 0 )
    {
      *((_DWORD *)v13 + 48) |= 0x20u;
    }
    v18 = (_QWORD *)v13[32];
    v19 = 0LL;
    v20 = (_QWORD *)v13[30];
    v21 = v13[25] + 8LL;
    v103 = v20;
    v114 = v21;
    v22 = v18 + 6;
    v92 = v18;
    v13[30] = *v20 & 0xFFFFFFFFFFFFFFFCuLL;
    v23 = (((*((_DWORD *)v18 + 8) + *((_DWORD *)v18 + 11)) & 0xFFF)
         + (unsigned __int64)*((unsigned int *)v18 + 10)
         + 4095) >> 12;
    v111 = *v20 & 0xFFFFFFFFFFFFFFFCuLL;
    for ( i = 0; i < v23; ++v22 )
    {
      ++i;
      *v22 = qword_140466558;
    }
    v25 = 0;
    v120 = 0;
    if ( !v93 )
    {
      v26 = MiGetInPageSupportBlock(0LL, v22);
      v19 = 0LL;
      v93 = v26;
      if ( v26 )
      {
        v27 = v99;
        *(_QWORD *)(v26 + 248) = 0LL;
        MiSetInPagePriority(v26, v27, v96);
      }
      v16 = v90;
    }
    if ( (unsigned __int64)v20 >= v21 )
    {
LABEL_53:
      if ( v16 )
      {
        MiUnlockProtoPoolPage(v16, v119);
        v90 = 0LL;
      }
      goto LABEL_55;
    }
    while ( 2 )
    {
      v28 = *v20 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v16 )
      {
        if ( v108 == ((v28 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
          goto LABEL_15;
        MiUnlockProtoPoolPage(v16, v119);
      }
      v108 = ((v28 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      while ( 1 )
      {
        v90 = MiLockProtoPoolPage(v28, (unsigned __int8 *)&v119);
        if ( v90 )
          break;
        MmAccessFault(2uLL, v28);
      }
      v17 = v94;
      v19 = 0LL;
      v5 = a1;
      while ( 1 )
      {
LABEL_15:
        while ( 1 )
        {
          v29 = *(_QWORD *)v28;
          v30 = *(_QWORD *)v28;
          if ( (*(_QWORD *)v28 & 1) == 0 )
            break;
LABEL_90:
          if ( (*(_QWORD *)(48 * ((v30 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFD8LL) & 0x20000000000000LL) != 0 )
          {
            v31 = 48 * ((v30 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
            v105 = v19;
            if ( _interlockedbittestandset64((volatile signed __int32 *)(v31 + 24), 0x3FuLL) )
            {
              do
              {
                do
                  KeYieldProcessorEx(&v105);
                while ( *(__int64 *)(v31 + 24) < 0 );
              }
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v31 + 24), 0x3FuLL) );
              v19 = 0LL;
            }
            if ( *(_QWORD *)v28 == v29 )
              goto LABEL_18;
            _InterlockedAnd64((volatile signed __int64 *)(v31 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          }
        }
        if ( (*(_QWORD *)v28 & 0xC00LL) != 0x800 )
          break;
        if ( (unsigned int)MiInvalidPteConforms(*(_QWORD *)v28) )
        {
          v30 = v29;
          if ( qword_140465800 && (v29 & 0x10) == 0 )
            v30 = v29 & ~qword_140465800;
          goto LABEL_90;
        }
      }
      v31 = v19;
LABEL_18:
      v32 = *(_QWORD *)v28;
      if ( v28 >= 0xFFFFF6FB7DBED000uLL
        && v28 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v32 & 1) != 0
        && ((v32 & 0x20) == 0 || (v32 & 0x42) == 0) )
      {
        DeepFreezeStartTime = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
        if ( DeepFreezeStartTime )
        {
          v63 = *(_QWORD *)(DeepFreezeStartTime + 8 * ((v28 >> 3) & 0x1FF));
          v64 = v32 | 0x20;
          if ( (v63 & 0x20) == 0 )
            v64 = *(_QWORD *)v28;
          v32 = v64;
          if ( (v63 & 0x42) != 0 )
            v32 = v64 | 0x42;
        }
      }
      v112 = v32;
      if ( v31 )
      {
        MiUpdatePfnPriority(v31, v96, 0LL);
        _InterlockedAnd64((volatile signed __int64 *)(v31 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v16 = v90;
        v19 = 0LL;
        goto LABEL_51;
      }
      if ( (v32 & 0x400) == 0 )
      {
        if ( !(unsigned int)IS_PTE_NOT_DEMAND_ZERO(v32) || !v93 )
          goto LABEL_85;
        v36 = 2;
        v34 = v19;
        v35 = 1LL;
        goto LABEL_26;
      }
      v33 = v32;
      if ( qword_140465800 && (v32 & 0x10) == 0 )
        v33 = v32 & ~qword_140465800;
      v34 = v33 >> 16;
      if ( (*(_DWORD *)(*(_QWORD *)(v5 + 8) + 56LL) & 0x40000000) == 0 )
      {
        v35 = 1LL;
        v36 = 1;
        v37 = *(_DWORD *)(*(_QWORD *)v34 + 56LL);
        if ( (v37 & 0x20) != 0
          && (v37 & 0x40000000) == 0
          && (*(_DWORD *)(*(_QWORD *)v34 + 92LL) & 0xC0000) != 0
          && (*(_DWORD *)(v97 + 4) & 8) != 0
          && ((*(_BYTE *)(v34 + 34) & 2) == 0 || (*(_BYTE *)(v34 + 32) & 0xA) != 8) )
        {
          SlabAllocator = MiGetSlabAllocator(v97, 0LL, (*(unsigned __int16 *)(v34 + 32) >> 1) & 0x1F);
          LODWORD(v19) = 0;
          v38 = 8LL * *(int *)(SlabAllocator + 52) + 48;
LABEL_27:
          v39 = *(_QWORD **)(v38 + v5);
          v40 = (_QWORD *)(v38 + v5);
          v102 = v39;
          if ( v39 )
          {
            *v40 = *v39;
            v41 = v103;
            v101 = (__int64)(v39 + 0xB000000000LL) / 48;
            goto LABEL_29;
          }
          if ( (unsigned int)MiPrefetchNormally(v97, v106) )
          {
            v22 = a2;
            if ( !a2 )
              goto LABEL_135;
            if ( *a2 )
            {
              --*a2;
LABEL_135:
              if ( (unsigned int)MiObtainFaultCharges(v67, v68, v68) )
              {
                v69 = _InterlockedExchangeAdd(v109, 1u);
                if ( v40 == (_QWORD *)(v5 + 40) )
                {
                  v41 = v103;
                  v71 = 770LL;
                  if ( (*v103 & 1) == 0 )
                    v71 = 512LL;
                  Page = MiGetPage(v97, (unsigned int)v110 & v69 | HIDWORD(v110), v71);
                }
                else
                {
                  Page = MiGetSlabPage(v97, (*(unsigned __int16 *)(v34 + 32) >> 1) & 0x1F, 0, 0, 0);
                  v41 = v103;
                }
                v101 = Page;
                if ( Page != -1 )
                {
                  v39 = (_QWORD *)(48 * Page - 0x58000000000LL);
                  LODWORD(v19) = 0;
                  v102 = v39;
                  v35 = 1LL;
LABEL_29:
                  v95 = v19;
                  if ( (*v41 & 1) != 0 )
                  {
                    v51 = MiPfnZeroingNeeded(v39, (unsigned int)v35);
                    v39 = v102;
                    if ( v51 )
                      v52 = v35;
                    v95 = v52;
                  }
                  if ( v36 == 1 )
                  {
                    v13 = (_QWORD *)v91;
                    if ( !*(_QWORD *)(v91 + 248) )
                      *(_QWORD *)(v91 + 248) = v39;
                    ++v120;
                    MiInitializeReadInProgressPfn(-1, (unsigned int)&v101, v35, v28, v91, v17);
                    v42 = *(_QWORD *)(v5 + 8);
                    if ( (*(_DWORD *)(v42 + 56) & 0x20) != 0 || !*(_QWORD *)(v42 + 64) )
                      v34 = 0LL;
                    CurrentIrql = KeGetCurrentIrql();
                    __writecr8(2uLL);
                    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
                      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
                    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
                    {
                      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v42 + 72, CurrentIrql);
                    }
                    else
                    {
                      CurrentPrcb = KeGetCurrentPrcb();
                      v98 = 0;
                      SchedulerAssist = CurrentPrcb->SchedulerAssist;
                      if ( SchedulerAssist )
                      {
                        if ( CurrentPrcb->NestingLevel <= 1u )
                        {
                          v72 = SchedulerAssist[5];
                          SchedulerAssist[5] = v72 + 1;
                          if ( v72 == -1 )
                            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                        }
                      }
                      if ( _interlockedbittestandset((volatile signed __int32 *)(v42 + 72), 0x1Fu) )
                      {
                        v53 = CurrentPrcb->SchedulerAssist;
                        if ( v53 )
                        {
                          if ( CurrentPrcb->NestingLevel <= 1u )
                          {
                            v73 = v53[5] - 1;
                            v53[5] = v73;
                            if ( !v73 )
                              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                          }
                        }
                        v98 = ExpWaitForSpinLockExclusiveAndAcquire(v42 + 72, CurrentIrql);
                      }
                      v46 = *(_DWORD *)(v42 + 72);
                      while ( (v46 & 0xBFFFFFFF) != 0x80000000 )
                      {
                        if ( (v46 & 0x40000000) == 0 )
                        {
                          v55 = _InterlockedCompareExchange(
                                  (volatile signed __int32 *)(v42 + 72),
                                  v46 | 0x40000000,
                                  v46);
                          v54 = v46 == v55;
                          v46 = v55;
                          if ( !v54 )
                            continue;
                        }
                        KeYieldProcessorEx(&v98);
                        v46 = *(_DWORD *)(v42 + 72);
                      }
                      v13 = (_QWORD *)v91;
                    }
                    ++*(_QWORD *)(v42 + 32);
                    if ( v34 )
                      ++*(_DWORD *)(v34 + 104);
                    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
                    {
                      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v42 + 72, retaddr);
                      v19 = 0LL;
                    }
                    else
                    {
                      v19 = 0LL;
                      *(_DWORD *)(v42 + 72) = 0;
                    }
                    v47 = KeGetCurrentPrcb();
                    v22 = v47->SchedulerAssist;
                    if ( v22 )
                    {
                      if ( v47->NestingLevel <= 1u )
                      {
                        v74 = *((_DWORD *)v22 + 5) - 1;
                        *((_DWORD *)v22 + 5) = v74;
                        if ( !v74 )
                        {
                          KiRemoveSystemWorkPriorityKick(v47);
                          v19 = 0LL;
                        }
                      }
                    }
                    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
                    {
                      v75 = KeGetCurrentPrcb();
                      _InterlockedAnd((volatile signed __int32 *)v75->SchedulerAssist, 0xFFFEFFFF);
                      KiRemoveSystemWorkPriorityKick(v75);
                      v19 = 0LL;
                    }
                    __writecr8(CurrentIrql);
                    v18 = v92;
                    v48 = v101;
                    v92[((__int64)(v28 - v111) >> 3) + 6] = v101;
                    if ( v13[20] )
                    {
                      v16 = v90;
                    }
                    else
                    {
                      MiObtainProtoReference(v90, 0LL);
                      v16 = v90;
                      v19 = 0LL;
                      v13[20] = v90;
                    }
                    if ( v95 != 1 )
                    {
                      v5 = a1;
                      goto LABEL_51;
                    }
                    MiUnlockProtoPoolPage(v16, v119);
                    v90 = 0LL;
                    MiZeroPhysicalPage(v48, 1, *((unsigned __int8 *)v102 + 34) >> 6);
                    v5 = a1;
LABEL_84:
                    v19 = 0LL;
LABEL_85:
                    v16 = v90;
LABEL_51:
                    v20 = v103 + 8;
                    v103 = v20;
                    if ( (unsigned __int64)v20 >= v114 )
                    {
LABEL_52:
                      v25 = v120;
                      goto LABEL_53;
                    }
                    continue;
                  }
                  MiReturnCommit(v97, v35);
                  MiInitializeReadInProgressPfn(-1, (unsigned int)&v101, 1, v28, v93, v17);
                  PagingFileOffset = MiGetPagingFileOffset((unsigned __int64)&v112);
                  v77 = PagingFileOffset;
                  LODWORD(v104) = PagingFileOffset;
                  IsPteInStore = MiIsPteInStore(v97, v32);
                  v79 = (unsigned __int16)v32 >> 12;
                  v80 = v100 < 2;
                  v81 = *(_QWORD *)(v97 + 8 * v79 + 7904);
                  *(_QWORD *)(v93 + 256) = v93 + 272;
                  if ( v80 )
                    *(_DWORD *)(v93 + 192) |= 0x80u;
                  v82 = v101;
                  *(_QWORD *)(v93 + 272) = 0LL;
                  *(_QWORD *)(v93 + 304) = 0LL;
                  *(_DWORD *)(v93 + 280) = 56;
                  *(_QWORD *)(v93 + 312) = 4096LL;
                  *(_WORD *)(v93 + 282) |= 0x4042u;
                  *(_QWORD *)(v93 + 320) = v82;
                  MiObtainProtoReference(v90, 0LL);
                  v83 = v113;
                  *(_QWORD *)(v93 + 160) = v90;
                  v84 = *v83;
                  if ( *(__int64 **)(*v83 + 8) == v83 )
                  {
                    *(_QWORD *)v93 = v84;
                    *(_QWORD *)(v93 + 8) = v83;
                    *(_QWORD *)(v84 + 8) = v93;
                    *v83 = v93;
                    v85 = v119;
                    ++*(_DWORD *)(a1 + 108);
                    MiUnlockProtoPoolPage(v90, v85);
                    v90 = 0LL;
                    if ( v95 == 1 )
                      MiZeroPhysicalPage(v82, 1, *((unsigned __int8 *)v102 + 34) >> 6);
                    *(_QWORD *)(v93 + 224) = 0LL;
                    if ( IsPteInStore )
                    {
                      *(_DWORD *)(v93 + 192) |= 0x100u;
                      *(_QWORD *)(v93 + 96) = v77 | (v79 << 60);
                    }
                    else
                    {
                      v104 = (unsigned __int64)(unsigned int)v104 << 12;
                      *(_QWORD *)(v93 + 96) = v104;
                    }
                    v86 = *(_DWORD *)(v93 + 192) | 0x200000;
                    *(_QWORD *)(v93 + 200) = *(_QWORD *)(v81 + 56);
                    v87 = v102;
                    *(_DWORD *)(v93 + 192) = v86;
                    *(_QWORD *)(v93 + 240) = v28;
                    *(_QWORD *)(v93 + 248) = v87;
                    v88 = MiGetInPageSupportBlock(0LL, v93);
                    v19 = 0LL;
                    v93 = v88;
                    if ( !v88 )
                    {
                      v13 = (_QWORD *)v91;
                      v5 = a1;
                      v18 = v92;
                      goto LABEL_85;
                    }
                    v89 = v99;
                    *(_QWORD *)(v88 + 248) = 0LL;
                    MiSetInPagePriority(v88, v89, v96);
                    v13 = (_QWORD *)v91;
                    v16 = (unsigned int)v19;
                    v5 = a1;
                    v18 = v92;
                    goto LABEL_51;
                  }
LABEL_174:
                  __fastfail(3u);
                }
                MiReturnFaultCharges(v97, 1LL, 1LL);
              }
            }
          }
          v18 = v92;
          v16 = v90;
          v13 = (_QWORD *)v91;
          goto LABEL_52;
        }
LABEL_26:
        v38 = 40LL;
        goto LABEL_27;
      }
      break;
    }
    MiUnlockProtoPoolPage(v90, v119);
    v90 = 0LL;
    v65 = MiRefillPurgedExtents(v34);
    v18 = v92;
    if ( v65 >= 0 )
      goto LABEL_84;
    v25 = v120;
LABEL_55:
    if ( v25 )
    {
      v49 = MiReduceMdl(v18, v22);
      if ( v49 )
      {
        v13[12] += v49 << 12;
        v59 = 48LL * v18[6] - 0x58000000000LL;
        v60 = *(_QWORD *)(v59 + 8) | 0x8000000000000000uLL;
        v13[31] = v59;
        v13[30] = v60;
      }
      if ( v18 != v13 + 34 && *((_DWORD *)v18 + 10) <= 0x10000u )
      {
        memmove(v13 + 34, v18, *((__int16 *)v18 + 4));
        *v18 = v107;
        v13[32] = v13 + 34;
        v107 = v18;
      }
      v13 = (_QWORD *)*v13;
      v91 = (__int64)v13;
    }
    else
    {
      v56 = (_QWORD *)*v13;
      v57 = P;
      v13 = v56;
      v91 = (__int64)v56;
      v58 = (PVOID *)*((_QWORD *)P + 1);
      if ( (PVOID)v56[1] != P || *v58 != P )
        goto LABEL_174;
      *v58 = v56;
      v56[1] = v58;
      --*(_DWORD *)(v5 + 108);
      MiFreeInPageSupportBlock(v57);
    }
    if ( v13 != (_QWORD *)(v5 + 120) )
    {
      v16 = v90;
      v15 = v100;
      continue;
    }
    break;
  }
  v4 = (void *)v93;
  v6 = v107;
LABEL_62:
  MiFreeReadListPages(v5);
  if ( v6 )
  {
    do
    {
      v61 = (_QWORD *)*v6;
      ExFreePoolWithTag(v6, 0);
      v6 = v61;
    }
    while ( v61 );
  }
  if ( v4 )
    MiFreeInPageSupportBlock(v4);
  return 0LL;
}
