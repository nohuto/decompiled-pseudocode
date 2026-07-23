/*
 * XREFs of RtlpHpLfhSlotAllocate @ 0x1400BADE0
 * Callers:
 *     ExAllocateHeapPool @ 0x1400BA0B0 (ExAllocateHeapPool.c)
 *     RtlpHpLfhBucketAllocate @ 0x1402FD3E4 (RtlpHpLfhBucketAllocate.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x140004530 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x140005A50 (KiCheckForKernelApcDelivery.c)
 *     RtlpHpLfhSubsegmentCreate @ 0x140009064 (RtlpHpLfhSubsegmentCreate.c)
 *     RtlpHpAcquireLockShared @ 0x140009644 (RtlpHpAcquireLockShared.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1400230C0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14004EFD0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExGenRandom @ 0x1400627E0 (ExGenRandom.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14009D050 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     RtlpHpAcquireLockExclusive @ 0x1400BC3E0 (RtlpHpAcquireLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x1400BED70 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x14010E1B0 (RtlpHpLfhBucketAddSubsegment.c)
 *     RtlpHpLfhBucketGetSubsegment @ 0x14010E4C0 (RtlpHpLfhBucketGetSubsegment.c)
 *     RtlpHpLfhOwnerMoveSubsegment @ 0x14010E7A0 (RtlpHpLfhOwnerMoveSubsegment.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x14012C530 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     RtlpHpLfhSubsegmentCommitBlock @ 0x1402FD508 (RtlpHpLfhSubsegmentCommitBlock.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14031C2A4 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14031C468 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall RtlpHpLfhSlotAllocate(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int a5)
{
  unsigned int v5; // eax
  __int64 v7; // r10
  int v8; // r14d
  int v9; // r13d
  __int64 v10; // r8
  signed __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // r9
  unsigned __int16 v14; // dx
  unsigned __int16 v15; // ax
  unsigned __int16 v16; // r11
  unsigned __int16 v17; // cx
  unsigned int v18; // r8d
  __int64 *v19; // r10
  _QWORD *v20; // r8
  __int64 **v21; // rcx
  __int64 v22; // rdx
  _QWORD *v23; // rax
  __int64 ***v24; // rax
  struct _KTHREAD *v25; // r14
  __int64 v26; // rdx
  BOOL v27; // r13d
  unsigned int v28; // r8d
  bool v29; // zf
  __int64 v30; // rcx
  __int64 v31; // rsi
  unsigned __int8 v32; // al
  __int64 v33; // rcx
  struct _KTHREAD *v34; // rcx
  volatile signed __int64 *v35; // r11
  __int64 v36; // rax
  unsigned __int64 v37; // r14
  struct _KTHREAD *v38; // r15
  unsigned int v39; // esi
  unsigned int v40; // r13d
  bool v41; // cf
  __int64 v42; // rax
  unsigned __int16 v43; // bx
  __int16 v44; // ax
  unsigned __int64 v45; // r15
  unsigned int v46; // r8d
  volatile signed __int64 *v47; // rbx
  volatile signed __int64 *v48; // rcx
  unsigned int v49; // eax
  signed __int64 v50; // r10
  signed __int64 v51; // r9
  unsigned __int64 v52; // rdx
  __int64 v53; // rax
  unsigned __int64 v54; // rcx
  int v55; // ecx
  signed __int64 v56; // rax
  int v57; // eax
  __int64 v58; // r12
  unsigned int v59; // ebx
  __int64 v60; // rsi
  __int64 v61; // rsi
  signed __int64 v62; // rax
  unsigned __int64 v63; // rdi
  unsigned __int64 v64; // rbx
  unsigned int v65; // esi
  unsigned int v66; // r11d
  __int64 v67; // rax
  struct _KTHREAD *v68; // rax
  unsigned __int16 Ucb_high; // ax
  unsigned __int16 v70; // r13
  __int16 v71; // ax
  unsigned int v72; // r8d
  volatile signed __int64 *v73; // r14
  unsigned __int64 v74; // rcx
  unsigned int v75; // eax
  signed __int64 v76; // r10
  signed __int64 v77; // r9
  unsigned __int64 v78; // rdx
  __int64 v79; // rax
  unsigned __int64 v80; // rcx
  int v81; // ecx
  signed __int64 v82; // rax
  int v83; // eax
  unsigned int v84; // r14d
  __int64 v85; // rsi
  unsigned __int16 *v86; // r14
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int8 CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *SchedulerAssist; // rcx
  __int64 v92; // rdx
  struct _KPRCB *v93; // rcx
  _DWORD *v94; // rdx
  struct _KTHREAD *v95; // rdi
  ULONG_PTR v96; // r9
  __int64 v97; // rdx
  __int64 v98; // rcx
  int v99; // eax
  __int64 v100; // rcx
  _KLOCK_ENTRY *v101; // r14
  unsigned __int8 v102; // al
  __int64 v103; // rcx
  volatile LONG *v104; // rcx
  struct _KTHREAD *v105; // rax
  KIRQL v106; // al
  unsigned __int64 v107; // rax
  volatile signed __int64 *v108; // rax
  unsigned __int8 v109; // r14
  __int16 v110; // ax
  __int16 v111; // ax
  volatile signed __int64 *v112; // rax
  struct _KTHREAD *v113; // rsi
  ULONG_PTR SessionId; // r9
  __int64 v115; // rdx
  __int64 v116; // rcx
  int v117; // eax
  __int64 v118; // rcx
  _KLOCK_ENTRY *v119; // r14
  unsigned __int8 v120; // al
  __int64 v121; // rcx
  _DWORD *v122; // rcx
  unsigned __int8 v123; // r14
  int v124; // eax
  int v125; // eax
  unsigned __int32 v126; // eax
  KIRQL v127; // al
  __int64 v128; // rax
  int v129; // eax
  struct _KPRCB *v130; // rcx
  struct _KPRCB *v131; // rcx
  struct _KPRCB *v132; // rcx
  struct _KPRCB *v133; // rcx
  unsigned int v134; // r11d
  unsigned __int64 v135; // rcx
  __int16 v136; // r13
  unsigned __int64 v137; // r15
  struct _KTHREAD *v138; // rbx
  unsigned int v139; // r10d
  unsigned __int8 v140; // r14
  __int64 v141; // rdx
  __int64 v142; // rcx
  int v143; // eax
  __int64 v144; // rcx
  _KLOCK_ENTRY *v145; // rdi
  __int64 v146; // rdx
  __int64 v147; // rcx
  unsigned __int8 v148; // bl
  struct _KPRCB *v149; // rcx
  unsigned int v150; // r13d
  __int16 v151; // r13
  unsigned __int8 v152; // [rsp+30h] [rbp-51h]
  unsigned int v153; // [rsp+38h] [rbp-49h]
  unsigned int v154; // [rsp+38h] [rbp-49h]
  unsigned __int16 *Subsegment; // [rsp+40h] [rbp-41h]
  int v156; // [rsp+48h] [rbp-39h]
  int v157; // [rsp+4Ch] [rbp-35h]
  int v158; // [rsp+50h] [rbp-31h] BYREF
  int v159; // [rsp+54h] [rbp-2Dh] BYREF
  int v160; // [rsp+58h] [rbp-29h] BYREF
  int v161; // [rsp+5Ch] [rbp-25h] BYREF
  int v162; // [rsp+60h] [rbp-21h]
  unsigned int v163; // [rsp+64h] [rbp-1Dh]
  unsigned __int64 v164; // [rsp+68h] [rbp-19h]
  int v165; // [rsp+70h] [rbp-11h] BYREF
  __int16 v166; // [rsp+74h] [rbp-Dh]
  int v167; // [rsp+78h] [rbp-9h]
  int v168; // [rsp+7Ch] [rbp-5h]
  int v169; // [rsp+80h] [rbp-1h]
  int v170; // [rsp+84h] [rbp+3h]
  unsigned __int64 v171; // [rsp+88h] [rbp+7h]
  char *v172; // [rsp+90h] [rbp+Fh]
  int v173; // [rsp+98h] [rbp+17h]
  void *retaddr; // [rsp+D8h] [rbp+57h]

  v5 = ((unsigned int)RtlpHpLfhPerfFlags >> 2) & 1;
  v152 = -1;
  v153 = v5;
  v7 = a1;
  v156 = 0;
  v8 = 0;
  v157 = 0;
  Subsegment = 0LL;
  v9 = 1;
  while ( 1 )
  {
    while ( 1 )
    {
      v10 = 4096LL;
      if ( v5 )
      {
        while ( 1 )
        {
          _m_prefetchw((const void *)(a3 + 56));
          v11 = *(_QWORD *)(a3 + 56);
          if ( (v11 & 0xFFF) != 0 )
          {
            while ( 1 )
            {
              v62 = _InterlockedCompareExchange64((volatile signed __int64 *)(a3 + 56), v11 - 1, v11);
              if ( v11 == v62 )
                break;
              v157 = 1;
              v11 = v62;
              if ( (v62 & 0xFFF) == 0 )
                goto LABEL_4;
            }
            v63 = v11 & 0xFFFFFFFFFFFFF000uLL;
            if ( v63 )
              break;
          }
LABEL_4:
          if ( v8 == 2 )
            goto LABEL_5;
          v8 = 2;
          v156 = 2;
          if ( *(_BYTE *)(v7 + 57) )
          {
            CurrentIrql = KeGetCurrentIrql();
            v152 = CurrentIrql;
            __writecr8(2uLL);
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
              _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
            if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
            {
              ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(a3 + 16, CurrentIrql);
            }
            else
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v165 = 0;
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              if ( SchedulerAssist )
              {
                if ( CurrentPrcb->NestingLevel <= 1u )
                {
                  v124 = SchedulerAssist[5];
                  SchedulerAssist[5] = v124 + 1;
                  if ( v124 == -1 )
                    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                }
              }
              if ( _interlockedbittestandset((volatile signed __int32 *)(a3 + 16), 0x1Fu) )
              {
                v122 = CurrentPrcb->SchedulerAssist;
                if ( v122 )
                {
                  if ( CurrentPrcb->NestingLevel <= 1u )
                  {
                    v125 = v122[5] - 1;
                    v122[5] = v125;
                    if ( !v125 )
                      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                  }
                }
                v165 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)(a3 + 16), CurrentIrql);
              }
              v92 = *(unsigned int *)(a3 + 16);
              if ( (*(_DWORD *)(a3 + 16) & 0xBFFFFFFF) != 0x80000000 )
              {
                do
                {
                  if ( (v92 & 0x40000000) == 0 )
                  {
                    v126 = _InterlockedCompareExchange((volatile signed __int32 *)(a3 + 16), v92 | 0x40000000, v92);
                    v29 = (_DWORD)v92 == v126;
                    v92 = v126;
                    if ( !v29 )
                      continue;
                  }
                  KeYieldProcessorEx(&v165, v92, v10);
                  v92 = *(unsigned int *)(a3 + 16);
                }
                while ( (v92 & 0xBFFFFFFF) != 0x80000000 );
              }
            }
          }
          else
          {
            CurrentThread = KeGetCurrentThread();
            --CurrentThread->SpecialApcDisable;
            ExAcquirePushLockExclusiveEx(a3 + 16, 0LL);
            v152 = -1;
          }
          v7 = a1;
        }
        if ( v8 )
        {
          if ( *(_BYTE *)(v7 + 57) )
          {
            ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a3 + 16));
            if ( KiIrqlFlags )
            {
              v123 = v152;
              if ( (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v152 < 2u )
              {
                v133 = KeGetCurrentPrcb();
                _InterlockedAnd((volatile signed __int32 *)v133->SchedulerAssist, 0xFFFEFFFF);
                KiRemoveSystemWorkPriorityKick(v133);
              }
            }
            else
            {
              v123 = v152;
            }
            __writecr8(v123);
          }
          else
          {
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a3 + 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)(a3 + 16));
            v160 = 0;
            v113 = KeGetCurrentThread();
            if ( (unsigned int)MiGetSystemRegionType(a3 + 16) == 1 )
              SessionId = (unsigned int)MmGetSessionIdEx((__int64)v113->ApcState.Process);
            else
              SessionId = 0xFFFFFFFFLL;
            --v113->SpecialApcDisable;
            if ( ++v113->AbAllocationRegionCount != 1 )
              v9 = 0;
            LODWORD(v115) = ((char)v113->AbEntrySummary | (char)v113->AbOrphanedEntrySummary) ^ 0x3F;
            v29 = !_BitScanReverse((unsigned int *)&v116, v115);
            v169 = v116;
            if ( v29 )
              goto LABEL_217;
            while ( 1 )
            {
              v117 = 1 << v116;
              v118 = v116;
              v119 = &v113->LockEntries[v118];
              v115 = ~v117 & (unsigned int)v115;
              if ( (v119->AcquiredByte & 1) != 0
                && (*(_DWORD *)&v119->LockState.0 & 1) == 0
                && (*(_QWORD *)&v119->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((a3 + 16) & 0x7FFFFFFFFFFFFFFCLL)
                && v119->LockState.SessionId == (_DWORD)SessionId )
              {
                v119->AcquiredByte &= ~1u;
                if ( v119->LockState.0 )
                  break;
              }
              v29 = !_BitScanReverse((unsigned int *)&v116, v115);
              v169 = v116;
              if ( v29 )
                goto LABEL_217;
            }
            if ( !v119 )
            {
LABEL_217:
              if ( (*((_DWORD *)&v113->0 + 1) & 0x10000) == 0 )
                KeBugCheckEx(0x162u, (ULONG_PTR)v113, a3 + 16, SessionId, 0LL);
            }
            else
            {
              v119->CrossThreadReleasableAndBusyByte |= 2u;
              if ( (__int64)v119->LockState.LockState < 0 )
                KiAbEntryRemoveFromTree(&v113->LockEntries[v118].TreeNode, v115);
              v160 = 0;
              v160 = v119->BoostBitmap.AllFields & 0x1FFFF;
              v119->BoostBitmap.AllFields &= 0xFFFE0000;
              v119->ThreadLocalFlags &= ~1u;
              v119->LockState.0 = 0LL;
              v120 = 1 << (((char *)v119 - (char *)v113 - 800) / 96);
              if ( v9 )
                v113->AbEntrySummary |= v120;
              else
                _InterlockedOr8((volatile signed __int8 *)&v113->AbOrphanedEntrySummary, v120);
            }
            --v113->AbAllocationRegionCount;
            KiAbThreadRemoveBoosts((ULONG_PTR)v113, a3 + 16, (__int64)&v160);
            v29 = v113->SpecialApcDisable++ == -1;
            if ( v29 && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)v113->ApcState.ApcListHead[0].Flink != &v113->152 )
              KiCheckForKernelApcDelivery(v121);
            KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
          }
          v156 = 0;
        }
        v64 = 2 * (*(unsigned __int16 *)(v63 + 34) + (unsigned __int64)*(unsigned __int8 *)(v63 + 39));
        v65 = RtlpSearchWidth[*(unsigned __int8 *)(a3 + 1)];
        v163 = (unsigned int)v63 >> 12;
        v66 = (unsigned __int16)(qword_14040F0E8 ^ *(_WORD *)(v63 + 40) ^ ((unsigned int)v63 >> 12));
        v162 = qword_14040F0E8 ^ *(_DWORD *)(v63 + 40) ^ ((unsigned int)v63 >> 12);
        v67 = 3LL;
        if ( a4 >= v66 )
          v67 = 1LL;
        v154 = v66;
        v171 = v67;
        v68 = KeGetCurrentThread();
        v172 = (char *)&v68[1].Ucb + 4;
        Ucb_high = HIWORD(v68[1].Ucb);
        v70 = (unsigned __int8)Ucb_high;
        if ( (unsigned __int8)Ucb_high == HIBYTE(Ucb_high) )
        {
          v110 = ExGenRandom(1);
          v66 = v154;
          v71 = (v110 << 8) | (unsigned __int8)(v110 + 1);
        }
        else
        {
          v71 = (unsigned __int8)(Ucb_high ^ (Ucb_high + 1)) ^ Ucb_high;
        }
        *((_WORD *)v172 + 1) = v71;
        v72 = *((unsigned __int8 *)RtlpLowFragHeapRandomData + v70);
        v73 = (volatile signed __int64 *)(v63 + 48 + 8 * ((2 * (unsigned __int64)*(unsigned __int16 *)(v63 + 36)) >> 6));
        v74 = v63 + 48 + 8 * ((v64 - 1) >> 6);
        v164 = v74;
LABEL_81:
        v75 = v65;
        if ( v64 >= 0x40 )
        {
          while ( 1 )
          {
            v76 = *v73;
            if ( (*v73 & 0x5555555555555555LL) != 0x5555555555555555LL )
              break;
            v108 = v73++;
            if ( v108 == (volatile signed __int64 *)v74 )
              v73 = (volatile signed __int64 *)(v63 + 48);
          }
          if ( v73 == (volatile signed __int64 *)v74 && (v64 & 0x3F) != 0 && (v64 & 0x3F) < v65 )
            v65 = v64 & 0x3F;
        }
        else
        {
          v76 = *v73;
          v65 = v64;
          if ( (unsigned int)v64 >= v75 )
            v65 = v75;
        }
        v72 = ((v65 * v72) >> 7) & 0x1FFFFFE;
        while ( 1 )
        {
          v77 = ~v76;
          if ( v65 >= 0x40 )
          {
            v79 = 0x5555555555555555LL;
          }
          else
          {
            _BitScanForward64(&v78, v77 & 0x5555555555555555LL);
            v72 += v78;
            v79 = (((1LL << v65) - 1) << v78) & 0x5555555555555555LL;
          }
          _BitScanForward64(&v80, __ROR8__(v79 & v77, v72));
          v81 = ((_BYTE)v72 + (_BYTE)v80) & 0x3F;
          LODWORD(v172) = v81;
          v82 = _InterlockedCompareExchange64(v73, v76 | (v171 << v81), v76);
          v29 = v76 == v82;
          v76 = v82;
          if ( v29 )
            break;
          if ( (v82 & 0x5555555555555555LL) == 0x5555555555555555LL )
          {
            v74 = v164;
            if ( (unsigned __int64)++v73 > v164 )
              v73 = (volatile signed __int64 *)(v63 + 48);
            goto LABEL_81;
          }
        }
        v83 = HIWORD(v162);
        v58 = a1;
        v84 = (v81 + ((unsigned int)((__int64)((__int64)v73 - v63 - 48) >> 3) << 6)) >> 1;
        *(_WORD *)(v63 + 36) = v84;
        v85 = v83 + v84 * v66;
        if ( *(_BYTE *)(v63 + 45) > 1u )
        {
          if ( (int)RtlpHpLfhSubsegmentCommitBlock(a1, v63, (unsigned int)v85) < 0 )
          {
            v61 = 0LL;
            _InterlockedAnd64(
              (volatile signed __int64 *)(v63 + 8 * ((unsigned __int64)(2 * v84) >> 6) + 48),
              ~(3LL << ((2 * v84) & 0x3F)));
LABEL_90:
            if ( !v61 )
              RtlpHpLfhSubsegmentFreeBlock(a1, v63, 0LL, a5);
            if ( !v156 )
              goto LABEL_93;
            v137 = a3 + 16;
            if ( *(_BYTE *)(a1 + 57) )
            {
              ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v137);
              if ( KiIrqlFlags )
              {
                v148 = v152;
                if ( (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v152 < 2u )
                {
                  v149 = KeGetCurrentPrcb();
                  _InterlockedAnd((volatile signed __int32 *)v149->SchedulerAssist, 0xFFFEFFFF);
                  KiRemoveSystemWorkPriorityKick(v149);
                }
              }
              else
              {
                v148 = v152;
              }
              __writecr8(v148);
              goto LABEL_93;
            }
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v137, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)v137);
            v161 = 0;
            v138 = KeGetCurrentThread();
            if ( (unsigned int)MiGetSystemRegionType(v137) == 1 )
              v139 = MmGetSessionIdEx((__int64)v138->ApcState.Process);
            else
              v139 = -1;
            --v138->SpecialApcDisable;
            v140 = ++v138->AbAllocationRegionCount;
            LODWORD(v141) = ((char)v138->AbEntrySummary | (char)v138->AbOrphanedEntrySummary) ^ 0x3F;
            v29 = !_BitScanReverse((unsigned int *)&v142, v141);
            v170 = v142;
            if ( v29 )
              goto LABEL_321;
            while ( 1 )
            {
              v143 = 1 << v142;
              v144 = v142;
              v145 = &v138->LockEntries[v144];
              v141 = ~v143 & (unsigned int)v141;
              if ( (v145->AcquiredByte & 1) != 0
                && (*(_DWORD *)&v145->LockState.0 & 1) == 0
                && (*(_QWORD *)&v145->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v137 & 0x7FFFFFFFFFFFFFFCLL)
                && v145->LockState.SessionId == v139 )
              {
                v145->AcquiredByte &= ~1u;
                if ( v145->LockState.0 )
                  break;
              }
              v29 = !_BitScanReverse((unsigned int *)&v142, v141);
              v170 = v142;
              if ( v29 )
                goto LABEL_321;
            }
            if ( !v145 )
            {
LABEL_321:
              if ( (*((_DWORD *)&v138->0 + 1) & 0x10000) == 0 )
                KeBugCheckEx(0x162u, (ULONG_PTR)v138, v137, v139, 0LL);
            }
            else
            {
              v145->CrossThreadReleasableAndBusyByte |= 2u;
              if ( (__int64)v145->LockState.LockState < 0 )
                KiAbEntryRemoveFromTree(&v138->LockEntries[v144].TreeNode, v141);
              v161 = 0;
              v161 = v145->BoostBitmap.AllFields & 0x1FFFF;
              v145->BoostBitmap.AllFields &= 0xFFFE0000;
              v145->ThreadLocalFlags &= ~1u;
              v145->LockState.0 = 0LL;
              v146 = ((char *)v145 - (char *)v138 - 800) / 96;
              if ( v140 == 1 )
                v138->AbEntrySummary |= 1 << v146;
              else
                _InterlockedOr8((volatile signed __int8 *)&v138->AbOrphanedEntrySummary, 1 << v146);
            }
            --v138->AbAllocationRegionCount;
            KiAbThreadRemoveBoosts((ULONG_PTR)v138, v137, (__int64)&v161);
            v29 = v138->SpecialApcDisable++ == -1;
            if ( v29 && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)v138->ApcState.ApcListHead[0].Flink != &v138->152 )
              KiCheckForKernelApcDelivery(v147);
            KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
            goto LABEL_93;
          }
          v66 = v154;
        }
        v61 = v63 + v85;
        if ( a4 < v66 )
        {
          v134 = v66 - a4;
          v135 = (unsigned __int16)qword_14040F0E8 ^ *(unsigned __int16 *)(v63 + 40) ^ (unsigned __int64)(unsigned __int16)v163;
          if ( v134 == 1 )
            v136 = 0x8000;
          else
            v136 = v134 & 0x3FFF;
          v166 = v136;
          *(_WORD *)(v135 + v61 - 2) = v136;
        }
        goto LABEL_90;
      }
      if ( !v8 )
      {
        v8 = 1;
        v127 = RtlpHpAcquireLockShared((volatile LONG *)(a3 + 16), *(unsigned __int8 *)(v7 + 57));
        v7 = a1;
        v152 = v127;
LABEL_5:
        v5 = v153;
      }
      if ( *(_QWORD *)(a3 + 8) )
        break;
      if ( v8 != 2 )
      {
        if ( !*(_BYTE *)(v7 + 57) )
        {
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a3 + 16), 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)(a3 + 16));
          KeAbPostRelease(a3 + 16);
          KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
          goto LABEL_152;
        }
        ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a3 + 16));
        if ( !KiIrqlFlags || (KiIrqlFlags & 1) == 0 || KeGetCurrentIrql() < 2u )
          goto LABEL_165;
        v109 = v152;
        goto LABEL_277;
      }
      if ( *(_BYTE *)(v7 + 57) )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a3 + 16));
        if ( !KiIrqlFlags )
        {
LABEL_165:
          v109 = v152;
LABEL_166:
          __writecr8(v109);
          goto LABEL_152;
        }
        v109 = v152;
        if ( (KiIrqlFlags & 1) == 0 || KeGetCurrentIrql() < 2u )
          goto LABEL_166;
LABEL_277:
        if ( v109 < 2u )
        {
          v132 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v132->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v132);
        }
        goto LABEL_166;
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a3 + 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a3 + 16));
      v159 = 0;
      v95 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(a3 + 16) == 1 )
        v96 = (unsigned int)MmGetSessionIdEx((__int64)v95->ApcState.Process);
      else
        v96 = 0xFFFFFFFFLL;
      --v95->SpecialApcDisable;
      if ( ++v95->AbAllocationRegionCount != 1 )
        v9 = 0;
      LODWORD(v97) = ((char)v95->AbEntrySummary | (char)v95->AbOrphanedEntrySummary) ^ 0x3F;
      v29 = !_BitScanReverse((unsigned int *)&v98, v97);
      v168 = v98;
      if ( v29 )
        goto LABEL_203;
      while ( 1 )
      {
        v99 = 1 << v98;
        v100 = v98;
        v101 = &v95->LockEntries[v100];
        v97 = ~v99 & (unsigned int)v97;
        if ( (v101->AcquiredByte & 1) != 0
          && (*(_DWORD *)&v101->LockState.0 & 1) == 0
          && (*(_QWORD *)&v101->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((a3 + 16) & 0x7FFFFFFFFFFFFFFCLL)
          && v101->LockState.SessionId == (_DWORD)v96 )
        {
          v101->AcquiredByte &= ~1u;
          if ( v101->LockState.0 )
            break;
        }
        v29 = !_BitScanReverse((unsigned int *)&v98, v97);
        v168 = v98;
        if ( v29 )
          goto LABEL_203;
      }
      if ( !v101 )
      {
LABEL_203:
        if ( (*((_DWORD *)&v95->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v95, a3 + 16, v96, 0LL);
      }
      else
      {
        v101->CrossThreadReleasableAndBusyByte |= 2u;
        if ( (__int64)v101->LockState.LockState < 0 )
          KiAbEntryRemoveFromTree(&v95->LockEntries[v100].TreeNode, v97);
        v159 = 0;
        v159 = v101->BoostBitmap.AllFields & 0x1FFFF;
        v101->BoostBitmap.AllFields &= 0xFFFE0000;
        v101->ThreadLocalFlags &= ~1u;
        v101->LockState.0 = 0LL;
        v102 = 1 << (((char *)v101 - (char *)v95 - 800) / 96);
        if ( v9 )
          v95->AbEntrySummary |= v102;
        else
          _InterlockedOr8((volatile signed __int8 *)&v95->AbOrphanedEntrySummary, v102);
      }
      --v95->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v95, a3 + 16, (__int64)&v159);
      v29 = v95->SpecialApcDisable++ == -1;
      if ( v29 && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)v95->ApcState.ApcListHead[0].Flink != &v95->152 )
        KiCheckForKernelApcDelivery(v103);
      KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
      v9 = 1;
LABEL_152:
      Subsegment = (unsigned __int16 *)RtlpHpLfhBucketGetSubsegment(a2, *(unsigned __int8 *)(a1 + 57));
      if ( !Subsegment )
      {
        Subsegment = RtlpHpLfhSubsegmentCreate(a1, a2, a5);
        v86 = Subsegment;
        if ( !Subsegment )
        {
          v58 = a1;
          v61 = 0LL;
          goto LABEL_94;
        }
      }
      v104 = (volatile LONG *)(a3 + 16);
      v8 = 2;
      v156 = 2;
      if ( *(_BYTE *)(a1 + 57) )
      {
        v106 = ExAcquireSpinLockExclusive(v104);
      }
      else
      {
        v105 = KeGetCurrentThread();
        --v105->SpecialApcDisable;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)v104, 0LL);
        v106 = -1;
      }
      v152 = v106;
      if ( Subsegment[16] == Subsegment[17] )
      {
        *((_QWORD *)Subsegment + 2) = a3;
      }
      else
      {
        v107 = _InterlockedExchange64((volatile __int64 *)Subsegment + 2, a3);
        if ( (v107 & 1) != 0 )
          _InterlockedExchangeAdd((volatile signed __int32 *)Subsegment + 8, v107 >> 1);
      }
      if ( !*(_QWORD *)(a3 + 8) || Subsegment[16] != Subsegment[17] )
      {
        Subsegment = (unsigned __int16 *)RtlpHpLfhOwnerMoveSubsegment(a3, Subsegment, 0LL);
        goto LABEL_160;
      }
      v7 = a1;
      *((_QWORD *)Subsegment + 2) = 0LL;
      v5 = v153;
    }
    v12 = *(_QWORD *)(a3 + 24);
    v13 = a3 + 24;
    v14 = 1;
    if ( v5 )
      v14 = 4096;
    if ( v12 == v13 )
    {
LABEL_243:
      v12 = 0LL;
      goto LABEL_31;
    }
LABEL_10:
    v15 = *(_WORD *)(v12 + 32);
    v157 = 0;
    while ( 1 )
    {
      if ( v14 < v15 )
      {
        v16 = v14;
      }
      else
      {
        v16 = v15;
        if ( v8 == 1 )
        {
          v12 = *(_QWORD *)v12;
          if ( v12 == v13 )
            goto LABEL_243;
          goto LABEL_10;
        }
      }
      v17 = v15 - v16;
      v15 = _InterlockedCompareExchange16((volatile signed __int16 *)(v12 + 32), v15 - v16, v15);
      v18 = v16 + v17;
      if ( v15 == v18 )
        break;
      if ( v15 < v18 )
        v157 = 1;
    }
    if ( *(_WORD *)(v12 + 32) )
      goto LABEL_29;
    v19 = (__int64 *)v12;
    switch ( *(_BYTE *)(v12 + 38) )
    {
      case 0:
        v20 = (_QWORD *)(a3 + 8);
        goto LABEL_17;
      case 1:
        v13 = a3 + 40;
        v20 = 0LL;
LABEL_17:
        v21 = (__int64 **)(a3 + 40);
        if ( v13 )
        {
          v22 = *(_QWORD *)v12;
          v23 = *(_QWORD **)(v12 + 8);
          if ( *(_QWORD *)(*(_QWORD *)v12 + 8LL) == v12 && *v23 == v12 )
          {
            *v23 = v22;
            *(_QWORD *)(v22 + 8) = v23;
            if ( v20 )
              --*v20;
            goto LABEL_22;
          }
LABEL_331:
          __fastfail(3u);
        }
LABEL_22:
        *(_BYTE *)(v12 + 38) = 1;
        if ( a3 != -40 )
        {
          v24 = *(__int64 ****)(a3 + 48);
          if ( *v24 != v21 )
            goto LABEL_331;
          *(_QWORD *)v12 = v21;
          *(_QWORD *)(v12 + 8) = v24;
          v19 = 0LL;
          *v24 = (__int64 **)v12;
          *(_QWORD *)(a3 + 48) = v12;
        }
        if ( (*(_BYTE *)a3 & 1) == 0 && *(_QWORD *)(a3 + 8) > 8uLL )
        {
          v19 = *v21;
          v128 = **v21;
          if ( (__int64 **)(*v21)[1] != v21 || *(__int64 **)(v128 + 8) != v19 )
            goto LABEL_331;
          *v21 = (__int64 *)v128;
          *(_QWORD *)(v128 + 8) = v21;
          --MEMORY[0];
          *((_BYTE *)v19 + 38) = 2;
        }
        if ( v19 && *((_BYTE *)v19 + 38) == 2 )
          v19[2] = 0LL;
        break;
      case 2:
        v13 = 0LL;
        v20 = 0LL;
        goto LABEL_17;
    }
    v7 = a1;
LABEL_29:
    if ( v16 > 1u )
      *(_QWORD *)(a3 + 56) = v12 ^ ((unsigned __int16)(v16 - 1) ^ (unsigned __int16)v12) & 0xFFF;
LABEL_31:
    if ( v8 != 2 )
    {
      if ( *(_BYTE *)(v7 + 57) )
      {
        ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a3 + 16));
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v152 < 2u )
        {
          v131 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v131->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v131);
        }
        __writecr8(v152);
      }
      else
      {
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a3 + 16), 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(a3 + 16));
        KeAbPostRelease(a3 + 16);
        KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
      }
      goto LABEL_55;
    }
    if ( *(_BYTE *)(v7 + 57) )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(a3 + 16, retaddr);
        v7 = a1;
      }
      else
      {
        *(_DWORD *)(a3 + 16) = 0;
      }
      v93 = KeGetCurrentPrcb();
      v94 = v93->SchedulerAssist;
      if ( v94 )
      {
        if ( v93->NestingLevel <= 1u )
        {
          v129 = v94[5] - 1;
          v94[5] = v129;
          if ( !v129 )
          {
            KiRemoveSystemWorkPriorityKick(v93);
            v7 = a1;
          }
        }
      }
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v152 < 2u )
      {
        v130 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v130->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v130);
        v7 = a1;
      }
      __writecr8(v152);
    }
    else
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a3 + 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a3 + 16));
      v158 = 0;
      v25 = KeGetCurrentThread();
      v26 = (unsigned int)MiGetSystemRegionType(a3 + 16) == 1
          ? (unsigned int)MmGetSessionIdEx((__int64)v25->ApcState.Process)
          : 0xFFFFFFFFLL;
      --v25->SpecialApcDisable;
      v27 = ++v25->AbAllocationRegionCount == 1;
      v28 = ((char)v25->AbEntrySummary | (char)v25->AbOrphanedEntrySummary) ^ 0x3F;
      v29 = !_BitScanReverse((unsigned int *)&v30, v28);
      v167 = v30;
      if ( v29 )
        goto LABEL_127;
      while ( 1 )
      {
        v31 = (__int64)&v25->LockEntries[v30];
        v28 &= ~(1 << v30);
        if ( (*(_BYTE *)(v31 + 26) & 1) != 0
          && (*(_DWORD *)(v31 + 32) & 1) == 0
          && (*(_QWORD *)(v31 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((a3 + 16) & 0x7FFFFFFFFFFFFFFCLL)
          && *(_DWORD *)(v31 + 40) == (_DWORD)v26 )
        {
          *(_BYTE *)(v31 + 26) &= ~1u;
          if ( *(_QWORD *)(v31 + 32) )
            break;
        }
        v29 = !_BitScanReverse((unsigned int *)&v30, v28);
        v167 = v30;
        if ( v29 )
          goto LABEL_127;
      }
      if ( !v31 )
      {
LABEL_127:
        if ( (*((_DWORD *)&v25->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v25, a3 + 16, (unsigned int)v26, 0LL);
      }
      else
      {
        *(_BYTE *)(v31 + 32) |= 2u;
        if ( *(__int64 *)(v31 + 32) < 0 )
          KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v31, v26);
        v158 = 0;
        v158 = *(_DWORD *)(v31 + 88) & 0x1FFFF;
        *(_DWORD *)(v31 + 88) &= 0xFFFE0000;
        *(_BYTE *)(v31 + 25) &= ~1u;
        *(_QWORD *)(v31 + 32) = 0LL;
        v32 = 1 << ((v31 - (__int64)v25 - 800) / 96);
        if ( v27 )
          v25->AbEntrySummary |= v32;
        else
          _InterlockedOr8((volatile signed __int8 *)&v25->AbOrphanedEntrySummary, v32);
      }
      --v25->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v25, a3 + 16, (__int64)&v158);
      v29 = v25->SpecialApcDisable++ == -1;
      if ( v29 && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)v25->ApcState.ApcListHead[0].Flink != &v25->152 )
        KiCheckForKernelApcDelivery(v33);
      v34 = KeGetCurrentThread();
      v29 = v34->SpecialApcDisable++ == -1;
      if ( v29 && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)v34->ApcState.ApcListHead[0].Flink != &v34->152 )
        KiCheckForKernelApcDelivery((__int64)v34);
      v9 = 1;
LABEL_55:
      v7 = a1;
    }
    if ( v12 )
      break;
    v8 = 2;
    v156 = 2;
    v152 = RtlpHpAcquireLockExclusive(a3 + 16, *(unsigned __int8 *)(v7 + 57));
LABEL_160:
    v5 = v153;
    v7 = a1;
  }
  v35 = (volatile signed __int64 *)(v12 + 48);
  v36 = *(unsigned __int8 *)(a3 + 1);
  v37 = 2 * (*(unsigned __int16 *)(v12 + 34) + (unsigned __int64)*(unsigned __int8 *)(v12 + 39));
  v38 = KeGetCurrentThread();
  v39 = RtlpSearchWidth[v36];
  LODWORD(v36) = ((unsigned int)v12 >> 12) ^ *(_DWORD *)(v12 + 40);
  v162 = (unsigned int)v12 >> 12;
  LODWORD(v36) = qword_14040F0E8 ^ v36;
  v40 = (unsigned __int16)v36;
  v41 = a4 < (unsigned __int16)v36;
  v163 = v36;
  v42 = 3LL;
  if ( !v41 )
    v42 = 1LL;
  v164 = v42;
  v43 = (unsigned __int8)HIWORD(v38[1].Ucb);
  if ( v43 == HIBYTE(HIWORD(v38[1].Ucb)) )
  {
    v111 = ExGenRandom(1);
    v35 = (volatile signed __int64 *)(v12 + 48);
    v44 = (v111 << 8) | (unsigned __int8)(v111 + 1);
  }
  else
  {
    v44 = (unsigned __int8)(HIWORD(v38[1].Ucb) ^ (v43 + 1)) ^ HIWORD(v38[1].Ucb);
  }
  HIWORD(v38[1].Ucb) = v44;
  v45 = v164;
  v46 = *((unsigned __int8 *)RtlpLowFragHeapRandomData + v43);
  v47 = &v35[(2 * (unsigned __int64)*(unsigned __int16 *)(v12 + 36)) >> 6];
  v48 = &v35[(v37 - 1) >> 6];
  v171 = (unsigned __int64)v48;
LABEL_62:
  v49 = v39;
  if ( v37 >= 0x40 )
  {
    while ( 1 )
    {
      v50 = *v47;
      if ( (*v47 & 0x5555555555555555LL) != 0x5555555555555555LL )
        break;
      v112 = v47++;
      if ( v112 == v48 )
        v47 = v35;
    }
    if ( v47 == v48 && (v37 & 0x3F) != 0 && (v37 & 0x3F) < v39 )
      v39 = v37 & 0x3F;
  }
  else
  {
    v50 = *v47;
    v39 = v37;
    if ( (unsigned int)v37 >= v49 )
      v39 = v49;
  }
  v46 = ((v39 * v46) >> 7) & 0x1FFFFFE;
  while ( 1 )
  {
    v51 = ~v50;
    if ( v39 >= 0x40 )
    {
      v53 = 0x5555555555555555LL;
    }
    else
    {
      _BitScanForward64(&v52, v51 & 0x5555555555555555LL);
      v46 += v52;
      v53 = (((1LL << v39) - 1) << v52) & 0x5555555555555555LL;
    }
    _BitScanForward64(&v54, __ROR8__(v51 & v53, v46));
    v55 = ((_BYTE)v46 + (_BYTE)v54) & 0x3F;
    v173 = v55;
    v56 = _InterlockedCompareExchange64(v47, v50 | (v45 << v55), v50);
    v29 = v50 == v56;
    v50 = v56;
    if ( v29 )
      break;
    if ( (v56 & 0x5555555555555555LL) == 0x5555555555555555LL )
    {
      v48 = (volatile signed __int64 *)v171;
      if ( (unsigned __int64)++v47 > v171 )
        v47 = v35;
      goto LABEL_62;
    }
  }
  v57 = HIWORD(v163);
  v58 = a1;
  v59 = (v55 + ((unsigned int)(v47 - v35) << 6)) >> 1;
  *(_WORD *)(v12 + 36) = v59;
  v60 = v57 + v40 * v59;
  if ( *(_BYTE *)(v12 + 45) <= 1u || (int)RtlpHpLfhSubsegmentCommitBlock(a1, v12, (unsigned int)v60) >= 0 )
  {
    v61 = v12 + v60;
    if ( a4 < v40 )
    {
      v150 = v40 - a4;
      if ( v150 == 1 )
        v151 = 0x8000;
      else
        v151 = v150 & 0x3FFF;
      *(_WORD *)(((unsigned __int16)qword_14040F0E8 ^ *(unsigned __int16 *)(v12 + 40) ^ (unsigned __int64)(unsigned __int16)v162)
               + v61
               - 2) = v151;
    }
  }
  else
  {
    v61 = 0LL;
    _InterlockedAnd64(
      (volatile signed __int64 *)(v12 + 8 * ((unsigned __int64)(2 * v59) >> 6) + 48),
      ~(3LL << ((2 * v59) & 0x3F)));
  }
  if ( !v61 )
    RtlpHpLfhSubsegmentFreeBlock(a1, v12, 0LL, a5);
LABEL_93:
  v86 = Subsegment;
LABEL_94:
  if ( v157 )
    RtlpHpLfhBucketUpdateAffinityMapping(v58, a2);
  if ( v86 )
    RtlpHpLfhBucketAddSubsegment(v58, a2, v86, a5);
  return v61;
}
