/*
 * XREFs of VmpSplitMemoryRange @ 0x14030D8D4
 * Callers:
 *     VmSplitMemoryRange @ 0x1408B0500 (VmSplitMemoryRange.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14009D110 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC660 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlRbInsertNodeEx @ 0x1400BD6B0 (RtlRbInsertNodeEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AF8 (KiRemoveSystemWorkPriorityKick.c)
 *     VmpProcessContextLockExclusive @ 0x14030D1AC (VmpProcessContextLockExclusive.c)
 *     VmpProcessContextLockShared @ 0x14030D204 (VmpProcessContextLockShared.c)
 *     VmpVaRangeNumberOfGpaRanges @ 0x14030DD14 (VmpVaRangeNumberOfGpaRanges.c)
 *     VmpAllocateMemoryRanges @ 0x1408B05D4 (VmpAllocateMemoryRanges.c)
 *     VmpFreeMemoryRanges @ 0x1408B071C (VmpFreeMemoryRanges.c)
 */

__int64 __fastcall VmpSplitMemoryRange(PEX_SPIN_LOCK SpinLock, unsigned __int64 a2, __int64 a3)
{
  __int64 v6; // r12
  unsigned __int64 v7; // rsi
  __int64 v8; // rax
  unsigned __int64 v9; // rbx
  int v10; // ecx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // r14
  __int64 v15; // rbp
  struct _KPRCB *CurrentPrcb; // rcx
  int v17; // r13d
  _QWORD *MemoryRanges; // rbp
  struct _KPRCB *v19; // rcx
  unsigned int v20; // ebx
  struct _KPRCB *v21; // rcx
  __int64 v22; // rax
  unsigned __int64 v23; // rdx
  bool v24; // r8
  int v25; // ecx
  unsigned __int64 v26; // r8
  unsigned __int64 v27; // rax
  _QWORD *v28; // rsi
  _QWORD *v29; // r15
  _QWORD *v30; // r14
  unsigned __int64 *v31; // rbx
  __int64 v32; // rcx
  __int64 v33; // rax
  unsigned __int64 v34; // rdx
  bool v35; // r8
  int v36; // ecx
  unsigned __int64 v37; // r8
  unsigned __int64 v38; // rax
  struct _KPRCB *v39; // rcx
  __int64 v42; // [rsp+60h] [rbp+18h]

  v6 = VmpProcessContextLockShared(SpinLock);
  if ( *((_QWORD *)SpinLock + 9) != a3 )
    goto LABEL_30;
  v7 = (unsigned __int64)(SpinLock + 6);
  while ( 2 )
  {
    v8 = *((_QWORD *)SpinLock + 4);
    v9 = *(_QWORD *)v7;
    if ( (v8 & 1) != 0 && v9 )
      v9 ^= v7;
    v10 = v8 & 1;
    while ( 1 )
    {
      if ( !v9 )
      {
        v20 = -1073741172;
        goto LABEL_31;
      }
      v11 = *(_QWORD *)(v9 + 32);
      if ( a2 <= v11 )
        break;
      v12 = *(_QWORD *)(v9 + 8);
LABEL_12:
      if ( v10 && v12 )
        v9 ^= v12;
      else
        v9 = v12;
    }
    if ( a2 < *(_QWORD *)(v9 + 24) )
    {
      v12 = *(_QWORD *)v9;
      goto LABEL_12;
    }
    if ( a2 == v11 )
    {
      v20 = -1073741503;
      goto LABEL_31;
    }
    v13 = VmpVaRangeNumberOfGpaRanges(v9);
    v14 = *((_QWORD *)SpinLock + 5);
    v15 = v13;
    ExReleaseSpinLockSharedFromDpcLevel(SpinLock);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && (unsigned __int8)v6 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8((unsigned __int8)v6);
    v17 = 0;
    MemoryRanges = (_QWORD *)VmpAllocateMemoryRanges(v15);
    if ( !MemoryRanges )
      return (unsigned int)-1073741670;
    v6 = VmpProcessContextLockExclusive(SpinLock);
    if ( v14 != *((_QWORD *)SpinLock + 5) )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && (unsigned __int8)v6 < 2u )
      {
        v19 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v19->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)v19);
      }
      __writecr8((unsigned __int8)v6);
      VmpFreeMemoryRanges(MemoryRanges);
      v6 = VmpProcessContextLockShared(SpinLock);
      if ( *((_QWORD *)SpinLock + 9) != a3 )
      {
LABEL_30:
        v20 = -1073740007;
LABEL_31:
        v17 = 1;
        goto LABEL_32;
      }
      continue;
    }
    break;
  }
  v42 = a2 - *(_QWORD *)(v9 + 24) + 1;
  MemoryRanges[4] = *(_QWORD *)(v9 + 32);
  MemoryRanges[3] = a2 + 1;
  *(_QWORD *)(v9 + 32) = a2;
  v22 = *((_QWORD *)SpinLock + 4);
  v23 = *(_QWORD *)v7;
  if ( (v22 & 1) != 0 && v23 )
    v23 ^= v7;
  v24 = 0;
  v25 = v22 & 1;
  if ( !v23 )
    goto LABEL_58;
  v26 = MemoryRanges[3];
  while ( 2 )
  {
    if ( v26 <= *(_QWORD *)(v23 + 32) && v26 < *(_QWORD *)(v23 + 24) )
    {
      v27 = *(_QWORD *)v23;
      if ( v25 )
      {
        if ( !v27 )
          goto LABEL_51;
        v27 ^= v23;
      }
      if ( !v27 )
      {
LABEL_51:
        v24 = 0;
        goto LABEL_58;
      }
LABEL_56:
      v23 = v27;
      continue;
    }
    break;
  }
  v27 = *(_QWORD *)(v23 + 8);
  if ( v25 )
  {
    if ( !v27 )
      goto LABEL_57;
    v27 ^= v23;
  }
  if ( v27 )
    goto LABEL_56;
