/*
 * XREFs of FsRtlReleaseEofLock @ 0x14009B140
 * Callers:
 *     <none>
 * Callees:
 *     PsBoostThreadIoEx @ 0x14003DFD0 (PsBoostThreadIoEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14003F0E0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14003F4F0 (MmGetSessionIdEx.c)
 *     FsRtlReleaseHeaderMutex @ 0x14003F730 (FsRtlReleaseHeaderMutex.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14009B920 (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x14009C690 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x14009E6F0 (ExpReleaseFastMutexContended.c)
 *     KeSetEventBoostPriorityEx @ 0x14009E75C (KeSetEventBoostPriorityEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1401BFAF4 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 */

_QWORD *__fastcall FsRtlReleaseEofLock(__int64 a1, volatile signed __int32 *a2)
{
  _QWORD *v3; // r15
  struct _KTHREAD *CurrentThread; // rbx
  ULONG_PTR v5; // rsi
  __int64 v6; // rcx
  char v7; // dl
  __int64 v8; // rbp
  int SessionId; // eax
  bool v10; // zf
  unsigned __int8 CurrentIrql; // bl
  __int64 v12; // rbx
  _QWORD *v13; // rcx
  int v14; // eax
  ULONG_PTR v15; // rbx
  unsigned __int8 v16; // di
  unsigned __int32 v17; // eax
  _QWORD *v18; // rbx
  _QWORD *result; // rax
  _QWORD *v20; // rdx
  __int64 v21; // r8
  _QWORD *v22; // r8
  _QWORD *v23; // r8
  _QWORD *v24; // rcx
  _QWORD *v25; // r8
  _QWORD *v26; // r8
  unsigned __int8 AbOrphanedEntrySummary; // al
  struct _KPRCB *CurrentPrcb; // rcx
  _QWORD *v30; // [rsp+38h] [rbp-50h] BYREF
  _QWORD **v31; // [rsp+40h] [rbp-48h]
  int v32; // [rsp+90h] [rbp+8h] BYREF
  volatile signed __int32 *v33; // [rsp+98h] [rbp+10h]
  int v34; // [rsp+A0h] [rbp+18h] BYREF
  int v35; // [rsp+A8h] [rbp+20h]

  v33 = a2;
  v32 = 0;
  v31 = &v30;
  v3 = 0LL;
  v30 = &v30;
  CurrentThread = KeGetCurrentThread();
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 48LL);
  --CurrentThread->SpecialApcDisable;
  if ( ++CurrentThread->AbAllocationRegionCount != 1 )
    KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, v5, KeGetCurrentIrql(), 0LL);
  LOBYTE(v6) = CurrentThread->AbEntrySummary;
  if ( !(_BYTE)v6 )
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
    LOBYTE(v6) = AbOrphanedEntrySummary | CurrentThread->AbEntrySummary;
  }
  v7 = v6;
  _BitScanForward((unsigned int *)&v6, (unsigned __int8)v6);
  v35 = v6;
  CurrentThread->AbEntrySummary = v7 & ~(1 << v6);
  v8 = (__int64)&CurrentThread->LockEntries[v6];
  if ( !v8 )
  {
LABEL_51:
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
    goto LABEL_8;
  }
  if ( v5 >= 0xFFFF800000000000uLL && byte_140467440[((v5 >> 39) & 0x1FF) - 256] == 1 )
    SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
  else
    SessionId = -1;
  *(_DWORD *)(v8 + 40) = SessionId;
  *(_QWORD *)(v8 + 32) = v5 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_8:
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v5, &v32);
  v10 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v10 && ($6EAC78A6FCFADE0A5FA44F358736B38F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
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
  v10 = (*(_WORD *)(a1 + 38))-- == 1;
  if ( !v10 )
    return (_QWORD *)FsRtlReleaseHeaderMutex(a1, v33);
  v12 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 40LL);
  if ( *(_BYTE *)(a1 + 36) )
  {
    PsBoostThreadIoEx(*(_QWORD *)a1, 1, 0, 0LL);
    *(_BYTE *)(a1 + 36) = 0;
  }
  v13 = *(_QWORD **)(a1 + 8);
  if ( v13 == (_QWORD *)(a1 + 8) )
    goto LABEL_21;
  do
  {
    v20 = v13;
    v13 = (_QWORD *)*v13;
    v21 = v20[5];
    if ( v21 < 0 || v21 > v12 )
    {
      if ( !v3 )
      {
        v22 = (_QWORD *)v20[1];
        if ( (_QWORD *)v13[1] != v20 )
          goto LABEL_46;
        if ( (_QWORD *)*v22 != v20 )
          goto LABEL_46;
        *v22 = v13;
        v13[1] = v22;
        v23 = v30;
        if ( (_QWORD **)v30[1] != &v30 )
          goto LABEL_46;
        *v20 = v30;
        v20[1] = &v30;
        v3 = v20;
        v23[1] = v20;
        v30 = v20;
      }
    }
    else
    {
      v25 = (_QWORD *)v20[1];
      if ( (_QWORD *)v13[1] != v20 || (_QWORD *)*v25 != v20 || (*v25 = v13, v13[1] = v25, v26 = v31, *v31 != &v30) )
LABEL_46:
        __fastfail(3u);
      v20[1] = v31;
      *v20 = &v30;
      *v26 = v20;
      v31 = (_QWORD **)v20;
    }
  }
  while ( v13 != (_QWORD *)(a1 + 8) );
  if ( !v3 )
  {
LABEL_21:
    *(_QWORD *)a1 = 0LL;
    v14 = 0;
    *(_WORD *)(a1 + 38) = 0;
  }
  else
  {
    *(_QWORD *)a1 = v3[6];
    *(_WORD *)(a1 + 38) = 1;
    v14 = *((_DWORD *)v3 + 14);
  }
  *(_DWORD *)(a1 + 32) = v14;
  if ( v33 )
    _InterlockedIncrement(v33);
  v15 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 48LL);
  v16 = *(_BYTE *)(v15 + 48);
  *(_QWORD *)(v15 + 8) = 0LL;
  v17 = _InterlockedCompareExchange((volatile signed __int32 *)v15, 1, 0);
  if ( v17 )
    ExpReleaseFastMutexContended(v15, v17);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v16 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(v16);
  KeAbPostRelease(v15);
  v18 = v30;
  for ( result = &v30; v18 != &v30; result = &v30 )
  {
    v24 = v18;
    v18 = (_QWORD *)*v18;
    v34 = *((_DWORD *)v24 + 14);
    KeSetEventBoostPriorityEx((_DWORD)v24 + 16, 0, (unsigned int)&v34, 0, 1, 0);
  }
  return result;
}
