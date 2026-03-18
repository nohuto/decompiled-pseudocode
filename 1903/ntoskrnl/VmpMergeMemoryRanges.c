/*
 * XREFs of VmpMergeMemoryRanges @ 0x14032A7DC
 * Callers:
 *     VmMergeMemoryRanges @ 0x1408ED550 (VmMergeMemoryRanges.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060A60 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlRbRemoveNode @ 0x140063870 (RtlRbRemoveNode.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     VmpProcessContextLockExclusive @ 0x14032AD80 (VmpProcessContextLockExclusive.c)
 *     VmpVaRangeNumberOfGpaRanges @ 0x14032B8D8 (VmpVaRangeNumberOfGpaRanges.c)
 *     VmpFreeMemoryRanges @ 0x1408EDBD4 (VmpFreeMemoryRanges.c)
 */

__int64 __fastcall VmpMergeMemoryRanges(PEX_SPIN_LOCK SpinLock, unsigned __int64 a2, __int64 a3)
{
  void *v6; // rbp
  unsigned int v7; // ebx
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  _QWORD *v13; // rdi
  _QWORD *v14; // rcx
  _QWORD *i; // rax
  __int64 j; // rdi
  __int64 v17; // rax
  __int64 v18; // r8
  _QWORD *v19; // rsi
  _QWORD *v20; // r15
  _QWORD *v21; // r14
  _QWORD *v22; // r8
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
  v13 = *(_QWORD **)(v8 + 8);
  v14 = (_QWORD *)v8;
  if ( v13 )
  {
    for ( i = (_QWORD *)*v13; i; i = (_QWORD *)*i )
      v13 = i;
  }
  else
  {
    for ( j = *(_QWORD *)(v8 + 16); ; j = v13[2] )
    {
      v13 = (_QWORD *)(j & 0xFFFFFFFFFFFFFFFCuLL);
      if ( !v13 || (_QWORD *)*v13 == v14 )
        break;
      v14 = v13;
    }
  }
  if ( v13 && v13[3] == a2 + 1 )
  {
    VmpVaRangeNumberOfGpaRanges(v8);
    v17 = VmpVaRangeNumberOfGpaRanges(v13);
    if ( v18 == v17 )
    {
      v19 = (_QWORD *)v13[5];
      v20 = (_QWORD *)(v8 + 40);
      v21 = *(_QWORD **)(v8 + 40);
      v22 = v19;
      v23 = v21;
      for ( k = v21[7]; k + 1 >= k && k + 1 == v22[6]; k = v23[7] )
      {
        v23 = (_QWORD *)*v23;
        v22 = (_QWORD *)*v22;
        if ( v23 == v20 )
        {
          do
          {
            RtlRbRemoveNode((unsigned __int64 *)SpinLock + 1, (unsigned __int64)(v19 + 3));
            v19[5] = -1LL;
            v21[7] = v19[7];
            v21 = (_QWORD *)*v21;
            v19 = (_QWORD *)*v19;
          }
          while ( v21 != v20 );
          RtlRbRemoveNode((unsigned __int64 *)SpinLock + 3, (unsigned __int64)v13);
          v13[2] = -1LL;
          v6 = v13;
          *(_QWORD *)(v8 + 32) = v13[4];
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
