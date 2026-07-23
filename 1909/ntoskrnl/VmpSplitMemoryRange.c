/*
 * XREFs of VmpSplitMemoryRange @ 0x14032AF18
 * Callers:
 *     VmSplitMemoryRange @ 0x1408ECFE0 (VmSplitMemoryRange.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060B00 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140061AC0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     RtlRbInsertNodeEx @ 0x140064630 (RtlRbInsertNodeEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     VmpProcessContextLockExclusive @ 0x14032A7D0 (VmpProcessContextLockExclusive.c)
 *     VmpProcessContextLockShared @ 0x14032A828 (VmpProcessContextLockShared.c)
 *     VmpVaRangeNumberOfGpaRanges @ 0x14032B328 (VmpVaRangeNumberOfGpaRanges.c)
 *     VmpAllocateMemoryRanges @ 0x1408ED320 (VmpAllocateMemoryRanges.c)
 *     VmpFreeMemoryRanges @ 0x1408ED4E4 (VmpFreeMemoryRanges.c)
 */

__int64 __fastcall VmpSplitMemoryRange(PEX_SPIN_LOCK SpinLock, unsigned __int64 a2, __int64 a3)
{
  int v6; // r13d
  __int64 v7; // rsi
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax
  unsigned int v11; // ebx
  __int64 v12; // rax
  __int64 v13; // r15
  __int64 v14; // r14
  struct _KPRCB *CurrentPrcb; // rcx
  _RTL_BALANCED_NODE *MemoryRanges; // r14
  struct _KPRCB *v17; // rcx
  _RTL_RB_TREE *v18; // rcx
  unsigned __int64 v19; // r12
  unsigned __int64 v20; // r12
  unsigned __int64 v21; // rdx
  BOOLEAN v22; // r8
  _RTL_BALANCED_NODE *v23; // r8
  unsigned __int64 v24; // rax
  _RTL_BALANCED_NODE *ParentValue; // r14
  _QWORD *v26; // rbp
  _QWORD *v27; // r15
  _RTL_BALANCED_NODE **v28; // rbx
  _RTL_BALANCED_NODE *v29; // rcx
  unsigned __int64 v30; // rdx
  BOOLEAN v31; // r8
  _RTL_BALANCED_NODE *v32; // r8
  unsigned __int64 v33; // rax
  struct _KPRCB *v34; // rcx
  struct _KPRCB *v35; // rcx

  while ( 2 )
  {
    v6 = 1;
    v7 = VmpProcessContextLockShared(SpinLock);
    if ( *((_QWORD *)SpinLock + 9) != a3 )
    {
      v11 = -1073740007;
      goto LABEL_73;
    }
    v8 = *((_QWORD *)SpinLock + 3);
    if ( (SpinLock[8] & 1) != 0 && v8 )
      v8 ^= (unsigned __int64)(SpinLock + 6);
    while ( 1 )
    {
      if ( !v8 )
      {
        v11 = -1073741172;
        goto LABEL_73;
      }
      v9 = *(_QWORD *)(v8 + 32);
      if ( a2 <= v9 )
        break;
      v10 = *(_QWORD *)(v8 + 8);
LABEL_10:
      if ( (SpinLock[8] & 1) != 0 && v10 )
        v8 ^= v10;
      else
        v8 = v10;
    }
    if ( a2 < *(_QWORD *)(v8 + 24) )
    {
      v10 = *(_QWORD *)v8;
      goto LABEL_10;
    }
    if ( a2 == v9 )
    {
      v11 = -1073741503;
      goto LABEL_73;
    }
    v12 = VmpVaRangeNumberOfGpaRanges(v8);
    v13 = *((_QWORD *)SpinLock + 5);
    v14 = v12;
    ExReleaseSpinLockSharedFromDpcLevel(SpinLock);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && (unsigned __int8)v7 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8((unsigned __int8)v7);
    v6 = 0;
    MemoryRanges = (_RTL_BALANCED_NODE *)VmpAllocateMemoryRanges(v14);
    if ( !MemoryRanges )
      return (unsigned int)-1073741670;
    v7 = VmpProcessContextLockExclusive(SpinLock);
    if ( v13 != *((_QWORD *)SpinLock + 5) )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && (unsigned __int8)v7 < 2u )
      {
        v17 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v17->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)v17);
      }
      __writecr8((unsigned __int8)v7);
      VmpFreeMemoryRanges(MemoryRanges);
      continue;
    }
    break;
  }
  v18 = (_RTL_RB_TREE *)(SpinLock + 6);
  v19 = a2 - *(_QWORD *)(v8 + 24);
  MemoryRanges[1].Children[1] = *(_RTL_BALANCED_NODE **)(v8 + 32);
  v20 = v19 + 1;
  MemoryRanges[1].Children[0] = (_RTL_BALANCED_NODE *)(a2 + 1);
  *(_QWORD *)(v8 + 32) = a2;
  v21 = *((_QWORD *)SpinLock + 3);
  if ( (SpinLock[8] & 1) != 0 && v21 )
    v21 ^= (unsigned __int64)v18;
  v22 = 0;
  if ( !v21 )
    goto LABEL_48;
  v23 = MemoryRanges[1].Children[0];
  while ( 2 )
  {
    if ( (unsigned __int64)v23 <= *(_QWORD *)(v21 + 32) && (unsigned __int64)v23 < *(_QWORD *)(v21 + 24) )
    {
      v24 = *(_QWORD *)v21;
      if ( (SpinLock[8] & 1) != 0 )
      {
        if ( !v24 )
          goto LABEL_41;
        v24 ^= v21;
      }
      if ( !v24 )
      {
LABEL_41:
        v22 = 0;
        goto LABEL_48;
      }
LABEL_46:
      v21 = v24;
      continue;
    }
    break;
  }
  v24 = *(_QWORD *)(v21 + 8);
  if ( (SpinLock[8] & 1) != 0 )
  {
    if ( !v24 )
      goto LABEL_47;
    v24 ^= v21;
  }
  if ( v24 )
    goto LABEL_46;
