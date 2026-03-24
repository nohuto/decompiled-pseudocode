/*
 * XREFs of IopFreeRelationList @ 0x1406EEA3C
 * Callers:
 *     PnpQueuePendingSurpriseRemoval @ 0x1406ED8AC (PnpQueuePendingSurpriseRemoval.c)
 *     PnpInvalidateRelationsInList @ 0x1406EDCB0 (PnpInvalidateRelationsInList.c)
 *     IopAllocateRelationList @ 0x1406EE97C (IopAllocateRelationList.c)
 *     PnpBuildRemovalRelationList @ 0x1406EF2D4 (PnpBuildRemovalRelationList.c)
 *     PipRemoveDevicesInRelationList @ 0x1406EF680 (PipRemoveDevicesInRelationList.c)
 *     PnpProcessQueryRemoveAndEject @ 0x1406EF790 (PnpProcessQueryRemoveAndEject.c)
 *     PnpCancelRemoveOnHungDevices @ 0x140827FEC (PnpCancelRemoveOnHungDevices.c)
 *     PnpProcessCompletedEject @ 0x140828280 (PnpProcessCompletedEject.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     PiClearDeviceObjectList @ 0x1406EEA8C (PiClearDeviceObjectList.c)
 */

void __fastcall IopFreeRelationList(_QWORD *P)
{
  void *v1; // rdi

  if ( P )
  {
    v1 = (void *)*P;
    if ( *P )
    {
      PiClearDeviceObjectList(*P);
      ExFreePoolWithTag(v1, 0);
      *P = 0LL;
    }
    ExFreePoolWithTag(P, 0x54706E50u);
  }
}
