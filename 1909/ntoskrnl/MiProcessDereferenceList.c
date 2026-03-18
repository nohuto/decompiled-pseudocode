/*
 * XREFs of MiProcessDereferenceList @ 0x140164A94
 * Callers:
 *     MiDereferenceSegmentThread @ 0x140191670 (MiDereferenceSegmentThread.c)
 *     MiRemoveUnusedSegments @ 0x1402BA140 (MiRemoveUnusedSegments.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140043C20 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140043CA0 (ExAcquireRundownProtection_0.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060B00 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060B40 (ExAcquireSpinLockExclusive.c)
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 *     KeResetEvent @ 0x1400896E0 (KeResetEvent.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x1400E2E00 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     MiProcessingPageExtendComplete @ 0x1402B9CC8 (MiProcessingPageExtendComplete.c)
 *     MiRemoveUnusedSegments @ 0x1402BA140 (MiRemoveUnusedSegments.c)
 *     MiAttemptPageFileReduction @ 0x1402CD468 (MiAttemptPageFileReduction.c)
 *     MiFreeClonePool @ 0x1402E4088 (MiFreeClonePool.c)
 *     MiSegmentDelete @ 0x14064E778 (MiSegmentDelete.c)
 *     MiExtendPagingFiles @ 0x14088C7A4 (MiExtendPagingFiles.c)
 */

__int64 __fastcall MiProcessDereferenceList(__int64 a1, int a2)
{
  KIRQL v3; // al
  __int64 *v4; // r14
  KIRQL v5; // di
  __int64 *v6; // rsi
  __int64 v7; // rax
  __int64 **v8; // r15
  __int64 *v9; // rsi
  int v10; // r13d
  _QWORD **v11; // rsi
  _QWORD *v12; // rax
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 *v15; // rax
  struct _KPRCB *v16; // rcx
  __int64 v17; // rax
  struct _KEVENT *v18; // rsi
  struct _KPRCB *v19; // rcx
  struct _KEVENT *v20; // rcx
  __int128 v21; // xmm0
  struct _KPRCB *v22; // rcx
  KIRQL v23; // al
  __int64 v24; // rcx
  _QWORD *v25; // r13
  __int128 v26; // xmm0
  struct _KPRCB *v27; // rcx
  int v28; // eax
  int v29; // ecx
  bool v30; // zf
  __int64 v31; // rax
  struct _KPRCB *v32; // rcx
  _OWORD v33[6]; // [rsp+20h] [rbp-60h] BYREF
  int v34; // [rsp+C0h] [rbp+40h]

  memset(v33, 0, 0x58uLL);
  v34 = 0;
  v3 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1280));
  v4 = (__int64 *)(a1 + 1488);