LABEL_47:
  v22 = 1;
LABEL_48:
  RtlRbInsertNodeEx(v18, (PRTL_BALANCED_NODE)v21, v22, MemoryRanges);
  ParentValue = (_RTL_BALANCED_NODE *)MemoryRanges[1].ParentValue;
  v26 = (_QWORD *)(v8 + 40);
  v27 = *(_QWORD **)(v8 + 40);
  v28 = (_RTL_BALANCED_NODE **)(SpinLock + 2);
  while ( 1 )
  {
    v29 = (_RTL_BALANCED_NODE *)(v20 + v27[6]);
    ParentValue[2].Children[0] = v29;
    ParentValue[2].Children[1] = (_RTL_BALANCED_NODE *)v27[7];
    v27[7] = (char *)v29 - 1;
    v30 = (unsigned __int64)*v28;
    if ( (SpinLock[4] & 1) != 0 && v30 )
      v30 ^= (unsigned __int64)v28;
    v31 = 0;
    if ( v30 )
    {
      v32 = ParentValue[2].Children[0];
      while ( 1 )
      {
        if ( (unsigned __int64)v32 > *(_QWORD *)(v30 + 32) || (unsigned __int64)v32 >= *(_QWORD *)(v30 + 24) )
        {
          v33 = *(_QWORD *)(v30 + 8);
          if ( (SpinLock[4] & 1) != 0 )
          {
            if ( !v33 )
              goto LABEL_66;
            v33 ^= v30;
          }
          if ( !v33 )
          {
LABEL_66:
            v31 = 1;
            break;
          }
        }
        else
        {
          v33 = *(_QWORD *)v30;
          if ( (SpinLock[4] & 1) != 0 )
          {
            if ( !v33 )
              goto LABEL_60;
            v33 ^= v30;
          }
          if ( !v33 )
          {
LABEL_60:
            v31 = 0;
            break;
          }
        }
        v30 = v33;
      }
    }
    RtlRbInsertNodeEx((PRTL_RB_TREE)(SpinLock + 2), (PRTL_BALANCED_NODE)v30, v31, ParentValue + 1);
    v27 = (_QWORD *)*v27;
    if ( v27 == v26 )
      break;
    ParentValue = ParentValue->Children[0];
  }
  ++*((_QWORD *)SpinLock + 5);
  v11 = 0;
LABEL_73:
  if ( v7 != -1 )
  {
    if ( v6 )
    {
      ExReleaseSpinLockSharedFromDpcLevel(SpinLock);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && (unsigned __int8)v7 < 2u )
      {
        v34 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v34->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)v34);
      }
    }
    else
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && (unsigned __int8)v7 < 2u )
      {
        v35 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v35->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)v35);
      }
    }
    __writecr8((unsigned __int8)v7);
  }
  return v11;
}
