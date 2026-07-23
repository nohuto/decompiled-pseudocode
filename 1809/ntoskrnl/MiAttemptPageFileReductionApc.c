/*
 * XREFs of MiAttemptPageFileReductionApc @ 0x1402B7650
 * Callers:
 *     <none>
 * Callees:
 *     RtlClearBits @ 0x140017890 (RtlClearBits.c)
 *     MiCoalescePageFileBitmapsCache @ 0x14002A820 (MiCoalescePageFileBitmapsCache.c)
 *     MiChargeCommit @ 0x14004CF20 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x140065D30 (MiReturnCommit.c)
 *     RtlSetBits @ 0x140076D70 (RtlSetBits.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     MiOkToShrinkPageFiles @ 0x140091738 (MiOkToShrinkPageFiles.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     MiInvalidatePageFileBitmapsCache @ 0x140124644 (MiInvalidatePageFileBitmapsCache.c)
 *     RtlFindLastBackwardRunClear @ 0x1401276A0 (RtlFindLastBackwardRunClear.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     MiReduceCommitLimits @ 0x1402C04F4 (MiReduceCommitLimits.c)
 */

LONG __fastcall MiAttemptPageFileReductionApc(struct _KEVENT *a1)
{
  unsigned int Flink; // r13d
  __int64 v2; // r12
  unsigned int v3; // eax
  unsigned __int64 Flink_high; // rbx
  int v5; // edx
  unsigned __int64 v6; // r15
  __int64 v7; // rcx
  unsigned __int64 v8; // r9
  __int64 v9; // r15
  _DWORD *v10; // r14
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int16 v13; // ax
  __int64 v14; // rax
  int v15; // esi
  _RTL_BITMAP *v16; // r9
  const signed __int32 *v17; // r8
  unsigned int v18; // ecx
  const signed __int32 *v19; // rdx
  unsigned __int64 v20; // rbx
  unsigned __int64 v21; // rcx
  unsigned int v22; // esi
  ULONG LastBackwardRunClear; // eax
  ULONG v24; // eax
  int v25; // r8d
  unsigned __int64 v26; // rsi
  unsigned __int8 v27; // bl
  struct _KPRCB *v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rax
  unsigned __int64 v31; // r14
  __int64 v32; // rdx
  unsigned __int64 v33; // rax
  unsigned __int8 OldIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int8 v36; // bl
  struct _KPRCB *v37; // rcx
  unsigned __int64 v38; // rbx
  __int64 v39; // rax
  _RTL_BITMAP *v40; // rbx
  unsigned __int8 v41; // bl
  struct _KPRCB *v42; // rcx
  unsigned int v44; // [rsp+30h] [rbp-59h]
  _DWORD *v45; // [rsp+38h] [rbp-51h]
  unsigned __int64 v46; // [rsp+40h] [rbp-49h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-41h] BYREF
  PRTL_BITMAP v48; // [rsp+60h] [rbp-29h]
  __int64 v49; // [rsp+68h] [rbp-21h]
  __int64 v50; // [rsp+70h] [rbp-19h]
  ULONG StartingRunIndex; // [rsp+78h] [rbp-11h] BYREF
  ULONG v52; // [rsp+7Ch] [rbp-Dh] BYREF
  PRTL_BITMAP v53; // [rsp+80h] [rbp-9h]
  _RTL_BITMAP BitMapHeader; // [rsp+88h] [rbp-1h] BYREF
  _RTL_BITMAP v55; // [rsp+98h] [rbp+Fh] BYREF
  struct _KEVENT *Event; // [rsp+F0h] [rbp+67h]
  int v57; // [rsp+108h] [rbp+7Fh]

  Event = a1;
  Flink = (unsigned int)a1[1].Header.WaitListHead.Flink;
  v2 = *(_QWORD *)&a1[1].Header.Lock;
  if ( Flink >= 0x10 )
  {
    if ( !MiOkToShrinkPageFiles(*(_QWORD *)(v2 + 7656), *(_QWORD *)(v2 + 7784)) )
      return KeSetEvent(Event, 0, 0);
    v3 = *(_DWORD *)(v2 + 7128);
    Flink_high = 0x4000LL;
    v49 = 0x8000LL;
    v5 = 1;
    v9 = (((v8 * (unsigned __int128)0xCCCCCCCCCCCCCCCDuLL) >> 64) & 0xFFFFFFFFFFFFFFF8uLL) - v7;
    a1 = Event;
    v6 = v9 - 0x8000;
    Flink = 0;
  }
  else
  {
    v49 = 0LL;
    v3 = Flink + 1;
    Flink_high = HIDWORD(a1[1].Header.WaitListHead.Flink);
    v5 = 0;
    v6 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v44 = v3;
  v57 = v5;
  v46 = Flink_high;
  if ( Flink < v3 )
  {
    v10 = (_DWORD *)&a1[1].Header.WaitListHead.Blink + Flink;
    v11 = 8LL * Flink + 7136;
    v45 = v10;
    v50 = v11;
    while ( Flink_high <= v6 )
    {
      v12 = *(_QWORD *)(v11 + v2);
      v13 = *(_WORD *)(v12 + 204);
      if ( ((v13 & 0x10) == 0 || !v5)
        && (v13 & 0x40) == 0
        && *(_QWORD *)v12 != *(_QWORD *)(v12 + 16)
        && *(_QWORD *)(v12 + 24) >= Flink_high )
      {
        v2 = *(_QWORD *)(v12 + 256);
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v12 + 232), &LockHandle);
        v14 = *(_QWORD *)(v12 + 112);
        v15 = *(_DWORD *)v12;
        v16 = (_RTL_BITMAP *)(v14 + 8);
        v17 = *(const signed __int32 **)(v14 + 16);
        v18 = *(_DWORD *)v12 - 1;
        v48 = (PRTL_BITMAP)(v14 + 8);
        v53 = (PRTL_BITMAP)(v14 + 24);
        if ( _bittest(v17, v18) == 1 || (v19 = *(const signed __int32 **)(v14 + 32), _bittest(v19, v18) == 1) )
        {
          v25 = v57;
          v26 = 0LL;
        }
        else
        {
          v20 = *(_QWORD *)v12 - *(_QWORD *)(v12 + 16);
          if ( v6 <= v20 )
            v20 = v6;
          v21 = (*(_QWORD *)v12 - v20) & 0xFFFFFFFFFFFFFFE0uLL;
          v22 = v15 - v21;
          v21 >>= 5;
          BitMapHeader.SizeOfBitMap = v22;
          v55.SizeOfBitMap = v22;
          BitMapHeader.Buffer = (unsigned int *)&v17[v21];
          v55.Buffer = (unsigned int *)&v19[v21];
          LastBackwardRunClear = RtlFindLastBackwardRunClear(&BitMapHeader, v22 - 1, &StartingRunIndex);
          if ( LastBackwardRunClear <= v20 )
            v20 = LastBackwardRunClear;
          v24 = RtlFindLastBackwardRunClear(&v55, v22 - 1, &v52);
          v25 = v57;
          v16 = v48;
          v26 = v24;
          if ( v20 <= v24 )
            v26 = v20;
          Flink_high = v46;
          if ( !v57 )
            v26 &= ~(v46 - 1);
        }
        if ( v26 )
        {
          v29 = *(_QWORD *)v12;
          v30 = *(_QWORD *)(v12 + 248);
          v31 = *(_QWORD *)v12 - v26;
          if ( !v30 )
            goto LABEL_45;
          do
          {
            v32 = v30;
            v30 = *(_QWORD *)(v30 + 8);
          }
          while ( v30 );
          v33 = *(_QWORD *)(v32 - 8);
          if ( !v33 || v31 > v33 )
            goto LABEL_45;
          v31 = v33 + 1;
          if ( v33 + 1 < v33 )
            goto LABEL_39;
          v26 = v29 - v31;
          if ( !v25 )
          {
            v26 &= ~(Flink_high - 1);
            v31 = v29 - v26;
          }
          if ( !v26 )
          {
LABEL_39:
            KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
            OldIrql = LockHandle.OldIrql;
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
            }
            __writecr8(OldIrql);
            v10 = v45;
          }
          else
          {
LABEL_45:
            *(_QWORD *)(v12 + 24) -= v26;
            *(_QWORD *)(v12 + 48) -= v26;
            *(_QWORD *)v12 = v31;
            RtlSetBits(v16, v31, v26);
            RtlSetBits(v53, v31, v26);
            MiInvalidatePageFileBitmapsCache(v12, v31, v26, 0LL);
            KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
            v36 = LockHandle.OldIrql;
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
            {
              v37 = KeGetCurrentPrcb();
              _InterlockedAnd((volatile signed __int32 *)v37->SchedulerAssist, 0xFFFEFFFF);
              KiRemoveSystemWorkPriorityKick((__int64)v37);
            }
            __writecr8(v36);
            v6 -= v26;
            if ( (*(_BYTE *)(v12 + 204) & 0x10) == 0 )
            {
              v38 = v26 + v49;
              if ( !(unsigned int)MiChargeCommit(v2, v26 + v49, 2u) )
              {
                KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v12 + 232), &LockHandle);
                *(_QWORD *)(v12 + 24) += v26;
                *(_QWORD *)(v12 + 48) += v26;
                *(_QWORD *)v12 = v31 + v26;
                v39 = *(_QWORD *)(v12 + 112);
                v40 = (_RTL_BITMAP *)(v39 + 24);
                RtlClearBits((PRTL_BITMAP)(v39 + 8), v31, v26);
                RtlClearBits(v40, v31, v26);
                if ( v31 < *(unsigned int *)(v12 + 120) )
                  *(_DWORD *)(v12 + 120) = v31;
                MiCoalescePageFileBitmapsCache(v12, 0, v31);
                KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
                v41 = LockHandle.OldIrql;
                if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
                {
                  v42 = KeGetCurrentPrcb();
                  _InterlockedAnd((volatile signed __int32 *)v42->SchedulerAssist, 0xFFFEFFFF);
                  KiRemoveSystemWorkPriorityKick((__int64)v42);
                }
                __writecr8(v41);
                return KeSetEvent(Event, 0, 0);
              }
              MiReduceCommitLimits(v2, v26, 0LL);
              MiReturnCommit(v2, v38);
            }
            *v45 = v31;
            v10 = v45;
          }
        }
        else
        {
          KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
          v27 = LockHandle.OldIrql;
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
          {
            v28 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v28->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick((__int64)v28);
          }
          __writecr8(v27);
        }
      }
      ++v10;
      v11 = v50 + 8;
      v45 = v10;
      ++Flink;
      v50 += 8LL;
      if ( Flink >= v44 )
        return KeSetEvent(Event, 0, 0);
      Flink_high = v46;
      v5 = v57;
    }
  }
  return KeSetEvent(Event, 0, 0);
}
