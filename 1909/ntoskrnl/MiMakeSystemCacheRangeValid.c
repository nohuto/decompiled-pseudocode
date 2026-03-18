/*
 * XREFs of MiMakeSystemCacheRangeValid @ 0x1400B8110
 * Callers:
 *     MmCheckCachedPageStates @ 0x1400B6670 (MmCheckCachedPageStates.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     ObFastReferenceObject @ 0x14003ACD0 (ObFastReferenceObject.c)
 *     ExReleaseRundownProtection_0 @ 0x140043C20 (ExReleaseRundownProtection_0.c)
 *     ExAcquireSpinLockShared @ 0x140061A20 (ExAcquireSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140061AC0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ObDereferenceObjectDeferDelete @ 0x140066AD0 (ObDereferenceObjectDeferDelete.c)
 *     ObFastReferenceObjectLocked @ 0x14007FC50 (ObFastReferenceObjectLocked.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLockPageTableInternal @ 0x1400ABA00 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1400AC920 (MiUnlockWorkingSetShared.c)
 *     MiAllocateWsle @ 0x1400AE730 (MiAllocateWsle.c)
 *     MiAddWorkingSetEntries @ 0x1400AEC00 (MiAddWorkingSetEntries.c)
 *     MiStartingOffset @ 0x1400B8AD0 (MiStartingOffset.c)
 *     MiDecrementShareCount @ 0x1400BB990 (MiDecrementShareCount.c)
 *     PfSnReferenceProcessTrace @ 0x1400D1DC0 (PfSnReferenceProcessTrace.c)
 *     PfSnLogPageFaultCommon @ 0x1400D1F14 (PfSnLogPageFaultCommon.c)
 *     PfSnCheckLoggingForThread @ 0x1400D25BC (PfSnCheckLoggingForThread.c)
 *     MiLockPageInline @ 0x1400DDE20 (MiLockPageInline.c)
 *     MiUnlockPageTableInternal @ 0x1401000D0 (MiUnlockPageTableInternal.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140104E40 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiEmptyDeferredWorkingSetEntries @ 0x14012AC6C (MiEmptyDeferredWorkingSetEntries.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14033AB64 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 */

