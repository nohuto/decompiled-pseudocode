/*
 * XREFs of FsRtlReleaseEofLock @ 0x140103180
 * Callers:
 *     <none>
 * Callees:
 *     ExpAcquireFastMutexContended @ 0x140005480 (ExpAcquireFastMutexContended.c)
 *     KiCheckForKernelApcDelivery @ 0x140005A50 (KiCheckForKernelApcDelivery.c)
 *     ExpReleaseFastMutexContended @ 0x140023F40 (ExpReleaseFastMutexContended.c)
 *     KiAbThreadRemoveBoosts @ 0x14004EFD0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 *     FsRtlReleaseHeaderMutex @ 0x1400511C0 (FsRtlReleaseHeaderMutex.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     PsBoostThreadIoEx @ 0x1400BBED0 (PsBoostThreadIoEx.c)
 *     KeSetEventBoostPriorityEx @ 0x140103548 (KeSetEventBoostPriorityEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14030FC24 (EtwTraceAutoBoostEntryExhaustion.c)
 */

_QWORD *__fastcall FsRtlReleaseEofLock(__int64 a1, volatile signed __int32 *a2)
{
  _QWORD *v3; // r15
  struct _KTHREAD *CurrentThread; // rdi
  ULONG_PTR v5; // rsi
  unsigned __int8 AbEntrySummary; // al
  __int64 v7; // rcx
  __int64 v8; // rbp
  int SessionId; // eax
  __int64 v10; // rcx
  bool v11; // zf
  unsigned __int8 CurrentIrql; // di
  __int64 v13; // rdi
  _QWORD *v14; // rcx
  int v15; // eax
  ULONG_PTR v16; // rbx
  unsigned __int8 v17; // di
  signed __int32 v18; // eax
  _QWORD *v19; // rbx
  _QWORD *result; // rax
  _QWORD *v21; // rdx
  __int64 v22; // r8
  _QWORD *v23; // r8
  _QWORD *v24; // r8
  _QWORD *v25; // rcx
  _QWORD *v26; // r8
  _QWORD *v27; // r8
  unsigned __int8 AbOrphanedEntrySummary; // al
  struct _KPRCB *CurrentPrcb; // rcx
  _QWORD *v31; // [rsp+38h] [rbp-50h] BYREF
  _QWORD **v32; // [rsp+40h] [rbp-48h]
  int v33; // [rsp+90h] [rbp+8h] BYREF
  volatile signed __int32 *v34; // [rsp+98h] [rbp+10h]
  int v35; // [rsp+A0h] [rbp+18h] BYREF
  int v36; // [rsp+A8h] [rbp+20h]

  v34 = a2;
  v33 = 0;
  v32 = &v31;
  v3 = 0LL;
  v31 = &v31;
  CurrentThread = KeGetCurrentThread();
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 48LL);
  --CurrentThread->SpecialApcDisable;
  if ( ++CurrentThread->AbAllocationRegionCount != 1 )
    KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, v5, KeGetCurrentIrql(), 0LL);
  AbEntrySummary = CurrentThread->AbEntrySummary;
  if ( !AbEntrySummary )
  {
    if ( !CurrentThread->AbOrphanedEntrySummary )
    {
      v8 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion(CurrentThread, v5);
      goto LABEL_51;
    }
    AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
    CurrentThread->AbOrphanedEntrySummary = 0;
    CurrentThread->AbEntrySummary |= AbOrphanedEntrySummary;
    AbEntrySummary = CurrentThread->AbEntrySummary;
  }
  _BitScanForward((unsigned int *)&v7, AbEntrySummary);
  v36 = v7;
  CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v7);
  v8 = (__int64)&CurrentThread->LockEntries[v7];
  if ( !v8 )
  {
LABEL_51:
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
    goto LABEL_8;
  }
  if ( v5 >= 0xFFFF800000000000uLL && byte_14043CA10[((v5 >> 39) & 0x1FF) - 256] == 1 )
    SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
  else
    SessionId = -1;
  *(_DWORD *)(v8 + 40) = SessionId;
  *(_QWORD *)(v8 + 32) = v5 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_8:
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v5, (__int64)&v33);
  v11 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v11 && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v10);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)v5, 0) )
    ExpAcquireFastMutexContended(v5, (PRTL_BALANCED_NODE)v8);
  if ( v8 )
    *(_BYTE *)(v8 + 26) |= 1u;
  *(_QWORD *)(v5 + 8) = KeGetCurrentThread();
  *(_DWORD *)(v5 + 48) = CurrentIrql;
  if ( a2 )
    _InterlockedIncrement(a2);
  v11 = (*(_WORD *)(a1 + 38))-- == 1;
  if ( !v11 )
    return (_QWORD *)FsRtlReleaseHeaderMutex(a1, v34);
  v13 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 40LL);
  if ( *(_BYTE *)(a1 + 36) )
  {
    PsBoostThreadIoEx(*(_QWORD *)a1, 1, 0, 0LL);
    *(_BYTE *)(a1 + 36) = 0;
  }
  v14 = *(_QWORD **)(a1 + 8);
  if ( v14 == (_QWORD *)(a1 + 8) )
    goto LABEL_21;
  do
  {
    v21 = v14;
    v14 = (_QWORD *)*v14;
    v22 = v21[5];
    if ( v22 < 0 || v22 > v13 )
    {
      if ( !v3 )
      {
        v23 = (_QWORD *)v21[1];
        if ( (_QWORD *)v14[1] != v21 )
          goto LABEL_46;
        if ( (_QWORD *)*v23 != v21 )
          goto LABEL_46;
        *v23 = v14;
        v14[1] = v23;
        v24 = v31;
        if ( (_QWORD **)v31[1] != &v31 )
          goto LABEL_46;
        *v21 = v31;
        v21[1] = &v31;
        v3 = v21;
        v24[1] = v21;
        v31 = v21;
      }
    }
    else
    {
      v26 = (_QWORD *)v21[1];
      if ( (_QWORD *)v14[1] != v21 || (_QWORD *)*v26 != v21 || (*v26 = v14, v14[1] = v26, v27 = v32, *v32 != &v31) )
LABEL_46:
        __fastfail(3u);
      v21[1] = v32;
      *v21 = &v31;
      *v27 = v21;
      v32 = (_QWORD **)v21;
    }
  }
  while ( v14 != (_QWORD *)(a1 + 8) );
  if ( !v3 )
  {
LABEL_21:
    *(_QWORD *)a1 = 0LL;
    v15 = 0;
    *(_WORD *)(a1 + 38) = 0;
  }
  else
  {
    *(_QWORD *)a1 = v3[6];
    *(_WORD *)(a1 + 38) = 1;
    v15 = *((_DWORD *)v3 + 14);
  }
  *(_DWORD *)(a1 + 32) = v15;
  if ( v34 )
    _InterlockedIncrement(v34);
  v16 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 48LL);
  v17 = *(_BYTE *)(v16 + 48);
  *(_QWORD *)(v16 + 8) = 0LL;
  v18 = _InterlockedCompareExchange((volatile signed __int32 *)v16, 1, 0);
  if ( v18 )
    ExpReleaseFastMutexContended(v16, v18);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v17 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(v17);
  KeAbPostRelease(v16);
  v19 = v31;
  for ( result = &v31; v19 != &v31; result = &v31 )
  {
    v25 = v19;
    v19 = (_QWORD *)*v19;
    v35 = *((_DWORD *)v25 + 14);
    KeSetEventBoostPriorityEx((_DWORD)v25 + 16, 0, (unsigned int)&v35, 0, 0);
  }
  return result;
}
