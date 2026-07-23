/*
 * XREFs of MiMakeHyperRangeAccessible @ 0x14006E3C0
 * Callers:
 *     MiCommitPageTablesForVad @ 0x1405EDBB0 (MiCommitPageTablesForVad.c)
 *     MiExpandVadBitMap @ 0x14067AE8C (MiExpandVadBitMap.c)
 *     MiExpandVadBitMapDown @ 0x140859C74 (MiExpandVadBitMapDown.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1400230C0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiGetAnyMultiplexedVm @ 0x140028884 (MiGetAnyMultiplexedVm.c)
 *     MiUnlockWorkingSetShared @ 0x140046970 (MiUnlockWorkingSetShared.c)
 *     MiCheckProcessShadow @ 0x140046A70 (MiCheckProcessShadow.c)
 *     MiUnlockWorkingSetExclusive @ 0x140063CD0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x140064D20 (MiGetSharedVm.c)
 *     MiWalkPageTables @ 0x14006E930 (MiWalkPageTables.c)
 *     MiLockWorkingSetShared @ 0x140076040 (MiLockWorkingSetShared.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     MiFillHyperPtes @ 0x14011AEF4 (MiFillHyperPtes.c)
 *     MiMakeHyperPteDemandZero @ 0x14011B00C (MiMakeHyperPteDemandZero.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     HvlNotifyLongSpinWait @ 0x1402715C0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140298520 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiDeleteDeferredCloneDescriptors @ 0x1402C9A58 (MiDeleteDeferredCloneDescriptors.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14031C2A4 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14031C468 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     MiChargeFullProcessCommitment @ 0x1405E1510 (MiChargeFullProcessCommitment.c)
 *     MiReturnFullProcessCommitment @ 0x1405F3998 (MiReturnFullProcessCommitment.c)
 */