void __fastcall MiMakeSystemCacheRangeValid(unsigned __int64 a1, unsigned __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v4; // r13
  unsigned __int64 v5; // r15
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rsi
  LONG *v9; // r14
  unsigned __int8 v10; // r12
  struct _KPRCB *CurrentPrcb; // r15
  _DWORD *SchedulerAssist; // rcx
  signed __int32 v13; // ett
  __int64 CurrentIrql; // r14
  unsigned __int64 v15; // r8
  __int64 v16; // rcx
  __int64 v17; // rdx
  unsigned __int64 v18; // r11
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rcx
  char v21; // r12
  __int64 v22; // r10
  __int64 v23; // rbx
  unsigned __int64 v24; // r15
  __int64 v25; // r14
  __int64 v26; // rdx
  __int64 v27; // rbx
  unsigned __int64 v28; // rsi
  __int64 v29; // r9
  __int64 v30; // r10
  _QWORD *v31; // r15
  unsigned int v32; // ecx
  char v33; // al
  char v34; // r9
  unsigned __int64 v35; // rdx
  char v36; // cl
  char v37; // r9
  __int64 v38; // r14
  unsigned __int64 v39; // r15
  __int64 v40; // rbx
  __int64 v41; // rsi
  __int64 v42; // r12
  __int64 v43; // r12
  unsigned __int64 *p_ThreadLock; // r13
  ULONG_PTR v45; // rdi
  int v46; // esi
  signed __int64 v47; // rax
  signed __int64 v48; // rtt
  __int64 v49; // rax
  struct _EX_RUNDOWN_REF *v50; // r12
  int v51; // r8d
  unsigned __int64 v52; // rdi
  unsigned __int8 v53; // si
  __int64 v54; // rdi
  volatile LONG *p_CycleTime; // rdi
  _DWORD *v56; // rcx
  int v57; // eax
  int v58; // eax
  unsigned __int64 DeepFreezeStartTime; // rax
  __int64 v60; // rax
  __int64 v61; // r8
  unsigned __int64 v62; // r8
  __int64 v63; // rax
  struct _KPRCB *v64; // rcx
  struct _KPRCB *v65; // rcx
  KIRQL v66; // [rsp+40h] [rbp-C0h]
  __int64 v67; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v68; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v69; // [rsp+58h] [rbp-A8h]
  struct _KTHREAD *CurrentThread; // [rsp+60h] [rbp-A0h]
  __int64 v71; // [rsp+68h] [rbp-98h]
  unsigned __int64 v72; // [rsp+70h] [rbp-90h]
  unsigned int v73; // [rsp+78h] [rbp-88h]
  int v74; // [rsp+7Ch] [rbp-84h] BYREF
  __int64 v75; // [rsp+80h] [rbp-80h] BYREF
  __int64 v76; // [rsp+88h] [rbp-78h]
  __int64 v77; // [rsp+90h] [rbp-70h] BYREF
  __int64 v78; // [rsp+98h] [rbp-68h]
  _QWORD v79[16]; // [rsp+A0h] [rbp-60h]
  _QWORD v80[16]; // [rsp+120h] [rbp+20h]

  v4 = a3;
  v5 = a1;
  v72 = a1;
  v73 = a3;
  v67 = 0LL;
  v68 = 0LL;
  v69 = 0LL;
  v80[0] = 0LL;
  v78 = a4;
  CurrentThread = 0LL;
  v7 = (__int64)(a1 << 25) >> 16;
  v8 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( (byte_14046A278 & 7u) >= 6 )
  {
    CurrentIrql = KeGetCurrentIrql();
    v76 = CurrentIrql;
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  }
  else
  {
    v9 = (LONG *)&unk_14046A280;
    if ( (byte_14046A278 & 7) == 2 )
      v9 = &dword_140466F00;
    v10 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v10 < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v9, v10);
    }
    else
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v57 = SchedulerAssist[5];
          SchedulerAssist[5] = v57 + 1;
          if ( v57 == -1 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      _m_prefetchw(v9);
      v13 = *v9 & 0x7FFFFFFF;
      if ( v13 != _InterlockedCompareExchange(v9, v13 + 1, v13) )
      {
        v56 = CurrentPrcb->SchedulerAssist;
        if ( v56 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v58 = v56[5] - 1;
            v56[5] = v58;
            if ( !v58 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        ExpWaitForSpinLockSharedAndAcquire(v9, v10);
      }
      v5 = v72;
    }
    if ( v9[1] )
      _InterlockedExchange(v9 + 1, 0);
    LOBYTE(CurrentIrql) = v10;
    v76 = v10;
  }
  MiLockPageTableInternal((__int64)&unk_14046A1C0, v8, 0LL);
  v15 = ((v7 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v16 = *(_QWORD *)v15;
  if ( v15 >= 0xFFFFF6FB7DBED000uLL
    && v15 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v16 & 1) != 0
    && ((v16 & 0x20) == 0 || (v16 & 0x42) == 0) )
  {
    DeepFreezeStartTime = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
    if ( DeepFreezeStartTime )
    {
      v60 = *(_QWORD *)(DeepFreezeStartTime + 8 * ((v15 >> 3) & 0x1FF));
      v61 = v16 | 0x20;
      if ( (v60 & 0x20) == 0 )
        v61 = v16;
      v16 = v61;
      if ( (v60 & 0x42) != 0 )
        v16 = v61 | 0x42;
    }
  }
  v77 = v16;
  v17 = *(_QWORD *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v77) >> 12) & 0xFFFFFFFFFLL)
                  - 0x58000000000LL
                  + 16);
  if ( v17 )
    v17 += 40 * ((v7 >> 18) & 7);
  v19 = *(_QWORD *)(v17 + 24);
  BYTE4(v68) = CurrentIrql;
  v20 = v19 & 0xFFFFFFFFFFFFFFFEuLL;
  v69 = v8;
  if ( (v19 & 1) == 0 )
    v20 = v19;
  v21 = BYTE5(v68) | 4;
  BYTE5(v68) |= 4u;
  v22 = *(_QWORD *)(qword_140465E88 + 8LL * (*(_WORD *)(*(_QWORD *)v20 + 60LL) & 0x3FF)) + 0x2000LL;
  v71 = v22;
  v23 = v22;
  v67 = v22;
  if ( (_DWORD)v4 )
  {
    v24 = v5 - a2;
    v25 = 0LL;
    v72 = v24;
    while ( 1 )
    {
      v26 = *(_QWORD *)a2;
      v27 = *(_QWORD *)a2;
      v79[v25] = 0LL;
      if ( a2 >= v18 && a2 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0xC00000) != 0 )
      {
        if ( KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v27 & 1) != 0
          && ((v27 & 0x20) == 0 || (v27 & 0x42) == 0) )
        {
          v62 = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
          if ( v62 )
          {
            v27 |= 0x20uLL;
            v63 = *(_QWORD *)(v62 + 8 * ((a2 >> 3) & 0x1FF));
            if ( (v63 & 0x20) == 0 )
              v27 = v26;
            if ( (v63 & 0x42) != 0 )
              v27 |= 0x42uLL;
          }
        }
        v21 = BYTE5(v68);
      }
      v75 = v27;
      if ( !v27 )
        goto LABEL_37;
      if ( (v27 & 1) == 0 )
      {
        *(_QWORD *)a2 = v26 | 1;
        goto LABEL_71;
      }
      v28 = a2 + v24;
      if ( (*(_BYTE *)(a2 + v24) & 1) == 0 )
        break;
