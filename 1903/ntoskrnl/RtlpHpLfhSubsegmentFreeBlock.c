/*
 * XREFs of RtlpHpLfhSubsegmentFreeBlock @ 0x14001D800
 * Callers:
 *     RtlpHpSegFree @ 0x14001D4C4 (RtlpHpSegFree.c)
 *     RtlpHpLfhSlotAllocate @ 0x140038A80 (RtlpHpLfhSlotAllocate.c)
 *     ExFreeHeapPool @ 0x140064DB0 (ExFreeHeapPool.c)
 * Callees:
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x14001E120 (RtlpHpLfhSubsegmentDecommitPages.c)
 *     RtlpHpAcquireLockExclusive @ 0x14001F3C0 (RtlpHpAcquireLockExclusive.c)
 *     MiGetSystemRegionType @ 0x14003ED30 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x14003F0E0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003F170 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x14003F4F0 (MmGetSessionIdEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060A60 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiAbEntryRemoveFromTree @ 0x140061160 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x14009B920 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x14012044C (RtlpHpLfhBucketAddSubsegment.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     RtlpLogHeapFailure @ 0x14031A17C (RtlpLogHeapFailure.c)
 */

__int64 __fastcall RtlpHpLfhSubsegmentFreeBlock(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  signed __int64 v5; // r15
  char v7; // bp
  unsigned __int64 v8; // r8
  unsigned int v9; // r12d
  signed __int64 *v10; // rsi
  unsigned int SessionId; // r13d
  int v12; // ebx
  unsigned int v13; // edx
  __int64 v14; // rcx
  __int64 v15; // rax
  char v16; // cl
  unsigned __int64 v17; // r11
  int v18; // edx
  unsigned __int16 v19; // ax
  unsigned int v20; // ecx
  unsigned __int64 v21; // rax
  char v22; // cl
  char v23; // cl
  unsigned int v24; // r10d
  __int64 v25; // rax
  unsigned __int64 v26; // rcx
  int v27; // edx
  signed __int16 v28; // ax
  int v29; // r14d
  int v30; // ebp
  __int64 v31; // rdx
  signed __int64 v33; // rbx
  unsigned int v34; // ecx
  unsigned __int8 v35; // al
  __int64 v36; // rdx
  int v37; // r10d
  char v38; // al
  signed __int64 v39; // rcx
  unsigned __int64 *v40; // rax
  signed __int64 **v41; // rax
  __int64 v42; // rbx
  ULONG_PTR v43; // r15
  struct _KTHREAD *v44; // rbx
  ULONG_PTR v45; // r9
  struct _KPRCB *v46; // rcx
  unsigned __int64 v47; // rdx
  unsigned __int8 v48; // r14
  unsigned int v49; // edx
  bool v50; // zf
  __int64 v51; // rcx
  int v52; // eax
  __int64 v53; // rcx
  _KLOCK_ENTRY *v54; // rbp
  unsigned __int8 v55; // al
  __int64 v56; // rdx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // rax
  ULONG_PTR v60; // r15
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int8 v62; // si
  unsigned int v63; // edx
  __int64 v64; // rcx
  int v65; // eax
  __int64 v66; // rcx
  _KLOCK_ENTRY *v67; // rdi
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v69; // rdx
  __int64 v70; // rdx
  __int64 v71; // r8
  __int64 v72; // r9
  ULONG_PTR v73; // r15
  unsigned int v74; // edx
  ULONG_PTR v75; // r10
  unsigned int v76; // r8d
  __int64 v77; // rcx
  ULONG_PTR v78; // rcx
  __int64 v79; // rdx
  __int64 v80; // rdx
  __int64 v81; // r8
  __int64 v82; // r9
  ULONG_PTR v83; // rcx
  struct _KPRCB *v84; // rcx
  signed __int64 v85; // rax
  unsigned int v86; // [rsp+30h] [rbp-88h]
  int v87; // [rsp+34h] [rbp-84h] BYREF
  int v88; // [rsp+38h] [rbp-80h] BYREF
  int v89; // [rsp+3Ch] [rbp-7Ch] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+40h] [rbp-78h]
  int v91; // [rsp+48h] [rbp-70h]
  int v92; // [rsp+4Ch] [rbp-6Ch]
  unsigned int v93; // [rsp+50h] [rbp-68h]
  int v94; // [rsp+54h] [rbp-64h]
  int v95; // [rsp+58h] [rbp-60h]
  ULONG_PTR v96; // [rsp+60h] [rbp-58h]
  unsigned __int8 v98; // [rsp+C8h] [rbp+10h]
  volatile LONG *BugCheckParameter2; // [rsp+D0h] [rbp+18h]
  char BugCheckParameter2a; // [rsp+D0h] [rbp+18h]
  unsigned int v101; // [rsp+D8h] [rbp+20h]

  v101 = a4;
  v98 = -1;
  v5 = 0LL;
  v7 = a4;
  v93 = qword_1404367A8 ^ *(_DWORD *)(a2 + 40) ^ ((unsigned int)a2 >> 12);
  v8 = HIWORD(v93);
  v9 = 1;
  v10 = (signed __int64 *)a2;
  SessionId = -1;
  if ( a3 )
  {
    v12 = (unsigned __int16)v93;
    v95 = 0;
    v13 = a3 - a2 - v8;
    v14 = *(_QWORD *)(a1 + 8LL * RtlpLfhBucketIndexMap[((unsigned int)(unsigned __int16)v93 + 15) >> 4] + 128);
    v15 = *(unsigned int *)(v14 + 72);
    v16 = *(_BYTE *)(v14 + 76);
    if ( (_DWORD)v15 )
    {
      v17 = (v15 * (unsigned __int64)v13) >> v16;
      v18 = v13 - v17 * (unsigned __int16)v93;
    }
    else
    {
      LODWORD(v17) = v13 >> v16;
      v18 = ((1 << v16) - 1) & v13;
    }
    if ( !v18 )
    {
      v19 = *((_WORD *)v10 + 18);
      v20 = 2 * v17;
      if ( v19 >= (unsigned __int16)v17 )
        v19 = v17;
      *((_WORD *)v10 + 18) = v19;
      v21 = v20;
      v22 = v20 & 0x3F;
      v8 = ~(3LL << v22);
      a4 = (__int64)&v10[v21 >> 6];
      _m_prefetchw((const void *)(a4 + 48));
      if ( (((unsigned __int64)_InterlockedAnd64((volatile signed __int64 *)(a4 + 48), v8) >> v22) & 1) != 0 )
      {
        if ( *((_BYTE *)v10 + 45) > 1u )
        {
          v23 = *((_BYTE *)v10 + 44);
          v24 = a3 - (_DWORD)v10;
          v25 = v24 >> v23;
          a4 = 2 * v25;
          v8 = (unsigned __int64)v10 + 2 * v25 + *((unsigned __int16 *)v10 + 23);
          _m_prefetchw((const void *)v8);
          v26 = v8 + 2LL * (((v12 + v24 - 1) >> v23) - (unsigned int)v25 + 1);
          LODWORD(a3) = -1;
          v27 = 0;
          if ( v8 < v26 )
          {
            do
            {
              v28 = _InterlockedDecrement16((volatile signed __int16 *)v8);
              if ( v28 )
              {
                if ( v28 == -1 )
                  --v27;
              }
              else
              {
                ++v27;
                if ( (_DWORD)a3 == -1 )
                  a3 = a4 >> 1;
              }
              v8 += 2LL;
              a4 += 2LL;
            }
            while ( v8 < v26 );
            if ( v27 )
            {
              v47 = (v27 << *((_BYTE *)v10 + 44)) / 4096;
              if ( (RtlpHpLfhPerfFlags & 0x20) != 0 )
                _InterlockedExchangeAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 58) + a1 + 24), v47);
            }
            if ( (_DWORD)a3 != -1 )
              RtlpHpLfhSubsegmentDecommitPages(a1, (_DWORD)v10, a3, 2, v7);
          }
        }
        goto LABEL_17;
      }
      RtlpLogHeapFailure(17, *(_QWORD *)a1, a3, (_DWORD)v10, (unsigned int)v17, 0LL);
    }
    return 0;
  }
