/*
 * XREFs of MmPurgeSection @ 0x1400E7D80
 * Callers:
 *     CcPurgeCacheSection @ 0x1400E7B20 (CcPurgeCacheSection.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1400230C0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiReleasePageFileInfo @ 0x14002A628 (MiReleasePageFileInfo.c)
 *     MiUnlockProtoPoolPage @ 0x14002F1F0 (MiUnlockProtoPoolPage.c)
 *     MiCheckProtoPtePageState @ 0x140030780 (MiCheckProtoPtePageState.c)
 *     MiControlAreaUsingExtents @ 0x1400321B0 (MiControlAreaUsingExtents.c)
 *     MiPfnShareCountIsZero @ 0x1400382F0 (MiPfnShareCountIsZero.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400387F0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUnlinkPageFromList @ 0x14003B930 (MiUnlinkPageFromList.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiCheckControlArea @ 0x140076490 (MiCheckControlArea.c)
 *     MiComputeDataFlushRange @ 0x140076E20 (MiComputeDataFlushRange.c)
 *     MiIncrementSubsectionViewCount @ 0x140077A40 (MiIncrementSubsectionViewCount.c)
 *     MiDecrementSubsections @ 0x140079400 (MiDecrementSubsections.c)
 *     MiDecrementSubsectionViewCount @ 0x1400794B0 (MiDecrementSubsectionViewCount.c)
 *     MiInsertUnusedSubsection @ 0x14007B7CC (MiInsertUnusedSubsection.c)
 *     MiRemoveUnusedSubsection @ 0x14007BBB8 (MiRemoveUnusedSubsection.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiCanFileBeTruncatedInternal @ 0x1400E8690 (MiCanFileBeTruncatedInternal.c)
 *     MiWaitForPageWriteCompletion @ 0x1400F9B74 (MiWaitForPageWriteCompletion.c)
 *     MiInvalidateCollidedIos @ 0x140117DB8 (MiInvalidateCollidedIos.c)
 *     MiCapturePageFileInfoInline @ 0x140119E40 (MiCapturePageFileInfoInline.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     MiChangingSubsectionProtos @ 0x1402B5620 (MiChangingSubsectionProtos.c)
 *     MiSubsectionProtosCreated @ 0x1402B723C (MiSubsectionProtosCreated.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1402C4EA4 (MiReturnCrossPartitionSectionCharges.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14031C2A4 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14031C468 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

char __fastcall MmPurgeSection(SECTION_OBJECT_POINTERS *a1, __int64 *a2, __int64 a3, int a4, _BYTE *a5)
{
  char v5; // r14
  __int64 *v7; // rbx
  __int64 v8; // r13
  __int64 CanFileBeTruncatedInternal; // rax
  unsigned __int8 v10; // di
  __int64 v11; // r15
  unsigned __int64 v13; // r12
  KIRQL v14; // bl
  ULONG_PTR v15; // r9
  char v16; // si
  ULONG_PTR v17; // rdi
  KIRQL v18; // al
  ULONG_PTR v19; // r9
  BOOL v20; // r14d
  __int64 v21; // r8
  ULONG_PTR v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // rax
  unsigned int v26; // r14d
  unsigned __int64 v27; // rbx
  unsigned __int64 v28; // rax
  __int64 v29; // rdi
  ULONG_PTR v30; // rsi
  ULONG_PTR BugCheckParameter4; // rcx
  __int64 v32; // rbx
  __int64 *v33; // r13
  __int64 v34; // rcx
  __int64 v35; // r13
  __int64 v36; // rax
  __int64 v37; // r13
  __int64 v38; // rdi
  __int64 v39; // rdx
  unsigned __int64 v40; // rdi
  __int64 v41; // r15
  __int64 v42; // rax
  __int64 v43; // rbx
  __int64 v44; // r9
  __int64 v45; // r11
  __int64 v46; // r14
  __int64 v47; // rax
  __int64 v48; // r15
  BOOL v49; // r10d
  struct _KPRCB *v50; // r13
  _DWORD *SchedulerAssist; // rcx
  bool v52; // zf
  struct _KPRCB *v53; // rcx
  _DWORD *v54; // r8
  __int64 v55; // rax
  __int64 v56; // rbx
  __int64 v57; // rbx
  __int64 v58; // r14
  struct _KEVENT *v59; // r13
  int v60; // r11d
  __int64 v61; // rsi
  ULONG_PTR v62; // rbx
  char v63; // dl
  __int64 v64; // rcx
  __int64 v65; // rax
  _DWORD *v66; // rcx
  int v67; // eax
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v69; // rcx
  unsigned __int64 v70; // r8
  __int64 v71; // rax
  __int64 v72; // r8
  int v73; // eax
  int v74; // eax
  unsigned __int32 v75; // eax
  __int64 inserted; // rax
  int v77; // eax
  char v79; // [rsp+30h] [rbp-108h]
  BOOL v80; // [rsp+34h] [rbp-104h]
  ULONG_PTR v81; // [rsp+38h] [rbp-100h]
  __int64 v82; // [rsp+40h] [rbp-F8h]
  __int64 v83; // [rsp+48h] [rbp-F0h]
  __int64 v84; // [rsp+50h] [rbp-E8h]
  int v85; // [rsp+58h] [rbp-E0h] BYREF
  BOOL v86; // [rsp+5Ch] [rbp-DCh]
  unsigned __int64 v87; // [rsp+60h] [rbp-D8h]
  int v88; // [rsp+68h] [rbp-D0h] BYREF
  int v89; // [rsp+6Ch] [rbp-CCh] BYREF
  unsigned __int64 v90; // [rsp+70h] [rbp-C8h]
  __int64 v91; // [rsp+78h] [rbp-C0h]
  __int64 v92; // [rsp+88h] [rbp-B0h] BYREF
  ULONG_PTR v93; // [rsp+90h] [rbp-A8h]
  __int64 v94; // [rsp+98h] [rbp-A0h]
  __int64 v95; // [rsp+A0h] [rbp-98h]
  char v96[8]; // [rsp+A8h] [rbp-90h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+B0h] [rbp-88h]
  __int64 v98; // [rsp+B8h] [rbp-80h]
  ULONG_PTR v99; // [rsp+C0h] [rbp-78h]
  ULONG_PTR v100; // [rsp+C8h] [rbp-70h]
  char v101[96]; // [rsp+D8h] [rbp-60h] BYREF
  void *retaddr; // [rsp+138h] [rbp+0h]
  __int64 v103; // [rsp+140h] [rbp+8h] BYREF
  unsigned __int8 v104; // [rsp+148h] [rbp+10h] BYREF
  int v105; // [rsp+158h] [rbp+20h]

  v105 = a4;
  v5 = a4;
  v7 = a2;
  *a5 = 0;
  if ( a2 )
  {
    v7 = &v92;
    v92 = *a2;
  }
  v91 = 0LL;
  v8 = 0LL;
  CanFileBeTruncatedInternal = MiCanFileBeTruncatedInternal(a1, (__int64)&v103);
  v10 = v103;
  v11 = CanFileBeTruncatedInternal;
  v95 = CanFileBeTruncatedInternal;
  if ( (_BYTE)v103 == 17 )
    return 0;
  if ( !CanFileBeTruncatedInternal )
    return 1;
  if ( (v5 & 1) == 0 && *(_DWORD *)(CanFileBeTruncatedInternal + 88) || !*(_QWORD *)(CanFileBeTruncatedInternal + 64) )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(CanFileBeTruncatedInternal + 72));
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v10 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      v10 = v103;
    }
    __writecr8(v10);
    return 0;
  }
  *(_DWORD *)(CanFileBeTruncatedInternal + 56) |= 0x8000u;
  if ( !(unsigned int)MiComputeDataFlushRange(CanFileBeTruncatedInternal, v10, v7, a3, 1, (__int64)v96) )
    return 1;
  v13 = BugCheckParameter2;
  v14 = 17;
  v15 = v99;
  v16 = 1;
  v17 = v100;
  LOBYTE(v103) = 17;
  v79 = 1;
LABEL_11:
  v81 = v15;
  v87 = v13;
  if ( v14 == 17 )
  {
    v18 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v11 + 72));
    v15 = v81;
    v14 = v18;
    LOBYTE(v103) = v18;
  }
  if ( v17 == v15 )
    v90 = v98 + 8;
  else
    v90 = *(_QWORD *)(v15 + 8) + 8LL * (*(_DWORD *)(v15 + 44) - (*(_DWORD *)(v15 + 52) & 0x3FFFFFFFu));
  v86 = MiControlAreaUsingExtents(v11);
  v20 = v86;
  if ( v21 )
  {
    if ( *(_DWORD *)(v19 + 108) )
    {
      v16 = 0;
      goto LABEL_50;
    }
    MiIncrementSubsectionViewCount((_QWORD *)v19, 0LL);
    v22 = v81;
    if ( (*(_BYTE *)(v81 + 34) & 8) != 0 )
    {
      MiRemoveUnusedSubsection(v81);
      v22 = v81;
    }
    *(_WORD *)(v22 + 32) |= 1u;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v11 + 72));
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v14 < 2u )
    {
      v69 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v69->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v69);
      v14 = v103;
      v17 = v100;
    }
    __writecr8(v14);
    v24 = 0LL;
    v104 = 17;
    v25 = 0LL;
    v84 = 0LL;
    if ( v20 )
    {
      MiChangingSubsectionProtos(v81);
      v24 = 0LL;
      v25 = 0LL;
    }
    v26 = 0;
    if ( v13 >= v90 )
      goto LABEL_46;
    while ( 1 )
    {
      if ( (v13 & 0xFFF) != 0 )
      {
        if ( v104 != 17 )
          goto LABEL_25;
      }
      else if ( v104 != 17 )
      {
        MiUnlockProtoPoolPage(v25, v104);
      }
      v25 = MiCheckProtoPtePageState(v13, &v104);
      v84 = v25;
      if ( v25 )
        break;
      v13 = (v13 & 0xFFFFFFFFFFFFF000uLL) + 4096;
LABEL_101:
      v87 = v13;
LABEL_102:
      if ( v13 >= v90 )
        goto LABEL_113;
      v24 = 0LL;
    }
    v24 = 0LL;
    while ( 1 )
    {
LABEL_25:
      while ( 1 )
      {
        v27 = *(_QWORD *)v13;
        v28 = *(_QWORD *)v13;
        if ( (*(_QWORD *)v13 & 1) == 0 )
          break;
LABEL_33:
        v29 = 48 * ((v28 >> 12) & 0xFFFFFFFFFLL);
        if ( (*(_QWORD *)(v29 - 0x57FFFFFFFD8LL) & 0x20000000000000LL) != 0 )
        {
          v30 = v29 - 0x58000000000LL;
          v88 = 0;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v29 - 0x58000000000LL + 24), 0x3FuLL) )
          {
            do
            {
              do
                KeYieldProcessorEx(&v88, v23, v24);
              while ( *(__int64 *)(v30 + 24) < 0 );
            }
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v30 + 24), 0x3FuLL) );
            v24 = 0LL;
          }
          if ( *(_QWORD *)v13 == v27 )
          {
            if ( v29 == 0x58000000000LL )
              goto LABEL_100;
            BugCheckParameter4 = *(_QWORD *)v13;
            if ( v13 < 0xFFFFF6FB7DBED000uLL
              || v13 > 0xFFFFF6FB7DBED7F8uLL
              || (MiFlags & 0xC00000) == 0
              || KeGetCurrentThread()->ApcState.Process->AddressPolicy == 1 )
            {
              goto LABEL_38;
            }
            if ( (BugCheckParameter4 & 1) != 0 )
            {
              if ( (BugCheckParameter4 & 0x20) == 0 || (BugCheckParameter4 & 0x42) == 0 )
              {
                v70 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
                if ( v70 )
                {
                  v71 = *(_QWORD *)(v70 + 8 * ((v13 >> 3) & 0x1FF));
                  v72 = BugCheckParameter4 | 0x20;
                  if ( (v71 & 0x20) == 0 )
                    v72 = *(_QWORD *)v13;
                  BugCheckParameter4 = v72;
                  if ( (v71 & 0x42) != 0 )
                    BugCheckParameter4 = v72 | 0x42;
                }
                v24 = 0LL;
              }
LABEL_38:
              if ( (BugCheckParameter4 & 1) != 0 )
                goto LABEL_42;
            }
            v32 = *(_QWORD *)(v30 + 16);
            v33 = (__int64 *)(v30 + 16);
            if ( (v32 & 0x401) != 0x400 || (*(_QWORD *)(v30 + 8) | 0x8000000000000000uLL) != v13 )
              KeBugCheckEx(0xDEu, 2uLL, v13, *(_QWORD *)(v30 + 8), BugCheckParameter4);
            v34 = *(unsigned __int8 *)(v30 + 34);
            if ( (((v105 & 2) != 0) & ((unsigned __int8)v34 >> 4)) != 0 )
            {
LABEL_42:
              _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              v16 = 0;
              v79 = 0;
              goto LABEL_43;
            }
            if ( (v34 & 8) != 0 )
            {
              MiWaitForPageWriteCompletion(v29 - 0x58000000000LL, v11, v84, v104);
              v25 = v84;
              v104 = 17;
              goto LABEL_102;
            }
            if ( v86 && *(_WORD *)(v30 + 32) )
              *a5 = 1;
            v39 = (unsigned __int128)(v29 * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
            v40 = 0LL;
            v41 = ((unsigned __int64)v39 >> 63) + (v39 >> 3);
            v42 = *(_QWORD *)(v30 + 40) & 0xFFFFFFFFFLL;
            v93 = v41;
            v94 = v42;
            if ( (v32 & 0x400) != 0 )
            {
              if ( qword_14043B180 && (v32 & 0x10) == 0 )
                v32 &= ~qword_14043B180;
              v43 = v32 >> 16;
              v44 = 0LL;
              v83 = 0LL;
              v45 = 0LL;
              v82 = 0LL;
              v46 = *(_QWORD *)v43;
              v47 = *(_QWORD *)(*(_QWORD *)v43 + 64LL);
              if ( (*(_DWORD *)(*(_QWORD *)v43 + 56LL) & 0x20) != 0 || !v47 )
                v48 = 0LL;
              else
                v48 = v43;
              v49 = v47 != 0;
              v80 = v49;
              if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
              {
                LOBYTE(v39) = -1;
                ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v46 + 72, v39);
                v49 = v80;
                v44 = 0LL;
                v45 = 0LL;
              }
              else
              {
                v50 = KeGetCurrentPrcb();
                v85 = 0;
                SchedulerAssist = v50->SchedulerAssist;
                if ( SchedulerAssist )
                {
                  if ( v50->NestingLevel <= 1u )
                  {
                    v73 = SchedulerAssist[5];
                    SchedulerAssist[5] = v73 + 1;
                    if ( v73 == -1 )
                    {
                      KiRemoveSystemWorkPriorityKick(v50);
                      v49 = v80;
                      v44 = 0LL;
                      v45 = 0LL;
                      v24 = 0LL;
                    }
                  }
                }
                if ( _interlockedbittestandset((volatile signed __int32 *)(v46 + 72), 0x1Fu) )
                {
                  v66 = v50->SchedulerAssist;
                  if ( v66 )
                  {
                    if ( v50->NestingLevel <= 1u )
                    {
                      v74 = v66[5] - 1;
                      v66[5] = v74;
                      if ( !v74 )
                        KiRemoveSystemWorkPriorityKick(v50);
                    }
                  }
                  v67 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)(v46 + 72), 0xFFu);
                  v49 = v80;
                  v44 = 0LL;
                  v85 = v67;
                  v45 = 0LL;
                  v24 = 0LL;
                }
                v39 = *(unsigned int *)(v46 + 72);
                if ( (*(_DWORD *)(v46 + 72) & 0xBFFFFFFF) != 0x80000000 )
                {
                  do
                  {
                    if ( (v39 & 0x40000000) == 0 )
                    {
                      v75 = _InterlockedCompareExchange((volatile signed __int32 *)(v46 + 72), v39 | 0x40000000, v39);
                      v52 = (_DWORD)v39 == v75;
                      v39 = v75;
                      if ( !v52 )
                        continue;
                    }
                    KeYieldProcessorEx(&v85, v39, v24);
                    v39 = *(unsigned int *)(v46 + 72);
                  }
                  while ( (v39 & 0xBFFFFFFF) != 0x80000000 );
                  v49 = v80;
                  v44 = 0LL;
                  v45 = 0LL;
                }
                v33 = (__int64 *)(v30 + 16);
              }
              if ( v48 )
              {
                v52 = (*(_DWORD *)(v48 + 104))-- == 1;
                if ( v52 && !*(_QWORD *)(v48 + 96) && (*(_BYTE *)(v43 + 34) & 1) == 0 && (*(_BYTE *)(v48 + 34) & 8) != 0 )
                {
                  MiRemoveUnusedSubsection(v48);
                  inserted = MiInsertUnusedSubsection(v48);
                  v49 = v80;
                  v44 = inserted;
                  v83 = inserted;
                  v45 = 0LL;
                }
              }
              --*(_QWORD *)(v46 + 32);
              if ( v44 )
              {
                v39 = qword_14043B808;
                v45 = *(_QWORD *)(qword_14043B808 + 8LL * (*(_WORD *)(v46 + 60) & 0x3FF));
                v82 = v45;
              }
              if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
              {
                ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v46 + 72, retaddr);
                v44 = v83;
                v49 = v80;
                v45 = v82;
              }
              else
              {
                *(_DWORD *)(v46 + 72) = 0;
              }
              v53 = KeGetCurrentPrcb();
              v54 = v53->SchedulerAssist;
              if ( v54 )
              {
                if ( v53->NestingLevel <= 1u )
                {
                  v77 = v54[5] - 1;
                  v54[5] = v77;
                  if ( !v77 )
                  {
                    KiRemoveSystemWorkPriorityKick(v53);
                    v44 = v83;
                    v49 = v80;
                    v45 = v82;
                  }
                }
              }
              if ( v44 )
                MiReturnCrossPartitionSectionCharges(v45, v49, v44);
              v55 = *v33;
              v56 = -2049LL;
              v34 = -9LL;
              if ( (*v33 & 0x400) == 0 )
                v56 = -9LL;
              v57 = v55 & v56;
              if ( (v55 & 0x400) == 0 )
                v57 &= 0xFFFFFFFFFFFFFFF9uLL;
              v41 = v93;
              v24 = 0LL;
              v13 = v87;
            }
            else
            {
              v57 = 0LL;
            }
            v58 = 0LL;
            if ( *(_WORD *)(v30 + 32) )
            {
              *(_QWORD *)(v30 + 24) |= 0x4000000000000000uLL;
              if ( (*(_BYTE *)(v30 + 34) & 0x28) == 0x20 )
              {
                v58 = *(_QWORD *)v30 - 32LL;
                if ( *(_QWORD *)(v58 + 16) == v58 + 16 )
                  v58 = 0LL;
              }
              v60 = 3;
              v59 = 0LL;
            }
            else
            {
              MiUnlinkPageFromList(v30, 0);
              if ( (*(_DWORD *)v33 & 0x400LL) != 0 )
              {
                v59 = 0LL;
              }
              else
              {
                v40 = MiCapturePageFileInfoInline(v33, 0LL);
                v34 = (*(_QWORD *)(v30 + 40) >> 40) & 0x3FFLL;
                v59 = *(struct _KEVENT **)(qword_14043B808 + 8 * v34);
              }
              v60 = 4;
              v24 = 0LL;
            }
            if ( v13 < 0xFFFFF6FB7DBED000uLL || v13 > 0xFFFFF6FB7DBED7F8uLL )
              goto LABEL_88;
            if ( !(unsigned int)MiPteHasShadow(v34, v39) )
            {
              if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
                && (v57 & 1) != 0 )
              {
                v57 |= 0x8000000000000000uLL;
              }
LABEL_88:
              *(_QWORD *)v13 = v57;
              goto LABEL_89;
            }
            if ( !HIBYTE(word_14043B26C) && (v57 & 1) != 0 )
              v57 |= 0x8000000000000000uLL;
            *(_QWORD *)v13 = v57;
            MiWritePteShadow(v13);
            v24 = 0LL;
LABEL_89:
            if ( v60 == 4 )
            {
              MiInsertPageInFreeOrZeroedList(v41, 2);
              v24 = 0LL;
            }
            _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            v61 = 48 * v94;
            v62 = 48 * v94 - 0x58000000000LL;
            v89 = v24;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v62 + 24), 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(&v89, v39, v24);
              while ( *(__int64 *)(v62 + 24) < 0 );
            }
            v63 = *(_BYTE *)(v62 + 34);
            v64 = *(_QWORD *)(v62 + 24);
            if ( (v63 & 7) != 6 )
              KeBugCheckEx(0x4Eu, 0x99uLL, v61 / 48, v63 & 7, v64 & 0x3FFFFFFFFFFFFFFFLL);
            v23 = (v64 & 0x3FFFFFFFFFFFFFFFLL) - 1;
            *(_QWORD *)(v62 + 24) = v64 ^ (v23 ^ v64) & 0x3FFFFFFFFFFFFFFFLL;
            if ( (v64 & 0x3FFFFFFFFFFFFFFFLL) == 1 )
              MiPfnShareCountIsZero(v62, v23);
            _InterlockedAnd64((volatile signed __int64 *)(v62 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( v58 )
              MiInvalidateCollidedIos(v58);
            if ( v40 )
              MiReleasePageFileInfo(v59, v40, 1);
            v11 = v95;
            v26 = 1;
            if ( *(_QWORD *)(v95 + 32) )
            {
LABEL_100:
              v25 = v84;
              v13 += 8LL;
              goto LABEL_101;
            }
LABEL_113:
            v16 = v79;
LABEL_43:
            if ( v104 != 17 )
              MiUnlockProtoPoolPage(v84, v104);
            v8 = v91;
            v17 = v100;
LABEL_46:
            if ( v86 )
              MiSubsectionProtosCreated(v81, v101, 0LL, v26);
            v14 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v11 + 72));
            LOBYTE(v103) = v14;
            MiDecrementSubsectionViewCount((__int64 *)v81, 0);
            v19 = v81;
            if ( !*(_QWORD *)(v81 + 96) && (*(_BYTE *)(v81 + 34) & 1) == 0 )
            {
              v65 = MiInsertUnusedSubsection(v81);
              v19 = v81;
              v8 += v65;
              v91 = v8;
            }
LABEL_49:
            if ( v19 == v17 || !v16 )
              goto LABEL_50;
            v15 = *(_QWORD *)(v19 + 16);
            v13 = *(_QWORD *)(v15 + 8);
            goto LABEL_11;
          }
          _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
      }
      if ( (*(_QWORD *)v13 & 0xC00LL) != 0x800 )
        goto LABEL_100;
      if ( !v27 || !qword_14043B180 || (v27 & qword_14043B180) != 0 )
      {
        v28 = *(_QWORD *)v13;
        if ( qword_14043B180 && (v27 & 0x10) == 0 )
          v28 = v27 & ~qword_14043B180;
        goto LABEL_33;
      }
    }
  }
  if ( v19 != v17 )
    goto LABEL_49;
LABEL_50:
  v35 = MiDecrementSubsections(v99, v99, 0) + v8;
  v36 = MiDecrementSubsections(v17, v17, 0);
  --*(_QWORD *)(v11 + 40);
  *(_DWORD *)(v11 + 56) &= ~4u;
  v37 = v36 + v35;
  if ( v37 )
    v38 = *(_QWORD *)(qword_14043B808 + 8LL * (*(_WORD *)(v11 + 60) & 0x3FF));
  else
    v38 = 0LL;
  MiCheckControlArea(v11, v14);
  if ( v37 )
    MiReturnCrossPartitionSectionCharges(v38, 1LL, v37);
  return v16;
}