LABEL_2:
  v5 = v3;
  do
  {
    v6 = (__int64 *)*v4;
    if ( (__int64 *)*v4 != v4 )
    {
      v7 = *v6;
      if ( (__int64 *)v6[1] != v4 || *(__int64 **)(v7 + 8) != v6 )
LABEL_68:
        __fastfail(3u);
      *v4 = v7;
      *(_QWORD *)(v7 + 8) = v4;
      if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel((volatile signed __int32 *)v6 + 16) )
      {
        *((_DWORD *)v6 + 12) &= ~0x8000000u;
        v6[1] = (__int64)v6;
        *v6 = (__int64)v6;
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 1280));
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v6 + 16);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v5 < 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
        __writecr8(v5);
        MiSegmentDelete(v6 - 1);
      }
      else
      {
        v15 = (__int64 *)*v4;
        if ( *(__int64 **)(*v4 + 8) != v4 )
          goto LABEL_68;
        *v6 = (__int64)v15;
        v6[1] = (__int64)v4;
        v15[1] = (__int64)v6;
        *v4 = (__int64)v6;
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 1280));
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v5 < 2u )
        {
          v16 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v16->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v16);
        }
        __writecr8(v5);
      }
      v3 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1280));
      goto LABEL_2;
    }
    v8 = (__int64 **)(a1 + 1520);
    while ( 1 )
    {
      v9 = *v8;
      if ( *v8 == (__int64 *)v8 )
        break;
      v17 = *v9;
      if ( (__int64 **)v9[1] != v8 || *(__int64 **)(v17 + 8) != v9 )
        goto LABEL_68;
      *v8 = (__int64 *)v17;
      v18 = (struct _KEVENT *)(v9 - 1);
      *(_QWORD *)(v17 + 8) = v8;
      if ( v18[1].Header.WaitListHead.Flink == (struct _LIST_ENTRY *)-1LL )
      {
        if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 944)) )
        {
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 1280));
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v5 < 2u )
          {
            v19 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v19->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(v19);
          }
          __writecr8(v5);
          MiAttemptPageFileReduction(v18);
          ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 944));
          v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1280));
        }
        if ( (v18[3].Header.SignalState & 0x10000000) == 0 )
        {
          v20 = v18 + 2;
          goto LABEL_55;
        }
      }
      else
      {
        v33[0] = *(_OWORD *)&v18->Header.Lock;
        v33[1] = *(_OWORD *)&v18->Header.WaitListHead.Blink;
        v33[2] = v18[1].Header.WaitListHead;
        v33[3] = *(_OWORD *)&v18[2].Header.Lock;
        v21 = *(_OWORD *)&v18[2].Header.WaitListHead.Blink;
        *(_QWORD *)&v33[5] = v18;
        v33[4] = v21;
        v18[3].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v33;
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 1280));
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v5 < 2u )
        {
          v22 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v22->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v22);
        }
        __writecr8(v5);
        if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 944)) )
        {
          MiExtendPagingFiles(v33);
          ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 944));
        }
        v23 = MiProcessingPageExtendComplete(v33, v18, a1);
        --*(_DWORD *)(a1 + 1804);
        v5 = v23;
        if ( *(_DWORD *)(a1 + 1800) )
        {
          v20 = (struct _KEVENT *)(a1 + 1808);
LABEL_55:
          KeSetEvent(v20, 0, 0);
        }
      }
    }
    v10 = a2;
    if ( a2 )
    {
      v11 = (_QWORD **)(a1 + 1504);
      while ( 1 )
      {
        v12 = *v11;
        if ( *v11 == v11 )
          break;
        v24 = *v12;
        if ( (_QWORD **)v12[1] != v11 || *(_QWORD **)(v24 + 8) != v12 )
          goto LABEL_68;
        *v11 = (_QWORD *)v24;
        v25 = v12 - 1;
        *(_QWORD *)(v24 + 8) = v11;
        v33[0] = *(_OWORD *)(v12 - 1);
        v33[1] = *(_OWORD *)(v12 + 1);
        v33[2] = *(_OWORD *)(v12 + 3);
        v33[3] = *(_OWORD *)(v12 + 5);
        v26 = *(_OWORD *)(v12 + 7);
        *(_QWORD *)&v33[5] = v12 - 1;
        v33[4] = v26;
        v12[9] = v33;
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 1280));
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v5 < 2u )
        {
          v27 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v27->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v27);
        }
        __writecr8(v5);
        v28 = MiRemoveUnusedSegments(a1, *(_QWORD *)&v33[2]);
        v29 = v34;
        v30 = v28 == 0;
        v31 = *((_QWORD *)&v33[2] + 1);
        if ( !v30 )
          v29 = 1;
        v34 = v29;
        if ( v29 )
          v31 = 1LL;
        *((_QWORD *)&v33[2] + 1) = v31;
        v5 = MiProcessingPageExtendComplete(v33, v25, a1);
      }
      v10 = a2;
    }
  }
  while ( (__int64 *)*v4 != v4 || v10 && *(_QWORD *)(a1 + 1504) != a1 + 1504 || *v8 != (__int64 *)v8 );
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 1280));
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v5 < 2u )
  {
    v32 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v32->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v32);
  }
  result = v5;
  __writecr8(v5);
  if ( *(_DWORD *)(a1 + 1748) )
  {
    KeResetEvent((PRKEVENT)(a1 + 1744));
    return MiFreeClonePool(a1);
  }
  return result;
}
