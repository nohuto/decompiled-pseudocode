/*
 * XREFs of WmipEnterSMCritSection @ 0x14032BB58
 * Callers:
 *     WmipReceiveNotifications @ 0x140137B90 (WmipReceiveNotifications.c)
 *     WmipOpenBlock @ 0x1405C0778 (WmipOpenBlock.c)
 *     IoWMIRegistrationControl @ 0x140714870 (IoWMIRegistrationControl.c)
 *     WmipRegistrationWorker @ 0x140718C70 (WmipRegistrationWorker.c)
 *     WmipDeregisterDevice @ 0x140732468 (WmipDeregisterDevice.c)
 *     WmipEnableCollectionForNewGuid @ 0x140732EF4 (WmipEnableCollectionForNewGuid.c)
 *     WmipDisableCollectionForRemovedGuid @ 0x1407334D8 (WmipDisableCollectionForRemovedGuid.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 */

NTSTATUS WmipEnterSMCritSection()
{
  return KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
}
