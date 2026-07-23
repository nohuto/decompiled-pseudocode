/*
 * XREFs of MiUnlinkNodeLargePage @ 0x140064280
 * Callers:
 *     MiGetFreeZeroLargePage @ 0x14002BCF4 (MiGetFreeZeroLargePage.c)
 *     MiDemoteLocalLargePage @ 0x140064050 (MiDemoteLocalLargePage.c)
 *     MiZeroPageThread @ 0x140179300 (MiZeroPageThread.c)
 *     MiGetPagesToZero @ 0x1401853A0 (MiGetPagesToZero.c)
 *     MiGetHugePageToZero @ 0x1401855A4 (MiGetHugePageToZero.c)
 *     MiScrubNodeLargePageList @ 0x1402CCD80 (MiScrubNodeLargePageList.c)
 * Callees:
 *     KxWaitForLockChainValid @ 0x140022C50 (KxWaitForLockChainValid.c)
 *     MiUnlinkNodeLargePageHelper @ 0x1400646F0 (MiUnlinkNodeLargePageHelper.c)
 *     MiBeginPageAccessor @ 0x140064A10 (MiBeginPageAccessor.c)
 *     KxWaitForLockOwnerShip @ 0x14007DF10 (KxWaitForLockOwnerShip.c)
 *     KxAcquireQueuedSpinLock @ 0x1400AC8F0 (KxAcquireQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140290BF0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140290CA8 (KiReleaseQueuedSpinLockInstrumented.c)
 */

