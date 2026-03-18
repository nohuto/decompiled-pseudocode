/*
 * XREFs of RtlLookupElementGenericTableAvl @ 0x1400028D0
 * Callers:
 *     PiDmLookupObject @ 0x1405BEAE0 (PiDmLookupObject.c)
 *     PopNotifySessionUserPowerRequestCreated @ 0x14069DE44 (PopNotifySessionUserPowerRequestCreated.c)
 *     PopAvlFindOrMakeStatsForPowerRequest @ 0x14069F35C (PopAvlFindOrMakeStatsForPowerRequest.c)
 *     PopPowerRequestFindEntryById @ 0x14069FA34 (PopPowerRequestFindEntryById.c)
 *     PopPowerRequestDeleteEntryById @ 0x14069FC64 (PopPowerRequestDeleteEntryById.c)
 *     PopHandleConvergedPowerRequestUpdate @ 0x1406A057C (PopHandleConvergedPowerRequestUpdate.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x1406A2B68 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PiPnpRtlObjectEventWorker @ 0x1406F9FC0 (PiPnpRtlObjectEventWorker.c)
 *     PiSwFindBusRelations @ 0x1406FE9E4 (PiSwFindBusRelations.c)
 *     PiUpdateDriverDBCache @ 0x14070A1A0 (PiUpdateDriverDBCache.c)
 *     PiLookupInDDBCache @ 0x14070D520 (PiLookupInDDBCache.c)
 *     PiDqQueryApplyObjectEvent @ 0x140713A14 (PiDqQueryApplyObjectEvent.c)
 *     PopAvlFindOrMakeStatsForAudio @ 0x14071E358 (PopAvlFindOrMakeStatsForAudio.c)
 *     PiDcHandleDeviceEvent @ 0x140723740 (PiDcHandleDeviceEvent.c)
 *     PiSwFindSwDevice @ 0x140730E84 (PiSwFindSwDevice.c)
 *     IopCleanupFileObjectIosbRange @ 0x140853B24 (IopCleanupFileObjectIosbRange.c)
 *     PopDirectedDripsUmMarkTestDevices @ 0x1408B8DC8 (PopDirectedDripsUmMarkTestDevices.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
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
