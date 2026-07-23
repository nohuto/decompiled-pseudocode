/*
 * XREFs of PipRemoveDevicesInRelationList @ 0x1406F0920
 * Callers:
 *     PnpDelayedRemoveWorker @ 0x1406EFAC0 (PnpDelayedRemoveWorker.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x1406EE9CC (PnpUnlinkDeviceRemovalRelations.c)
 *     PnpDeleteLockedDeviceNodes @ 0x1406EF0B8 (PnpDeleteLockedDeviceNodes.c)
 *     IopFreeRelationList @ 0x1406EFCDC (IopFreeRelationList.c)
 *     IopSortRelationListForRemove @ 0x1406F039C (IopSortRelationListForRemove.c)
 *     IopRemoveRelationFromList @ 0x14083BF34 (IopRemoveRelationFromList.c)
 */

__int64 __fastcall PipRemoveDevicesInRelationList(PVOID P)
{
  __int64 v1; // rax
  __int64 v3; // rdi
  bool v4; // si
  unsigned int v5; // ebp
  void *v6; // rcx

  v1 = *((_QWORD *)P + 7);
  if ( v1 )
    v3 = *(_QWORD *)(*(_QWORD *)(v1 + 312) + 40LL);
  else
    v3 = 0LL;
  if ( v3 )
  {
    v4 = 0;
    if ( (*(_DWORD *)(v3 + 396) & 0x10) == 0 )
      v4 = *(_QWORD *)(v3 + 16) != 0LL;
    v5 = IopSortRelationListForRemove(*((_QWORD *)P + 8));
    PnpDeleteLockedDeviceNodes(*((_QWORD *)P + 7), *((_QWORD *)P + 8), 2, 0, *((_DWORD *)P + 21), 0, 0LL, 0LL);
    if ( v4 )
    {
      if ( *(_DWORD *)(v3 + 300) == 782 )
        IopRemoveRelationFromList(*((_QWORD *)P + 8), *((_QWORD *)P + 7));
      PnpUnlinkDeviceRemovalRelations(v6, *((_QWORD *)P + 8));
    }
  }
  else
  {
    v5 = -1073741823;
  }
  IopFreeRelationList(*((_QWORD **)P + 8));
  ExFreePoolWithTag(P, 0);
  return v5;
}
