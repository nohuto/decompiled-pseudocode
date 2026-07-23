/*
 * XREFs of MiProcessDereferenceList @ 0x140154150
 * Callers:
 *     MiDereferenceSegmentThread @ 0x1401876E0 (MiDereferenceSegmentThread.c)
 *     MiRemoveUnusedSegments @ 0x1402A3220 (MiRemoveUnusedSegments.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14004D320 (ExAcquireRundownProtection_0.c)
 *     KeResetEvent @ 0x1400B89E0 (KeResetEvent.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140100280 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     MiProcessingPageExtendComplete @ 0x1402A2DA8 (MiProcessingPageExtendComplete.c)
 *     MiRemoveUnusedSegments @ 0x1402A3220 (MiRemoveUnusedSegments.c)
 *     MiAttemptPageFileReduction @ 0x1402B74BC (MiAttemptPageFileReduction.c)
 *     MiFreeClonePool @ 0x1402CA1D8 (MiFreeClonePool.c)
 *     MiSegmentDelete @ 0x14061F928 (MiSegmentDelete.c)
 *     MiExtendPagingFiles @ 0x1408544F4 (MiExtendPagingFiles.c)
 */

__int64 __fastcall MiProcessDereferenceList(__int64 a1, int a2)
{
  volatile LONG *v2; // r12
  KIRQL v4; // al
  __int64 *v5; // r14
  KIRQL v6; // di
  __int64 *v7; // rsi
  __int64 v8; // rax
  __int64 **v9; // r15
  __int64 *v10; // rsi
  int v11; // r13d
  _QWORD **v12; // rsi
  _QWORD *v13; // rax
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 *v16; // rax
  struct _KPRCB *v17; // rcx
  __int64 v18; // rax
  struct _KEVENT *v19; // rsi
  struct _KPRCB *v20; // rcx
  struct _KEVENT *v21; // rcx
  __int128 v22; // xmm0
  struct _KPRCB *v23; // rcx
  KIRQL v24; // al
  __int64 v25; // rcx
  _QWORD *v26; // r13
  __int128 v27; // xmm0
  struct _KPRCB *v28; // rcx
  int v29; // eax
  int v30; // ecx
  bool v31; // zf
  __int64 Blink; // rax
  struct _KPRCB *v33; // rcx
  __int128 v34; // [rsp+20h] [rbp-60h] BYREF
  __int128 v35; // [rsp+30h] [rbp-50h]
  LIST_ENTRY WaitListHead; // [rsp+40h] [rbp-40h]
  __int128 v37; // [rsp+50h] [rbp-30h]
  __int128 v38; // [rsp+60h] [rbp-20h]
  struct _KEVENT *v39; // [rsp+70h] [rbp-10h]
  int v40; // [rsp+C0h] [rbp+40h]

  v40 = 0;
  v2 = (volatile LONG *)(a1 + 1280);
  v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1280));
  v5 = (__int64 *)(a1 + 1488);
