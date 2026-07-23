/*
 * XREFs of ExAllocateHeapPool @ 0x1400BA0B0
 * Callers:
 *     ExAllocatePoolWithTagPriority @ 0x1400FD8B0 (ExAllocatePoolWithTagPriority.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 * Callees:
 *     RtlpHpFreeHeap @ 0x140007BC0 (RtlpHpFreeHeap.c)
 *     RtlpHpLfhContextAllocate @ 0x140008C54 (RtlpHpLfhContextAllocate.c)
 *     RtlpHpLfhBucketUpdateStats @ 0x140008D00 (RtlpHpLfhBucketUpdateStats.c)
 *     RtlpHpLargeAlloc @ 0x140009ED8 (RtlpHpLargeAlloc.c)
 *     RtlpHpSegAlloc @ 0x14000B118 (RtlpHpSegAlloc.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x14001F500 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     KxAcquireQueuedSpinLock @ 0x1400AC8F0 (KxAcquireQueuedSpinLock.c)
 *     RtlpHpLfhSlotAllocate @ 0x1400BADE0 (RtlpHpLfhSlotAllocate.c)
 *     RtlpHpVsContextAllocate @ 0x1400BC230 (RtlpHpVsContextAllocate.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     ExpAddTagForBigPages @ 0x1400E7190 (ExpAddTagForBigPages.c)
 *     ExpInsertPoolTrackerExpansion @ 0x140104330 (ExpInsertPoolTrackerExpansion.c)
 *     RtlFreeHeap @ 0x14011EF00 (RtlFreeHeap.c)
 *     RtlRaiseStatus @ 0x140128F60 (RtlRaiseStatus.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTracePool @ 0x1401B7350 (EtwTracePool.c)
 *     ExCheckSingleFilter @ 0x1401B7570 (ExCheckSingleFilter.c)
 *     ExHeapLookasideReplenish @ 0x1401B7674 (ExHeapLookasideReplenish.c)
 *     RtlpDynamicLookasideAllocate @ 0x1401B7C20 (RtlpDynamicLookasideAllocate.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     RtlpLogHeapFailure @ 0x1402FBA28 (RtlpLogHeapFailure.c)
 *     RtlpHpAllocateHeapBackend @ 0x1402FCB24 (RtlpHpAllocateHeapBackend.c)
 *     RtlpHpExtrasAppend @ 0x1402FCB5C (RtlpHpExtrasAppend.c)
 *     ExAllocateHeapSpecialPool @ 0x14031EBAC (ExAllocateHeapSpecialPool.c)
 *     VeAllocatePoolWithTagPriority @ 0x140925F50 (VeAllocatePoolWithTagPriority.c)
 */