__int64 __fastcall MiUnlinkNodeLargePage(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        char a6,
        __int64 a7)
{
  char v7; // bl
  __int64 v8; // rdi
  char *v9; // r12
  unsigned __int8 *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r9
  __int64 v13; // r8
  __int64 v14; // r11
  unsigned int v15; // ecx
  __int64 v16; // r10
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // r14
  unsigned int v21; // eax
  __int64 v22; // rdx
  _QWORD *v23; // r14
  __int64 v24; // r8
  __int64 v25; // rsi
  int v26; // eax
  unsigned __int8 v27; // cl
  struct _KPRCB *v28; // rcx
  _DWORD *SchedulerAssist; // rdx
  unsigned int *v30; // r12
  __int64 v31; // rsi
  _QWORD *v32; // rax
  __int64 v33; // rcx
  __int64 v34; // r15
  __int64 v35; // rax
  struct _KPRCB *v36; // rcx
  _DWORD *v37; // rdx
  _QWORD *v38; // rax
  int v39; // eax
  struct _KPRCB *v40; // rcx
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *v42; // rcx
  _QWORD *v43; // rax
  int v44; // eax
  struct _KPRCB *v45; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int8 v47; // [rsp+30h] [rbp-71h]
  int v48; // [rsp+38h] [rbp-69h]
  int v49; // [rsp+3Ch] [rbp-65h]
  __int64 v50; // [rsp+40h] [rbp-61h] BYREF
  volatile signed __int64 *v51; // [rsp+48h] [rbp-59h]
  __int64 v52; // [rsp+58h] [rbp-49h]
  __int64 v53; // [rsp+60h] [rbp-41h]
  unsigned int v54; // [rsp+68h] [rbp-39h]
  int v55; // [rsp+6Ch] [rbp-35h]
  int v56; // [rsp+70h] [rbp-31h]
  __int64 v57; // [rsp+78h] [rbp-29h]
  unsigned __int8 *v58; // [rsp+80h] [rbp-21h]
  unsigned int *v59; // [rsp+88h] [rbp-19h]
  __int64 v60; // [rsp+90h] [rbp-11h]
  void *retaddr; // [rsp+E8h] [rbp+47h]
  unsigned int v62; // [rsp+F0h] [rbp+4Fh]
  int v63; // [rsp+F8h] [rbp+57h]
  char v64; // [rsp+100h] [rbp+5Fh] BYREF
  char v65; // [rsp+101h] [rbp+60h] BYREF
  unsigned int v66; // [rsp+108h] [rbp+67h]

  v66 = a4;
  v63 = a2;
  v7 = a6;
  a2 = (unsigned int)a2;
  v48 = 0;
  v52 = a2;
  v62 = dword_14043B1C0[(unsigned int)a2];
  v8 = *(_QWORD *)(a1 + 16) + 1984LL * a3;
  if ( !*(_QWORD *)(v8 + 1808) && (_DWORD)InitializationPhase )
    return 0LL;
  if ( (a6 & 4) != 0 )
    v53 = 0x100000000LL;
  else
    v53 = 1LL;
  v47 = 17;
  v59 = (unsigned int *)(a5 + 4LL * (unsigned int)a2);
  do
  {
LABEL_5:
    v55 = *(unsigned __int8 *)(v8 + 1912);
    if ( (_DWORD)a4 == 4 )
    {
      v9 = (char *)(v8 + 1918);
      v10 = (unsigned __int8 *)(v8 + 1918 + (unsigned int)MmNumberOfChannels);
    }
    else
    {
      v64 = a4;
      v9 = &v64;
      v10 = (unsigned __int8 *)&v65;
    }
    v58 = v10;
LABEL_8:
    v11 = (unsigned __int8)*v9;
    v12 = 0LL;
    v56 = (unsigned __int8)*v9;
    v57 = v11;
    v60 = 8 * v11;
    v13 = (unsigned int)v11;
    v14 = 144LL;
LABEL_9:
    v15 = 0;
    v16 = v8 + 272 * a2;
    while ( 1 )
    {
      v17 = *((int *)&v53 + v15);
      v18 = v13 + 4 * (v17 + 2 * v12);
      v19 = *(_QWORD *)(v16 + 8 * v18 + 144);
      if ( *(_QWORD *)(v16 + 8 * v18 + 16) )
        break;
LABEL_11:
      if ( ++v15 >= (unsigned int)((v7 & 2) != 0) + 1 )
      {
        a2 = v52;
        ++v12;
        v14 += 64LL;
        if ( v12 <= ((v7 & 1) == 0) )
          goto LABEL_9;
        if ( ++v9 != (char *)v58 )
          goto LABEL_8;
        if ( !v55 )
        {
          if ( v48 )
          {
            KxReleaseQueuedSpinLock(&v50);
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v47 < 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
            __writecr8(v47);
          }
          return 0LL;
        }
        LODWORD(a4) = v66;
        if ( !v48 )
        {
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
            _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
          v47 = CurrentIrql;
          v51 = (volatile signed __int64 *)(v8 + 1928);
          v50 = 0LL;
          KxAcquireQueuedSpinLock(&v50);
          KxReleaseQueuedSpinLock(&v50);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
          {
            v42 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v42->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(v42);
          }
          __writecr8(CurrentIrql);
          a2 = v52;
          LODWORD(a4) = v66;
        }
        goto LABEL_5;
      }
    }
    v21 = *v59;
    v54 = *v59;
    if ( v62 == 16 )
      v22 = v21 & 0xF;
    else
      v22 = v21 % v62;
    v49 = v22;
    v23 = (_QWORD *)(v19 + 24 * v22);
    v24 = 0LL;
    if ( !v62 )
    {
LABEL_27:
      v13 = v57;
      goto LABEL_11;
    }
    v25 = v14 + v60 + 32 * v17;
    while ( (_QWORD *)*v23 == v23 )
    {
      v26 = v22 + 1;
      if ( (_DWORD)v22 + 1 == v62 )
        v23 = *(_QWORD **)(v25 + v16);
      else
        v23 += 3;
      LODWORD(v22) = 0;
      v24 = (unsigned int)(v24 + 1);
      if ( v26 != v62 )
        LODWORD(v22) = v26;
      v49 = v22;
      if ( (unsigned int)v24 >= v62 )
        goto LABEL_27;
    }
    if ( !v48 )
    {
      v48 = 1;
      v27 = KeGetCurrentIrql();
      v47 = v27;
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v27 < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      v51 = (volatile signed __int64 *)(v8 + 1928);
      v50 = 0LL;
      v28 = KeGetCurrentPrcb();
      SchedulerAssist = v28->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( v28->NestingLevel <= 1u )
        {
          v39 = SchedulerAssist[5];
          SchedulerAssist[5] = v39 + 1;
          if ( v39 == -1 )
            KiRemoveSystemWorkPriorityKick(v28);
        }
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireQueuedSpinLockInstrumented(&v50, v8 + 1928);
      }
      else if ( _InterlockedExchange64((volatile __int64 *)(v8 + 1928), (__int64)&v50) )
      {
        KxWaitForLockOwnerShip(&v50);
      }
    }
    v30 = v59;
    a2 = v52;
    a4 = v66;
  }
  while ( v54 != *v59 || (_QWORD *)*v23 == v23 );
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v23[1] + 24LL), 0x3FuLL) )
  {
    KxReleaseQueuedSpinLock(&v50);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v47 < 2u )
    {
      v40 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v40->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v40);
    }
    __writecr8(v47);
    a2 = v52;
    LODWORD(a4) = v66;
    v48 = 0;
    goto LABEL_5;
  }
  v31 = v23[1];
  v32 = *(_QWORD **)(v31 + 8);
  if ( *(_QWORD **)v31 != v23 || *v32 != v31 )
    goto LABEL_96;
  v33 = a7;
  v34 = v23[1];
  v23[1] = v32;
  *v32 = v23;
  if ( !v33 )
  {
    v34 = MiUnlinkNodeLargePageHelper(v8, v31, v63, v56, v7);
    if ( v34 )
      goto LABEL_40;
    v43 = (_QWORD *)v23[1];
    if ( (_QWORD *)*v43 == v23 )
    {
      *(_QWORD *)v31 = v23;
      *(_QWORD *)(v31 + 8) = v43;
      *v43 = v31;
      v23[1] = v31;
      goto LABEL_41;
    }
LABEL_96:
    __fastfail(3u);
  }
  v38 = (_QWORD *)*v23;
  if ( *(_QWORD **)(*v23 + 8LL) != v23 )
    goto LABEL_96;
  *(_QWORD *)v31 = v38;
  *(_QWORD *)(v31 + 8) = v23;
  v38[1] = v31;
  *v23 = v31;
  if ( (unsigned int)MiBeginPageAccessor(v33, v31, v24, a4) )
LABEL_40:
    *v30 = v49 + 1;
  else
    v34 = 0LL;
LABEL_41:
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(&v50, retaddr);
    goto LABEL_44;
  }
  _m_prefetchw(&v50);
  v35 = v50;
  if ( v50 )
  {
LABEL_57:
    v50 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v35 + 8), 1uLL);
    goto LABEL_44;
  }
  if ( (__int64 *)_InterlockedCompareExchange64(v51, 0LL, (signed __int64)&v50) != &v50 )
  {
    v35 = KxWaitForLockChainValid(&v50);
    goto LABEL_57;
  }
LABEL_44:
  v36 = KeGetCurrentPrcb();
  v37 = v36->SchedulerAssist;
  if ( v37 )
  {
    if ( v36->NestingLevel <= 1u )
    {
      v44 = v37[5] - 1;
      v37[5] = v44;
      if ( !v44 )
        KiRemoveSystemWorkPriorityKick(v36);
    }
  }
  _InterlockedAnd64((volatile signed __int64 *)(v31 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v47 < 2u )
  {
    v45 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v45->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v45);
  }
  __writecr8(v47);
  return v34;
}
