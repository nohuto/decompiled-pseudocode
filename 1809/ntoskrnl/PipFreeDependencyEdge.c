/*
 * XREFs of PipFreeDependencyEdge @ 0x140287CA8
 * Callers:
 *     PipDeleteAllDependencyRelations @ 0x14075E9EC (PipDeleteAllDependencyRelations.c)
 *     PipMergeDependencyEdgeList @ 0x14082518C (PipMergeDependencyEdgeList.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PipDereferenceDependencyNode @ 0x14073B12C (PipDereferenceDependencyNode.c)
 *     PipFreeBindingRequestEntry @ 0x1408250E8 (PipFreeBindingRequestEntry.c)
 *     PipNotifyDependenciesChanged @ 0x140825388 (PipNotifyDependenciesChanged.c)
 */

void __fastcall PipFreeDependencyEdge(_DWORD *P, __int64 a2)
{
  __int64 **v3; // rdi
  __int64 *v5; // rcx
  __int64 v6; // rax
  KIRQL v7; // di
  _QWORD *v8; // r8
  PVOID *v9; // rdx
  _DWORD **v10; // r8
  PVOID *v11; // rdx
  struct _KPRCB *CurrentPrcb; // rcx

  v3 = (__int64 **)(P + 14);
  while ( 1 )
  {
    v5 = *v3;
    if ( *v3 == (__int64 *)v3 )
      break;
    v6 = *v5;
    if ( (__int64 **)v5[1] != v3 || *(__int64 **)(v6 + 8) != v5 )
      goto LABEL_18;
    *v3 = (__int64 *)v6;
    *(_QWORD *)(v6 + 8) = v3;
    PipFreeBindingRequestEntry(v5);
  }
  v7 = KeAcquireSpinLockRaiseToDpc(&PiDependencyEdgeWriteLock);
  if ( a2 )
    *(_DWORD *)(a2 + 48) |= P[12];
  v8 = *(_QWORD **)P;
  v9 = (PVOID *)*((_QWORD *)P + 1);
  if ( *(_DWORD **)(*(_QWORD *)P + 8LL) != P
    || *v9 != P
    || (*v9 = v8, v8[1] = v9, v10 = (_DWORD **)*((_QWORD *)P + 2), v11 = (PVOID *)*((_QWORD *)P + 3), v10[1] != P + 4)
    || *v11 != P + 4 )
  {
LABEL_18:
    __fastfail(3u);
  }
  *v11 = v10;
  v10[1] = v11;
  KxReleaseSpinLock(&PiDependencyEdgeWriteLock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v7 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(v7);
  PipNotifyDependenciesChanged(*((_QWORD *)P + 5), *((_QWORD *)P + 4));
  PipDereferenceDependencyNode(*((_QWORD *)P + 4));
  PipDereferenceDependencyNode(*((_QWORD *)P + 5));
  ExFreePoolWithTag(P, 0x53706E50u);
}
