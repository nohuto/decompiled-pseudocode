/*
 * XREFs of RtlpHpVsContextAllocateInternal @ 0x140061BE0
 * Callers:
 *     ExAllocateHeapPool @ 0x1400378E0 (ExAllocateHeapPool.c)
 *     RtlpHpVsContextMultiAlloc @ 0x14005F744 (RtlpHpVsContextMultiAlloc.c)
 *     RtlpHpVsContextAllocate @ 0x140111370 (RtlpHpVsContextAllocate.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     RtlpHpAcquireQueuedLockExclusive @ 0x14005FB90 (RtlpHpAcquireQueuedLockExclusive.c)
 *     RtlpHpReleaseQueuedLockExclusive @ 0x1400616F0 (RtlpHpReleaseQueuedLockExclusive.c)
 *     RtlpHpVsChunkSplit @ 0x1400620A0 (RtlpHpVsChunkSplit.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1400B5550 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     RtlpHpVsSubsegmentCreate @ 0x140121294 (RtlpHpVsSubsegmentCreate.c)
 *     RtlpHpVsContextAddSubsegment @ 0x140127AC8 (RtlpHpVsContextAddSubsegment.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     RtlpHpVsCalculateChunkRequiredSize @ 0x1401BFA28 (RtlpHpVsCalculateChunkRequiredSize.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     RtlpLogHeapFailure @ 0x14031A17C (RtlpLogHeapFailure.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14033B054 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

char *__fastcall RtlpHpVsContextAllocateInternal(
        ULONG_PTR BugCheckParameter2,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        _QWORD *a5,
        _DWORD *a6)
{
  _QWORD *v6; // r15
  int v9; // esi
  _DWORD *v10; // r13
  unsigned int v11; // ebp
  char *v12; // rsi
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *SchedulerAssist; // rcx
  int v17; // eax
  _DWORD *v18; // rcx
  int v19; // eax
  signed __int32 v20; // edx
  bool v21; // zf
  signed __int32 v22; // eax
  __int64 v23; // rax
  ULONG_PTR *v24; // r14
  __int64 v25; // rcx
  ULONG_PTR v26; // rax
  _QWORD *v27; // r8
  int v28; // edx
  unsigned int v29; // ecx
  ULONG_PTR v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rsi
  _QWORD *v33; // rdi
  __int64 v34; // rcx
  unsigned __int64 v35; // r9
  int v36; // eax
  _QWORD *v37; // r10
  int v38; // ecx
  int v39; // eax
  unsigned __int64 v40; // r10
  int v41; // esi
  __int64 v43; // rcx
  int v44; // r9d
  __int16 v45; // ax
  __int64 v46; // r8
  __int16 v47; // cx
  int v48; // [rsp+70h] [rbp+8h]
  unsigned int v50; // [rsp+80h] [rbp+18h] BYREF

  v50 = a3;
  v6 = a5;
  v9 = RtlpHpVsCalculateChunkRequiredSize(a2, &v50);
  v48 = v9;
  if ( (*(_DWORD *)(BugCheckParameter2 + 176) & 1) != 0 )
    v48 = ++v9;
  v10 = a6;
  v11 = v9 << 16;
  v12 = 0LL;
  if ( !*a6 )
  {
    *a6 = 1;
    if ( (a4 & 1) == 0 )
    {
      if ( *(_DWORD *)(BugCheckParameter2 + 8) )
      {
        v6[1] = BugCheckParameter2;
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
          _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(BugCheckParameter2, CurrentIrql);
        }
        else
        {
          CurrentPrcb = KeGetCurrentPrcb();
          LODWORD(a6) = 0;
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          if ( SchedulerAssist )
          {
            if ( CurrentPrcb->NestingLevel <= 1u )
            {
              v17 = SchedulerAssist[5];
              SchedulerAssist[5] = v17 + 1;
              if ( v17 == -1 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          if ( _interlockedbittestandset((volatile signed __int32 *)BugCheckParameter2, 0x1Fu) )
          {
            v18 = CurrentPrcb->SchedulerAssist;
            if ( v18 )
            {
              if ( CurrentPrcb->NestingLevel <= 1u )
              {
                v19 = v18[5] - 1;
                v18[5] = v19;
                if ( !v19 )
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              }
            }
            LODWORD(a6) = ExpWaitForSpinLockExclusiveAndAcquire(BugCheckParameter2, CurrentIrql);
          }
          v20 = *(_DWORD *)BugCheckParameter2;
          while ( (v20 & 0xBFFFFFFF) != 0x80000000 )
          {
            if ( (v20 & 0x40000000) == 0 )
            {
              v22 = _InterlockedCompareExchange((volatile signed __int32 *)BugCheckParameter2, v20 | 0x40000000, v20);
              v21 = v20 == v22;
              v20 = v22;
              if ( !v21 )
                continue;
            }
            KeYieldProcessorEx(&a6);
            v20 = *(_DWORD *)BugCheckParameter2;
          }
        }
        v23 = CurrentIrql;
        v12 = 0LL;
        v6[2] = v23;
      }
      else
      {
        *v6 = 0LL;
        v6[2] = 0LL;
        CurrentThread = KeGetCurrentThread();
        v6[1] = BugCheckParameter2;
        --CurrentThread->SpecialApcDisable;
        ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
      }
    }
  }
  v24 = (ULONG_PTR *)(BugCheckParameter2 + 16);
  while ( 1 )
  {
    v25 = *(_QWORD *)(BugCheckParameter2 + 24);
    v26 = *v24;
    if ( (v25 & 1) != 0 )
    {
      if ( v26 )
        v26 ^= (unsigned __int64)v24;
      else
        v26 = 0LL;
    }
    v27 = 0LL;
    v28 = v25 & 1;
    while ( v26 )
    {
      v29 = RtlpHpHeapGlobals ^ *(_DWORD *)(v26 - 8) ^ (v26 - 8);
      if ( v11 < v29 )
      {
        v30 = *(_QWORD *)v26;
        v27 = (_QWORD *)v26;
      }
      else
      {
        if ( v11 <= v29 )
          goto LABEL_45;
        v30 = *(_QWORD *)(v26 + 8);
      }
      if ( v28 && v30 )
        v26 ^= v30;
      else
        v26 = v30;
    }
    v26 = (ULONG_PTR)v27;
LABEL_45:
    if ( v26 )
      break;
    if ( (a4 & 1) == 0 )
      RtlpHpReleaseQueuedLockExclusive(*(_DWORD *)(BugCheckParameter2 + 8), (__int64)v6);
    v31 = v50;
    *v10 = 0;
    v32 = RtlpHpVsSubsegmentCreate(BugCheckParameter2, v31, a4);
    if ( !v32 )
      return 0LL;
    *v10 = 1;
    if ( (a4 & 1) == 0 )
      RtlpHpAcquireQueuedLockExclusive(
        (volatile signed __int32 *)BugCheckParameter2,
        *(_DWORD *)(BugCheckParameter2 + 8),
        v6);
    RtlpHpVsContextAddSubsegment(BugCheckParameter2, v32);
    v12 = 0LL;
  }
  v33 = (_QWORD *)(v26 - 8);
  v34 = HIDWORD(*(_QWORD *)(v26 - 8));
  v35 = (v26 - 8) >> 32;
  v36 = HIDWORD(RtlpHpHeapGlobals) ^ v35 ^ HIDWORD(*(_QWORD *)(v26 - 8));
  v37 = v33;
  if ( (v36 & 0xFF0000) != 0 )
  {
    v38 = (unsigned __int8)(RtlpHpHeapGlobals ^ (unsigned __int8)v33 ^ *((_BYTE *)v33 + 8));
    goto LABEL_60;
  }
  if ( (_WORD)v36 )
  {
    v37 = &v33[-2 * (unsigned __int16)(WORD2(RtlpHpHeapGlobals) ^ v35 ^ v34)];
    v39 = HIDWORD(v37) ^ HIDWORD(RtlpHpHeapGlobals) ^ HIDWORD(*v37);
    if ( (v39 & 0xFF0000) != 0 )
    {
LABEL_58:
      v38 = (unsigned __int8)(RtlpHpHeapGlobals ^ (unsigned __int8)v37 ^ *((_BYTE *)v37 + 8));
      goto LABEL_60;
    }
    if ( (_WORD)v39 )
    {
      v37 -= 2 * (WORD2(RtlpHpHeapGlobals) ^ (unsigned __int64)(unsigned __int16)(WORD2(v37) ^ HIDWORD(*v37)));
      goto LABEL_58;
    }
  }
  v38 = 0;
LABEL_60:
  v40 = ((unsigned __int64)v37 - (unsigned int)(v38 << 12)) & 0xFFFFFFFFFFFFF000uLL;
  if ( (((unsigned __int16)(*(_WORD *)(v40 + 32) ^ *(_WORD *)(v40 + 34)) ^ 0x2BED) & 0x7FFF) != 0 )
  {
    RtlpLogHeapFailure(18, BugCheckParameter2 ^ *(_DWORD *)(BugCheckParameter2 + 128), v40, (_DWORD)v33, 0LL, 0LL);
  }
  else
  {
    v41 = v48;
    if ( (*(_DWORD *)(BugCheckParameter2 + 176) & 1) != 0 && ((unsigned __int64)(v33 + 4) & 0xFFF) != 0 )
      v41 = v48 - 1;
    if ( !(unsigned int)RtlpHpVsChunkSplit(BugCheckParameter2, v40, (_DWORD)v33, v41, a4, (__int64)v6) )
      return 0LL;
    v12 = (char *)(v33 + 2);
    v43 = 16 * (WORD1(RtlpHpHeapGlobals) ^ ((unsigned int)v33 >> 16) ^ *((unsigned __int16 *)v33 + 1)) - 16;
    if ( (*(_DWORD *)(BugCheckParameter2 + 176) & 1) != 0 && ((unsigned __int64)(v33 + 4) & 0xFFF) == 0 )
    {
      v12 = (char *)(v33 + 4);
      v43 = 16 * (WORD1(RtlpHpHeapGlobals) ^ ((unsigned int)v33 >> 16) ^ *((unsigned __int16 *)v33 + 1)) - 32;
    }
    if ( a2 >= (unsigned int)v43 )
    {
      *((_DWORD *)v33 + 2) &= ~0x100u;
    }
    else
    {
      *((_DWORD *)v33 + 2) |= 0x100u;
      v12[v43 - 1] = 0;
      v44 = v43 - a2;
      v45 = *(_WORD *)&v12[v43 - 2];
      v46 = (unsigned int)v43;
      v47 = v45 ^ ((v43 - a2) ^ v45) & 0x1FFF;
      if ( v44 == 1 )
        v47 = v45 | 0x8000;
      *(_WORD *)&v12[v46 - 2] = v47;
    }
    if ( (a4 & 2) != 0 )
    {
      if ( (a4 & 1) == 0 )
        RtlpHpReleaseQueuedLockExclusive(*(_DWORD *)(BugCheckParameter2 + 8), (__int64)v6);
      *v10 = 0;
      memset(v12, 0, a2);
    }
  }
  return v12;
}