LABEL_17:
  v29 = *((unsigned __int16 *)v10 + 17);
  v30 = *((unsigned __int16 *)v10 + 16);
  while ( 1 )
  {
    if ( !v5 && (!(_WORD)v30 || (unsigned __int16)v30 == v29 - 1) )
    {
      v33 = v10[2];
      v34 = *(unsigned __int8 *)(a1 + 57);
      v86 = v34;
LABEL_28:
      v31 = 3LL;
      while ( 1 )
      {
        while ( !v33 )
        {
          v33 = _InterlockedCompareExchange64(v10 + 2, 3LL, 0LL);
          if ( !v33 )
          {
            v5 = 0LL;
LABEL_24:
            if ( v5 )
            {
              v60 = v5 + 16;
              if ( *(_BYTE *)(a1 + 57) )
              {
                ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v60);
                if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v98 < 2u )
                {
                  CurrentPrcb = KeGetCurrentPrcb();
                  _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                }
                __writecr8(v98);
              }
              else
              {
                if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v60, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                  ExfTryToWakePushLock(v60);
                v89 = 0;
                CurrentThread = KeGetCurrentThread();
                if ( (unsigned int)MiGetSystemRegionType(v60, v31, v8, a4) == 1 )
                  SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
                --CurrentThread->SpecialApcDisable;
                v62 = ++CurrentThread->AbAllocationRegionCount;
                v63 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
                v50 = !_BitScanReverse((unsigned int *)&v64, v63);
                v94 = v64;
                if ( v50 )
                  goto LABEL_109;
                while ( 1 )
                {
                  v65 = 1 << v64;
                  v66 = v64;
                  v67 = &CurrentThread->LockEntries[v66];
                  v63 &= ~v65;
                  if ( (v67->AcquiredByte & 1) != 0
                    && (*(_DWORD *)&v67->LockState.0 & 1) == 0
                    && (*(_QWORD *)&v67->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v60 & 0x7FFFFFFFFFFFFFFCLL)
                    && v67->LockState.SessionId == SessionId )
                  {
                    v67->AcquiredByte &= ~1u;
                    if ( v67->LockState.0 )
                      break;
                  }
                  v50 = !_BitScanReverse((unsigned int *)&v64, v63);
                  v94 = v64;
                  if ( v50 )
                    goto LABEL_109;
                }
                if ( !v67 )
                {
LABEL_109:
                  if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
                    KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v60, SessionId, 0LL);
                }
                else
                {
                  v67->CrossThreadReleasableAndBusyByte |= 2u;
                  if ( (__int64)v67->LockState.LockState < 0 )
                    KiAbEntryRemoveFromTree(&CurrentThread->LockEntries[v66].TreeNode);
                  v89 = v67->BoostBitmap.AllFields & 0x1FFFF;
                  v67->BoostBitmap.AllFields &= 0xFFFE0000;
                  v67->ThreadLocalFlags &= ~1u;
                  v67->LockState.0 = 0LL;
                  v69 = ((char *)v67 - (char *)CurrentThread - 800) / 96;
                  if ( v62 == 1 )
                    CurrentThread->AbEntrySummary |= 1 << v69;
                  else
                    _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v69);
                }
                --CurrentThread->AbAllocationRegionCount;
                KiAbThreadRemoveBoosts(CurrentThread, v60, &v89);
                v50 = CurrentThread->SpecialApcDisable++ == -1;
                if ( v50
                  && ($6EAC78A6FCFADE0A5FA44F358736B38F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
                {
                  KiCheckForKernelApcDelivery();
                }
                KiLeaveGuardedRegionUnsafe(KeGetCurrentThread(), v70, v71, v72);
              }
            }
            return v9;
          }
        }
        if ( (v33 & 1) == 0 )
        {
          BugCheckParameter2 = (volatile LONG *)(v33 + 16);
          v5 = v33;
          v35 = RtlpHpAcquireLockExclusive(v33 + 16, v34, v8);
          v33 = v10[2];
          v98 = v35;
          if ( v5 == v33 )
            goto LABEL_32;
          v73 = (ULONG_PTR)BugCheckParameter2;
          if ( v86 )
          {
            ExReleaseSpinLockExclusiveFromDpcLevel(BugCheckParameter2);
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v98 < 2u )
            {
              v84 = KeGetCurrentPrcb();
              _InterlockedAnd((volatile signed __int32 *)v84->SchedulerAssist, 0xFFFEFFFF);
              KiRemoveSystemWorkPriorityKick(v84);
            }
            __writecr8(v98);
            v34 = v86;
          }
          else
          {
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock(BugCheckParameter2);
            v87 = 0;
            BugCheckParameter1 = (ULONG_PTR)KeGetCurrentThread();
            if ( (unsigned int)MiGetSystemRegionType(BugCheckParameter2, v36, v8, a4) == 1 )
              v74 = MmGetSessionIdEx(*(_QWORD *)(BugCheckParameter1 + 184));
            else
              v74 = -1;
            v75 = BugCheckParameter1;
            --*(_WORD *)(BugCheckParameter1 + 486);
            ++*(_BYTE *)(v75 + 794);
            v76 = (*(char *)(v75 + 792) | *(char *)(v75 + 1422)) ^ 0x3F;
            BugCheckParameter2a = *(_BYTE *)(v75 + 794);
            v50 = !_BitScanReverse((unsigned int *)&v77, v76);
            v91 = v77;
            if ( v50 )
              goto LABEL_155;
            while ( 1 )
            {
              v76 &= ~(1 << v77);
              v78 = v75 + 96 * v77 + 800;
              v96 = v78;
              if ( (*(_BYTE *)(v78 + 26) & 1) != 0
                && (*(_DWORD *)(v78 + 32) & 1) == 0
                && (*(_QWORD *)(v78 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v73 & 0x7FFFFFFFFFFFFFFCLL)
                && *(_DWORD *)(v78 + 40) == v74 )
              {
                *(_BYTE *)(v78 + 26) &= ~1u;
                if ( *(_QWORD *)(v78 + 32) )
                  break;
              }
              v50 = !_BitScanReverse((unsigned int *)&v77, v76);
              v91 = v77;
              if ( v50 )
                goto LABEL_155;
            }
            if ( !v78 )
            {
LABEL_155:
              if ( (*(_DWORD *)(v75 + 120) & 0x10000) == 0 )
                KeBugCheckEx(0x162u, v75, v73, v74, 0LL);
            }
            else
            {
              *(_BYTE *)(v78 + 32) |= 2u;
              if ( *(__int64 *)(v78 + 32) < 0 )
              {
                KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v78);
                v75 = BugCheckParameter1;
                v78 = v96;
              }
              v87 = 0;
              v87 = *(_DWORD *)(v78 + 88) & 0x1FFFF;
              *(_DWORD *)(v78 + 88) &= 0xFFFE0000;
              *(_BYTE *)(v78 + 25) &= ~1u;
              *(_QWORD *)(v78 + 32) = 0LL;
              v79 = (__int64)(v78 - v75 - 800) / 96;
              if ( BugCheckParameter2a == 1 )
                *(_BYTE *)(v75 + 792) |= 1 << v79;
              else
                _InterlockedOr8((volatile signed __int8 *)(v75 + 1422), 1 << v79);
            }
            --*(_BYTE *)(v75 + 794);
            KiAbThreadRemoveBoosts(v75, v73, &v87);
            v83 = BugCheckParameter1;
            v50 = (*(_WORD *)(BugCheckParameter1 + 486))++ == 0xFFFF;
            if ( v50 && *(_QWORD *)(v83 + 152) != v83 + 152 )
              KiCheckForKernelApcDelivery();
            KiLeaveGuardedRegionUnsafe(KeGetCurrentThread(), v80, v81, v82);
            v34 = 0;
          }
          goto LABEL_28;
        }
        v85 = _InterlockedCompareExchange64(v10 + 2, v33 & 1 | (v33 + 2) & 0xFFFFFFFFFFFFFFFEuLL, v33);
        v50 = v33 == v85;
        v33 = v85;
        if ( v50 )
          break;
        v34 = v86;
      }
      v5 = 0LL;
