/*
 * XREFs of MiQueryAddressSpan @ 0x1400B7C60
 * Callers:
 *     MmQueryVirtualMemory @ 0x140604960 (MmQueryVirtualMemory.c)
 * Callees:
 *     MiWorkingSetIsContended @ 0x140023050 (MiWorkingSetIsContended.c)
 *     MiLockWorkingSetShared @ 0x14005D630 (MiLockWorkingSetShared.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1400B8020 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiQueryAddressState @ 0x1400C63D0 (MiQueryAddressState.c)
 *     MiUnlockWorkingSetShared @ 0x1400CCAA0 (MiUnlockWorkingSetShared.c)
 *     MiCheckProcessShadow @ 0x1400CCBA0 (MiCheckProcessShadow.c)
 *     KeShouldYieldProcessor @ 0x140109950 (KeShouldYieldProcessor.c)
 *     MiPreUnlockWorkingSetShared @ 0x140129A78 (MiPreUnlockWorkingSetShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14033B104 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14033B244 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

unsigned __int64 __fastcall MiQueryAddressSpan(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  int v4; // r12d
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rax
  int v7; // r11d
  unsigned __int64 v9; // rax
  int v10; // edx
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
  int AddressState; // eax
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
  __int64 v45; // [rsp+C8h] [rbp+10h]
  int v46; // [rsp+D0h] [rbp+18h] BYREF
  char v47; // [rsp+D8h] [rbp+20h] BYREF

  v45 = a2;
  v4 = a4;
  v5 = a3;
  v6 = *(unsigned int *)(a4 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a4 + 33) << 32);
  v42 = 0LL;
  v7 = a2;
  v9 = ((v6 << 12) | 0xFFF) + 1;
  if ( a3 > v9 || !a3 )
    v5 = v9;
  v10 = v5 - 1;
  v11 = &dword_140467200;
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
      v16 = &dword_140467200;
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
  AddressState = MiQueryAddressState(
                   v7,
                   v10,
                   CurrentIrql,
                   v4,
                   0LL,
                   (__int64)&v46,
                   (__int64)&v44,
                   (__int64)&v41,
                   (__int64)&v47);
  v22 = v44;
  *(_DWORD *)(a1 + 32) = AddressState;
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
  LODWORD(v25) = v41;
  v26 = v41;
  if ( v41 < v5 )
  {
    v27 = v45;
    do
    {
      v28 = MiQueryAddressState(
              v25,
              (int)v5 - 1,
              CurrentIrql,
              v4,
              a1,
              (__int64)&v38,
              (__int64)&v40,
              (__int64)&v41,
              (__int64)&v47);
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
    v11 = &dword_140467200;
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
    MiCheckProcessShadow(v14, 1LL);
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
