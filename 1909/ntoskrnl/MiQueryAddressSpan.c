/*
 * XREFs of MiQueryAddressSpan @ 0x140104A80
 * Callers:
 *     MmQueryVirtualMemory @ 0x140606470 (MmQueryVirtualMemory.c)
 * Callees:
 *     MiWorkingSetIsContended @ 0x140023440 (MiWorkingSetIsContended.c)
 *     MiLockWorkingSetShared @ 0x14005D6D0 (MiLockWorkingSetShared.c)
 *     MiQueryAddressState @ 0x1400A6250 (MiQueryAddressState.c)
 *     MiUnlockWorkingSetShared @ 0x1400AC920 (MiUnlockWorkingSetShared.c)
 *     MiCheckProcessShadow @ 0x1400ACA20 (MiCheckProcessShadow.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140104E40 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     KeShouldYieldProcessor @ 0x140108920 (KeShouldYieldProcessor.c)
 *     MiPreUnlockWorkingSetShared @ 0x14012A498 (MiPreUnlockWorkingSetShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14033AB64 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14033ACA4 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

unsigned __int64 __fastcall MiQueryAddressSpan(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, ULONG_PTR a4)
{
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // r11
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdx
  volatile signed __int32 *v11; // rdi
  _KPROCESS *Process; // rbx
  char SecureHandle; // al
  __int64 v14; // rbx
  unsigned __int8 v15; // al
  LONG *v16; // r14
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // rbp
  _DWORD *SchedulerAssist; // rcx
  signed __int32 v20; // ett
  int v21; // eax
  int v22; // ecx
  int v23; // eax
  int v24; // eax
  unsigned __int64 v25; // r14
  unsigned __int64 v26; // rbp
  int v27; // edi
  int v28; // eax
  int v29; // eax
  struct _KPRCB *v30; // rcx
  _DWORD *v31; // rdx
  _DWORD *v33; // rcx
  int v34; // eax
  int v35; // eax
  int v36; // eax
  struct _KPRCB *v37; // rcx
  int v38; // [rsp+50h] [rbp-68h] BYREF
  int v39; // [rsp+54h] [rbp-64h]
  int v40; // [rsp+58h] [rbp-60h] BYREF
  unsigned __int64 v41; // [rsp+60h] [rbp-58h] BYREF
  __int64 v42; // [rsp+68h] [rbp-50h]
  void *retaddr; // [rsp+B8h] [rbp+0h]
  int v44; // [rsp+C0h] [rbp+8h] BYREF
  unsigned __int64 v45; // [rsp+C8h] [rbp+10h]
  int v46; // [rsp+D0h] [rbp+18h] BYREF
  int v47; // [rsp+D8h] [rbp+20h] BYREF

  v45 = a2;
  v5 = a3;
  v6 = *(unsigned int *)(a4 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a4 + 33) << 32);
  v42 = 0LL;
  v7 = a2;
  v9 = ((v6 << 12) | 0xFFF) + 1;
  if ( a3 > v9 || !a3 )
    v5 = v9;
  v10 = v5 - 1;
  v11 = &dword_140466F00;
  Process = KeGetCurrentThread()->ApcState.Process;
  SecureHandle = Process[1].SecureState.SecureHandle;
  v14 = (__int64)&Process[1].IdealNode[6];
  v15 = SecureHandle & 7;
  if ( v15 >= 6u )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  }
  else
  {
    if ( v15 == 2 )
      v16 = &dword_140466F00;
    else
      v16 = (LONG *)(v14 + 192);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v16, CurrentIrql);
      v7 = v45;
      v10 = v5 - 1;
    }
    else
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v34 = SchedulerAssist[5];
          SchedulerAssist[5] = v34 + 1;
          if ( v34 == -1 )
          {
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            v7 = v45;
            v10 = v5 - 1;
          }
        }
      }
      _m_prefetchw(v16);
      v20 = *v16 & 0x7FFFFFFF;
      if ( v20 != _InterlockedCompareExchange(v16, v20 + 1, v20) )
      {
        v33 = CurrentPrcb->SchedulerAssist;
        if ( v33 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v35 = v33[5] - 1;
            v33[5] = v35;
            if ( !v35 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        ExpWaitForSpinLockSharedAndAcquire(v16, CurrentIrql);
        v7 = v45;
        v10 = v5 - 1;
      }
    }
    if ( v16[1] )
      _InterlockedExchange(v16 + 1, 0);
  }
  v21 = MiQueryAddressState(v7, v10, CurrentIrql, a4, 0LL, &v46, &v44, &v41, &v47);
  v22 = v44;
  *(_DWORD *)(a1 + 32) = v21;
  v39 = v22;
  LODWORD(v45) = v46;
  if ( v46 )
  {
    v23 = MmProtectToValue[v46];
    *(_DWORD *)(a1 + 36) = v23;
    v24 = v22 | v23;
  }
  else
  {
    v24 = 0;
  }
  *(_DWORD *)(a1 + 36) = v24;
  v25 = v41;
  v26 = v41;
  if ( v41 < v5 )
  {
    v27 = v45;
    do
    {
      v28 = MiQueryAddressState(v25, v5 - 1, CurrentIrql, a4, a1, &v38, &v40, &v41, &v47);
      if ( v38 != v27 || v28 != *(_DWORD *)(a1 + 32) || v40 != v39 )
        break;
      v25 = v41;
      v42 = (unsigned int)(v42 + 1);
      v26 = v41;
      if ( (v42 & 0x1F) == 0 && MiWorkingSetIsContended(v14) || KeShouldYieldProcessor() )
      {
        MiUnlockWorkingSetShared(v14, CurrentIrql);
        MiLockWorkingSetShared(v14);
      }
    }
    while ( v25 < v5 );
    v11 = &dword_140466F00;
  }
  if ( (*(_BYTE *)(v14 + 184) & 7u) >= 6 )
  {
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
LABEL_68:
      v37 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v37->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v37);
    }
  }
  else
  {
    v29 = *(_DWORD *)(v14 + 184);
    if ( (v29 & 0x8000000) != 0 || (v29 & 0x4000000) != 0 || (v29 & 0x10000000) != 0 )
    {
      MiPreUnlockWorkingSetShared(v14, CurrentIrql);
      LOBYTE(v29) = *(_BYTE *)(v14 + 184);
    }
    if ( (v29 & 7) != 2 )
      v11 = (volatile signed __int32 *)(v14 + 192);
    MiCheckProcessShadow(v14, 1u);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v11, retaddr);
    }
    else
    {
      _InterlockedAnd(v11, 0xBFFFFFFF);
      _InterlockedDecrement(v11);
    }
    v30 = KeGetCurrentPrcb();
    v31 = v30->SchedulerAssist;
    if ( v31 )
    {
      if ( v30->NestingLevel <= 1u )
      {
        v36 = v31[5] - 1;
        v31[5] = v36;
        if ( !v36 )
          KiRemoveSystemWorkPriorityKick(v30);
      }
    }
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
      goto LABEL_68;
  }
  __writecr8(CurrentIrql);
  return v26;
}
