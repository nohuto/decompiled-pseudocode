/*
 * XREFs of VmpMergeMemoryRanges @ 0x14032A22C
 * Callers:
 *     VmMergeMemoryRanges @ 0x1408ECE60 (VmMergeMemoryRanges.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060B00 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlRbRemoveNode @ 0x140063910 (RtlRbRemoveNode.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     VmpProcessContextLockExclusive @ 0x14032A7D0 (VmpProcessContextLockExclusive.c)
 *     VmpVaRangeNumberOfGpaRanges @ 0x14032B328 (VmpVaRangeNumberOfGpaRanges.c)
 *     VmpFreeMemoryRanges @ 0x1408ED4E4 (VmpFreeMemoryRanges.c)
 */

__int64 __fastcall VmpMergeMemoryRanges(PEX_SPIN_LOCK SpinLock, unsigned __int64 a2, __int64 a3)
{
  _RTL_BALANCED_NODE *v6; // rbp
  unsigned int v7; // ebx
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  _RTL_BALANCED_NODE *v13; // rdi
  _RTL_BALANCED_NODE *v14; // rcx
  _RTL_BALANCED_NODE *i; // rax
  unsigned __int64 j; // rdi
  __int64 v17; // rax
  __int64 v18; // r8
  _RTL_BALANCED_NODE *ParentValue; // rsi
  _QWORD *v20; // r15
  _QWORD *v21; // r14
  _RTL_BALANCED_NODE *v22; // r8
  _QWORD *v23; // rcx
  unsigned __int64 k; // rdx
  __int64 v25; // [rsp+50h] [rbp+8h]

  v6 = 0LL;
  v25 = VmpProcessContextLockExclusive(SpinLock);
  if ( *((_QWORD *)SpinLock + 9) != a3 )
  {
    v7 = -1073740007;
    goto LABEL_17;
  }
  v8 = *((_QWORD *)SpinLock + 3);
  if ( (SpinLock[8] & 1) != 0 && v8 )
    v8 ^= (unsigned __int64)(SpinLock + 6);
  while ( 1 )
  {
    if ( !v8 )
    {
      v7 = -1073741172;
      goto LABEL_17;
    }
    v9 = *(_QWORD *)(v8 + 32);
    if ( a2 <= v9 )
      break;
    v10 = *(_QWORD *)(v8 + 8);
LABEL_11:
    if ( (SpinLock[8] & 1) != 0 && v10 )
      v8 ^= v10;
    else
      v8 = v10;
  }
  if ( a2 < *(_QWORD *)(v8 + 24) )
  {
    v10 = *(_QWORD *)v8;
    goto LABEL_11;
  }
  if ( v9 != a2 )
    goto LABEL_28;
  v13 = *(_RTL_BALANCED_NODE **)(v8 + 8);
  v14 = (_RTL_BALANCED_NODE *)v8;
  if ( v13 )
  {
    for ( i = v13->Children[0]; i; i = i->Children[0] )
      v13 = i;
  }
  else
  {
    for ( j = *(_QWORD *)(v8 + 16); ; j = v13->ParentValue )
    {
      v13 = (_RTL_BALANCED_NODE *)(j & 0xFFFFFFFFFFFFFFFCuLL);
      if ( !v13 || v13->Children[0] == v14 )
        break;
      v14 = v13;
    }
  }
  if ( v13 && v13[1].Children[0] == (_RTL_BALANCED_NODE *)(a2 + 1) )
  {
    VmpVaRangeNumberOfGpaRanges(v8);
    v17 = VmpVaRangeNumberOfGpaRanges(v13);
    if ( v18 == v17 )
    {
      ParentValue = (_RTL_BALANCED_NODE *)v13[1].ParentValue;
      v20 = (_QWORD *)(v8 + 40);
      v21 = *(_QWORD **)(v8 + 40);
      v22 = ParentValue;
      v23 = v21;
      for ( k = v21[7]; k + 1 >= k && (_RTL_BALANCED_NODE *)(k + 1) == v22[2].Children[0]; k = v23[7] )
      {
        v23 = (_QWORD *)*v23;
        v22 = v22->Children[0];
        if ( v23 == v20 )
        {
          do
          {
            RtlRbRemoveNode((PRTL_RB_TREE)(SpinLock + 2), ParentValue + 1);
            ParentValue[1].ParentValue = -1LL;
            v21[7] = ParentValue[2].Children[1];
            v21 = (_QWORD *)*v21;
            ParentValue = ParentValue->Children[0];
          }
          while ( v21 != v20 );
          RtlRbRemoveNode((PRTL_RB_TREE)(SpinLock + 6), v13);
          v13->ParentValue = -1LL;
          v6 = v13;
          *(_QWORD *)(v8 + 32) = v13[1].Children[1];
          ++*((_QWORD *)SpinLock + 5);
          v7 = 0;
          goto LABEL_17;
        }
      }
    }
    v7 = -1073741182;
  }
  else
  {
LABEL_28:
    v7 = -1073741503;
  }
LABEL_17:
  if ( v25 != -1 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && (unsigned __int8)v25 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8((unsigned __int8)v25);
  }
  if ( v6 )
    VmpFreeMemoryRanges(v6);
  return v7;
}
