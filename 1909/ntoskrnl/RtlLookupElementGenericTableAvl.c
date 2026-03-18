/*
 * XREFs of RtlLookupElementGenericTableAvl @ 0x1400028D0
 * Callers:
 *     PiDmLookupObject @ 0x1405BEFB0 (PiDmLookupObject.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x140670048 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PopHandleConvergedPowerRequestUpdate @ 0x140671960 (PopHandleConvergedPowerRequestUpdate.c)
 *     PopPowerRequestDeleteEntryById @ 0x1406721D0 (PopPowerRequestDeleteEntryById.c)
 *     PopPowerRequestFindEntryById @ 0x140673140 (PopPowerRequestFindEntryById.c)
 *     PopNotifySessionUserPowerRequestCreated @ 0x1406B3D08 (PopNotifySessionUserPowerRequestCreated.c)
 *     PopAvlFindOrMakeStatsForPowerRequest @ 0x1406B409C (PopAvlFindOrMakeStatsForPowerRequest.c)
 *     PiPnpRtlObjectEventWorker @ 0x1406FBDA0 (PiPnpRtlObjectEventWorker.c)
 *     PiSwFindBusRelations @ 0x1407007C4 (PiSwFindBusRelations.c)
 *     PiUpdateDriverDBCache @ 0x14070BF80 (PiUpdateDriverDBCache.c)
 *     PiLookupInDDBCache @ 0x14070F300 (PiLookupInDDBCache.c)
 *     PiDqQueryApplyObjectEvent @ 0x1407157F4 (PiDqQueryApplyObjectEvent.c)
 *     PopAvlFindOrMakeStatsForAudio @ 0x1407201E8 (PopAvlFindOrMakeStatsForAudio.c)
 *     PiDcHandleDeviceEvent @ 0x1407255E0 (PiDcHandleDeviceEvent.c)
 *     PiSwFindSwDevice @ 0x1407330E4 (PiSwFindSwDevice.c)
 *     IopCleanupFileObjectIosbRange @ 0x140853224 (IopCleanupFileObjectIosbRange.c)
 *     PopDirectedDripsUmMarkTestDevices @ 0x1408B8698 (PopDirectedDripsUmMarkTestDevices.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 */

PVOID __stdcall RtlLookupElementGenericTableAvl(PRTL_AVL_TABLE Table, PVOID Buffer)
{
  void *v2; // rsi
  _RTL_BALANCED_LINKS *i; // rbx
  _RTL_GENERIC_COMPARE_RESULTS v6; // eax
  int v7; // eax
  _RTL_BALANCED_LINKS *v8; // rbx
  _RTL_BALANCED_LINKS *v10; // [rsp+30h] [rbp+8h]

  v2 = 0LL;
  if ( Table->NumberGenericTableElements )
  {
    for ( i = Table->BalancedRoot.RightChild; ; i = i->RightChild )
    {
      while ( 1 )
      {
        v6 = Table->CompareRoutine(Table, Buffer, &i[1]);
        if ( v6 )
          break;
        if ( !i->LeftChild )
        {
          v7 = 2;
          goto LABEL_10;
        }
        i = i->LeftChild;
      }
      if ( v6 != GenericGreaterThan )
      {
        v7 = 1;
        goto LABEL_10;
      }
      if ( !i->RightChild )
        break;
    }
    v7 = 3;
  }
  else
  {
    i = v10;
    v7 = 0;
  }
LABEL_10:
  v8 = i + 1;
  if ( v7 == 1 )
    return v8;
  return v2;
}
