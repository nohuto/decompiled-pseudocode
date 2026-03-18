/*
 * XREFs of IopFreeRelationList @ 0x1406EEA5C
 * Callers:
 *     PnpQueuePendingSurpriseRemoval @ 0x1406ED8CC (PnpQueuePendingSurpriseRemoval.c)
 *     PnpInvalidateRelationsInList @ 0x1406EDCD0 (PnpInvalidateRelationsInList.c)
 *     IopAllocateRelationList @ 0x1406EE99C (IopAllocateRelationList.c)
 *     PnpBuildRemovalRelationList @ 0x1406EF2F4 (PnpBuildRemovalRelationList.c)
 *     PipRemoveDevicesInRelationList @ 0x1406EF6A0 (PipRemoveDevicesInRelationList.c)
 *     PnpProcessQueryRemoveAndEject @ 0x1406EF7B0 (PnpProcessQueryRemoveAndEject.c)
 *     PnpCancelRemoveOnHungDevices @ 0x14082800C (PnpCancelRemoveOnHungDevices.c)
 *     PnpProcessCompletedEject @ 0x1408282A0 (PnpProcessCompletedEject.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     PiClearDeviceObjectList @ 0x1406EEAAC (PiClearDeviceObjectList.c)
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
