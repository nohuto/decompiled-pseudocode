/*
 * XREFs of RtlDeleteElementGenericTableAvl @ 0x140001CA0
 * Callers:
 *     VfAvlDeleteTreeNode @ 0x14017EEF8 (VfAvlDeleteTreeNode.c)
 *     PiDqQueryDeleteObjectFromResultSet @ 0x1405B5CA4 (PiDqQueryDeleteObjectFromResultSet.c)
 *     PiPnpRtlEndOperation @ 0x1405BB924 (PiPnpRtlEndOperation.c)
 *     PopPowerRequestDeleteEntryById @ 0x1406721D0 (PopPowerRequestDeleteEntryById.c)
 *     PopCreatePowerRequestObject @ 0x1406B3EBC (PopCreatePowerRequestObject.c)
 *     PopAvlFindOrMakeStatsForPowerRequest @ 0x1406B409C (PopAvlFindOrMakeStatsForPowerRequest.c)
 *     PopAvlDeleteStatsForPowerRequest @ 0x1406E158C (PopAvlDeleteStatsForPowerRequest.c)
 *     PiPnpRtlObjectEventWorker @ 0x1406FBDA0 (PiPnpRtlObjectEventWorker.c)
 *     PiUpdateDriverDBCache @ 0x14070BF80 (PiUpdateDriverDBCache.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x1407171D8 (PiDmRemoveCacheReferenceForObject.c)
 *     PopAvlFindOrMakeStatsForAudio @ 0x1407201E8 (PopAvlFindOrMakeStatsForAudio.c)
 *     PiSwIrpStartCreateWorker @ 0x140720DAC (PiSwIrpStartCreateWorker.c)
 *     PnpCleanupDeviceRegistryValues @ 0x14073268C (PnpCleanupDeviceRegistryValues.c)
 *     PiSwCloseDevice @ 0x14074DF5C (PiSwCloseDevice.c)
 *     PiDmObjectManagerPopulate @ 0x140757770 (PiDmObjectManagerPopulate.c)
 *     EtwpFreeKeyNameList @ 0x1407714D0 (EtwpFreeKeyNameList.c)
 *     PiSwProcessRemove @ 0x140782BA4 (PiSwProcessRemove.c)
 *     PiSwBusRelationRemove @ 0x140782CD4 (PiSwBusRelationRemove.c)
 *     IopCleanupFileObjectIosbRange @ 0x140853224 (IopCleanupFileObjectIosbRange.c)
 *     IopSetFileObjectIosbRange @ 0x1408546E4 (IopSetFileObjectIosbRange.c)
 *     PiDmListRemoveObjectWorker @ 0x140863604 (PiDmListRemoveObjectWorker.c)
 *     PopDirectedDripsUmDirectedFxRemoveTestDevice @ 0x1408B857C (PopDirectedDripsUmDirectedFxRemoveTestDevice.c)
 * Callees:
 *     DeleteNodeFromTree @ 0x140001D50 (DeleteNodeFromTree.c)
 *     RealPredecessor @ 0x140136390 (RealPredecessor.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
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
