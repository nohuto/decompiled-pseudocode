/*
 * XREFs of MiLogPageAccess @ 0x14006BDA0
 * Callers:
 *     MiIssueHardFault @ 0x14001BCD0 (MiIssueHardFault.c)
 *     MiDeleteVa @ 0x1400696F0 (MiDeleteVa.c)
 *     MiClearPteAccessed @ 0x14006B770 (MiClearPteAccessed.c)
 *     MmUnmapViewInSystemCache @ 0x140078700 (MmUnmapViewInSystemCache.c)
 *     MI_WSLE_LOG_ACCESS @ 0x140088034 (MI_WSLE_LOG_ACCESS.c)
 *     MiCopyOnWrite @ 0x1400B4520 (MiCopyOnWrite.c)
 *     MiResetAccessBitPte @ 0x14016E930 (MiResetAccessBitPte.c)
 *     MiResetAccessBitPteWorker @ 0x1402B3970 (MiResetAccessBitPteWorker.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1400230C0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiStartingOffset @ 0x140031170 (MiStartingOffset.c)
 *     ObFastReferenceObject @ 0x14004D840 (ObFastReferenceObject.c)
 *     MiGetSharedVm @ 0x140064D20 (MiGetSharedVm.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     ObFastReferenceObjectLocked @ 0x14007DFE4 (ObFastReferenceObjectLocked.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14009D050 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x14009D700 (ExAcquireSpinLockShared.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ObDereferenceObjectDeferDelete @ 0x1400C0FA0 (ObDereferenceObjectDeferDelete.c)
 *     MiAllocateAccessLog @ 0x140114880 (MiAllocateAccessLog.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14031C2A4 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14031C468 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

void __fastcall MiLogPageAccess(__int64 a1, unsigned __int64 a2)
{
  char v2; // r9
  __int64 v4; // rdx
  char v5; // r9
  _QWORD *v7; // r12
  unsigned int v8; // r15d
  unsigned __int64 v9; // r8
  _QWORD *v10; // rbp
  LONG *v11; // r13
  volatile signed __int32 *v12; // rdi
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *SchedulerAssist; // rcx
  signed __int32 v15; // edx
  _QWORD *AccessLog; // rdi
  __int64 v17; // rsi
  __int64 v18; // r12
  unsigned __int64 v19; // rbp
  unsigned __int64 v20; // r12
  unsigned __int64 v21; // rcx
  __int64 v22; // rsi
  bool v23; // cc
  __int64 v24; // rbx
  __int64 v25; // rax
  __int64 *v26; // rdx
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rax
  unsigned __int64 *v30; // rcx
  struct _KPRCB *v31; // rcx
  _DWORD *v32; // rdx
  __int64 v33; // rbx
  ULONG_PTR v34; // r9
  signed __int64 *v35; // roff
  signed __int64 v36; // rax
  signed __int64 v37; // rtt
  unsigned __int64 v38; // rax
  _DWORD *v39; // rcx
  volatile LONG *v40; // rbx
  unsigned __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rdx
  unsigned __int64 v44; // rdx
  __int64 v45; // rax
  __int64 v46; // rdx
  int v47; // eax
  int v48; // eax
  bool v49; // zf
  signed __int32 v50; // eax
  LONG *SharedVm; // rax
  struct _KPRCB *v52; // rcx
  int v53; // eax
  __int64 v54; // [rsp+20h] [rbp-68h]
  _DWORD v55[2]; // [rsp+28h] [rbp-60h]
  __int64 v56; // [rsp+30h] [rbp-58h]
  void *retaddr; // [rsp+88h] [rbp+0h]
  KIRQL v58; // [rsp+90h] [rbp+8h]
  int v59; // [rsp+98h] [rbp+10h] BYREF
  unsigned __int64 v60; // [rsp+A0h] [rbp+18h]
  unsigned __int64 v61; // [rsp+A8h] [rbp+20h] BYREF

  v2 = *(_BYTE *)(a1 + 184);
  v60 = 0LL;
  v4 = 0LL;
  v55[1] = 3;
  v5 = v2 & 7;
  v55[0] = 0;
  if ( v5 == 2 )
    v7 = &unk_14043C7F0;
  else
    v7 = (_QWORD *)(a1 + 240);
  v8 = a2 & 1;
  if ( (a2 & 1) != 0 )
    a2 &= ~1uLL;
  v9 = *(_QWORD *)a2;
  if ( a2 >= 0xFFFFF6FB7DBED000uLL
    && a2 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v9 & 1) != 0
    && ((v9 & 0x20) == 0 || (v9 & 0x42) == 0) )
  {
    v41 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v41 )
    {
      v42 = *(_QWORD *)(v41 + 8 * ((a2 >> 3) & 0x1FF));
      v43 = v9 | 0x20;
      if ( (v42 & 0x20) == 0 )
        v43 = *(_QWORD *)a2;
      v9 = v43;
      if ( (v42 & 0x42) != 0 )
        v9 = v43 | 0x42;
    }
    v4 = 0LL;
  }
  v61 = v9;
  if ( (unsigned __int64)&v61 >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)&v61 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v9 & 1) != 0
    && ((v9 & 0x20) == 0 || (v9 & 0x42) == 0) )
  {
    v44 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v44 )
    {
      v45 = *(_QWORD *)(v44 + 8 * (((unsigned __int64)&v61 >> 3) & 0x1FF));
      v46 = v9 | 0x20;
      if ( (v45 & 0x20) == 0 )
        v46 = v9;
      v9 = v46;
      if ( (v45 & 0x42) != 0 )
        v9 = v46 | 0x42;
    }
    v4 = 0LL;
  }
  v10 = (_QWORD *)(48 * ((v9 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
  v11 = &dword_14043C7E8;
  if ( v5 == 2 )
    v12 = &dword_14043C7E8;
  else
    v12 = (volatile signed __int32 *)(a1 + 232);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    LOBYTE(v4) = -1;
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v12, v4);
  }
  else
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v59 = 0;
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v47 = SchedulerAssist[5];
        SchedulerAssist[5] = v47 + 1;
        if ( v47 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( _interlockedbittestandset(v12, 0x1Fu) )
    {
      v39 = CurrentPrcb->SchedulerAssist;
      if ( v39 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v48 = v39[5] - 1;
          v39[5] = v48;
          if ( !v48 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      v59 = ExpWaitForSpinLockExclusiveAndAcquire(v12, 0xFFu);
    }
    v15 = *v12;
    while ( (v15 & 0xBFFFFFFF) != 0x80000000 )
    {
      if ( (v15 & 0x40000000) == 0 )
      {
        v50 = _InterlockedCompareExchange(v12, v15 | 0x40000000, v15);
        v49 = v15 == v50;
        v15 = v50;
        if ( !v49 )
          continue;
      }
      KeYieldProcessorEx(&v59);
      v15 = *v12;
    }
  }
  AccessLog = (_QWORD *)*v7;
  if ( !*v7 || (unsigned __int64)(AccessLog[4] + 8LL) > AccessLog[5] )
  {
    AccessLog = (_QWORD *)MiAllocateAccessLog(a1);
    if ( !AccessLog )
      goto LABEL_88;
  }
  if ( (v10[5] & 0x200000000000000LL) != 0 && (v17 = v10[2], (v17 & 0x400) != 0) )
  {
    if ( qword_14043B180 && (v17 & 0x10) == 0 )
      v17 &= ~qword_14043B180;
    v18 = v10[1];
    v19 = AccessLog[6];
    v20 = v18 | 0x8000000000000000uLL;
    v21 = (unsigned __int16)v60 | (v20 << 16);
    v22 = v17 >> 16;
    v23 = AccessLog[7] <= 1uLL;
    v60 = v21;
    if ( v23 )
    {
      v33 = *(_QWORD *)v22;
      v54 = *(_QWORD *)v22;
      if ( (*(_BYTE *)(v22 + 34) & 2) != 0 && (*(_DWORD *)(v33 + 56) & 0x4000000) != 0 )
      {
LABEL_88:
        SharedVm = MiGetSharedVm(a1);
        ExReleaseSpinLockExclusiveFromDpcLevel(SharedVm + 10);
        return;
      }
      v34 = ObFastReferenceObject((signed __int64 *)(v33 + 64));
      if ( !v34 )
      {
        v40 = (volatile LONG *)(v33 + 72);
        v58 = ExAcquireSpinLockShared(v40);
        v56 = ObFastReferenceObjectLocked(v54 + 64);
        ExReleaseSpinLockSharedFromDpcLevel(v40);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v58 < 2u )
        {
          v52 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v52->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v52);
        }
        __writecr8(v58);
        v34 = v56;
      }
      v24 = *(_QWORD *)(v34 + 24);
      v35 = (signed __int64 *)(v54 + 64);
      _m_prefetchw((const void *)(v54 + 64));
      v36 = *v35;
      if ( (v34 ^ *v35) >= 0xF )
      {
LABEL_53:
        ObDereferenceObjectDeferDelete((PVOID)v34);
      }
      else
      {
        while ( 1 )
        {
          v37 = v36;
          v36 = _InterlockedCompareExchange64((volatile signed __int64 *)(v54 + 64), v36 + 1, v36);
          if ( v37 == v36 )
            break;
          if ( (v34 ^ v36) >= 0xF )
            goto LABEL_53;
        }
      }
      v38 = MiStartingOffset((__int64 *)v22, v20, 0xFFFFFFFF) << LOBYTE(v55[(*(_DWORD *)(v54 + 56) >> 5) & 1]);
      v60 = v38 ^ ((unsigned __int16)v38 ^ (unsigned __int16)(32 * *(_DWORD *)(v54 + 56))) & 0x400;
      v19 -= 8LL;
      v21 = v60;
    }
    else
    {
      v24 = v22;
    }
    v25 = AccessLog[5];
    v26 = (__int64 *)(v25 + 8);
    if ( v25 + 8 > v19 )
      goto LABEL_25;
    while ( *v26 != v24 )
    {
      if ( (unsigned __int64)++v26 > v19 )
        goto LABEL_25;
    }
    if ( (unsigned __int64)v26 > v19 )
    {
LABEL_25:
      v26 = (__int64 *)AccessLog[5];
      AccessLog[5] = v25 - 8;
      *v26 = v24;
    }
    v27 = ((unsigned __int64)v8 << 9) | ((__int64)(AccessLog[6] - (_QWORD)v26) >> 3) & 0x1FF;
    v28 = v21 & 0xFFFFFFFFFFFFFC00uLL;
  }
  else
  {
    v27 = (a2 << 16) | ((unsigned __int64)v8 << 9);
    v28 = (unsigned __int16)v60 & 0xFDFF;
  }
  v29 = v28 | v27;
  v30 = (unsigned __int64 *)AccessLog[4];
  v60 = v29;
  *v30 = v29;
  AccessLog[4] += 8LL;
  if ( (*(_BYTE *)(a1 + 184) & 7) != 2 )
    v11 = (LONG *)(a1 + 232);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v11, retaddr);
  else
    *v11 = 0;
  v31 = KeGetCurrentPrcb();
  v32 = v31->SchedulerAssist;
  if ( v32 && v31->NestingLevel <= 1u )
  {
    v53 = v32[5] - 1;
    v32[5] = v53;
    if ( !v53 )
      KiRemoveSystemWorkPriorityKick(v31);
  }
}
