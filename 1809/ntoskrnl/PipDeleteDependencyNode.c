/*
 * XREFs of PipDeleteDependencyNode @ 0x14075EA9C
 * Callers:
 *     PipProcessRebuildPowerRelationsQueue @ 0x1406ECAB0 (PipProcessRebuildPowerRelationsQueue.c)
 *     PipDereferenceDependencyNode @ 0x14073B12C (PipDereferenceDependencyNode.c)
 *     PipCreateDependencyNode @ 0x14073B148 (PipCreateDependencyNode.c)
 *     PipDeleteAllDependencyRelations @ 0x14075E9EC (PipDeleteAllDependencyRelations.c)
 *     IoDuplicateDependency @ 0x140824AC0 (IoDuplicateDependency.c)
 *     PipMergeDependencyEdgeList @ 0x14082518C (PipMergeDependencyEdgeList.c)
 *     PipMergeDependencyNodes @ 0x140825310 (PipMergeDependencyNodes.c)
 *     PipSetDependency @ 0x140825410 (PipSetDependency.c)
 *     PipUnlinkDeviceObjectAndDependencyNode @ 0x1408254C0 (PipUnlinkDeviceObjectAndDependencyNode.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PipDeleteBindingIds @ 0x14075EB60 (PipDeleteBindingIds.c)
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