__int64 __fastcall MiMakeHyperRangeAccessible(unsigned __int64 a1, unsigned __int64 a2, __int64 *a3, __int64 a4)
{
  __int64 v4; // r13
  _KPROCESS *Process; // rax
  __int64 v7; // r14
  LONG *v8; // rdi
  unsigned __int8 CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // rsi
  unsigned int v11; // ebx
  _DWORD *SchedulerAssist; // rcx
  unsigned __int32 v13; // eax
  __int64 v14; // rcx
  int v15; // r12d
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // r15
  unsigned __int64 v18; // rdx
  __int64 v19; // rsi
  unsigned __int64 v20; // rdi
  unsigned __int64 v21; // rbx
  unsigned __int64 v22; // r15
  __int64 v23; // rdi
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rcx
  char *AnyMultiplexedVm; // rax
  __int64 v27; // rcx
  _QWORD *v28; // rsi
  int v29; // edi
  LONG *v30; // rbx
  _KPROCESS *v31; // rcx
  struct _KPRCB *v32; // rcx
  _DWORD *v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 result; // rax
  unsigned __int32 v37; // ett
  unsigned __int64 v38; // rsi
  LONG *SharedVm; // rbx
  _DWORD *v40; // rcx
  unsigned int v41; // eax
  int v42; // eax
  int v43; // eax
  __int64 v44; // rax
  int v45; // eax
  struct _KPRCB *v46; // rcx
  _QWORD *v47; // rbx
  int v48; // [rsp+20h] [rbp-E0h]
  int v49; // [rsp+20h] [rbp-E0h]
  unsigned __int64 v50; // [rsp+28h] [rbp-D8h]
  _KPROCESS *v51; // [rsp+28h] [rbp-D8h]
  unsigned __int8 v52; // [rsp+30h] [rbp-D0h]
  int v53; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v54; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v55; // [rsp+48h] [rbp-B8h]
  __int64 *v56; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v57; // [rsp+58h] [rbp-A8h]
  _KPROCESS *v58; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v59; // [rsp+68h] [rbp-98h]
  __int64 v60; // [rsp+70h] [rbp-90h]
  __int64 v61; // [rsp+78h] [rbp-88h] BYREF
  __int64 v62; // [rsp+80h] [rbp-80h]
  _QWORD v63[22]; // [rsp+90h] [rbp-70h] BYREF
  void *retaddr; // [rsp+188h] [rbp+88h]

  v4 = 0LL;
  v56 = a3;
  v50 = a2;
  v57 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v58 = Process;
  *a3 = 0LL;
  v53 = 0;
  v7 = (__int64)&Process[1].IdealNode[12];
  LOBYTE(Process) = (__int64)Process[2].Header.WaitListHead.Flink & 7;
  v60 = v7;
  if ( (_BYTE)Process == 2 )
    v8 = &dword_14043C7C0;
  else
    v8 = (LONG *)(v7 + 192);
  CurrentIrql = KeGetCurrentIrql();
  v52 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v8, CurrentIrql);
  }
  else
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v11 = 0;
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v42 = SchedulerAssist[5];
        SchedulerAssist[5] = v42 + 1;
        if ( v42 == -1 )
        {
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          a2 = v50;
        }
      }
    }
    if ( _interlockedbittestandset(v8, 0x1Fu) )
    {
      v40 = CurrentPrcb->SchedulerAssist;
      if ( v40 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v43 = v40[5] - 1;
          v40[5] = v43;
          if ( !v43 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      v41 = ExpWaitForSpinLockExclusiveAndAcquire(v8, CurrentIrql);
      a2 = v50;
      v11 = v41;
    }
    v13 = *v8;
    v14 = (unsigned int)*v8;
    LODWORD(v14) = v14 & 0xBFFFFFFF;
    if ( (_DWORD)v14 == 0x80000000 )
      goto LABEL_8;
    do
    {
      if ( (v13 & 0x40000000) != 0
        || (v14 = v13,
            LODWORD(v14) = v13 | 0x40000000,
            v37 = v13,
            v13 = _InterlockedCompareExchange(v8, v13 | 0x40000000, v13),
            v37 == v13) )
      {
        if ( (++v11 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v14, a2, a3) )
        {
          HvlNotifyLongSpinWait(v11);
        }
        else
        {
          _mm_pause();
        }
        v13 = *v8;
      }
      v14 = v13;
      LODWORD(v14) = v13 & 0xBFFFFFFF;
    }
    while ( (v13 & 0xBFFFFFFF) != 0x80000000 );
  }
  a2 = v50;
LABEL_8:
  v8[1] = 0;
  v15 = 0;
  v48 = 0;
  v16 = 0xFFFFF68000000000uLL;
  v17 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v59 = v17;
  v18 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v51 = (_KPROCESS *)v18;
  while ( 1 )
  {
    v54 = 0LL;
    v19 = 0LL;
    v55 = 0LL;
    v20 = 0LL;
    v21 = v17;
    if ( v17 <= v18 )
    {
      v22 = (unsigned __int64)v51;
      v23 = (__int64)(v18 << 25) >> 16;
      while ( 1 )
      {
        v61 = 0LL;
        v62 = 0LL;
        memset(v63, 0, sizeof(v63));
        LODWORD(v63[0]) = 2145;
        v24 = (__int64)(v21 << 25) >> 16;
        v25 = v24;
        if ( v24 >= 0xFFFFF68000000000uLL )
        {
          do
          {
            if ( v25 > 0xFFFFF6FFFFFFFFFFuLL )
              break;
            v25 = (__int64)(v25 << 25) >> 16;
          }
          while ( v25 >= 0xFFFFF68000000000uLL );
          v22 = (unsigned __int64)v51;
        }
        if ( v25 >= 0xFFFF800000000000uLL && (v25 < qword_14043CB80 || v25 > qword_14043B5F0) )
          AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
        else
          AnyMultiplexedVm = (char *)&KeGetCurrentThread()->ApcState.Process[1].IdealNode[12];
        v63[2] = 0LL;
        v63[21] = &v61;
        v63[20] = MiGetNextPageTableTail;
        BYTE2(v63[1]) = 1;
        v63[3] = AnyMultiplexedVm;
        BYTE4(v63[0]) = v52;
        v63[4] = v24;
        v63[5] = v23;
        MiWalkPageTables(v63);
        if ( v62 )
        {
          if ( v62 == v21 )
          {
            while ( 1 )
            {
              v27 = *(_QWORD *)v21;
              if ( v21 >= 0xFFFFF6FB7DBED000uLL && v21 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0xC00000) != 0 )
              {
                v18 = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
                if ( *(_BYTE *)(v18 + 640) != 1 && (v27 & 1) != 0 && ((v27 & 0x20) == 0 || (v27 & 0x42) == 0) )
                {
                  v18 = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
                  v16 = *(_QWORD *)(v18 + 1544);
                  if ( v16 )
                  {
                    v44 = *(_QWORD *)(v16 + 8 * ((v21 >> 3) & 0x1FF));
                    v16 = v27 | 0x20;
                    v18 = (unsigned __int8)v44;
                    LOBYTE(v18) = v44 & 0x20;
                    if ( (v44 & 0x20) == 0 )
                      v16 = *(_QWORD *)v21;
                    v27 = v16;
                    if ( (v44 & 0x42) != 0 )
                      v27 = v16 | 0x42;
                  }
                }
              }
              if ( !v27 )
                MiMakeHyperPteDemandZero(v21, v18, &v53);
              v21 += 8LL;
              if ( (v21 & 0xFFF) == 0 )
                goto LABEL_67;
              if ( v21 > v22 )
                goto LABEL_23;
            }
          }
          v38 = v62 - 8;
        }
        else
        {
          v38 = v22;
        }
        MiFillHyperPtes(v21, v38, v52, &v53);
        v21 = v38 + 8;
LABEL_67:
        if ( v21 > v22 )
        {
LABEL_23:
          v20 = v55;
          v19 = v54;
          v17 = v59;
          v15 = v48;
          v7 = v60;
          break;
        }
      }
    }
    if ( v15 || !v19 )
      break;
    MiUnlockWorkingSetExclusive(v7, v52, v16, a4);
    v57 = v20;
    result = MiChargeFullProcessCommitment(v58, v19 + v20);
    if ( (int)result < 0 )
      return result;
    v53 = 1;
    *v56 = v19;
    SharedVm = MiGetSharedVm(v7);
    ExAcquireSpinLockExclusive(SharedVm);
    v18 = (unsigned __int64)v51;
    v15 = 1;
    v48 = 1;
    SharedVm[1] = 0;
    v16 = 0xFFFFF68000000000uLL;
  }
  if ( v20 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)MiGetSharedVm(v7) + 7, v20);
  v28 = 0LL;
  v49 = *(_DWORD *)(v7 + 184);
  v29 = 0;
  if ( (v49 & 7) == 2 )
    v30 = &dword_14043C7C0;
  else
    v30 = (LONG *)(v7 + 192);
  if ( (v49 & 7) == 0 )
  {
    if ( *(_QWORD *)(v7 + 16) )
    {
      v31 = KeGetCurrentThread()->ApcState.Process;
      if ( *(_WORD *)(*(_QWORD *)&v31[1].IdealGlobalNode + 320LL) )
        v28 = (_QWORD *)MiDeleteDeferredCloneDescriptors(v31, v18, v16, a4);
    }
  }
  if ( (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 0x400000) != 0 )
    v29 = 1;
  MiCheckProcessShadow(v7, 2u, v16, a4);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v30, retaddr);
  else
    *v30 = 0;
  v32 = KeGetCurrentPrcb();
  v33 = v32->SchedulerAssist;
  if ( v33 )
  {
    if ( v32->NestingLevel <= 1u )
    {
      v45 = v33[5] - 1;
      v33[5] = v45;
      if ( !v45 )
        KiRemoveSystemWorkPriorityKick(v32);
    }
  }
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v52 < 2u )
  {
    v46 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v46->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v46);
  }
  __writecr8(v52);
  if ( v28 )
  {
    do
    {
      v47 = (_QWORD *)*v28;
      ExFreePoolWithTag(v28, 0);
      v28 = v47;
    }
    while ( v47 );
  }
  if ( !v29 && ((v49 & 0x8000000) != 0 || (v49 & 0x4000000) != 0 || (v49 & 0x10000000) != 0) )
  {
    MiLockWorkingSetShared(v7);
    MiUnlockWorkingSetShared(v7, v52);
  }
  v34 = v54;
  v35 = *v56;
  if ( v54 != *v56 )
  {
    *v56 = v54;
    v4 = v35 - v34;
  }
  if ( v55 != v57 )
    v4 += v57 - v55;
  if ( v4 )
    MiReturnFullProcessCommitment(v58);
  return 0LL;
}
