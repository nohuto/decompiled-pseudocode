/*
 * XREFs of KiOutSwapProcesses @ 0x14010B4D0
 * Callers:
 *     KeSwapProcessOrStack @ 0x14017FEE0 (KeSwapProcessOrStack.c)
 * Callees:
 *     MiUnmapPageInHyperSpaceWorker @ 0x14003AB00 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiSwizzleInvalidPte @ 0x14003D7C0 (MiSwizzleInvalidPte.c)
 *     KeIsEmptyAffinityEx @ 0x140062160 (KeIsEmptyAffinityEx.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     MiDecrementShareCount @ 0x140081E90 (MiDecrementShareCount.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140082770 (MiMapPageInHyperSpaceWorker.c)
 *     MiEmptyPageAccessLog @ 0x140088570 (MiEmptyPageAccessLog.c)
 *     KeFlushProcessTb @ 0x140091AD4 (KeFlushProcessTb.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     KeWaitForGate @ 0x1400FA384 (KeWaitForGate.c)
 *     KiAcquireKobjectLockSafe @ 0x1400FBE90 (KiAcquireKobjectLockSafe.c)
 *     KiReadyOutSwappedThreads @ 0x14010B700 (KiReadyOutSwappedThreads.c)
 *     MiLockAndDecrementShareCount @ 0x140118118 (MiLockAndDecrementShareCount.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     MiReleaseCommitForResetPages @ 0x1402A4FB4 (MiReleaseCommitForResetPages.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x1402A5164 (MiReleaseOutSwappedProcessCommit.c)
 */

__int64 __fastcall KiOutSwapProcesses(_QWORD *a1, signed __int64 *a2, __int64 a3)
{
  _QWORD *v4; // rdi
  unsigned __int8 CurrentIrql; // r15
  int v6; // eax
  _QWORD *v7; // rsi
  __int64 v8; // r8
  __int64 v9; // rcx
  _QWORD *v10; // rax
  __int64 result; // rax
  LONG *v12; // rbx
  char v13; // cl
  char v14; // bl
  unsigned __int8 v15; // cl
  unsigned int v16; // eax
  signed __int64 v17; // rax
  signed __int64 v18; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int8 v20; // al
  char v21; // cl
  _QWORD *v22; // rax
  __int64 v23; // rdx
  _QWORD *v24; // rcx
  unsigned __int8 OldIrql; // r13
  struct _KPRCB *v26; // rcx
  PVOID *v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // r8
  unsigned __int8 v30; // r13
  struct _KPRCB *v31; // rcx
  __int64 v32; // rbx
  ULONG_PTR v33; // r13
  __int64 v34; // rbx
  unsigned __int64 v35; // r11
  __int64 v36; // rdx
  __int64 v37; // rcx
  _QWORD *v38; // r11
  __int64 v39; // rdx
  __int64 v40; // r8
  unsigned __int8 v41; // bl
  struct _KPRCB *v42; // rcx
  struct _KPRCB *v43; // rcx
  struct _KPRCB *v44; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-40h] BYREF
  __int16 v46; // [rsp+38h] [rbp-28h] BYREF
  char v47; // [rsp+3Ah] [rbp-26h]
  int v48; // [rsp+3Ch] [rbp-24h]
  _QWORD v49[3]; // [rsp+40h] [rbp-20h] BYREF
  unsigned __int8 v50; // [rsp+A0h] [rbp+40h] BYREF
  int v51; // [rsp+A8h] [rbp+48h] BYREF
  int v52; // [rsp+B0h] [rbp+50h] BYREF
  int v53; // [rsp+B8h] [rbp+58h] BYREF

  do
  {
    v4 = a1 - 33;
    a1 = (_QWORD *)*a1;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    v51 = 0;
    while ( _interlockedbittestandset((volatile signed __int32 *)v4, 7u) )
    {
      do
        KeYieldProcessorEx(&v51, (__int64)a2, a3);
      while ( (*(_DWORD *)v4 & 0x80u) != 0 );
    }
    v6 = *((_DWORD *)v4 + 143);
    v7 = v4 + 31;
    v8 = v4[31];
    if ( (_QWORD *)v8 != v4 + 31 && (v6 & 7) != 6 )
    {
      v9 = *v7;
      v10 = (_QWORD *)v4[32];
      if ( *(_QWORD **)(*v7 + 8LL) == v7 && (_QWORD *)*v10 == v7 )
      {
        *v10 = v9;
        *(_QWORD *)(v9 + 8) = v10;
        v4[32] = v4 + 31;
        *v7 = v7;
        _InterlockedXor((volatile signed __int32 *)v4 + 143, 3u);
        _InterlockedAnd((volatile signed __int32 *)v4, 0xFFFFFF7F);
        result = KiReadyOutSwappedThreads(v8, CurrentIrql);
        continue;
      }
LABEL_99:
      __fastfail(3u);
    }
    _InterlockedXor((volatile signed __int32 *)v4 + 143, ((unsigned __int8)v6 ^ 0xFD) & 7);
    _InterlockedAnd((volatile signed __int32 *)v4, 0xFFFFFF7F);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(CurrentIrql);
    if ( (v4[183] & 7) == 2 )
      v12 = &dword_14043C7C0;
    else
      v12 = (LONG *)(v4 + 184);
    _InterlockedOr((volatile signed __int32 *)v4 + 193, 0x40u);
    v13 = *((_BYTE *)v4 + 1467);
    if ( (v13 & 0x60) == 0x20 )
    {
      MiReleaseOutSwappedProcessCommit(v4);
    }
    else if ( (v13 & 0x60) == 0x40 && *(_QWORD *)(*((_QWORD *)v12 + 4) + 40LL) )
    {
      MiReleaseCommitForResetPages(v4);
    }
    if ( v4[177] != 1LL || (*((_BYTE *)v4 + 1467) & 2) != 0 )
      goto LABEL_16;
    v46 = 263;
    v49[1] = v49;
    v47 = 6;
    v49[0] = v49;
    v48 = 0;
    KeAcquireInStackQueuedSpinLock(&qword_14043BF40, &LockHandle);
    while ( 1 )
    {
      v20 = *((_BYTE *)v4 + 1465);
      v21 = v20 >> 4;
      if ( (v20 & 6) == 0 && !v21 )
      {
        _InterlockedOr((volatile signed __int32 *)v4 + 193, 0x80u);
        v22 = v4 + 163;
        v23 = v4[163];
        v24 = (_QWORD *)v4[164];
        if ( *(_QWORD **)(v23 + 8) != v4 + 163 || (_QWORD *)*v24 != v22 )
          goto LABEL_99;
        *v24 = v23;
        *(_QWORD *)(v23 + 8) = v24;
        *v22 = 0LL;
        KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
        OldIrql = LockHandle.OldIrql;
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
        {
          v26 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v26->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v26);
        }
        __writecr8(OldIrql);
        v27 = (PVOID *)*((_QWORD *)v12 + 6);
        if ( v27 )
        {
          MiEmptyPageAccessLog(v27);
          *((_QWORD *)v12 + 6) = 0LL;
        }
        v52 = 0;
        while ( !(unsigned int)KeIsEmptyAffinityEx((_WORD *)v4 + 136) )
          KeYieldProcessorEx(&v52, v28, v29);
        KeFlushProcessTb(v4[5]);
        if ( v4[193] )
          KeFlushProcessTb(v4[79]);
        v32 = v4[5] >> 12;
        v33 = 48 * v32 - 0x58000000000LL;
        MiMapPageInHyperSpaceWorker(v32, &v50, 0x80000000);
        v34 = MiSwizzleInvalidPte(((v32 & 0xFFFFFFFFFLL) << 12) | 0x880);
        if ( MiPteInShadowRange(v35) )
        {
          if ( (unsigned int)MiPteHasShadow(v37, v36) )
          {
            if ( !HIBYTE(word_14043B26C) && (v34 & 1) != 0 )
              v36 |= 0x8000000000000000uLL;
            *v38 = v36;
            MiWritePteShadow(v38);
            goto LABEL_77;
          }
          if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
            && (v34 & 1) != 0 )
          {
            v36 |= 0x8000000000000000uLL;
          }
        }
        *v38 = v36;
LABEL_77:
        MiUnmapPageInHyperSpaceWorker((unsigned __int64)v38, v50, 0x80000000LL);
        MiLockAndDecrementShareCount(v33, 0LL);
        KeAcquireInStackQueuedSpinLock(&qword_14043BF40, &LockHandle);
        v53 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v33 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v53, v39, v40);
          while ( *(__int64 *)(v33 + 24) < 0 );
        }
        *(_QWORD *)(v33 + 8) = v4 + 136;
        v4[136] = v34;
        v4[175] = 0LL;
        v4[176] = 0LL;
        v4[177] = 0LL;
        v4[178] = 0LL;
        MiDecrementShareCount(v33);
        _InterlockedAnd64((volatile signed __int64 *)(v33 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
        v41 = LockHandle.OldIrql;
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
        {
          v42 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v42->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v42);
        }
        goto LABEL_91;
      }
      if ( v21 )
        break;
      v4[173] = &v46;
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
      v30 = LockHandle.OldIrql;
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
      {
        v31 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v31->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v31);
      }
      __writecr8(v30);
      KeWaitForGate((__int64)&v46, 0x12u);
      KeAcquireInStackQueuedSpinLock(&qword_14043BF40, &LockHandle);
      v4[173] = 0LL;
    }
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    v41 = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      v43 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v43->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v43);
    }