LABEL_57:
  v24 = 1;
LABEL_58:
  RtlRbInsertNodeEx((unsigned __int64)(SpinLock + 6), v23, v24, MemoryRanges);
  v28 = (_QWORD *)MemoryRanges[5];
  v29 = (_QWORD *)(v9 + 40);
  v30 = *(_QWORD **)(v9 + 40);
  v31 = (unsigned __int64 *)(SpinLock + 2);
  while ( 1 )
  {
    v32 = v42 + v30[6];
    v28[6] = v32;
    v28[7] = v30[7];
    v30[7] = v32 - 1;
    v33 = *((_QWORD *)SpinLock + 2);
    v34 = *v31;
    if ( (v33 & 1) != 0 && v34 )
      v34 ^= (unsigned __int64)v31;
    v35 = 0;
    v36 = v33 & 1;
    if ( v34 )
    {
      v37 = v28[6];
      while ( 1 )
      {
        if ( v37 > *(_QWORD *)(v34 + 32) || v37 >= *(_QWORD *)(v34 + 24) )
        {
          v38 = *(_QWORD *)(v34 + 8);
          if ( v36 )
          {
            if ( !v38 )
              goto LABEL_76;
            v38 ^= v34;
          }
          if ( !v38 )
          {
LABEL_76:
            v35 = 1;
            break;
          }
        }
        else
        {
          v38 = *(_QWORD *)v34;
          if ( v36 )
          {
            if ( !v38 )
              goto LABEL_70;
            v38 ^= v34;
          }
          if ( !v38 )
          {
LABEL_70:
            v35 = 0;
            break;
          }
        }
        v34 = v38;
      }
    }
    RtlRbInsertNodeEx((unsigned __int64)(SpinLock + 2), v34, v35, v28 + 3);
    v30 = (_QWORD *)*v30;
    if ( v30 == v29 )
      break;
    v28 = (_QWORD *)*v28;
  }
  ++*((_QWORD *)SpinLock + 5);
  v20 = 0;
LABEL_32:
  if ( v6 != -1 )
  {
    if ( v17 )
    {
      ExReleaseSpinLockSharedFromDpcLevel(SpinLock);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && (unsigned __int8)v6 < 2u )
      {
        v21 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v21->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)v21);
      }
    }
    else
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && (unsigned __int8)v6 < 2u )
      {
        v39 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v39->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)v39);
      }
    }
    __writecr8((unsigned __int8)v6);
  }
  return v20;
}