LABEL_2:
  v6 = v4;
  do
  {
    v7 = (__int64 *)*v5;
    if ( (__int64 *)*v5 != v5 )
    {
      v8 = *v7;
      if ( (__int64 *)v7[1] != v5 || *(__int64 **)(v8 + 8) != v7 )
LABEL_68:
        __fastfail(3u);
      *v5 = v8;
      *(_QWORD *)(v8 + 8) = v5;
      if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel((volatile signed __int32 *)v7 + 16) )
      {
        *((_DWORD *)v7 + 12) &= ~0x8000000u;
        v7[1] = (__int64)v7;
        *v7 = (__int64)v7;
        ExReleaseSpinLockExclusiveFromDpcLevel(v2);
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v7 + 16);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v6 < 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
        __writecr8(v6);
        MiSegmentDelete(v7 - 1);
      }
      else
      {
        v16 = (__int64 *)*v5;
        if ( *(__int64 **)(*v5 + 8) != v5 )
          goto LABEL_68;
        *v7 = (__int64)v16;
        v7[1] = (__int64)v5;
        v16[1] = (__int64)v7;
        *v5 = (__int64)v7;
        ExReleaseSpinLockExclusiveFromDpcLevel(v2);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v6 < 2u )
        {
          v17 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v17->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v17);
        }
        __writecr8(v6);
      }
      v4 = ExAcquireSpinLockExclusive(v2);
      goto LABEL_2;
    }
    v9 = (__int64 **)(a1 + 1520);
    while ( 1 )
    {
      v10 = *v9;
      if ( *v9 == (__int64 *)v9 )
        break;
      v18 = *v10;
      if ( (__int64 **)v10[1] != v9 || *(__int64 **)(v18 + 8) != v10 )
        goto LABEL_68;
      *v9 = (__int64 *)v18;
      v19 = (struct _KEVENT *)(v10 - 1);
      *(_QWORD *)(v18 + 8) = v9;
      if ( v19[1].Header.WaitListHead.Flink == (struct _LIST_ENTRY *)-1LL )
      {
        if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 936)) )
        {
          ExReleaseSpinLockExclusiveFromDpcLevel(v2);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v6 < 2u )
          {
            v20 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v20->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(v20);
          }
          __writecr8(v6);
          MiAttemptPageFileReduction(v19);
          ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 936));
          v6 = ExAcquireSpinLockExclusive(v2);
        }
        if ( (v19[3].Header.SignalState & 0x10000000) == 0 )
        {
          v21 = v19 + 2;
          goto LABEL_55;
        }
      }
      else
      {
        v34 = *(_OWORD *)&v19->Header.Lock;
        v35 = *(_OWORD *)&v19->Header.WaitListHead.Blink;
        WaitListHead = v19[1].Header.WaitListHead;
        v37 = *(_OWORD *)&v19[2].Header.Lock;
        v22 = *(_OWORD *)&v19[2].Header.WaitListHead.Blink;
        v39 = v19;
        v38 = v22;
        v19[3].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)&v34;
        ExReleaseSpinLockExclusiveFromDpcLevel(v2);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v6 < 2u )
        {
          v23 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v23->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v23);
        }
        __writecr8(v6);
        if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 936)) )
        {
          MiExtendPagingFiles(&v34);
          ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 936));
        }
        v24 = MiProcessingPageExtendComplete(&v34, v19, a1);
        --*(_DWORD *)(a1 + 1804);
        v6 = v24;
        if ( *(_DWORD *)(a1 + 1800) )
        {
          v21 = (struct _KEVENT *)(a1 + 1808);
LABEL_55:
          KeSetEvent(v21, 0, 0);
        }
      }
    }
    v11 = a2;
    if ( a2 )
    {
      v12 = (_QWORD **)(a1 + 1504);
      while ( 1 )
      {
        v13 = *v12;
        if ( *v12 == v12 )
          break;
        v25 = *v13;
        if ( (_QWORD **)v13[1] != v12 || *(_QWORD **)(v25 + 8) != v13 )
          goto LABEL_68;
        *v12 = (_QWORD *)v25;
        v26 = v13 - 1;
        *(_QWORD *)(v25 + 8) = v12;
        v34 = *(_OWORD *)(v13 - 1);
        v35 = *(_OWORD *)(v13 + 1);
        WaitListHead = *(LIST_ENTRY *)(v13 + 3);
        v37 = *(_OWORD *)(v13 + 5);
        v27 = *(_OWORD *)(v13 + 7);
        v39 = (struct _KEVENT *)(v13 - 1);
        v38 = v27;
        v13[9] = &v34;
        ExReleaseSpinLockExclusiveFromDpcLevel(v2);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v6 < 2u )
        {
          v28 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v28->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v28);
        }
        __writecr8(v6);
        v29 = MiRemoveUnusedSegments(a1, WaitListHead.Flink);
        v30 = v40;
        v31 = v29 == 0;
        Blink = (__int64)WaitListHead.Blink;
        if ( !v31 )
          v30 = 1;
        v40 = v30;
        if ( v30 )
          Blink = 1LL;
        WaitListHead.Blink = (struct _LIST_ENTRY *)Blink;
        v6 = MiProcessingPageExtendComplete(&v34, v26, a1);
      }
      v11 = a2;
    }
  }
  while ( (__int64 *)*v5 != v5 || v11 && *(_QWORD *)(a1 + 1504) != a1 + 1504 || *v9 != (__int64 *)v9 );
  ExReleaseSpinLockExclusiveFromDpcLevel(v2);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v6 < 2u )
  {
    v33 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v33->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v33);
  }
  result = v6;
  __writecr8(v6);
  if ( *(_DWORD *)(a1 + 1748) )
  {
    KeResetEvent((PRKEVENT)(a1 + 1744));
    return MiFreeClonePool(a1);
  }
  return result;
}
