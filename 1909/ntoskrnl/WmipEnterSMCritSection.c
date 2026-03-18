/*
 * XREFs of WmipEnterSMCritSection @ 0x14032B5A8
 * Callers:
 *     WmipReceiveNotifications @ 0x1401381D8 (WmipReceiveNotifications.c)
 *     WmipOpenBlock @ 0x1405C0C48 (WmipOpenBlock.c)
 *     IoWMIRegistrationControl @ 0x140716650 (IoWMIRegistrationControl.c)
 *     WmipRegistrationWorker @ 0x14071AA60 (WmipRegistrationWorker.c)
 *     WmipDeregisterDevice @ 0x1407346C8 (WmipDeregisterDevice.c)
 *     WmipEnableCollectionForNewGuid @ 0x140735154 (WmipEnableCollectionForNewGuid.c)
 *     WmipDisableCollectionForRemovedGuid @ 0x140735738 (WmipDisableCollectionForRemovedGuid.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 */

NTSTATUS WmipEnterSMCritSection()
{
  return KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
}
