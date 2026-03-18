/*
 * XREFs of IopFreeRelationList @ 0x14073340C
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x140730890 (PnpProcessQueryRemoveAndEject.c)
 *     PnpBuildRemovalRelationList @ 0x140730F60 (PnpBuildRemovalRelationList.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x140731CAC (PnpQueuePendingSurpriseRemoval.c)
 *     PnpInvalidateRelationsInList @ 0x14073209C (PnpInvalidateRelationsInList.c)
 *     IopAllocateRelationList @ 0x14073334C (IopAllocateRelationList.c)
 *     PipRemoveDevicesInRelationList @ 0x140733AD4 (PipRemoveDevicesInRelationList.c)
 *     PnpCancelRemoveOnHungDevices @ 0x140861BE8 (PnpCancelRemoveOnHungDevices.c)
 *     PnpProcessCompletedEject @ 0x140861E70 (PnpProcessCompletedEject.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PiClearDeviceObjectList @ 0x14073345C (PiClearDeviceObjectList.c)
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