LABEL_71:
      v79[v25] = 1LL;
LABEL_37:
      v24 = v72;
      v22 = v71;
      ++v25;
      a2 += 8LL;
      v18 = 0xFFFFF6FB7DBED000uLL;
      if ( !--v4 )
      {
        v8 = v69;
        v23 = v67;
        LODWORD(v4) = v73;
        LOBYTE(CurrentIrql) = v76;
        goto LABEL_39;
      }
    }
    v31 = (_QWORD *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v75) >> 12) & 0xFFFFFFFFFLL)
                   - 0x58000000000LL);
    v80[v25] = v31[2];
    if ( (v21 & 4) == 0 || (v21 & 1) != 0 )
    {
      v33 = v29;
LABEL_33:
      if ( (unsigned int)MiAllocateWsle(v30, v28, v31, 0, v27, v33, v29) )
      {
        if ( (v80[v25] & 0x400LL) != 0 && PfSnNumActiveTraces )
          v79[v25] = v31[1] | 0x8000000000000000uLL;
        goto LABEL_37;
      }
      goto LABEL_71;
    }
    if ( !WORD1(v68) )
    {
      v32 = v28;
      goto LABEL_29;
    }
    if ( WORD1(v68) + (unsigned __int16)v68 == (((unsigned int)v28 >> 3) & 0x1FF) )
    {
      if ( (v31[5] & 0x200000000000000LL) != 0 )
      {
        if ( (v21 & 0x10) == 0 )
          goto LABEL_57;
      }
      else if ( (v21 & 0x10) != 0 )
      {
LABEL_57:
        v32 = v28;
        if ( WORD1(v68) )
        {
          ++WORD1(v68);
LABEL_32:
          v33 = 4;
          goto LABEL_33;
        }
LABEL_29:
        WORD1(v68) = 1;
        LOWORD(v68) = (v32 >> 3) & 0x1FF;
        if ( (v31[5] & 0x200000000000000LL) != 0 )
          v21 &= ~0x10u;
        else
          v21 |= 0x10u;
        BYTE5(v68) = v21;
        goto LABEL_32;
      }
    }
    MiEmptyDeferredWorkingSetEntries(&v67);
    v30 = v71;
    v29 = 0LL;
    v21 = BYTE5(v68);
    goto LABEL_57;
  }
