/*
 * XREFs of MiAttemptPageFileReductionApc @ 0x1402CD8B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlSetBits @ 0x140007660 (RtlSetBits.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140044720 (KeAcquireInStackQueuedSpinLock.c)
 *     MiChargeCommit @ 0x1400521D0 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x140058F90 (MiReturnCommit.c)
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 *     MiCoalescePageFileBitmapsCache @ 0x140089150 (MiCoalescePageFileBitmapsCache.c)
 *     RtlClearBits @ 0x140091EF0 (RtlClearBits.c)
 *     MiOkToShrinkPageFiles @ 0x1400AD7CC (MiOkToShrinkPageFiles.c)
 *     MiInvalidatePageFileBitmapsCache @ 0x1400F11C8 (MiInvalidatePageFileBitmapsCache.c)
 *     RtlFindLastBackwardRunClear @ 0x140128E80 (RtlFindLastBackwardRunClear.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     MiReduceCommitLimits @ 0x1402D9C40 (MiReduceCommitLimits.c)
 */

LONG __fastcall MiAttemptPageFileReductionApc(struct _KEVENT *a1)
{
  unsigned int Flink; // r13d
  __int64 v2; // r12
  unsigned __int64 v3; // r15
  unsigned __int64 Flink_high; // rbx
  unsigned int v5; // eax
  int v6; // edx
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
  _RTL_BITMAP BitMapHeader; // [rsp+78h] [rbp-11h] BYREF
  _RTL_BITMAP v52; // [rsp+88h] [rbp-1h] BYREF
  ULONG StartingRunIndex; // [rsp+98h] [rbp+Fh] BYREF
  ULONG v54; // [rsp+9Ch] [rbp+13h] BYREF
  PRTL_BITMAP v55; // [rsp+A0h] [rbp+17h]
  struct _KEVENT *Event; // [rsp+F0h] [rbp+67h]
  int v57; // [rsp+108h] [rbp+7Fh]

  Event = a1;
  Flink = (unsigned int)a1[1].Header.WaitListHead.Flink;
  v2 = *(_QWORD *)&a1[1].Header.Lock;
  *(_QWORD *)&BitMapHeader.SizeOfBitMap = 0LL;
  BitMapHeader.Buffer = 0LL;
  *(_QWORD *)&v52.SizeOfBitMap = 0LL;
  v52.Buffer = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( Flink >= 0x10 )
  {
    if ( !MiOkToShrinkPageFiles(*(_QWORD *)(v2 + 8424), *(_QWORD *)(v2 + 8552)) )
      return KeSetEvent(Event, 0, 0);
    v5 = *(_DWORD *)(v2 + 7896);
    Flink_high = 0x4000LL;
    v49 = 0x8000LL;
    v6 = 1;
    v9 = (((v8 * (unsigned __int128)0xCCCCCCCCCCCCCCCDuLL) >> 64) & 0xFFFFFFFFFFFFFFF8uLL) - v7;
    a1 = Event;
    v3 = v9 - 0x8000;
    Flink = 0;
  }
  else
  {
    v49 = 0LL;
    v3 = 0x7FFFFFFFFFFFFFFFLL;
    Flink_high = HIDWORD(a1[1].Header.WaitListHead.Flink);
    v5 = Flink + 1;
    v6 = 0;
  }
  v44 = v5;
  v57 = v6;
  v46 = Flink_high;
  if ( Flink < v5 )
  {
    v10 = (_DWORD *)&a1[1].Header.WaitListHead.Blink + Flink;
    v11 = 8LL * Flink + 7904;
    v45 = v10;
    v50 = v11;
    while ( Flink_high <= v3 )
    {
      v12 = *(_QWORD *)(v11 + v2);
      v13 = *(_WORD *)(v12 + 204);
      if ( ((v13 & 0x10) == 0 || !v6)
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
        v55 = (PRTL_BITMAP)(v14 + 24);
        if ( _bittest(v17, v18) == 1 || (v19 = *(const signed __int32 **)(v14 + 32), _bittest(v19, v18) == 1) )
        {
          v25 = v57;
          v26 = 0LL;
        }
        else
        {
          v20 = *(_QWORD *)v12 - *(_QWORD *)(v12 + 16);
          if ( v3 <= v20 )
            v20 = v3;
          v21 = (*(_QWORD *)v12 - v20) & 0xFFFFFFFFFFFFFFE0uLL;
          v22 = v15 - v21;
          v21 >>= 5;
          BitMapHeader.SizeOfBitMap = v22;
          v52.SizeOfBitMap = v22;
          BitMapHeader.Buffer = (unsigned int *)&v17[v21];
          v52.Buffer = (unsigned int *)&v19[v21];
          LastBackwardRunClear = RtlFindLastBackwardRunClear(&BitMapHeader, v22 - 1, &StartingRunIndex);
          if ( LastBackwardRunClear <= v20 )
            v20 = LastBackwardRunClear;
          v24 = RtlFindLastBackwardRunClear(&v52, v22 - 1, &v54);
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
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
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
            RtlSetBits(v55, v31, v26);
            MiInvalidatePageFileBitmapsCache(v12, v31, v26, 0LL);
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
            v36 = LockHandle.OldIrql;
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
            {
              v37 = KeGetCurrentPrcb();
              _InterlockedAnd((volatile signed __int32 *)v37->SchedulerAssist, 0xFFFEFFFF);
              KiRemoveSystemWorkPriorityKick((__int64)v37);
            }
            __writecr8(v36);
            v3 -= v26;
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
                KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
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
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
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
      v6 = v57;
    }
  }
  return KeSetEvent(Event, 0, 0);
}
