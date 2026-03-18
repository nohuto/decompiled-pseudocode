/*
 * XREFs of PipDeleteDependencyNode @ 0x140786780
 * Callers:
 *     PipProcessRebuildPowerRelationsQueue @ 0x1407008C0 (PipProcessRebuildPowerRelationsQueue.c)
 *     PipDereferenceDependencyNode @ 0x140773870 (PipDereferenceDependencyNode.c)
 *     PipCreateDependencyNode @ 0x14077388C (PipCreateDependencyNode.c)
 *     PipDeleteAllDependencyRelations @ 0x1407866D0 (PipDeleteAllDependencyRelations.c)
 *     PipMergeDependencyEdgeList @ 0x14085DADC (PipMergeDependencyEdgeList.c)
 *     PipMergeDependencyNodes @ 0x14085DC60 (PipMergeDependencyNodes.c)
 *     PipSetDependency @ 0x14085DD60 (PipSetDependency.c)
 *     PipUnlinkDeviceObjectAndDependencyNode @ 0x14085DE10 (PipUnlinkDeviceObjectAndDependencyNode.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PipDeleteBindingIds @ 0x140786850 (PipDeleteBindingIds.c)
 */

void __fastcall PipDeleteDependencyNode(_QWORD *P)
{
  _QWORD *v2; // rcx
  PVOID *v3; // rax
  _QWORD **v4; // rdx
  PVOID *v5; // rcx

  PipDeleteBindingIds();
  v2 = (_QWORD *)*P;
  if ( *(_QWORD **)(*P + 8LL) != P
    || (v3 = (PVOID *)P[1], *v3 != P)
    || (*v3 = v2, v2[1] = v3, v4 = (_QWORD **)P[9], v4[1] != P + 9)
    || (v5 = (PVOID *)P[10], *v5 != P + 9) )
  {
    __fastfail(3u);
  }
  *v5 = v4;
  v4[1] = v5;
  ExFreePoolWithTag(P, 0x53706E50u);
}
