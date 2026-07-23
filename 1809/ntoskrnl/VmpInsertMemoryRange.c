/*
 * XREFs of VmpInsertMemoryRange @ 0x14030C990
 * Callers:
 *     VmCreateMemoryRange @ 0x1408B1380 (VmCreateMemoryRange.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlRbInsertNodeEx @ 0x1400BD5F0 (RtlRbInsertNodeEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     VmpProcessContextLockExclusive @ 0x14030D39C (VmpProcessContextLockExclusive.c)
 *     VmpFreeMemoryRanges @ 0x1408B197C (VmpFreeMemoryRanges.c)
 */

__int64 __fastcall VmpInsertMemoryRange(PEX_SPIN_LOCK SpinLock, PRTL_BALANCED_NODE Node, __int64 a3)
{
  _RTL_BALANCED_NODE *ParentValue; // rdi
  PRTL_BALANCED_NODE v7; // r14
  unsigned __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // r12
  _RTL_BALANCED_NODE **v12; // r11
  __int64 v13; // rax
  unsigned __int64 v14; // rcx
  unsigned int v15; // ebx
  int v16; // edx
  unsigned __int64 v17; // rax
  _RTL_BALANCED_NODE **v18; // rbx
  __int64 v19; // rcx
  unsigned __int64 v20; // rax
  int v21; // edx
  _RTL_BALANCED_NODE *v22; // r10
  _RTL_BALANCED_NODE *v23; // rcx
  _RTL_BALANCED_NODE *v24; // r8
  _RTL_BALANCED_NODE *v25; // r9
  unsigned __int64 v26; // rcx
  __int64 v27; // rax
  unsigned __int64 v28; // rdx
  _RTL_BALANCED_NODE *v29; // rdx
  _RTL_BALANCED_NODE *v30; // rcx
  _RTL_BALANCED_NODE **v31; // rax
  _RTL_BALANCED_NODE *i; // rcx
  BOOLEAN v33; // r8
  int v34; // ecx
  _RTL_BALANCED_NODE *v35; // r8
  unsigned __int64 v36; // rax
  __int64 v37; // rax
  unsigned __int64 v38; // rdx
  BOOLEAN v39; // r8
  int v40; // ecx
  _RTL_BALANCED_NODE *v41; // r8
  unsigned __int64 v42; // rax
  struct _KPRCB *CurrentPrcb; // rcx

  ParentValue = (_RTL_BALANCED_NODE *)Node[1].ParentValue;
  v7 = 0LL;
  v8 = 0LL;
  v9 = VmpProcessContextLockExclusive(SpinLock);
  v10 = *((_QWORD *)SpinLock + 9);
  v11 = v9;
  if ( v10 == -1 )
  {
    *((_QWORD *)SpinLock + 9) = a3;
  }
  else if ( v10 != a3 )
  {
    v15 = -1073740007;
    goto LABEL_81;
  }
  v12 = (_RTL_BALANCED_NODE **)(SpinLock + 2);
  v13 = *((_QWORD *)SpinLock + 2);
  v14 = *((_QWORD *)SpinLock + 1);
  if ( (v13 & 1) != 0 && v14 )
    v14 ^= (unsigned __int64)v12;
  v16 = v13 & 1;
  while ( v14 )
  {
    if ( ParentValue[2].Children[1] < (_RTL_BALANCED_NODE *)*(_QWORD *)(v14 + 24) )
    {
      v17 = *(_QWORD *)v14;
    }
    else
    {
      if ( ParentValue[2].Children[0] <= (_RTL_BALANCED_NODE *)*(_QWORD *)(v14 + 32) )
        goto LABEL_21;
      v17 = *(_QWORD *)(v14 + 8);
    }
    if ( v16 && v17 )
      v14 ^= v17;
    else
      v14 = v17;
  }
  v18 = (_RTL_BALANCED_NODE **)(SpinLock + 6);
  v19 = *((_QWORD *)SpinLock + 4);
  v20 = *((_QWORD *)SpinLock + 3);
  if ( (v19 & 1) != 0 && v20 )
    v20 ^= (unsigned __int64)v18;
  v21 = v19 & 1;
  if ( !v20 )
  {
LABEL_33:
    v27 = *((_QWORD *)SpinLock + 2);
    v28 = (unsigned __int64)*v12;
    if ( (v27 & 1) != 0 && v28 )
      v28 ^= (unsigned __int64)v12;
    v33 = 0;
    v34 = v27 & 1;
    if ( v28 )
    {
      v35 = ParentValue[2].Children[0];
      while ( 1 )
      {
        if ( (unsigned __int64)v35 > *(_QWORD *)(v28 + 32) || (unsigned __int64)v35 >= *(_QWORD *)(v28 + 24) )
        {
          v36 = *(_QWORD *)(v28 + 8);
          if ( v34 )
          {
            if ( !v36 )
              goto LABEL_59;
            v36 ^= v28;
          }
          if ( !v36 )
          {
LABEL_59:
            v33 = 1;
            break;
          }
        }
        else
        {
          v36 = *(_QWORD *)v28;
          if ( v34 )
          {
            if ( !v36 )
              goto LABEL_53;
            v36 ^= v28;
          }
          if ( !v36 )
          {
LABEL_53:
            v33 = 0;
            break;
          }
        }
        v28 = v36;
      }
    }
    RtlRbInsertNodeEx((PRTL_RB_TREE)(SpinLock + 2), (PRTL_BALANCED_NODE)v28, v33, ParentValue + 1);
    if ( !v8 )
    {
      v37 = *((_QWORD *)SpinLock + 4);
      v38 = (unsigned __int64)*v18;
      if ( (v37 & 1) != 0 && v38 )
        v38 ^= (unsigned __int64)v18;
      v39 = 0;
      v40 = v37 & 1;
      if ( v38 )
      {
        v41 = Node[1].Children[0];
        while ( 1 )
        {
          if ( (unsigned __int64)v41 > *(_QWORD *)(v38 + 32) || (unsigned __int64)v41 >= *(_QWORD *)(v38 + 24) )
          {
            v42 = *(_QWORD *)(v38 + 8);
            if ( v40 )
            {
              if ( !v42 )
                goto LABEL_78;
              v42 ^= v38;
            }
            if ( !v42 )
            {
LABEL_78:
              v39 = 1;
              break;
            }
          }
          else
          {
            v42 = *(_QWORD *)v38;
            if ( v40 )
            {
              if ( !v42 )
                goto LABEL_72;
              v42 ^= v38;
            }
            if ( !v42 )
            {
LABEL_72:
              v39 = 0;
              break;
            }
          }
          v38 = v42;
        }
      }
      RtlRbInsertNodeEx((PRTL_RB_TREE)(SpinLock + 6), (PRTL_BALANCED_NODE)v38, v39, Node);
    }
    v15 = 0;
    goto LABEL_81;
  }
  v22 = Node[1].Children[1];
  while ( 1 )
  {
    v23 = *(_RTL_BALANCED_NODE **)(v20 + 24);
    if ( v22 >= v23 )
      break;
    v26 = *(_QWORD *)v20;
LABEL_28:
    if ( v21 && v26 )
      v20 ^= v26;
    else
      v20 = v26;
    if ( !v20 )
      goto LABEL_33;
  }
  v24 = Node[1].Children[0];
  v25 = *(_RTL_BALANCED_NODE **)(v20 + 32);
  if ( v24 > v25 )
  {
    v26 = *(_QWORD *)(v20 + 8);
    goto LABEL_28;
  }
  v8 = v20;
  if ( v23 == v24 && v25 == v22 )
  {
    v29 = ParentValue->Children[0];
    v30 = ParentValue->Children[1];
    if ( ParentValue->Children[0]->Children[1] != ParentValue || v30->Children[0] != ParentValue )
      __fastfail(3u);
    v30->Children[0] = v29;
    v29->Children[1] = v30;
    ParentValue->ParentValue = v20;
    v31 = (_RTL_BALANCED_NODE **)(v20 + 40);
    for ( i = *v31; i != (_RTL_BALANCED_NODE *)v31; i = i->Children[0] )
    {
      if ( i[2].Children[0] > ParentValue[2].Children[0] )
        break;
    }
    v7 = Node;
    i->Children[1]->Children[0] = ParentValue;
    ParentValue->Children[1] = i->Children[1];
    i->Children[1] = ParentValue;
    ParentValue->Children[0] = i;
    goto LABEL_33;
  }
LABEL_21:
  v15 = -1073741800;
LABEL_81:
  if ( v11 != -1 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && (unsigned __int8)v11 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8((unsigned __int8)v11);
  }
  if ( v7 )
    VmpFreeMemoryRanges(v7);
  return v15;
}
