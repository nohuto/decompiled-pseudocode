/*
 * XREFs of ExAllocateHeapPool @ 0x140037CE0
 * Callers:
 *     ExpAllocatePoolWithTagFromNode @ 0x140037C50 (ExpAllocatePoolWithTagFromNode.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 * Callees:
 *     RtlpHpFreeHeap @ 0x140003214 (RtlpHpFreeHeap.c)
 *     RtlRaiseStatus @ 0x140015E00 (RtlRaiseStatus.c)
 *     ExpAddTagForBigPages @ 0x140036F80 (ExpAddTagForBigPages.c)
 *     RtlpHpLfhSlotAllocate @ 0x140038E80 (RtlpHpLfhSlotAllocate.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003EEB0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400447C0 (KeAcquireInStackQueuedSpinLock.c)
 *     RtlpHpVsContextMultiAlloc @ 0x14005F7E4 (RtlpHpVsContextMultiAlloc.c)
 *     RtlpHpSegAlloc @ 0x14005FDE0 (RtlpHpSegAlloc.c)
 *     RtlpHpVsContextAllocateInternal @ 0x140061C80 (RtlpHpVsContextAllocateInternal.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x1400EF3A0 (KiCheckForKernelApcDelivery.c)
 *     ExpInsertPoolTrackerExpansion @ 0x1400F41FC (ExpInsertPoolTrackerExpansion.c)
 *     RtlpHpLargeAlloc @ 0x14010F9B4 (RtlpHpLargeAlloc.c)
 *     RtlpHpLfhContextAllocate @ 0x1401103C0 (RtlpHpLfhContextAllocate.c)
 *     RtlpHpLfhBucketUpdateStats @ 0x140110798 (RtlpHpLfhBucketUpdateStats.c)
 *     RtlFreeHeap @ 0x1401108B0 (RtlFreeHeap.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     ExPoolIsZeroingSupportPresent @ 0x1401C0714 (ExPoolIsZeroingSupportPresent.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x1401CC570 (RtlpInterlockedPopEntrySList.c)
 *     InterlockedPushListSList @ 0x1401CC620 (InterlockedPushListSList.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     RtlpLogHeapFailure @ 0x140319BCC (RtlpLogHeapFailure.c)
 *     RtlpHpExtrasAppend @ 0x14031AF34 (RtlpHpExtrasAppend.c)
 *     EtwTracePool @ 0x14032D9B4 (EtwTracePool.c)
 *     ExCheckSingleFilter @ 0x140338C4C (ExCheckSingleFilter.c)
 *     ExpSanitizePoolTag @ 0x1403393AC (ExpSanitizePoolTag.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14033AC78 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExAllocateHeapSpecialPool @ 0x14033E988 (ExAllocateHeapSpecialPool.c)
 *     VeAllocatePoolWithTagPriority @ 0x140971F50 (VeAllocatePoolWithTagPriority.c)
 */

