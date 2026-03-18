/*
 * XREFs of RtlDeleteElementGenericTableAvl @ 0x140001CA0
 * Callers:
 *     VfAvlDeleteTreeNode @ 0x14017E808 (VfAvlDeleteTreeNode.c)
 *     PiDqQueryDeleteObjectFromResultSet @ 0x1405B58C4 (PiDqQueryDeleteObjectFromResultSet.c)
 *     PiPnpRtlEndOperation @ 0x1405BB544 (PiPnpRtlEndOperation.c)
 *     PopAvlDeleteStatsForPowerRequest @ 0x14069E29C (PopAvlDeleteStatsForPowerRequest.c)
 *     PopCreatePowerRequestObject @ 0x14069F1D4 (PopCreatePowerRequestObject.c)
 *     PopAvlFindOrMakeStatsForPowerRequest @ 0x14069F35C (PopAvlFindOrMakeStatsForPowerRequest.c)
 *     PopPowerRequestDeleteEntryById @ 0x14069FC64 (PopPowerRequestDeleteEntryById.c)
 *     PiPnpRtlObjectEventWorker @ 0x1406F9FC0 (PiPnpRtlObjectEventWorker.c)
 *     PiUpdateDriverDBCache @ 0x14070A1A0 (PiUpdateDriverDBCache.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x140714F18 (PiDmRemoveCacheReferenceForObject.c)
 *     PopAvlFindOrMakeStatsForAudio @ 0x14071E358 (PopAvlFindOrMakeStatsForAudio.c)
 *     PiSwIrpStartCreateWorker @ 0x14071EF0C (PiSwIrpStartCreateWorker.c)
 *     PnpCleanupDeviceRegistryValues @ 0x14073042C (PnpCleanupDeviceRegistryValues.c)
 *     PiSwCloseDevice @ 0x14074D4CC (PiSwCloseDevice.c)
 *     PiDmObjectManagerPopulate @ 0x140756CE0 (PiDmObjectManagerPopulate.c)
 *     EtwpFreeKeyNameList @ 0x14076E67C (EtwpFreeKeyNameList.c)
 *     PiSwProcessRemove @ 0x14078083C (PiSwProcessRemove.c)
 *     PiSwBusRelationRemove @ 0x14078096C (PiSwBusRelationRemove.c)
 *     IopCleanupFileObjectIosbRange @ 0x140853B24 (IopCleanupFileObjectIosbRange.c)
 *     IopSetFileObjectIosbRange @ 0x140854FE4 (IopSetFileObjectIosbRange.c)
 *     PiDmListRemoveObjectWorker @ 0x140863F04 (PiDmListRemoveObjectWorker.c)
 *     PopDirectedDripsUmDirectedFxRemoveTestDevice @ 0x1408B8CAC (PopDirectedDripsUmDirectedFxRemoveTestDevice.c)
 * Callees:
 *     DeleteNodeFromTree @ 0x140001D50 (DeleteNodeFromTree.c)
 *     RealPredecessor @ 0x1401359D0 (RealPredecessor.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 */

BOOLEAN __stdcall RtlDeleteElementGenericTableAvl(PRTL_AVL_TABLE Table, PVOID Buffer)
{
  _RTL_BALANCED_LINKS *RightChild; // rbx
  _RTL_GENERIC_COMPARE_RESULTS v5; // eax

  if ( !Table->NumberGenericTableElements )
    return 0;
  RightChild = Table->BalancedRoot.RightChild;
  while ( 1 )
  {
    v5 = Table->CompareRoutine(Table, Buffer, &RightChild[1]);
    if ( v5 == GenericLessThan )
    {
      RightChild = RightChild->LeftChild;
      goto LABEL_7;
    }
    if ( v5 != GenericGreaterThan )
      break;
    RightChild = RightChild->RightChild;
LABEL_7:
    if ( !RightChild )
      return 0;
  }
  if ( RightChild == Table->RestartKey )
    Table->RestartKey = (_RTL_BALANCED_LINKS *)RealPredecessor(RightChild);
  ++Table->DeleteCount;
  DeleteNodeFromTree(Table, RightChild);
  --Table->NumberGenericTableElements;
  Table->WhichOrderedElement = 0;
  Table->OrderedPointer = 0LL;
  Table->FreeRoutine(Table, RightChild);
  return 1;
}
