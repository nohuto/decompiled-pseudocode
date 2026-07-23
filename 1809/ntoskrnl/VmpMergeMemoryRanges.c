/*
 * XREFs of VmpMergeMemoryRanges @ 0x14030CE00
 * Callers:
 *     VmMergeMemoryRanges @ 0x1408B1600 (VmMergeMemoryRanges.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlRbRemoveNode @ 0x1400BDD30 (RtlRbRemoveNode.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     VmpProcessContextLockExclusive @ 0x14030D39C (VmpProcessContextLockExclusive.c)
 *     VmpVaRangeNumberOfGpaRanges @ 0x14030DF04 (VmpVaRangeNumberOfGpaRanges.c)
 *     VmpFreeMemoryRanges @ 0x1408B197C (VmpFreeMemoryRanges.c)
 */

__int64 __fastcall VmpMergeMemoryRanges(PEX_SPIN_LOCK SpinLock, unsigned __int64 a2, __int64 a3)
{
  _RTL_BALANCED_NODE *v6; // rbp
  unsigned int v7; // ebx
  __int64 v8; // rax
  unsigned __int64 v9; // rbx
  int v10; // ecx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
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
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v27; // [rsp+50h] [rbp+8h]

  v6 = 0LL;
  v27 = VmpProcessContextLockExclusive(SpinLock);
  if ( *((_QWORD *)SpinLock + 9) != a3 )
  {
    v7 = -1073740007;
    goto LABEL_40;
  }
  v8 = *((_QWORD *)SpinLock + 4);
  v9 = *((_QWORD *)SpinLock + 3);
  if ( (v8 & 1) != 0 && v9 )
    v9 ^= (unsigned __int64)(SpinLock + 6);
  v10 = v8 & 1;
  while ( 1 )
  {
    if ( !v9 )
    {
      v7 = -1073741172;
      goto LABEL_40;
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
  if ( v11 != a2 )
    goto LABEL_17;
  v13 = *(_RTL_BALANCED_NODE **)(v9 + 8);
  v14 = (_RTL_BALANCED_NODE *)v9;
  if ( v13 )
  {
    for ( i = v13->Children[0]; i; i = i->Children[0] )
      v13 = i;
  }
  else
  {
    for ( j = *(_QWORD *)(v9 + 16); ; j = v13->ParentValue )
    {
      v13 = (_RTL_BALANCED_NODE *)(j & 0xFFFFFFFFFFFFFFFCuLL);
      if ( !v13 || v13->Children[0] == v14 )
        break;
      v14 = v13;
    }
  }
  if ( v13 && v13[1].Children[0] == (_RTL_BALANCED_NODE *)(a2 + 1) )
  {
    VmpVaRangeNumberOfGpaRanges(v9);
    v17 = VmpVaRangeNumberOfGpaRanges(v13);
    if ( v18 == v17 )
    {
      ParentValue = (_RTL_BALANCED_NODE *)v13[1].ParentValue;
      v20 = (_QWORD *)(v9 + 40);
      v21 = *(_QWORD **)(v9 + 40);
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
          *(_QWORD *)(v9 + 32) = v13[1].Children[1];
          ++*((_QWORD *)SpinLock + 5);
          v7 = 0;
          goto LABEL_40;
        }
      }
    }
    v7 = -1073741182;
  }
  else
  {
LABEL_17:
    v7 = -1073741503;
  }
LABEL_40:
  if ( v27 != -1 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && (unsigned __int8)v27 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8((unsigned __int8)v27);
  }
  if ( v6 )
    VmpFreeMemoryRanges(v6);
  return v7;
}