LABEL_39:
  if ( v8 )
  {
    if ( WORD1(v68) )
    {
      v34 = 0;
      v35 = ((unsigned __int64)(unsigned __int16)v68 << 12)
          + ((((__int64)((v8 << 25) - (_QWORD)CurrentThread) >> 16 << 25) - (__int64)CurrentThread) >> 16);
      if ( (v21 & 0x10) != 0 )
        v34 = 2;
      v36 = v34;
      if ( v35 >= 0xFFFFF68000000000uLL && v35 <= 0xFFFFF6FFFFFFFFFFuLL )
      {
        v37 = v34 | 4;
        if ( (*(_BYTE *)(v23 + 184) & 7) != 0 )
          v37 = v36;
      }
      else
      {
        v37 = v34 | 5;
      }
      MiAddWorkingSetEntries(v23, v35, WORD1(v68), v37);
    }
    MiUnlockPageTableInternal(v23);
    v22 = v71;
  }
  MiUnlockWorkingSetShared(v22, CurrentIrql);
  v38 = (unsigned int)v4;
  v39 = a2 - 8LL * (unsigned int)v4;
  if ( (_DWORD)v4 )
  {
    v40 = 0LL;
    do
    {
      v41 = v79[v40];
      if ( v41 == 1 )
      {
        v75 = MI_READ_PTE_LOCK_FREE(v39);
        v52 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v75) >> 12) & 0xFFFFFFFFFLL)
            - 0x58000000000LL;
        v53 = MiLockPageInline(v52);
        MiDecrementShareCount(v52);
        _InterlockedAnd64((volatile signed __int64 *)(v52 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v54 = v78;
        v74 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v54 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v74);
          while ( *(__int64 *)(v54 + 24) < 0 );
        }
        MiDecrementShareCount(v54);
        _InterlockedAnd64((volatile signed __int64 *)(v54 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v53 < 2u )
        {
          v64 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v64->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v64);
        }
        __writecr8(v53);
      }
      else if ( v41 )
      {
        v42 = v80[v40];
        if ( qword_140465800 && (v42 & 0x10) == 0 )
          v42 &= ~qword_140465800;
        v43 = v42 >> 16;
        CurrentThread = *(struct _KTHREAD **)v43;
        p_ThreadLock = &CurrentThread->ThreadLock;
        v45 = ObFastReferenceObject((signed __int64 *)&CurrentThread->ThreadLock);
        if ( !v45 )
        {
          p_CycleTime = (volatile LONG *)&CurrentThread->CycleTime;
          v66 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)&CurrentThread->CycleTime);
          CurrentThread = (struct _KTHREAD *)ObFastReferenceObjectLocked(p_ThreadLock);
          ExReleaseSpinLockSharedFromDpcLevel(p_CycleTime);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v66 < 2u )
          {
            v65 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v65->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(v65);
          }
          __writecr8(v66);
          v45 = (ULONG_PTR)CurrentThread;
        }
        v46 = MiStartingOffset(v43, v41, 0xFFFFFFFFLL);
        if ( !*(_QWORD *)(v45 + 32) )
        {
          CurrentThread = KeGetCurrentThread();
          v49 = PfSnReferenceProcessTrace(CurrentThread->ApcState.Process);
          v50 = (struct _EX_RUNDOWN_REF *)v49;
          if ( v49 )
          {
            if ( (unsigned int)PfSnCheckLoggingForThread(CurrentThread, v49, 4LL) )
              PfSnLogPageFaultCommon((_DWORD)v50, v45, *(_QWORD *)(v45 + 24), v46, v51);
            ExReleaseRundownProtection_0(v50 + 45);
          }
        }
        _m_prefetchw(p_ThreadLock);
        v47 = *p_ThreadLock;
        if ( (v45 ^ *p_ThreadLock) >= 0xF )
        {
LABEL_84:
          ObDereferenceObjectDeferDelete((PVOID)v45);
        }
        else
        {
          while ( 1 )
          {
            v48 = v47;
            v47 = _InterlockedCompareExchange64((volatile signed __int64 *)p_ThreadLock, v47 + 1, v47);
            if ( v48 == v47 )
              break;
            if ( (v45 ^ v47) >= 0xF )
              goto LABEL_84;
          }
        }
      }
      ++v40;
      v39 += 8LL;
      --v38;
    }
    while ( v38 );
  }
}