LABEL_91:
    __writecr8(v41);
LABEL_16:
    v14 = 0;
    v15 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v15 < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    KiAcquireKobjectLockSafe((volatile signed __int32 *)v4, (__int64)a2, v8);
    if ( (_QWORD *)*v7 == v7 )
    {
      v16 = 4;
    }
    else
    {
      a2 = v4 + 33;
      _m_prefetchw(&KiProcessInSwapListHead);
      v17 = KiProcessInSwapListHead;
      do
      {
        *a2 = v17;
        v18 = v17;
        v17 = _InterlockedCompareExchange64(&KiProcessInSwapListHead, (signed __int64)a2, v17);
      }
      while ( v17 != v18 );
      if ( !v17 )
        v14 = 1;
      v16 = 7;
    }
    _InterlockedXor((volatile signed __int32 *)v4 + 143, v16);
    _InterlockedAnd((volatile signed __int32 *)v4, 0xFFFFFF7F);
    if ( v14 )
    {
      KiAcquireKobjectLockSafe(&KiSwapEvent.Header.Lock, (__int64)a2, a3);
      KiSwapEvent.Header.SignalState = 1;
      _InterlockedAnd((volatile signed __int32 *)&KiSwapEvent, 0xFFFFFF7F);
    }
    result = (unsigned int)KiIrqlFlags;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        result = KeGetCurrentIrql();
        if ( (unsigned __int8)result >= 2u && CurrentIrql < 2u )
        {
          v44 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v44->SchedulerAssist, 0xFFFEFFFF);
          result = KiRemoveSystemWorkPriorityKick(v44);
        }
      }
    }
    __writecr8(CurrentIrql);
  }
  while ( a1 );
  return result;
}