__int64 __fastcall ExAllocateHeapPool(POOL_TYPE PoolType, SIZE_T NumberOfBytes, ULONG a3, char a4)
{
  __int64 v5; // r12
  POOL_TYPE v6; // edx
  void *HeapBackend; // r13
  __int64 v8; // rdi
  unsigned __int32 v10; // esi
  SIZE_T v11; // r8
  __int64 HeapSpecialPool; // rax
  struct _KPRCB *CurrentPrcb; // rax
  SIZE_T v14; // r15
  __int64 v15; // rax
  char *v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // rbx
  unsigned __int64 v19; // r14
  unsigned __int64 v20; // rax
  unsigned int v21; // r15d
  __int64 v22; // r9
  __int64 v23; // rcx
  int v24; // eax
  unsigned __int64 v25; // rdi
  unsigned int v26; // edx
  __int64 v27; // r8
  int v28; // r9d
  void *v29; // rax
  __int64 v30; // rcx
  __int64 v31; // r9
  __int64 v32; // r8
  int v33; // r9d
  __int64 v34; // r11
  __int64 v35; // r10
  unsigned int v36; // edi
  __int64 v37; // rdx
  __int64 v38; // r15
  int v39; // eax
  __int64 v40; // rbx
  int v41; // ecx
  unsigned __int8 CurrentIrql; // dl
  unsigned __int8 v43; // bl
  struct _KPRCB *v44; // rcx
  unsigned __int64 v45; // r15
  unsigned __int64 v46; // r15
  __int64 v47; // r14
  __int64 v48; // rdx
  __int64 v49; // rcx
  unsigned __int64 v50; // rax
  unsigned int v51; // edi
  __int64 v52; // r9
  __int64 v53; // rcx
  int v54; // eax
  unsigned __int64 v55; // r14
  unsigned int v56; // r10d
  int v57; // edx
  BOOL updated; // eax
  int v59; // r9d
  __int64 v60; // rdx
  __int64 v61; // r11
  __int64 v62; // r9
  __int64 v63; // rcx
  bool v64; // zf
  unsigned __int8 v65; // al
  void *v66; // rax
  void *v67; // rax
  __int64 v68; // rcx
  __int64 v69; // r9
  int v70; // r10d
  int v71; // r13d
  int v72; // r8d
  __int64 v73; // r11
  __int64 v74; // r9
  unsigned int v75; // r14d
  __int64 v76; // rdx
  unsigned int v77; // ecx
  __int64 v78; // r12
  int v79; // eax
  volatile signed __int32 *v80; // rbx
  volatile signed __int32 v81; // ecx
  __int64 v82; // rax
  __int64 v83; // rcx
  unsigned int v84; // ecx
  __int64 v85; // rdx
  __int64 v86; // rcx
  unsigned int v87; // [rsp+40h] [rbp-49h]
  unsigned int v88; // [rsp+40h] [rbp-49h]
  int v89; // [rsp+40h] [rbp-49h]
  unsigned int v90; // [rsp+40h] [rbp-49h]
  int v91; // [rsp+48h] [rbp-41h]
  int v92; // [rsp+48h] [rbp-41h]
  int v93; // [rsp+48h] [rbp-41h]
  unsigned int i; // [rsp+50h] [rbp-39h]
  unsigned int v95; // [rsp+50h] [rbp-39h]
  __int64 v96; // [rsp+50h] [rbp-39h]
  __int64 v97; // [rsp+58h] [rbp-31h]
  __int64 *v98; // [rsp+58h] [rbp-31h]
  int v99; // [rsp+58h] [rbp-31h]
  unsigned __int64 v100; // [rsp+60h] [rbp-29h]
  __int64 v101; // [rsp+68h] [rbp-21h]
  __int64 v102; // [rsp+68h] [rbp-21h]
  __int64 v103; // [rsp+70h] [rbp-19h] BYREF
  __int64 v104; // [rsp+78h] [rbp-11h] BYREF
  __int64 v105; // [rsp+80h] [rbp-9h]
  _QWORD v106[2]; // [rsp+88h] [rbp-1h] BYREF
  unsigned __int8 v107; // [rsp+98h] [rbp+Fh]
  __int64 v108; // [rsp+A0h] [rbp+17h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+A8h] [rbp+1Fh] BYREF
  __int64 retaddr; // [rsp+E8h] [rbp+5Fh]
  unsigned int v111; // [rsp+F0h] [rbp+67h]

  v5 = 0LL;
  v6 = PoolType & 0xFFFFFFFB;
  HeapBackend = 0LL;
  if ( (PoolType & 0x44) != 0x44 )
    v6 = PoolType;
  v111 = v6;
  LODWORD(v8) = v6;
  if ( (v6 & 0x201) == 0 )
  {
    v111 = v6;
    if ( (ExpPoolFlags & 0x400) != 0 )
    {
      LODWORD(v8) = v6 | 0x200;
      v111 = v6 | 0x200;
    }
  }
  if ( (ExpPoolFlags & 8) != 0 )
  {
    if ( (v8 & 0x80000080) == 0 )
      return VeAllocatePoolWithTagPriority((POOL_TYPE)v8, NumberOfBytes, a3, HighPoolPriority, retaddr);
    LODWORD(v8) = v8 & 0xFFFFFF7F;
    v111 = v8;
  }
  v10 = a3 & 0x7FFFFFFF;
  if ( (a3 & 0x7FFFFFFF) == 0 )
    v10 = 811884866;
  if ( (int)v8 >= 0
    && NumberOfBytes <= 0xFE0
    && (MmSpecialPoolTag
     && NumberOfBytes
     && ((unsigned int)ExCheckSingleFilter(v10, (unsigned int)MmSpecialPoolTag)
      || v11 >= NumberOfBytes + 16 && v11 < NumberOfBytes + 32)
     || (a4 & 1) != 0) )
  {
    HeapSpecialPool = ExAllocateHeapSpecialPool((unsigned int)v8, NumberOfBytes, v10);
    HeapBackend = (void *)HeapSpecialPool;
    if ( HeapSpecialPool )
    {
      _InterlockedIncrement(&ExpSpecialAllocations);
      v5 = HeapSpecialPool;
      goto LABEL_208;
    }
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v14 = 1LL;
  if ( NumberOfBytes )
    v14 = NumberOfBytes;
  v15 = CurrentPrcb->ParentNode->Affinity.Reserved[0];
  if ( (unsigned int)v15 >= dword_1404444C8 )
    v15 = 0LL;
  v16 = (char *)&unk_140444500 + 8384 * v15;
  if ( (int)v8 >= 0 )
  {
    if ( (v8 & 0x21) == 0x21 )
    {
      v17 = *(_QWORD *)(*(_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 3424)
                      + 12504LL);
    }
    else
    {
      if ( (v8 & 1) != 0 )
        v18 = 2LL;
      else
        v18 = (v8 & 0x200) != 0;
      v17 = *(_QWORD *)&v16[8 * v18];
    }
  }
  else
  {
    v17 = *((_QWORD *)v16 + 3);
  }
  if ( v14 <= 0xFE0 )
  {
    v45 = v14 + 16;
    if ( (v8 & 4) != 0 )
    {
      v45 += (unsigned int)ExpCacheLineSize;
      if ( v45 > 0xFE0 )
      {
        v45 -= (unsigned int)ExpCacheLineSize;
        LOBYTE(v111) = v8 & 0xFB;
      }
    }
    v46 = (v45 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
    v100 = v46;
    if ( v46 - 513 > 0xD7F
      || (v47 = *(_QWORD *)(v17 + 40),
          v48 = RtlpLfhBucketIndexMap[(unsigned __int64)(unsigned int)(v46 + 15) >> 4],
          v46 = (unsigned __int16)RtlpBucketBlockSizes[v48],
          v100 = v46,
          v88 = v48 - 33,
          !v47)
      || (v8 = RtlpDynamicLookasideAllocate(v47, (unsigned int)(v48 - 33), 0x140000000uLL)) == 0
      && (v8 = ExHeapLookasideReplenish(v47, v88, v17, (unsigned int)v46)) == 0 )
    {
      v49 = *(_QWORD *)(v17 + 48);
      v50 = v49;
      v51 = *(_DWORD *)(v17 + 20) & 0x93000F0B;
      v95 = v51;
      if ( (v49 || (v50 = qword_14040F108) != 0) && v46 > v50 )
      {
        v52 = *(_QWORD *)(v17 + 56);
        if ( v52 )
          RtlpLogHeapFailure(20, v17, 0, v52, v46, v49);
        goto LABEL_128;
      }
      v89 = 0;
      v53 = 0LL;
      v104 = 0LL;
      if ( (v51 & 0x1000000) == 0 )
      {
        v54 = *(_DWORD *)(v17 + 24);
        v89 = v54;
        if ( v54 )
        {
          v51 |= 8u;
          v95 = v51;
          if ( (_WORD)v54 != 1
            || (int)((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64 *))RtlpInterceptorRoutines)(
                      v17,
                      0LL,
                      1LL,
                      &v104) < 0 )
          {
            goto LABEL_128;
          }
          v53 = v104;
        }
      }
      v55 = v53 + v46 + 16;
      if ( (v51 & 0x10000000) == 0 )
        v55 = v53 + v46;
      if ( (v51 & 0x20000F08) != 0 )
        v55 = ((v55 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 16;
      if ( !v55 )
        v55 = 1LL;
      if ( v55 < v46 || v46 > 0x7FFFFFFFFFFFFFFFLL )
      {
        v8 = 0LL;
      }
      else
      {
        v56 = v51 & 0x13000003;
        v93 = v51 & 0x13000003;
        if ( v55 > (unsigned int)*(unsigned __int16 *)(v17 + 892) - 16 )
          goto LABEL_159;
        v57 = v55 + 2;
        if ( (_DWORD)v46 == (_DWORD)v55 )
          v57 = v55;
        v98 = (__int64 *)(v17 + 832 + 8
                                    * (RtlpLfhBucketIndexMap[(unsigned __int64)(unsigned int)(v57 + 15) >> 4] + 16LL));
        if ( (*v98 & 1) == 0
          || (updated = RtlpHpLfhBucketUpdateStats(v17 + 832, v57, 1), v56 = v51 & 0x13000003, updated) )
        {
          v60 = *(unsigned __int8 *)(v17 + 888);
          v61 = *v98;
          v62 = ((((unsigned int)RtlpHpLfhPerfFlags >> 10) & 1) + 2LL) << 6;
          v108 = v62;
          v63 = v62 - (((_BYTE)v60 - 1) & 7) + v60 + 7;
          v64 = *(_BYTE *)(v61 + 2) == 1;
          v105 = v63;
          if ( v64 )
          {
            v65 = 0;
          }
          else
          {
            v63 = v105;
            v65 = *(_BYTE *)(v62 + BYTE5(KeGetCurrentThread()[1].Ucb) + v61);
          }
          v66 = (void *)RtlpHpLfhSlotAllocate((int)v17 + 832, v61, *(_QWORD *)(v63 + 8LL * v65 + v61), v46, v56);
          v56 = v51 & 0x13000003;
          v8 = (__int64)v66;
          if ( v66 && (v93 & 2) != 0 )
          {
            memset(v66, 0, (unsigned int)v46);
            v56 = v93;
          }
        }
        else
        {
          v8 = -1LL;
        }
        v46 = v100;
        if ( v8 == -1 )
        {
LABEL_159:
          if ( v55 > 0x20000 )
          {
            if ( v55 > *(unsigned int *)(v17 + 464) )
            {
              v67 = RtlpHpLargeAlloc(v17, v46, v55, v56);
            }
            else
            {
              v68 = v17 + 256;
              if ( v55 > *(unsigned int *)(v17 + 272) )
                v68 = v17 + 448;
              v67 = RtlpHpSegAlloc(v68, v46, v55, v55, v56);
            }
          }
          else
          {
            v67 = (void *)RtlpHpVsContextAllocate(v17 + 640, (unsigned int)v46, (unsigned int)v55, v56);
          }
          v8 = (__int64)v67;
        }
        if ( !v8 )
          goto LABEL_128;
        if ( (v95 & 0x30000F08) != 0 )
        {
          v69 = RtlpHpExtrasAppend(v17, v8, v46, v59, v104, v95, 0);
          if ( v89 )
          {
            *(_BYTE *)(v69 + 2) ^= (*(_BYTE *)(v69 + 2) ^ v89) & 0xF;
            if ( (_WORD)v89 != 1
              || (int)((__int64 (__fastcall *)(__int64, __int64, __int64, __int64))RtlpInterceptorRoutines)(
                        v17,
                        v8,
                        2LL,
                        v69 + 16) < 0 )
            {
              RtlFreeHeap((PVOID)v17, 0, (PVOID)v8);
LABEL_128:
              LOBYTE(v8) = v111;
              goto LABEL_129;
            }
          }
        }
      }
      if ( !v8 )
        goto LABEL_128;
    }
    *(_DWORD *)(v8 + 4) = v10;
    *(_BYTE *)(v8 + 2) = v46 >> 4;
    *(_BYTE *)v8 = 0;
    v70 = v111 & 0x6D | 2;
    *(_BYTE *)(v8 + 3) = v70;
    if ( v10 == PoolHitTag )
      __debugbreak();
    if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
    {
      EtwTracePool(3616, v70, v10, v8 + 16, v46);
      LOBYTE(v70) = v111 & 0x6D | 2;
    }
    v71 = v70 & 0x20;
    if ( (v70 & 0x20) != 0 )
    {
      v74 = ExpSessionPoolTrackTable;
      v72 = ExpSessionPoolTrackTableMask;
      v73 = ExpSessionPoolTrackTableSize;
    }
    else
    {
      v72 = PoolTrackTableMask;
      v73 = PoolTrackTableSize;
      v74 = (__int64)*(&ExPoolTagTables + KeGetPcr()->Prcb.Number);
    }
    v96 = v73;
    v99 = v72;
    v102 = v74;
    v75 = v72 & ((40543 * v10) ^ ((40543 * (unsigned __int64)v10) >> 32));
    v76 = v75;
    v77 = v75;
    v78 = 56LL * v75;
    v79 = *(_DWORD *)(v78 + v74);
    v80 = (volatile signed __int32 *)(v78 + v74);
    v90 = v75;
    if ( v79 == v10 )
    {
LABEL_197:
      if ( (v70 & 1) != 0 )
      {
        v82 = 8LL;
        v83 = 10LL;
      }
      else
      {
        v82 = 2LL;
        v83 = 4LL;
      }
      _InterlockedIncrement64((volatile signed __int64 *)&v80[v83]);
      _InterlockedExchangeAdd64((volatile signed __int64 *)&v80[v82], v46);
LABEL_202:
      if ( (v111 & 4) != 0 )
      {
        *(_BYTE *)(v8 + 3) &= ~4u;
        v84 = (ExpCacheLineSize - 1) & (-16 - v8);
        if ( v84 )
        {
          v85 = v8 + v84;
          v86 = (__int64)v84 >> 4;
          *(_BYTE *)v85 = v86;
          *(_BYTE *)(v85 + 2) = *(_BYTE *)(v8 + 2) - v86;
          *(_BYTE *)(v85 + 1) = *(_BYTE *)(v8 + 1);
          *(_BYTE *)(v85 + 3) = *(_BYTE *)(v8 + 3) | 4;
          *(_DWORD *)(v85 + 4) = *(_DWORD *)(v8 + 4);
          if ( (unsigned __int8)*(_WORD *)v85 > 1u )
            *(_QWORD *)(v8 + 16) = ExpPoolQuotaCookie ^ v85;
          v8 = v85;
        }
      }
      v5 = v8 + 16;
      LOBYTE(v8) = v111;
      goto LABEL_208;
    }
    while ( 1 )
    {
      if ( !v79 )
      {
        if ( !v71 )
        {
          v81 = *(_DWORD *)(v78 + PoolTrackTable);
          if ( v81 )
          {
            *v80 = v81;
            goto LABEL_195;
          }
          v77 = v90;
        }
        if ( v76 != v73 - 1 )
        {
          if ( v71 )
          {
            _InterlockedCompareExchange(v80, v10, 0);
          }
          else
          {
            KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &LockHandle);
            if ( !*(_DWORD *)(v78 + PoolTrackTable) )
            {
              *(_DWORD *)(v78 + PoolTrackTable) = v10;
              *v80 = v10;
            }
            KeReleaseInStackQueuedSpinLock(&LockHandle);
            v72 = v99;
            v74 = v102;
          }
          goto LABEL_195;
        }
      }
      v75 = v72 & (v75 + 1);
      if ( v75 == v77 )
      {
        ExpInsertPoolTrackerExpansion(v10, v46, v111 & 0x6D | 2);
        goto LABEL_202;
      }
LABEL_195:
      v73 = v96;
      v77 = v90;
      v76 = v75;
      v78 = 56LL * v75;
      v79 = *(_DWORD *)(v78 + v74);
      v80 = (volatile signed __int32 *)(v78 + v74);
      if ( v79 == v10 )
      {
        LOBYTE(v70) = v111 & 0x6D | 2;
        goto LABEL_197;
      }
    }
  }
  v19 = (v14 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
  if ( (((_WORD)v14 + 15) & 0xFF0u) > 0xFC0 || v19 >= 0x10000 )
    v19 = (v19 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  if ( v19 < v14 )
    goto LABEL_129;
  if ( (v19 & 0xFFF) == 0 && v19 <= *(unsigned int *)(v17 + 464) )
  {
    HeapBackend = (void *)RtlpHpAllocateHeapBackend(v17, v19, v19, 0LL);
    goto LABEL_80;
  }
  v20 = *(_QWORD *)(v17 + 48);
  v21 = *(_DWORD *)(v17 + 20) & 0x93000F0B;
  if ( (v20 || (v20 = qword_14040F108) != 0) && v19 > v20 )
  {
    v22 = *(_QWORD *)(v17 + 56);
    if ( v22 )
      RtlpLogHeapFailure(20, v17, 0, v22, v19, *(_QWORD *)(v17 + 48));
    goto LABEL_47;
  }
  v91 = 0;
  v23 = 0LL;
  v103 = 0LL;
  if ( (v21 & 0x1000000) == 0 )
  {
    v24 = *(_DWORD *)(v17 + 24);
    v91 = v24;
    if ( v24 )
    {
      v21 |= 8u;
      if ( (_WORD)v24 != 1
        || (int)((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64 *))RtlpInterceptorRoutines)(
                  v17,
                  0LL,
                  1LL,
                  &v103) < 0 )
      {
LABEL_47:
        HeapBackend = 0LL;
        goto LABEL_80;
      }
      v23 = v103;
    }
  }
  v25 = v23 + v19 + 16;
  if ( (v21 & 0x10000000) == 0 )
    v25 = v23 + v19;
  if ( (v21 & 0x20000F08) != 0 )
    v25 = ((v25 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 16;
  if ( !v25 )
    v25 = 1LL;
  if ( v25 < v19 || v19 > 0x7FFFFFFFFFFFFFFFLL )
    goto LABEL_78;
  v26 = v21 & 0x13000003;
  v27 = (unsigned int)v25;
  if ( v25 > (unsigned int)*(unsigned __int16 *)(v17 + 892) - 16 )
    goto LABEL_64;
  HeapBackend = (void *)RtlpHpLfhContextAllocate(v17 + 832, v19, v25, v26);
  v27 = (unsigned int)v25;
  if ( HeapBackend == (void *)-1LL )
  {
    v26 = v21 & 0x13000003;
LABEL_64:
    if ( v25 > 0x20000 )
    {
      if ( v25 > *(unsigned int *)(v17 + 464) )
      {
        v29 = RtlpHpLargeAlloc(v17, v19, v25, v26);
      }
      else
      {
        v30 = v17 + 256;
        if ( v25 > *(unsigned int *)(v17 + 272) )
          v30 = v17 + 448;
        v29 = RtlpHpSegAlloc(v30, v19, v25, v25, v26);
      }
    }
    else
    {
      v29 = (void *)RtlpHpVsContextAllocate(v17 + 640, (unsigned int)v19, v27, v26);
    }
    HeapBackend = v29;
  }
  if ( !HeapBackend )
    goto LABEL_79;
  if ( (v21 & 0x30000F08) == 0 )
    goto LABEL_79;
  v31 = RtlpHpExtrasAppend(v17, (_DWORD)HeapBackend, v19, v28, v103, v21, 0);
  if ( !v91 )
    goto LABEL_79;
  *(_BYTE *)(v31 + 2) ^= (v91 ^ *(_BYTE *)(v31 + 2)) & 0xF;
  if ( (_WORD)v91 == 1
    && (int)((__int64 (__fastcall *)(__int64, void *, __int64, __int64))RtlpInterceptorRoutines)(
              v17,
              HeapBackend,
              2LL,
              v31 + 16) >= 0 )
  {
    goto LABEL_79;
  }
  RtlFreeHeap((PVOID)v17, 0, HeapBackend);
LABEL_78:
  HeapBackend = 0LL;
LABEL_79:
  LODWORD(v8) = v111;
LABEL_80:
  if ( !HeapBackend )
    goto LABEL_131;
  if ( !(unsigned int)ExpAddTagForBigPages((_DWORD)HeapBackend, v10, v19, v8, 0, 0) )
  {
LABEL_129:
    if ( HeapBackend )
      RtlpHpFreeHeap((__int128 *)v17, (__int64)HeapBackend, 0);
    goto LABEL_131;
  }
  if ( v10 == PoolHitTag )
    __debugbreak();
  if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
    EtwTracePool(3616, v8, v10, (_DWORD)HeapBackend, v19);
  v32 = v8 & 0x20;
  v87 = v8 & 0x20;
  if ( (v8 & 0x20) != 0 )
  {
    v35 = ExpSessionPoolTrackTable;
    v33 = ExpSessionPoolTrackTableMask;
    v34 = ExpSessionPoolTrackTableSize;
  }
  else
  {
    v33 = PoolTrackTableMask;
    v34 = PoolTrackTableSize;
    v35 = (__int64)*(&ExPoolTagTables + KeGetPcr()->Prcb.Number);
  }
  v97 = v34;
  v92 = v33;
  v101 = v35;
  v36 = v33 & ((40543 * v10) ^ ((40543 * (unsigned __int64)v10) >> 32));
  v37 = v36;
  v38 = 56LL * v36;
  v39 = *(_DWORD *)(v38 + v35);
  v40 = v38 + v35;
  for ( i = v36; v39 != v10; v40 = v38 + v35 )
  {
    if ( !v39 )
    {
      if ( !(_DWORD)v32 )
      {
        v41 = *(_DWORD *)(v38 + PoolTrackTable);
        if ( v41 )
        {
          *(_DWORD *)v40 = v41;
          goto LABEL_110;
        }
      }
      if ( v37 != v34 - 1 )
      {
        if ( (_DWORD)v32 )
        {
          _InterlockedCompareExchange((volatile signed __int32 *)v40, v10, 0);
        }
        else
        {
          v106[1] = &ExpTaggedPoolLock;
          v106[0] = 0LL;
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
            _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
          v107 = CurrentIrql;
          KxAcquireQueuedSpinLock((__int64)v106, (volatile __int64 *)&ExpTaggedPoolLock, v32);
          if ( !*(_DWORD *)(PoolTrackTable + v38) )
          {
            *(_DWORD *)(PoolTrackTable + v38) = v10;
            *(_DWORD *)v40 = v10;
          }
          KxReleaseQueuedSpinLock(v106);
          v43 = v107;
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v107 < 2u )
          {
            v44 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v44->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(v44);
          }
          __writecr8(v43);
          v32 = v87;
          v33 = v92;
          v35 = v101;
        }
        goto LABEL_110;
      }
    }
    v36 = v33 & (v36 + 1);
    if ( v36 == i )
    {
      LOBYTE(v8) = v111;
      ExpInsertPoolTrackerExpansion(v10, v19, v111);
      v5 = (__int64)HeapBackend;
      goto LABEL_208;
    }
LABEL_110:
    v34 = v97;
    v37 = v36;
    v38 = 56LL * v36;
    v39 = *(_DWORD *)(v38 + v35);
  }
  LOBYTE(v8) = v111;
  if ( (v111 & 1) != 0 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(v40 + 40));
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v40 + 32), v19);
  }
  else
  {
    _InterlockedIncrement64((volatile signed __int64 *)(v40 + 16));
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v40 + 8), v19);
  }
  v5 = (__int64)HeapBackend;
LABEL_208:
  if ( !v5 )
  {
LABEL_131:
    if ( (v8 & 0x10) != 0 )
      RtlRaiseStatus(-1073741670);
  }
  return v5;
}
