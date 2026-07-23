/*
 * XREFs of RtlpHpLfhSubsegmentFreeBlock @ 0x1400BED70
 * Callers:
 *     RtlpHpSegFree @ 0x140007CDC (RtlpHpSegFree.c)
 *     RtlpHpLfhSlotAllocate @ 0x1400BADE0 (RtlpHpLfhSlotAllocate.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x140004530 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x140005A50 (KiCheckForKernelApcDelivery.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1400230C0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14004EFD0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x14010E1B0 (RtlpHpLfhBucketAddSubsegment.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     RtlpLogHeapFailure @ 0x1402FBA28 (RtlpLogHeapFailure.c)
 *     RtlpHpLfhSubsegmentDecBlockCounts @ 0x1402FD820 (RtlpHpLfhSubsegmentDecBlockCounts.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x1402FD8EC (RtlpHpLfhSubsegmentDecommitPages.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14031C2A4 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14031C468 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall RtlpHpLfhSubsegmentFreeBlock(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  signed __int64 *v4; // rsi
  signed __int64 v6; // r14
  unsigned int v7; // edx
  unsigned __int64 v8; // r8
  char v10; // r13
  unsigned int v11; // r15d
  unsigned int v12; // ebx
  unsigned int v13; // edx
  __int64 v14; // rcx
  unsigned int v15; // eax
  char v16; // cl
  unsigned __int64 v17; // r10
  int v18; // edx
  unsigned __int16 v19; // ax
  unsigned int v20; // ecx
  unsigned __int64 v21; // rax
  char v22; // cl
  signed __int64 *v23; // r9
  int v24; // r13d
  int v25; // ebp
  unsigned __int16 v26; // dx
  signed __int64 v28; // rbx
  __int64 v29; // rcx
  unsigned __int64 v30; // r12
  struct _KTHREAD *CurrentThread; // rax
  int v32; // r12d
  char v33; // al
  signed __int64 v34; // r8
  _QWORD *v35; // r9
  signed __int64 v36; // rcx
  _QWORD *v37; // rdx
  signed __int64 *v38; // r8
  signed __int64 **v39; // rax
  signed __int64 **v40; // rax
  __int64 v41; // r10
  unsigned __int64 v42; // r14
  struct _KTHREAD *v43; // rbx
  ULONG_PTR v44; // r9
  BOOL v45; // r12d
  __int64 v46; // rdx
  bool v47; // zf
  __int64 v48; // rcx
  int v49; // eax
  __int64 v50; // rcx
  _KLOCK_ENTRY *v51; // rbp
  unsigned __int8 v52; // al
  __int64 v53; // rcx
  struct _KTHREAD *v54; // rcx
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *SchedulerAssist; // rcx
  __int64 v58; // rdx
  struct _KPRCB *v59; // rcx
  _DWORD *v60; // rdx
  __int64 v61; // rax
  _DWORD *v62; // rcx
  unsigned __int64 v63; // r14
  struct _KTHREAD *v64; // rbx
  BOOL v65; // esi
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // rdi
  unsigned int v69; // ecx
  __int64 v70; // rdx
  __int64 v71; // rcx
  struct _KTHREAD *v72; // r14
  __int64 SessionId; // rdx
  BOOL v74; // r10d
  int v75; // r8d
  unsigned int v76; // r8d
  __int64 v77; // rcx
  _KLOCK_ENTRY *v78; // rcx
  __int64 v79; // rcx
  __int64 v80; // rdx
  int v81; // eax
  int v82; // eax
  int v83; // eax
  unsigned __int32 v84; // eax
  struct _KPRCB *v85; // rcx
  signed __int64 v86; // rax
  int v87; // eax
  struct _KPRCB *v88; // rcx
  struct _KPRCB *v89; // rcx
  unsigned __int8 v90; // [rsp+30h] [rbp-88h]
  int v91; // [rsp+38h] [rbp-80h] BYREF
  int v92; // [rsp+3Ch] [rbp-7Ch] BYREF
  int v93; // [rsp+40h] [rbp-78h] BYREF
  BOOL v94; // [rsp+44h] [rbp-74h]
  __int64 i; // [rsp+48h] [rbp-70h]
  int v96; // [rsp+50h] [rbp-68h]
  int v97; // [rsp+54h] [rbp-64h]
  unsigned int v98; // [rsp+58h] [rbp-60h]
  int v99; // [rsp+5Ch] [rbp-5Ch]
  _KLOCK_ENTRY *v100; // [rsp+60h] [rbp-58h]
  void *retaddr; // [rsp+B8h] [rbp+0h]
  int BugCheckParameter3; // [rsp+C8h] [rbp+10h]
  int v104; // [rsp+D0h] [rbp+18h] BYREF
  unsigned int v105; // [rsp+D8h] [rbp+20h]

  v105 = a4;
  v90 = -1;
  v4 = (signed __int64 *)a2;
  v6 = 0LL;
  v7 = qword_14040F0E8 ^ ((unsigned int)a2 >> 12) ^ *(_DWORD *)(a2 + 40);
  v98 = v7;
  v8 = HIWORD(v7);
  BugCheckParameter3 = -1;
  v10 = a4;
  v11 = 1;
  if ( a3 )
  {
    v12 = (unsigned __int16)v7;
    v13 = a3 - v8 - (_DWORD)v4;
    v14 = *(_QWORD *)(a1 + 8LL * RtlpLfhBucketIndexMap[(v12 + 15) >> 4] + 128);
    v15 = *(_DWORD *)(v14 + 72);
    v16 = *(_BYTE *)(v14 + 76);
    if ( v15 )
    {
      v17 = (v13 * (unsigned __int64)v15) >> v16;
      v18 = v13 - v17 * v12;
    }
    else
    {
      LODWORD(v17) = v13 >> v16;
      v18 = ((1 << v16) - 1) & v13;
    }
    if ( !v18 )
    {
      v19 = *((_WORD *)v4 + 18);
      v20 = 2 * v17;
      if ( v19 >= (unsigned __int16)v17 )
        v19 = v17;
      *((_WORD *)v4 + 18) = v19;
      v21 = v20;
      v22 = v20 & 0x3F;
      v8 = ~(3LL << v22);
      v23 = &v4[v21 >> 6];
      _m_prefetchw(v23 + 6);
      if ( (((unsigned __int64)_InterlockedAnd64(v23 + 6, v8) >> v22) & 1) != 0 )
      {
        if ( *((_BYTE *)v4 + 45) > 1u )
        {
          v81 = RtlpHpLfhSubsegmentDecBlockCounts(a1, v4, (unsigned int)(a3 - (_DWORD)v4), v12);
          if ( v81 != -1 )
            RtlpHpLfhSubsegmentDecommitPages(a1, (_DWORD)v4, v81, 2, v10);
        }
        goto LABEL_9;
      }
      RtlpLogHeapFailure(17, *(_QWORD *)a1, a3, (_DWORD)v4, (unsigned int)v17, 0LL);
    }
    return 0;
  }
LABEL_9:
  v24 = *((unsigned __int16 *)v4 + 17);
  LOWORD(v25) = *((_WORD *)v4 + 16);
  while ( 1 )
  {
    if ( !v6 && (!(_WORD)v25 || (unsigned __int16)v25 == v24 - 1) )
    {
      v28 = v4[2];
      v29 = *(unsigned __int8 *)(a1 + 57);
      for ( i = v29; ; v29 = i )
      {
        while ( 1 )
        {
          while ( !v28 )
          {
            v28 = _InterlockedCompareExchange64(v4 + 2, 3LL, 0LL);
            if ( !v28 )
            {
              v6 = 0LL;
              goto LABEL_16;
            }
          }
          if ( (v28 & 1) != 0 )
            break;
          v30 = v28 + 16;
          v6 = v28;
          if ( v29 )
          {
            CurrentIrql = KeGetCurrentIrql();
            v90 = CurrentIrql;
            __writecr8(2uLL);
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
              _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
            if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
            {
              ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v28 + 16, CurrentIrql);
            }
            else
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v93 = 0;
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              if ( SchedulerAssist )
              {
                if ( CurrentPrcb->NestingLevel <= 1u )
                {
                  v82 = SchedulerAssist[5];
                  SchedulerAssist[5] = v82 + 1;
                  if ( v82 == -1 )
                    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                }
              }
              if ( _interlockedbittestandset((volatile signed __int32 *)v30, 0x1Fu) )
              {
                v62 = CurrentPrcb->SchedulerAssist;
                if ( v62 )
                {
                  if ( CurrentPrcb->NestingLevel <= 1u )
                  {
                    v83 = v62[5] - 1;
                    v62[5] = v83;
                    if ( !v83 )
                      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                  }
                }
                v93 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)v30, v90);
              }
              v58 = *(unsigned int *)v30;
              if ( (*(_DWORD *)v30 & 0xBFFFFFFF) != 0x80000000 )
              {
                do
                {
                  if ( (v58 & 0x40000000) == 0 )
                  {
                    v84 = _InterlockedCompareExchange((volatile signed __int32 *)v30, v58 | 0x40000000, v58);
                    v47 = (_DWORD)v58 == v84;
                    v58 = v84;
                    if ( !v47 )
                      continue;
                  }
                  KeYieldProcessorEx(&v93, v58, v8);
                  v58 = *(unsigned int *)v30;
                }
                while ( (v58 & 0xBFFFFFFF) != 0x80000000 );
              }
            }
          }
          else
          {
            CurrentThread = KeGetCurrentThread();
            --CurrentThread->SpecialApcDisable;
            ExAcquirePushLockExclusiveEx(v28 + 16, 0LL);
            v90 = -1;
          }
          v28 = v4[2];
          if ( v6 == v28 )
            goto LABEL_24;
          if ( i )
          {
            ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v30);
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v90 < 2u )
            {
              v85 = KeGetCurrentPrcb();
              _InterlockedAnd((volatile signed __int32 *)v85->SchedulerAssist, 0xFFFEFFFF);
              KiRemoveSystemWorkPriorityKick(v85);
            }
            __writecr8(v90);
            v29 = i;
          }
          else
          {
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v30, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)v30);
            v104 = 0;
            v72 = KeGetCurrentThread();
            if ( (unsigned int)MiGetSystemRegionType(v30) == 1 )
              SessionId = (unsigned int)MmGetSessionIdEx((__int64)v72->ApcState.Process);
            else
              SessionId = 0xFFFFFFFFLL;
            --v72->SpecialApcDisable;
            v74 = ++v72->AbAllocationRegionCount == 1;
            v75 = (char)v72->AbEntrySummary | (char)v72->AbOrphanedEntrySummary;
            v94 = v74;
            v76 = v75 ^ 0x3F;
            v47 = !_BitScanReverse((unsigned int *)&v77, v76);
            v96 = v77;
            if ( v47 )
              goto LABEL_135;
            while ( 1 )
            {
              v76 &= ~(1 << v77);
              v78 = &v72->LockEntries[v77];
              v100 = v78;
              if ( (v78->AcquiredByte & 1) != 0
                && (*(_DWORD *)&v78->LockState.0 & 1) == 0
                && (*(_QWORD *)&v78->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v30 & 0x7FFFFFFFFFFFFFFCLL)
                && v78->LockState.SessionId == (_DWORD)SessionId )
              {
                v78->AcquiredByte &= ~1u;
                if ( v78->LockState.0 )
                  break;
              }
              v47 = !_BitScanReverse((unsigned int *)&v77, v76);
              v96 = v77;
              if ( v47 )
                goto LABEL_135;
            }
            if ( !v78 )
            {
LABEL_135:
              if ( (*((_DWORD *)&v72->0 + 1) & 0x10000) == 0 )
                KeBugCheckEx(0x162u, (ULONG_PTR)v72, v30, (unsigned int)SessionId, 0LL);
            }
            else
            {
              v78->CrossThreadReleasableAndBusyByte |= 2u;
              if ( (__int64)v78->LockState.LockState < 0 )
              {
                KiAbEntryRemoveFromTree(&v78->TreeNode, SessionId);
                v78 = v100;
                v74 = v94;
              }
              v104 = 0;
              v104 = v78->BoostBitmap.AllFields & 0x1FFFF;
              v78->BoostBitmap.AllFields &= 0xFFFE0000;
              v78->ThreadLocalFlags &= ~1u;
              v78->LockState.0 = 0LL;
              v80 = ((char *)v78 - (char *)v72 - 800) / 96;
              if ( v74 )
                v72->AbEntrySummary |= 1 << v80;
              else
                _InterlockedOr8((volatile signed __int8 *)&v72->AbOrphanedEntrySummary, 1 << v80);
            }
            --v72->AbAllocationRegionCount;
            KiAbThreadRemoveBoosts((ULONG_PTR)v72, v30, (__int64)&v104);
            v47 = v72->SpecialApcDisable++ == -1;
            if ( v47 && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)v72->ApcState.ApcListHead[0].Flink != &v72->152 )
              KiCheckForKernelApcDelivery(v79);
            KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
            v29 = i;
          }
        }
        v86 = _InterlockedCompareExchange64(v4 + 2, v28 & 1 | (v28 + 2) & 0xFFFFFFFFFFFFFFFEuLL, v28);
        v47 = v28 == v86;
        v28 = v86;
        if ( v47 )
          break;
      }
      v6 = 0LL;
LABEL_24:
      if ( !v6 )
        return v11;
    }
    v26 = v25 + 1;
    v25 = (unsigned __int16)_InterlockedCompareExchange16((volatile signed __int16 *)v4 + 16, v25 + 1, v25);
    if ( v26 == v25 + 1 )
    {
      if ( (_WORD)v25 )
      {
        if ( (unsigned __int16)v25 != v24 - 1 )
          goto LABEL_16;
        v32 = 2;
      }
      else
      {
        v32 = 0;
      }
      v33 = *((_BYTE *)v4 + 38);
      switch ( v33 )
      {
        case 1:
          v34 = v6 + 40;
          goto LABEL_29;
        case 0:
          v34 = v6 + 24;
          v35 = (_QWORD *)(v6 + 8);
          goto LABEL_30;
        case 2:
          v34 = 0LL;
LABEL_29:
          v35 = 0LL;
LABEL_30:
          if ( v32 )
          {
            v36 = 0LL;
            v37 = 0LL;
          }
          else
          {
            v36 = v6 + 24;
            v37 = (_QWORD *)(v6 + 8);
          }
          if ( v34 )
          {
            v38 = (signed __int64 *)*v4;
            v39 = (signed __int64 **)v4[1];
            if ( *(signed __int64 **)(*v4 + 8) == v4 && *v39 == v4 )
            {
              *v39 = v38;
              v38[1] = (signed __int64)v39;
              if ( v35 )
                --*v35;
              goto LABEL_37;
            }
LABEL_180:
            __fastfail(3u);
          }
LABEL_37:
          *((_BYTE *)v4 + 38) = v32;
          if ( v36 )
          {
            v40 = *(signed __int64 ***)(v36 + 8);
            if ( *v40 != (signed __int64 *)v36 )
              goto LABEL_180;
            *v4 = v36;
            v4[1] = (signed __int64)v40;
            *v40 = v4;
            *(_QWORD *)(v36 + 8) = v4;
            if ( v37 )
              ++*v37;
            v4 = 0LL;
          }
          if ( (*(_BYTE *)v6 & 1) == 0 && *(_QWORD *)(v6 + 8) > 8uLL )
          {
            v4 = *(signed __int64 **)v36;
            v61 = **(_QWORD **)v36;
            if ( *(_QWORD *)(*(_QWORD *)v36 + 8LL) != v36 || *(signed __int64 **)(v61 + 8) != v4 )
              goto LABEL_180;
            *(_QWORD *)v36 = v61;
            *(_QWORD *)(v61 + 8) = v36;
            --*v37;
            *((_BYTE *)v4 + 38) = 2;
          }
          if ( v4 && *((_BYTE *)v4 + 38) == 2 )
            v4[2] = 0LL;
          break;
      }
      v41 = a1;
      v42 = v6 + 16;
      if ( *(_BYTE *)(a1 + 57) )
      {
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        {
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v42, retaddr);
          v41 = a1;
        }
        else
        {
          *(_DWORD *)v42 = 0;
        }
        v59 = KeGetCurrentPrcb();
        v60 = v59->SchedulerAssist;
        if ( v60 )
        {
          if ( v59->NestingLevel <= 1u )
          {
            v87 = v60[5] - 1;
            v60[5] = v87;
            if ( !v87 )
            {
              KiRemoveSystemWorkPriorityKick(v59);
              v41 = a1;
            }
          }
        }
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v90 < 2u )
        {
          v88 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v88->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v88);
          v41 = a1;
        }
        __writecr8(v90);
      }
      else
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v42, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)v42);
        v91 = 0;
        v43 = KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType(v42) == 1 )
          v44 = (unsigned int)MmGetSessionIdEx((__int64)v43->ApcState.Process);
        else
          v44 = 0xFFFFFFFFLL;
        --v43->SpecialApcDisable;
        v45 = ++v43->AbAllocationRegionCount == 1;
        LODWORD(v46) = ((char)v43->AbEntrySummary | (char)v43->AbOrphanedEntrySummary) ^ 0x3F;
        v47 = !_BitScanReverse((unsigned int *)&v48, v46);
        v97 = v48;
        if ( v47 )
          goto LABEL_84;
        while ( 1 )
        {
          v49 = 1 << v48;
          v50 = v48;
          v51 = &v43->LockEntries[v50];
          v46 = ~v49 & (unsigned int)v46;
          if ( (v51->AcquiredByte & 1) != 0
            && (*(_DWORD *)&v51->LockState.0 & 1) == 0
            && (*(_QWORD *)&v51->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v42 & 0x7FFFFFFFFFFFFFFCLL)
            && v51->LockState.SessionId == (_DWORD)v44 )
          {
            v51->AcquiredByte &= ~1u;
            if ( v51->LockState.0 )
              break;
          }
          v47 = !_BitScanReverse((unsigned int *)&v48, v46);
          v97 = v48;
          if ( v47 )
            goto LABEL_84;
        }
        if ( !v51 )
        {
LABEL_84:
          if ( (*((_DWORD *)&v43->0 + 1) & 0x10000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)v43, v42, v44, 0LL);
        }
        else
        {
          v51->CrossThreadReleasableAndBusyByte |= 2u;
          if ( (__int64)v51->LockState.LockState < 0 )
            KiAbEntryRemoveFromTree(&v43->LockEntries[v50].TreeNode, v46);
          v91 = 0;
          v91 = v51->BoostBitmap.AllFields & 0x1FFFF;
          v51->BoostBitmap.AllFields &= 0xFFFE0000;
          v51->ThreadLocalFlags &= ~1u;
          v51->LockState.0 = 0LL;
          v52 = 1 << (((char *)v51 - (char *)v43 - 800) / 96);
          if ( v45 )
            v43->AbEntrySummary |= v52;
          else
            _InterlockedOr8((volatile signed __int8 *)&v43->AbOrphanedEntrySummary, v52);
        }
        --v43->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts((ULONG_PTR)v43, v42, (__int64)&v91);
        v47 = v43->SpecialApcDisable++ == -1;
        if ( v47 && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)v43->ApcState.ApcListHead[0].Flink != &v43->152 )
          KiCheckForKernelApcDelivery(v53);
        v54 = KeGetCurrentThread();
        v47 = v54->SpecialApcDisable++ == -1;
        if ( v47 && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)v54->ApcState.ApcListHead[0].Flink != &v54->152 )
          KiCheckForKernelApcDelivery((__int64)v54);
        v41 = a1;
      }
      v6 = 0LL;
      if ( v4 )
        RtlpHpLfhBucketAddSubsegment(
          v41,
          *(_QWORD *)(v41 + 8LL * RtlpLfhBucketIndexMap[((unsigned int)(unsigned __int16)v98 + 15) >> 4] + 128),
          v4,
          v105);
LABEL_16:
      if ( !v6 )
        return v11;
      v63 = v6 + 16;
      if ( *(_BYTE *)(a1 + 57) )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v63);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v90 < 2u )
        {
          v89 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v89->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v89);
        }
        __writecr8(v90);
        return v11;
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v63, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v63);
      v92 = 0;
      v64 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(v63) == 1 )
        BugCheckParameter3 = MmGetSessionIdEx((__int64)v64->ApcState.Process);
      --v64->SpecialApcDisable;
      v65 = ++v64->AbAllocationRegionCount == 1;
      LODWORD(v66) = ((char)v64->AbEntrySummary | (char)v64->AbOrphanedEntrySummary) ^ 0x3F;
      v47 = !_BitScanReverse((unsigned int *)&v67, v66);
      v99 = v67;
      if ( v47 )
      {
LABEL_122:
        v69 = BugCheckParameter3;
      }
      else
      {
        while ( 1 )
        {
          v68 = (__int64)&v64->LockEntries[v67];
          v66 = ~(1 << v67) & (unsigned int)v66;
          if ( (*(_BYTE *)(v68 + 26) & 1) != 0
            && (*(_DWORD *)(v68 + 32) & 1) == 0
            && (*(_QWORD *)(v68 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v63 & 0x7FFFFFFFFFFFFFFCLL) )
          {
            v69 = BugCheckParameter3;
            if ( *(_DWORD *)(v68 + 40) == BugCheckParameter3 )
            {
              *(_BYTE *)(v68 + 26) &= ~1u;
              if ( *(_QWORD *)(v68 + 32) )
                break;
            }
          }
          v47 = !_BitScanReverse((unsigned int *)&v67, v66);
          v99 = v67;
          if ( v47 )
            goto LABEL_122;
        }
        if ( v68 )
        {
          *(_BYTE *)(v68 + 32) |= 2u;
          if ( *(__int64 *)(v68 + 32) < 0 )
            KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v68, v66);
          v92 = 0;
          v92 = *(_DWORD *)(v68 + 88) & 0x1FFFF;
          *(_DWORD *)(v68 + 88) &= 0xFFFE0000;
          *(_BYTE *)(v68 + 25) &= ~1u;
          *(_QWORD *)(v68 + 32) = 0LL;
          v70 = (v68 - (__int64)v64 - 800) / 96;
          if ( v65 )
            v64->AbEntrySummary |= 1 << v70;
          else
            _InterlockedOr8((volatile signed __int8 *)&v64->AbOrphanedEntrySummary, 1 << v70);
LABEL_113:
          --v64->AbAllocationRegionCount;
          KiAbThreadRemoveBoosts((ULONG_PTR)v64, v63, (__int64)&v92);
          v47 = v64->SpecialApcDisable++ == -1;
          if ( v47 && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)v64->ApcState.ApcListHead[0].Flink != &v64->152 )
            KiCheckForKernelApcDelivery(v71);
          KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
          return v11;
        }
      }
      if ( (*((_DWORD *)&v64->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v64, v63, v69, 0LL);
      goto LABEL_113;
    }
  }
}