LABEL_32:
      if ( !v5 )
        return v9;
    }
    v31 = (unsigned int)(v30 + 1);
    v30 = (unsigned __int16)_InterlockedCompareExchange16((volatile signed __int16 *)v10 + 16, v30 + 1, v30);
    if ( (unsigned __int16)v31 == v30 + 1 )
    {
      if ( (_WORD)v30 )
      {
        if ( (unsigned __int16)v30 != v29 - 1 )
          goto LABEL_24;
        v37 = 2;
      }
      else
      {
        v37 = 0;
      }
      v38 = *((_BYTE *)v10 + 38);
      switch ( v38 )
      {
        case 1:
          v8 = v5 + 40;
          goto LABEL_37;
        case 0:
          v8 = v5 + 24;
          a4 = v5 + 8;
          goto LABEL_38;
        case 2:
          v8 = 0LL;
LABEL_37:
          a4 = 0LL;
LABEL_38:
          if ( v37 )
          {
            v39 = 0LL;
            v31 = 0LL;
          }
          else
          {
            v39 = v5 + 24;
            v31 = v5 + 8;
          }
          if ( v8 )
          {
            v8 = *v10;
            v40 = (unsigned __int64 *)v10[1];
            if ( *(signed __int64 **)(*v10 + 8) == v10 && (signed __int64 *)*v40 == v10 )
            {
              *v40 = v8;
              *(_QWORD *)(v8 + 8) = v40;
              if ( a4 )
                --*(_QWORD *)a4;
              goto LABEL_45;
            }
LABEL_169:
            __fastfail(3u);
          }
LABEL_45:
          *((_BYTE *)v10 + 38) = v37;
          if ( v39 )
          {
            v41 = *(signed __int64 ***)(v39 + 8);
            if ( *v41 != (signed __int64 *)v39 )
              goto LABEL_169;
            *v10 = v39;
            v10[1] = (signed __int64)v41;
            *v41 = v10;
            *(_QWORD *)(v39 + 8) = v10;
            if ( v31 )
              ++*(_QWORD *)v31;
            v10 = 0LL;
          }
          if ( (*(_BYTE *)v5 & 1) == 0 && *(_QWORD *)(v5 + 8) > 8uLL )
          {
            v10 = *(signed __int64 **)v39;
            v59 = **(_QWORD **)v39;
            if ( *(_QWORD *)(*(_QWORD *)v39 + 8LL) != v39 || *(signed __int64 **)(v59 + 8) != v10 )
              goto LABEL_169;
            *(_QWORD *)v39 = v59;
            *(_QWORD *)(v59 + 8) = v39;
            --*(_QWORD *)v31;
            *((_BYTE *)v10 + 38) = 2;
          }
          if ( v10 && *((_BYTE *)v10 + 38) == 2 )
            v10[2] = 0LL;
          break;
      }
      v42 = a1;
      v43 = v5 + 16;
      if ( *(_BYTE *)(a1 + 57) )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v43);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v98 < 2u )
        {
          v46 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v46->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v46);
        }
        __writecr8(v98);
      }
      else
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v43, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v43);
        v88 = 0;
        v44 = KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType(v43, v31, v8, a4) == 1 )
          v45 = (unsigned int)MmGetSessionIdEx(v44->ApcState.Process);
        else
          v45 = 0xFFFFFFFFLL;
        --v44->SpecialApcDisable;
        v48 = ++v44->AbAllocationRegionCount;
        v49 = ((char)v44->AbEntrySummary | (char)v44->AbOrphanedEntrySummary) ^ 0x3F;
        v50 = !_BitScanReverse((unsigned int *)&v51, v49);
        v92 = v51;
        if ( v50 )
          goto LABEL_74;
        while ( 1 )
        {
          v52 = 1 << v51;
          v53 = v51;
          v54 = &v44->LockEntries[v53];
          v49 &= ~v52;
          if ( (v54->AcquiredByte & 1) != 0
            && (*(_DWORD *)&v54->LockState.0 & 1) == 0
            && (*(_QWORD *)&v54->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v43 & 0x7FFFFFFFFFFFFFFCLL)
            && v54->LockState.SessionId == (_DWORD)v45 )
          {
            v54->AcquiredByte &= ~1u;
            if ( v54->LockState.0 )
              break;
          }
          v50 = !_BitScanReverse((unsigned int *)&v51, v49);
          v92 = v51;
          if ( v50 )
            goto LABEL_74;
        }
        if ( !v54 )
        {
LABEL_74:
          if ( (*((_DWORD *)&v44->0 + 1) & 0x10000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)v44, v43, v45, 0LL);
        }
        else
        {
          v54->CrossThreadReleasableAndBusyByte |= 2u;
          if ( (__int64)v54->LockState.LockState < 0 )
            KiAbEntryRemoveFromTree(&v44->LockEntries[v53].TreeNode);
          v88 = v54->BoostBitmap.AllFields & 0x1FFFF;
          v54->BoostBitmap.AllFields &= 0xFFFE0000;
          v54->ThreadLocalFlags &= ~1u;
          v54->LockState.0 = 0LL;
          v55 = 1 << (((char *)v54 - (char *)v44 - 800) / 96);
          if ( v48 == 1 )
            v44->AbEntrySummary |= v55;
          else
            _InterlockedOr8((volatile signed __int8 *)&v44->AbOrphanedEntrySummary, v55);
        }
        --v44->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts(v44, v43, &v88);
        v50 = v44->SpecialApcDisable++ == -1;
        if ( v50 && ($6EAC78A6FCFADE0A5FA44F358736B38F *)v44->ApcState.ApcListHead[0].Flink != &v44->152 )
          KiCheckForKernelApcDelivery();
        KiLeaveGuardedRegionUnsafe(KeGetCurrentThread(), v56, v57, v58);
        v42 = a1;
      }
      v5 = 0LL;
      if ( v10 )
        RtlpHpLfhBucketAddSubsegment(
          v42,
          *(_QWORD *)(v42 + 8LL * RtlpLfhBucketIndexMap[((unsigned int)(unsigned __int16)v93 + 15) >> 4] + 128),
          v10,
          v101);
      goto LABEL_24;
    }
  }
}