__int64 __fastcall ExAllocateHeapPool(__int64 a1, unsigned __int64 a2, __int64 a3, unsigned int a4, char a5)
{
  __int64 v5; // rdi
  ULONG_PTR v6; // rsi
  char IsZeroingSupportPresent; // al
  ULONG_PTR v9; // rdx
  unsigned int v10; // ecx
  ULONG v11; // r8d
  unsigned int v12; // r9d
  unsigned int v13; // ecx
  POOL_TYPE v14; // r13d
  unsigned int v16; // eax
  int v17; // r10d
  ULONG_PTR BugCheckParameter4; // r15
  unsigned __int64 v19; // r8
  __int64 HeapSpecialPool; // rax
  unsigned __int64 v21; // r12
  char *v22; // rcx
  __int64 v23; // rsi
  __int64 v24; // rsi
  unsigned __int64 v25; // rbx
  int v26; // ecx
  unsigned __int64 Internal; // rcx
  unsigned __int64 v28; // rax
  unsigned int v29; // r12d
  __int64 v30; // r9
  __int64 v31; // rax
  int v32; // r13d
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // r14
  unsigned int v35; // edx
  int v36; // r9d
  char v37; // bl
  ULONG_PTR v38; // r14
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // r9
  struct _KPRCB *v42; // rcx
  _DWORD *SchedulerAssist; // rdx
  int v44; // eax
  struct _KPRCB *v45; // rcx
  int v46; // ecx
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // r12
  int v50; // r13d
  int v51; // edx
  __int64 v52; // r9
  __int64 v53; // r8
  unsigned int v54; // esi
  __int64 v55; // rcx
  unsigned int v56; // r10d
  __int64 v57; // r14
  int v58; // eax
  __int64 v59; // rdi
  int v60; // edx
  unsigned __int8 OldIrql; // di
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int64 v63; // r12
  unsigned __int64 v64; // r12
  __int64 v65; // rcx
  __int64 v66; // rdx
  unsigned int v67; // edx
  unsigned __int16 *v68; // rbx
  __int64 v69; // r14
  unsigned int v70; // ecx
  unsigned int v71; // r8d
  int v72; // eax
  _SLIST_ENTRY *v73; // rdx
  ULONG v74; // eax
  __int64 v75; // rcx
  unsigned __int64 v76; // rax
  unsigned int v77; // ebx
  __int64 v78; // r9
  __int64 v79; // rcx
  int v80; // eax
  unsigned __int64 v81; // r13
  unsigned int v82; // r10d
  __int64 v83; // rdx
  __int64 v84; // r9
  int updated; // eax
  int v86; // r9d
  __int64 v87; // r11
  unsigned __int64 v88; // rcx
  unsigned __int8 v89; // al
  void *v90; // rax
  char v91; // bl
  ULONG_PTR v92; // r12
  struct _KTHREAD *CurrentThread; // rcx
  bool v94; // zf
  struct _KPRCB *v95; // rcx
  _DWORD *v96; // rdx
  int v97; // eax
  struct _KPRCB *v98; // rcx
  int v99; // ecx
  __int64 v100; // rax
  __int64 v101; // r9
  char v102; // r11
  int v103; // r8d
  int v104; // r9d
  __int64 v105; // r10
  __int64 v106; // rax
  unsigned int v107; // edi
  char *v108; // rdx
  unsigned int v109; // ecx
  __int64 v110; // rsi
  int v111; // eax
  volatile signed __int32 *v112; // rbx
  volatile signed __int32 v113; // ecx
  unsigned __int8 v114; // bl
  struct _KPRCB *v115; // rcx
  __int64 v116; // rax
  __int64 v117; // rcx
  unsigned int v118; // ecx
  __int64 v119; // rdx
  __int64 v120; // rcx
  PVOID BaseAddress; // [rsp+40h] [rbp-C0h]
  int BaseAddressa; // [rsp+40h] [rbp-C0h]
  char *BaseAddressb; // [rsp+40h] [rbp-C0h]
  int v124; // [rsp+48h] [rbp-B8h]
  __int64 v125; // [rsp+48h] [rbp-B8h]
  int v126; // [rsp+48h] [rbp-B8h]
  unsigned int v127; // [rsp+50h] [rbp-B0h]
  int v128; // [rsp+50h] [rbp-B0h]
  unsigned int v129; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v130; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v131; // [rsp+58h] [rbp-A8h]
  __int64 v132; // [rsp+60h] [rbp-A0h]
  unsigned int v133; // [rsp+60h] [rbp-A0h]
  int v134; // [rsp+60h] [rbp-A0h]
  int v135; // [rsp+68h] [rbp-98h] BYREF
  int v136; // [rsp+6Ch] [rbp-94h] BYREF
  __int64 *v137; // [rsp+70h] [rbp-90h]
  __int64 v138; // [rsp+78h] [rbp-88h] BYREF
  __int64 v139; // [rsp+80h] [rbp-80h] BYREF
  __int64 v140; // [rsp+88h] [rbp-78h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+90h] [rbp-70h]
  __int64 v142; // [rsp+98h] [rbp-68h]
  __int64 v143; // [rsp+A0h] [rbp-60h] BYREF
  ULONG_PTR v144; // [rsp+A8h] [rbp-58h]
  __int64 v145; // [rsp+B0h] [rbp-50h]
  _SLIST_ENTRY **v146; // [rsp+B8h] [rbp-48h] BYREF
  PSLIST_ENTRY ListEnd; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v148; // [rsp+C8h] [rbp-38h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+D0h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE v150; // [rsp+E8h] [rbp-18h] BYREF
  unsigned __int64 v151; // [rsp+100h] [rbp+0h]
  __int64 retaddr; // [rsp+138h] [rbp+38h]
  unsigned int v153; // [rsp+140h] [rbp+40h]

  v5 = 0LL;
  v6 = a4;
  BaseAddress = 0LL;
  IsZeroingSupportPresent = ExPoolIsZeroingSupportPresent();
  v12 = v10 & 0xFFFFFBFF;
  if ( IsZeroingSupportPresent )
    v12 = v10;
  v13 = v12 & 0xFFFFFFFB;
  v124 = (v12 >> 9) & 2;
  if ( (v12 & 0x44) != 0x44 )
    v13 = v12;
  v153 = v13;
  v14 = v13;
  if ( (v13 & 0x201) == 0 )
  {
    v153 = v13;
    if ( (ExpPoolFlags & 0x400) != 0 )
    {
      v14 = v13 | 0x200;
      v153 = v13 | 0x200;
    }
  }
  if ( (ExpPoolFlags & 8) != 0 )
  {
    if ( (v14 & 0x80000080) == 0 )
      return VeAllocatePoolWithTagPriority(v14, v9, v11, HighPoolPriority, retaddr);
    v14 &= ~0x80u;
    v153 = v14;
  }
  v16 = ExpSanitizePoolTag(v11);
  BugCheckParameter4 = v16;
  if ( !v16 )
    goto LABEL_233;
  if ( v14 >= NonPagedPool
    && a2 <= 0xFE0
    && (MmSpecialPoolTag
     && a2
     && ((unsigned int)ExCheckSingleFilter(v16, (unsigned int)MmSpecialPoolTag) || v19 >= a2 + 16 && v19 < a2 + 32)
     || (a5 & 1) != 0) )
  {
    HeapSpecialPool = ExAllocateHeapSpecialPool((unsigned int)v14, a2, (unsigned int)BugCheckParameter4);
    BaseAddress = (PVOID)HeapSpecialPool;
    if ( HeapSpecialPool )
    {
      if ( _InterlockedIncrement(&ExpSpecialAllocations) == 1 )
        _InterlockedIncrement(&dword_140466650);
      v5 = HeapSpecialPool;
      goto LABEL_276;
    }
    v17 = v124;
  }
  v21 = 1LL;
  if ( a2 )
    v21 = a2;
  if ( (_DWORD)v6 == 0x80000000 )
    goto LABEL_31;
  if ( (unsigned int)v6 >= (unsigned __int16)KeNumberNodes )
    KeBugCheckEx(0xC2u, 0xEuLL, v6, (int)v14 & 0xFFFFFFFFFFFFFF7FuLL, BugCheckParameter4);
  if ( (_DWORD)v6 == 0x80000000 )
LABEL_31:
    LODWORD(v6) = KeGetCurrentPrcb()->ParentNode->Affinity.Reserved[0];
  if ( (unsigned int)v6 >= dword_14046F750 )
    LODWORD(v6) = 0;
  v22 = (char *)&unk_14046F780 + 8384 * (unsigned int)v6;
  if ( v14 >= NonPagedPool )
  {
    if ( (v14 & 0x21) == 0x21 )
    {
      v23 = *(_QWORD *)(*(_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[1] + 672) + 14560LL);
    }
    else
    {
      if ( (v14 & 1) != 0 )
        v24 = 2LL;
      else
        v24 = (v14 & 0x200) != 0;
      v23 = *(_QWORD *)&v22[8 * v24];
    }
  }
  else
  {
    v23 = *((_QWORD *)v22 + 3);
  }
  if ( v21 > 0xFE0 )
  {
    v25 = (v21 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
    v130 = v25;
    if ( (((_WORD)v21 + 15) & 0xFF0u) > 0xFC0 || v25 >= 0x10000 )
    {
      v25 = (v25 + 4095) & 0xFFFFFFFFFFFFF000uLL;
      v130 = v25;
    }
    if ( v25 < v21 )
      goto LABEL_231;
    if ( (v25 & 0xFFF) == 0 && v25 <= *(unsigned int *)(v23 + 464) )
    {
      v26 = v23 + 256;
      if ( v25 > *(unsigned int *)(v23 + 272) )
        v26 = v23 + 448;
      Internal = RtlpHpSegAlloc(v26, v25, ((unsigned int)v14 >> 9) & 2);
      BaseAddress = (PVOID)Internal;
      goto LABEL_110;
    }
    v28 = *(_QWORD *)(v23 + 48);
    v29 = (v17 | *(_DWORD *)(v23 + 20)) & 0x93000F0B;
    if ( (v28 || (v28 = qword_140436748) != 0) && v25 > v28 )
    {
      v30 = *(_QWORD *)(v23 + 56);
      if ( v30 )
        RtlpLogHeapFailure(20, v23, 0, v30, v25, *(_QWORD *)(v23 + 48));
      Internal = 0LL;
      BaseAddress = 0LL;
LABEL_110:
      if ( !Internal )
        goto LABEL_233;
      if ( (unsigned int)ExpAddTagForBigPages(Internal, BugCheckParameter4, v25, v14, 0, 0) )
      {
        memset(&LockHandle, 0, sizeof(LockHandle));
        if ( (_DWORD)BugCheckParameter4 == PoolHitTag )
          __debugbreak();
        v49 = (__int64)BaseAddress;
        if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
          EtwTracePool(3616, v14, BugCheckParameter4, (_DWORD)BaseAddress, v25);
        v50 = v14 & 0x20;
        if ( v50 )
        {
          v53 = ExpSessionPoolTrackTable;
          v51 = ExpSessionPoolTrackTableMask;
          v52 = ExpSessionPoolTrackTableSize;
        }
        else
        {
          v51 = PoolTrackTableMask;
          v52 = PoolTrackTableSize;
          v53 = (__int64)*(&ExPoolTagTables + KeGetPcr()->Prcb.Number);
        }
        v125 = v52;
        BaseAddressa = v51;
        v132 = v53;
        v54 = v51 & ((40543 * BugCheckParameter4) ^ ((40543 * BugCheckParameter4) >> 32));
        v55 = v54;
        v56 = v54;
        v57 = 56LL * v54;
        v58 = *(_DWORD *)(v53 + v57);
        v59 = v53 + v57;
        v127 = v54;
        if ( v58 == (_DWORD)BugCheckParameter4 )
        {
LABEL_138:
          LOBYTE(v14) = v153;
          if ( (v153 & 1) != 0 )
          {
            _InterlockedIncrement64((volatile signed __int64 *)(v59 + 40));
            _InterlockedExchangeAdd64((volatile signed __int64 *)(v59 + 32), v25);
          }
          else
          {
            _InterlockedIncrement64((volatile signed __int64 *)(v59 + 16));
            _InterlockedExchangeAdd64((volatile signed __int64 *)(v59 + 8), v25);
          }
          v5 = v49;
          goto LABEL_276;
        }
        while ( 1 )
        {
          if ( !v58 )
          {
            if ( !v50 )
            {
              v60 = *(_DWORD *)(v57 + PoolTrackTable);
              if ( v60 )
              {
                *(_DWORD *)v59 = v60;
                goto LABEL_137;
              }
              v51 = BaseAddressa;
            }
            if ( v55 != v52 - 1 )
            {
              if ( v50 )
              {
                _InterlockedCompareExchange((volatile signed __int32 *)v59, BugCheckParameter4, 0);
              }
              else
              {
                KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &LockHandle);
                if ( !*(_DWORD *)(PoolTrackTable + v57) )
                {
                  *(_DWORD *)(PoolTrackTable + v57) = BugCheckParameter4;
                  *(_DWORD *)v59 = BugCheckParameter4;
                }
                KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
                OldIrql = LockHandle.OldIrql;
                if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
                {
                  CurrentPrcb = KeGetCurrentPrcb();
                  _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                }
                __writecr8(OldIrql);
                v53 = v132;
                v56 = v127;
              }
              goto LABEL_137;
            }
          }
          v54 = v51 & (v54 + 1);
          if ( v54 == v56 )
          {
            LOBYTE(v14) = v153;
            ExpInsertPoolTrackerExpansion((unsigned int)BugCheckParameter4, v25, v153);
            v5 = v49;
            goto LABEL_276;
          }
LABEL_137:
          v51 = BaseAddressa;
          v52 = v125;
          v55 = v54;
          v57 = 56LL * v54;
          v58 = *(_DWORD *)(v53 + v57);
          v59 = v53 + v57;
          if ( v58 == (_DWORD)BugCheckParameter4 )
            goto LABEL_138;
        }
      }
LABEL_231:
      if ( BaseAddress )
        RtlpHpFreeHeap((__int128 *)v23, (__int64)BaseAddress, 0);
      goto LABEL_233;
    }
    v31 = 0LL;
    v32 = 0;
    v138 = 0LL;
    if ( (v29 & 0x1000000) == 0 )
    {
      v32 = *(_DWORD *)(v23 + 24);
      if ( v32 )
      {
        v29 |= 8u;
        if ( (_WORD)v32 != 1
          || (int)((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64 *))CLFS_LSN_NULL_EXT)(v23, 0LL, 1LL, &v138) < 0 )
        {
          goto LABEL_106;
        }
        v31 = v138;
      }
    }
    v33 = v25 + v31;
    v34 = v33 + 16;
    if ( (v29 & 0x10000000) == 0 )
      v34 = v33;
    if ( (v29 & 0x20000F08) != 0 )
      v34 = ((v34 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 16;
    if ( !v34 )
      v34 = 1LL;
    if ( v34 < v25 || v25 > 0x7FFFFFFFFFFFFFFFLL )
      goto LABEL_106;
    v35 = v29 & 0x13000003;
    if ( v34 <= (unsigned int)*(unsigned __int16 *)(v23 + 892) - 16 )
    {
      BaseAddress = (PVOID)RtlpHpLfhContextAllocate(v23 + 832, (unsigned int)v25, (unsigned int)v34, v35);
      Internal = (unsigned __int64)BaseAddress;
      if ( BaseAddress != (PVOID)-1LL )
      {
LABEL_100:
        if ( !Internal || (v29 & 0x30000F08) == 0 )
          goto LABEL_109;
        v48 = RtlpHpExtrasAppend(v23, Internal, v25, v36, v138, v29, 0);
        if ( !v32 )
        {
          Internal = (unsigned __int64)BaseAddress;
          goto LABEL_109;
        }
        *(_BYTE *)(v48 + 2) ^= (*(_BYTE *)(v48 + 2) ^ v32) & 0xF;
        if ( (_WORD)v32 == 1
          && (int)((__int64 (__fastcall *)(__int64, PVOID, __int64, __int64))CLFS_LSN_NULL_EXT)(
                    v23,
                    BaseAddress,
                    2LL,
                    v48 + 16) >= 0 )
        {
          Internal = (unsigned __int64)BaseAddress;
          goto LABEL_109;
        }
        RtlFreeHeap((PVOID)v23, 0, BaseAddress);
LABEL_106:
        Internal = 0LL;
        BaseAddress = 0LL;
LABEL_109:
        v14 = v153;
        goto LABEL_110;
      }
      v35 = v29 & 0x13000003;
    }
    if ( v34 > 0x20000 )
    {
      if ( v34 > *(unsigned int *)(v23 + 464) )
      {
        v47 = RtlpHpLargeAlloc(v23, v25, v34, v35);
      }
      else
      {
        v46 = v23 + 256;
        if ( v34 > *(unsigned int *)(v23 + 272) )
          v46 = v23 + 448;
        v47 = RtlpHpSegAlloc(v46, v25, v35);
      }
      BaseAddress = (PVOID)v47;
      Internal = v47;
    }
    else
    {
      v135 = 0;
      v140 = 0LL;
      BugCheckParameter2 = 0LL;
      v142 = 0LL;
      Internal = RtlpHpVsContextAllocateInternal(v23 + 640, (__int64)&v140, (__int64)&v135);
      BaseAddress = (PVOID)Internal;
      if ( v135 && (v29 & 1) == 0 )
      {
        if ( *(_DWORD *)(v23 + 648) )
        {
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
            ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(BugCheckParameter2, retaddr);
          else
            *(_DWORD *)BugCheckParameter2 = 0;
          v42 = KeGetCurrentPrcb();
          SchedulerAssist = v42->SchedulerAssist;
          if ( SchedulerAssist )
          {
            if ( v42->NestingLevel <= 1u )
            {
              v44 = SchedulerAssist[5] - 1;
              SchedulerAssist[5] = v44;
              if ( !v44 )
                KiRemoveSystemWorkPriorityKick(v42);
            }
          }
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && (unsigned __int8)v142 < 2u )
          {
            v45 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v45->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(v45);
          }
          __writecr8((unsigned __int8)v142);
          v25 = v130;
          Internal = (unsigned __int64)BaseAddress;
          BugCheckParameter2 = 0LL;
        }
        else
        {
          v37 = _InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL);
          v38 = BugCheckParameter2;
          if ( (v37 & 6) == 2 )
            ExfTryToWakePushLock(BugCheckParameter2);
          KeAbPostRelease(v38);
          KiLeaveGuardedRegionUnsafe(KeGetCurrentThread(), v39, v40, v41);
          Internal = (unsigned __int64)BaseAddress;
          v25 = v130;
          BugCheckParameter2 = 0LL;
        }
      }
    }
    goto LABEL_100;
  }
  v63 = v21 + 16;
  if ( (v14 & 4) != 0 )
  {
    v63 += *(unsigned int *)((char *)&Mm64BitPhysicalAddress + 2);
    if ( v63 > 0xFE0 )
    {
      v63 -= *(unsigned int *)((char *)&Mm64BitPhysicalAddress + 2);
      LOWORD(v14) = v14 & 0xFFFB;
      LOBYTE(v153) = v14;
    }
  }
  v64 = (v63 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
  v131 = v64;
  if ( v64 - 513 <= 0xD7F )
  {
    v65 = *(_QWORD *)(v23 + 40);
    v66 = RtlpLfhBucketIndexMap[(unsigned int)(v64 + 15) >> 4];
    v64 = (unsigned __int16)RtlpBucketBlockSizes[v66];
    v67 = v66 - 33;
    v131 = v64;
    if ( v65 )
    {
      v68 = (unsigned __int16 *)(v65 + ((v67 + 1LL) << 6));
      ++*((_DWORD *)v68 + 5);
      if ( !*v68 || (v69 = (__int64)RtlpInterlockedPopEntrySList((PSLIST_HEADER)(v65 + ((v67 + 1LL) << 6)))) == 0 )
      {
        ++*((_DWORD *)v68 + 6);
        v69 = 0LL;
      }
      if ( !v69 )
      {
        v70 = *v68;
        v71 = 0;
        if ( v70 < v68[8] )
          v71 = v68[8] - v70;
        if ( v71 >> 1 && (v72 = RtlpHpVsContextMultiAlloc(v23 + 640, (__int64)&v146, (__int64)&ListEnd)) != 0 )
        {
          v69 = (__int64)v146;
          v73 = *v146;
          v146 = (_SLIST_ENTRY **)*v146;
          v74 = v72 - 1;
          if ( v74 )
            InterlockedPushListSList((PSLIST_HEADER)v68, v73, ListEnd, v74);
        }
        else
        {
          v69 = 0LL;
        }
      }
      if ( (v14 & 0x400) != 0 )
      {
        if ( !v69 )
          goto LABEL_163;
        memset((void *)v69, 0, v64);
      }
      if ( v69 )
        goto LABEL_238;
    }
  }
LABEL_163:
  v75 = *(_QWORD *)(v23 + 48);
  v76 = v75;
  v77 = (v124 | *(_DWORD *)(v23 + 20)) & 0x93000F0B;
  v133 = v77;
  if ( (v75 || (v76 = qword_140436748) != 0) && v64 > v76 )
  {
    v78 = *(_QWORD *)(v23 + 56);
    if ( v78 )
      RtlpLogHeapFailure(20, v23, 0, v78, v64, v75);
    goto LABEL_231;
  }
  v128 = 0;
  v79 = 0LL;
  v139 = 0LL;
  if ( (v77 & 0x1000000) == 0 )
  {
    v80 = *(_DWORD *)(v23 + 24);
    v128 = v80;
    if ( v80 )
    {
      v77 |= 8u;
      v133 = v77;
      if ( (_WORD)v80 != 1
        || (int)((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64 *))CLFS_LSN_NULL_EXT)(v23, 0LL, 1LL, &v139) < 0 )
      {
        goto LABEL_231;
      }
      v79 = v139;
    }
  }
  v81 = v79 + v64 + 16;
  if ( (v77 & 0x10000000) == 0 )
    v81 = v79 + v64;
  if ( (v77 & 0x20000F08) != 0 )
    v81 = ((v81 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 16;
  if ( !v81 )
    v81 = 1LL;
  if ( v81 >= v64 && v64 <= 0x7FFFFFFFFFFFFFFFLL )
  {
    v82 = v77 & 0x13000003;
    if ( v81 > (unsigned int)*(unsigned __int16 *)(v23 + 892) - 16 )
      goto LABEL_195;
    v83 = (unsigned int)(v81 + 2);
    if ( (_DWORD)v64 == (_DWORD)v81 )
      v83 = (unsigned int)v81;
    v84 = v23 + 832;
    v137 = (__int64 *)(v23 + 832 + 8 * (RtlpLfhBucketIndexMap[(unsigned int)(v83 + 15) >> 4] + 16LL));
    if ( (*v137 & 1) != 0 )
    {
      updated = RtlpHpLfhBucketUpdateStats(v23 + 832, v83, 1LL);
      v82 = v77 & 0x13000003;
      if ( !updated )
      {
        v69 = -1LL;
        goto LABEL_194;
      }
      v84 = v23 + 832;
    }
    v87 = *v137;
    v88 = (((((unsigned int)RtlpHpLfhPerfFlags >> 10) & 1) + 2LL) << 6)
        + *(unsigned __int8 *)(v84 + 56)
        - (unsigned __int64)((*(_BYTE *)(v84 + 56) - 1) & 7)
        + 7;
    v148 = ((((unsigned int)RtlpHpLfhPerfFlags >> 10) & 1) + 2LL) << 6;
    v151 = v88;
    if ( *(_BYTE *)(v87 + 2) == 1 )
      v89 = 0;
    else
      v89 = *(_BYTE *)(BYTE5(KeGetCurrentThread()[1].Ucb) + v87 + v148);
    v90 = (void *)RtlpHpLfhSlotAllocate((int)v23 + 832, v87, *(_QWORD *)(v88 + v87 + 8LL * v89), v64, v82);
    v82 = v77 & 0x13000003;
    v69 = (__int64)v90;
    if ( v90 && (v77 & 2) != 0 )
    {
      memset(v90, 0, (unsigned int)v64);
      v82 = v77 & 0x13000003;
    }
LABEL_194:
    v64 = v131;
    if ( v69 != -1 )
    {
LABEL_224:
      if ( !v69 )
      {
LABEL_230:
        LOBYTE(v14) = v153;
        goto LABEL_231;
      }
      if ( (v133 & 0x30000F08) != 0 )
      {
        v101 = RtlpHpExtrasAppend(v23, v69, v64, v86, v139, v133, 0);
        if ( v128 )
        {
          *(_BYTE *)(v101 + 2) ^= (*(_BYTE *)(v101 + 2) ^ v128) & 0xF;
          if ( (_WORD)v128 != 1
            || (int)((__int64 (__fastcall *)(__int64, __int64, __int64, __int64))CLFS_LSN_NULL_EXT)(
                      v23,
                      v69,
                      2LL,
                      v101 + 16) < 0 )
          {
            RtlFreeHeap((PVOID)v23, 0, (PVOID)v69);
            goto LABEL_230;
          }
        }
      }
      goto LABEL_236;
    }
LABEL_195:
    if ( v81 > 0x20000 )
    {
      if ( v81 > *(unsigned int *)(v23 + 464) )
      {
        v100 = RtlpHpLargeAlloc(v23, v64, v81, v82);
      }
      else
      {
        v99 = v23 + 256;
        if ( v81 > *(unsigned int *)(v23 + 272) )
          v99 = v23 + 448;
        v100 = RtlpHpSegAlloc(v99, v64, v82);
      }
      v69 = v100;
    }
    else
    {
      v136 = 0;
      v143 = 0LL;
      v144 = 0LL;
      v145 = 0LL;
      v69 = RtlpHpVsContextAllocateInternal(v23 + 640, (__int64)&v143, (__int64)&v136);
      if ( v136 && (v77 & 1) == 0 )
      {
        if ( *(_DWORD *)(v23 + 648) )
        {
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
            ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v144, retaddr);
          else
            *(_DWORD *)v144 = 0;
          v95 = KeGetCurrentPrcb();
          v96 = v95->SchedulerAssist;
          if ( v96 )
          {
            if ( v95->NestingLevel <= 1u )
            {
              v97 = v96[5] - 1;
              v96[5] = v97;
              if ( !v97 )
                KiRemoveSystemWorkPriorityKick(v95);
            }
          }
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && (unsigned __int8)v145 < 2u )
          {
            v98 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v98->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(v98);
          }
          __writecr8((unsigned __int8)v145);
          v64 = v131;
          v144 = 0LL;
        }
        else
        {
          v91 = _InterlockedExchangeAdd64((volatile signed __int64 *)v144, 0xFFFFFFFFFFFFFFFFuLL);
          v92 = v144;
          if ( (v91 & 6) == 2 )
            ExfTryToWakePushLock(v144);
          KeAbPostRelease(v92);
          CurrentThread = KeGetCurrentThread();
          v94 = CurrentThread->SpecialApcDisable++ == -1;
          if ( v94
            && ($C6908ADE9723D0A04AF8EE82D8D15C40 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
          {
            KiCheckForKernelApcDelivery();
          }
          v64 = v131;
          v144 = 0LL;
        }
      }
    }
    goto LABEL_224;
  }
  v69 = 0LL;
LABEL_236:
  if ( !v69 )
    goto LABEL_230;
  LOBYTE(v14) = v153;
LABEL_238:
  *(_DWORD *)(v69 + 4) = BugCheckParameter4;
  *(_BYTE *)(v69 + 2) = v64 >> 4;
  *(_BYTE *)v69 = 0;
  v102 = v14 & 0x6D | 2;
  memset(&v150, 0, sizeof(v150));
  *(_BYTE *)(v69 + 3) = v102;
  if ( (_DWORD)BugCheckParameter4 == PoolHitTag )
    __debugbreak();
  if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
  {
    EtwTracePool(3616, v14 & 0x6D | 2, BugCheckParameter4, v69 + 16, v64);
    v102 = v14 & 0x6D | 2;
  }
  v103 = v102 & 0x20;
  v134 = v103;
  if ( (v102 & 0x20) != 0 )
  {
    v105 = ExpSessionPoolTrackTable;
    v104 = ExpSessionPoolTrackTableMask;
    v106 = ExpSessionPoolTrackTableSize;
  }
  else
  {
    v104 = PoolTrackTableMask;
    v105 = (__int64)*(&ExPoolTagTables + KeGetPcr()->Prcb.Number);
    v106 = PoolTrackTableSize;
  }
  BaseAddressb = (char *)v106;
  v126 = v104;
  v137 = (__int64 *)v105;
  v107 = v104 & ((40543 * BugCheckParameter4) ^ ((40543 * BugCheckParameter4) >> 32));
  v108 = (char *)v107;
  v109 = v107;
  v110 = 56LL * v107;
  v111 = *(_DWORD *)(v105 + v110);
  v112 = (volatile signed __int32 *)(v105 + v110);
  v129 = v107;
  if ( v111 != (_DWORD)BugCheckParameter4 )
  {
    while ( 1 )
    {
      if ( !v111 )
      {
        if ( !v103 )
        {
          v113 = *(_DWORD *)(v110 + PoolTrackTable);
          if ( v113 )
          {
            *v112 = v113;
            goto LABEL_263;
          }
          v109 = v129;
        }
        if ( v108 != BaseAddressb - 1 )
        {
          if ( v103 )
          {
            _InterlockedCompareExchange(v112, BugCheckParameter4, 0);
          }
          else
          {
            KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &v150);
            if ( !*(_DWORD *)(PoolTrackTable + v110) )
            {
              *(_DWORD *)(PoolTrackTable + v110) = BugCheckParameter4;
              *v112 = BugCheckParameter4;
            }
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&v150);
            v114 = v150.OldIrql;
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v150.OldIrql < 2u )
            {
              v115 = KeGetCurrentPrcb();
              _InterlockedAnd((volatile signed __int32 *)v115->SchedulerAssist, 0xFFFEFFFF);
              KiRemoveSystemWorkPriorityKick(v115);
            }
            __writecr8(v114);
            v103 = v134;
            v104 = v126;
            v105 = (__int64)v137;
          }
          goto LABEL_263;
        }
      }
      v107 = v104 & (v107 + 1);
      if ( v107 == v109 )
      {
        ExpInsertPoolTrackerExpansion((unsigned int)BugCheckParameter4, v64, v14 & 0x6D | 2u);
        goto LABEL_270;
      }
LABEL_263:
      v109 = v129;
      v108 = (char *)v107;
      v110 = 56LL * v107;
      v111 = *(_DWORD *)(v105 + v110);
      v112 = (volatile signed __int32 *)(v105 + v110);
      if ( v111 == (_DWORD)BugCheckParameter4 )
      {
        v102 = v14 & 0x6D | 2;
        break;
      }
    }
  }
  if ( (v102 & 1) != 0 )
  {
    v116 = 8LL;
    v117 = 10LL;
  }
  else
  {
    v116 = 2LL;
    v117 = 4LL;
  }
  _InterlockedIncrement64((volatile signed __int64 *)&v112[v117]);
  _InterlockedExchangeAdd64((volatile signed __int64 *)&v112[v116], v64);
LABEL_270:
  if ( (v14 & 4) != 0 )
  {
    *(_BYTE *)(v69 + 3) &= ~4u;
    v118 = (*(_DWORD *)((char *)&Mm64BitPhysicalAddress + 2) - 1) & (-16 - v69);
    if ( v118 )
    {
      v119 = v69 + v118;
      v120 = (__int64)v118 >> 4;
      *(_BYTE *)v119 = v120;
      *(_BYTE *)(v119 + 2) = *(_BYTE *)(v69 + 2) - v120;
      *(_BYTE *)(v119 + 1) = *(_BYTE *)(v69 + 1);
      *(_BYTE *)(v119 + 3) = *(_BYTE *)(v69 + 3) | 4;
      *(_DWORD *)(v119 + 4) = *(_DWORD *)(v69 + 4);
      if ( (unsigned __int8)*(_WORD *)v119 > 1u )
        *(_QWORD *)(v69 + 16) = ExpPoolQuotaCookie ^ v119;
      v69 = v119;
    }
  }
  v5 = v69 + 16;
LABEL_276:
  if ( !v5 )
  {
LABEL_233:
    if ( (v14 & 0x10) != 0 )
      RtlRaiseStatus(-1073741670);
  }
  return v5;
}
