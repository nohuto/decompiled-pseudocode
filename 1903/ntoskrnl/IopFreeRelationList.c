/*
 * XREFs of IopFreeRelationList @ 0x1407311AC
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x14072E630 (PnpProcessQueryRemoveAndEject.c)
 *     PnpBuildRemovalRelationList @ 0x14072ED00 (PnpBuildRemovalRelationList.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x14072FA4C (PnpQueuePendingSurpriseRemoval.c)
 *     PnpInvalidateRelationsInList @ 0x14072FE3C (PnpInvalidateRelationsInList.c)
 *     IopAllocateRelationList @ 0x1407310EC (IopAllocateRelationList.c)
 *     PipRemoveDevicesInRelationList @ 0x140731874 (PipRemoveDevicesInRelationList.c)
 *     PnpCancelRemoveOnHungDevices @ 0x1408624E8 (PnpCancelRemoveOnHungDevices.c)
 *     PnpProcessCompletedEject @ 0x140862770 (PnpProcessCompletedEject.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PiClearDeviceObjectList @ 0x1407311FC (PiClearDeviceObjectList.c)
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
