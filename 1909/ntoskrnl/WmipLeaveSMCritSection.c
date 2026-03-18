/*
 * XREFs of WmipLeaveSMCritSection @ 0x14032B5D4
 * Callers:
 *     WmipReceiveNotifications @ 0x1401381D8 (WmipReceiveNotifications.c)
 *     WmipOpenBlock @ 0x1405C0C48 (WmipOpenBlock.c)
 *     IoWMIRegistrationControl @ 0x140716650 (IoWMIRegistrationControl.c)
 *     WmipRegistrationWorker @ 0x14071AA60 (WmipRegistrationWorker.c)
 *     WmipDeregisterDevice @ 0x1407346C8 (WmipDeregisterDevice.c)
 *     WmipEnableCollectionForNewGuid @ 0x140735154 (WmipEnableCollectionForNewGuid.c)
 *     WmipDisableCollectionForRemovedGuid @ 0x140735738 (WmipDisableCollectionForRemovedGuid.c)
 * Callees:
 *     KeReleaseMutex @ 0x14006BC60 (KeReleaseMutex.c)
 */

LONG WmipLeaveSMCritSection()
{
  return KeReleaseMutex(&WmipSMMutex, 0);
}
