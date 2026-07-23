/*
 * XREFs of MiGetVadWakeList @ 0x140068260
 * Callers:
 *     MiRemoveVadCharges @ 0x1405ED820 (MiRemoveVadCharges.c)
 *     MiFreePlaceholderStorage @ 0x1406D1E70 (MiFreePlaceholderStorage.c)
 *     MiFreeRotateView @ 0x1408504F4 (MiFreeRotateView.c)
 *     MiFreeVadEventBitmap @ 0x1408506D4 (MiFreeVadEventBitmap.c)
 *     MiFreeLargePageView @ 0x14085E5D4 (MiFreeLargePageView.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1400230C0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiUnlockWorkingSetShared @ 0x140046970 (MiUnlockWorkingSetShared.c)
 *     MiCheckProcessShadow @ 0x140046A70 (MiCheckProcessShadow.c)
 *     MiLockWorkingSetShared @ 0x140076040 (MiLockWorkingSetShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     HvlNotifyLongSpinWait @ 0x1402715C0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140298520 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiDeleteDeferredCloneDescriptors @ 0x1402C9A58 (MiDeleteDeferredCloneDescriptors.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14031C2A4 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14031C468 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

__int64 *__fastcall MiGetVadWakeList(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 **v3; // r15
  unsigned int v4; // ebx
  LONG *v5; // r14
  __int64 v6; // r9
  __int64 *v7; // r12
  _KPROCESS *Process; // rbp
  char Flink; // al
  __int64 v10; // rbp
  LONG *v11; // rdi
  unsigned __int8 CurrentIrql; // r13
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *SchedulerAssist; // rcx
  unsigned __int32 v15; // eax
  __int64 v16; // rcx
  __int64 *v17; // rcx
  _QWORD *v18; // rsi
  int v19; // edi
  _KPROCESS *v20; // rcx
  struct _KPRCB *v21; // rcx
  _DWORD *v22; // rdx
  unsigned __int32 v24; // ett
  _DWORD *v25; // rcx
  unsigned int v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // eax
  struct _KPRCB *v30; // rcx
  _QWORD *v31; // rbx
  void *retaddr; // [rsp+58h] [rbp+0h]
  int v33; // [rsp+60h] [rbp+8h]
  unsigned int v34; // [rsp+68h] [rbp+10h]

  v34 = (unsigned int)a2;
  v3 = (__int64 **)(a1 + 56);
  v4 = 0;
  v5 = &dword_14043C7C0;
  v6 = (unsigned int)a2;
  v7 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  Flink = (char)Process[2].Header.WaitListHead.Flink;
  v10 = (__int64)&Process[1].IdealNode[12];
  if ( (Flink & 7) == 2 )
    v11 = &dword_14043C7C0;
  else
    v11 = (LONG *)(v10 + 192);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v11, CurrentIrql);
    v6 = v34;
  }
  else
  {
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v27 = SchedulerAssist[5];
        SchedulerAssist[5] = v27 + 1;
        if ( v27 == -1 )
        {
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          v6 = v34;
        }
      }
    }
    if ( _interlockedbittestandset(v11, 0x1Fu) )
    {
      v25 = CurrentPrcb->SchedulerAssist;
      if ( v25 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v28 = v25[5] - 1;
          v25[5] = v28;
          if ( !v28 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      v26 = ExpWaitForSpinLockExclusiveAndAcquire(v11, CurrentIrql);
      v6 = v34;
      v4 = v26;
    }
    v15 = *v11;
    v16 = (unsigned int)*v11;
    LODWORD(v16) = v16 & 0xBFFFFFFF;
    if ( (_DWORD)v16 != 0x80000000 )
    {
      do
      {
        if ( (v15 & 0x40000000) != 0
          || (v16 = v15,
              LODWORD(v16) = v15 | 0x40000000,
              v24 = v15,
              v15 = _InterlockedCompareExchange(v11, v15 | 0x40000000, v15),
              v24 == v15) )
        {
          if ( (++v4 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v16, a2, a3) )
          {
            HvlNotifyLongSpinWait(v4);
          }
          else
          {
            _mm_pause();
          }
          v15 = *v11;
        }
        v16 = v15;
        LODWORD(v16) = v15 & 0xBFFFFFFF;
      }
      while ( (v15 & 0xBFFFFFFF) != 0x80000000 );
      v6 = v34;
    }
  }
  v11[1] = 0;
  v17 = *v3;
  if ( *v3 )
  {
    do
    {
      a2 = (__int64 *)*v17;
      if ( ((unsigned int)v6 & (_DWORD)v17[8]) != 0 )
      {
        *v17 = (__int64)v7;
        v7 = v17;
        *v3 = a2;
      }
      else
      {
        v3 = (__int64 **)v17;
      }
      v17 = a2;
    }
    while ( a2 );
  }
  v18 = 0LL;
  v33 = *(_DWORD *)(v10 + 184);
  v19 = 0;
  if ( (v33 & 7) != 2 )
    v5 = (LONG *)(v10 + 192);
  if ( (v33 & 7) == 0 )
  {
    if ( *(_QWORD *)(v10 + 16) )
    {
      v20 = KeGetCurrentThread()->ApcState.Process;
      if ( *(_WORD *)(*(_QWORD *)&v20[1].IdealGlobalNode + 320LL) )
        v18 = (_QWORD *)MiDeleteDeferredCloneDescriptors(v20, a2, a3, v6);
    }
  }
  if ( (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 0x400000) != 0 )
    v19 = 1;
  MiCheckProcessShadow(v10, 2u, a3, v6);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v5, retaddr);
  else
    *v5 = 0;
  v21 = KeGetCurrentPrcb();
  v22 = v21->SchedulerAssist;
  if ( v22 )
  {
    if ( v21->NestingLevel <= 1u )
    {
      v29 = v22[5] - 1;
      v22[5] = v29;
      if ( !v29 )
        KiRemoveSystemWorkPriorityKick(v21);
    }
  }
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    v30 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v30->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v30);
  }
  __writecr8(CurrentIrql);
  if ( v18 )
  {
    do
    {
      v31 = (_QWORD *)*v18;
      ExFreePoolWithTag(v18, 0);
      v18 = v31;
    }
    while ( v31 );
  }
  if ( !v19 && ((v33 & 0x8000000) != 0 || (v33 & 0x4000000) != 0 || (v33 & 0x10000000) != 0) )
  {
    MiLockWorkingSetShared(v10);
    MiUnlockWorkingSetShared(v10, CurrentIrql);
  }
  return v7;
}
