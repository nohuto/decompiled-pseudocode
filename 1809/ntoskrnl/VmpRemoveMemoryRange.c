/*
 * XREFs of VmpRemoveMemoryRange @ 0x14030D800
 * Callers:
 *     VmDeleteMemoryRange @ 0x1408B1530 (VmDeleteMemoryRange.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlRbRemoveNode @ 0x1400BDD30 (RtlRbRemoveNode.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     VmpFlushTbVaRange @ 0x14030C834 (VmpFlushTbVaRange.c)
 *     VmpProcessContextLockExclusive @ 0x14030D39C (VmpProcessContextLockExclusive.c)
 *     VmpVaRangeNumberOfGpaRanges @ 0x14030DF04 (VmpVaRangeNumberOfGpaRanges.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     VmpFreeMemoryRanges @ 0x1408B197C (VmpFreeMemoryRanges.c)
 */

__int64 __fastcall VmpRemoveMemoryRange(
        PEX_SPIN_LOCK SpinLock,
        unsigned __int64 a2,
        _RTL_BALANCED_NODE *a3,
        __int64 a4,
        __int64 a5)
{
  _RTL_BALANCED_NODE *v5; // rsi
  unsigned __int64 v6; // r13
  unsigned __int64 v7; // r12
  unsigned int v11; // ebx
  unsigned __int64 v12; // rsi
  __int64 v13; // rcx
  unsigned __int64 v14; // rax
  int v15; // edx
  _RTL_BALANCED_NODE *v16; // r9
  _RTL_BALANCED_NODE *v17; // r8
  unsigned __int64 v18; // rcx
  _RTL_BALANCED_NODE *v19; // rdi
  _RTL_BALANCED_NODE *ParentValue; // rbx
  _RTL_BALANCED_NODE *v21; // rcx
  _RTL_BALANCED_NODE *v22; // rax
  __int64 v23; // rax
  _RTL_BALANCED_NODE *v24; // r8
  unsigned __int64 v25; // r9
  bool v26; // zf
  struct _KPRCB *CurrentPrcb; // rcx
  _QWORD v29[13]; // [rsp+30h] [rbp-68h] BYREF
  _RTL_BALANCED_NODE *v30; // [rsp+A0h] [rbp+8h]
  __int64 v31; // [rsp+A8h] [rbp+10h] BYREF
  PVOID P; // [rsp+B0h] [rbp+18h]
  __int64 v33; // [rsp+B8h] [rbp+20h] BYREF

  v5 = 0LL;
  v33 = 0LL;
  v30 = 0LL;
  P = 0LL;
  v6 = a4 + a2 - 1;
  v7 = (unsigned __int64)a3 + a4 - 1;
  v31 = VmpProcessContextLockExclusive(SpinLock);
  if ( *((_QWORD *)SpinLock + 9) != a5 )
  {
    v11 = -1073740007;
    goto LABEL_46;
  }
  memset(v29, 0, 24);
  VmpFlushTbVaRange(SpinLock, a2, v6, v29, &v33, (unsigned __int64 *)&v31);
  v12 = (unsigned __int64)(SpinLock + 2);
  v13 = *((_QWORD *)SpinLock + 2);
  v14 = *((_QWORD *)SpinLock + 1);
  if ( (v13 & 1) != 0 && v14 )
    v14 ^= v12;
  v15 = v13 & 1;
  while ( 1 )
  {
    if ( !v14 )
      goto LABEL_44;
    v16 = *(_RTL_BALANCED_NODE **)(v14 + 32);
    if ( a3 <= v16 )
      break;
    v18 = *(_QWORD *)(v14 + 8);
LABEL_12:
    if ( v15 && v18 )
      v14 ^= v18;
    else
      v14 = v18;
  }
  v17 = *(_RTL_BALANCED_NODE **)(v14 + 24);
  if ( a3 < v17 )
  {
    v18 = *(_QWORD *)v14;
    goto LABEL_12;
  }
  v19 = (_RTL_BALANCED_NODE *)(v14 - 24);
  if ( v14 == 24 )
  {
LABEL_44:
    v11 = -1073741172;
    goto LABEL_45;
  }
  ParentValue = (_RTL_BALANCED_NODE *)v19->ParentValue;
  if ( v17 != a3
    || v16 != (_RTL_BALANCED_NODE *)v7
    || ParentValue[1].Children[0] != (_RTL_BALANCED_NODE *)a2
    || ParentValue[1].Children[1] != (_RTL_BALANCED_NODE *)v6 )
  {
    if ( (unsigned __int64)VmpVaRangeNumberOfGpaRanges(v19->ParentValue) > 1 )
      goto LABEL_31;
    if ( a3 == v24 && (_RTL_BALANCED_NODE *)a2 == ParentValue[1].Children[0] )
    {
      v26 = v7 == v25;
      if ( v7 >= v25 )
      {
LABEL_38:
        if ( v26
          && (_RTL_BALANCED_NODE *)v6 == ParentValue[1].Children[1]
          && a3 > v24
          && (_RTL_BALANCED_NODE *)a2 > ParentValue[1].Children[0] )
        {
          v19[2].Children[1] = (_RTL_BALANCED_NODE *)((char *)a3 - 1);
          ParentValue[1].Children[1] = (_RTL_BALANCED_NODE *)(a2 - 1);
          goto LABEL_43;
        }
LABEL_31:
        v11 = -1073741637;
        goto LABEL_45;
      }
      if ( (_RTL_BALANCED_NODE *)v6 < ParentValue[1].Children[1] )
      {
        v19[2].Children[0] = (_RTL_BALANCED_NODE *)(v7 + 1);
        ParentValue[1].Children[0] = (_RTL_BALANCED_NODE *)(v6 + 1);
        goto LABEL_43;
      }
    }
    v26 = v7 == v25;
    goto LABEL_38;
  }
  RtlRbRemoveNode((PRTL_RB_TREE)(SpinLock + 2), (PRTL_BALANCED_NODE)v14);
  v19[1].ParentValue = -1LL;
  v21 = v19->Children[0];
  v22 = v19->Children[1];
  if ( v19->Children[0]->Children[1] != v19 || v22->Children[0] != v19 )
    __fastfail(3u);
  v22->Children[0] = v21;
  v21->Children[1] = v22;
  P = v19;
  if ( ($A3FF8F482F754979EE64F8673203A9F2 *)ParentValue[1].ParentValue == &ParentValue[1].16 )
  {
    RtlRbRemoveNode((PRTL_RB_TREE)(SpinLock + 6), ParentValue);
    ParentValue->ParentValue = -1LL;
    v23 = *(_QWORD *)v12;
    v30 = ParentValue;
    if ( (SpinLock[4] & 1) == 0 )
      goto LABEL_27;
    if ( !v23 )
      goto LABEL_28;
    v23 ^= v12;
LABEL_27:
    if ( !v23 )
LABEL_28:
      *((_QWORD *)SpinLock + 9) = -1LL;
  }
LABEL_43:
  ++*((_QWORD *)SpinLock + 5);
  v11 = 0;
LABEL_45:
  v5 = v30;
LABEL_46:
  if ( v31 != -1 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && (unsigned __int8)v31 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8((unsigned __int8)v31);
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v5 )
    VmpFreeMemoryRanges(v5);
  return v11;
}
