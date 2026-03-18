/*
 * XREFs of UnregisterDeviceClassNotifications @ 0x1C00E9D98
 * Callers:
 *     xxxRemoteDisconnect @ 0x1C00E9E60 (xxxRemoteDisconnect.c)
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x1C00EADEC (-InitiateWin32kCleanup@@YAHXZ.c)
 *     xxxRemoteReconnect @ 0x1C01577E0 (xxxRemoteReconnect.c)
 * Callees:
 *     <none>
 */

__int64 UnregisterDeviceClassNotifications()
{
  PDRIVER_CONTROL DeviceRoutine; // rbx
  struct _LIST_ENTRY *Flink; // rbx
  struct _LIST_ENTRY *v2; // rax
  __int64 v3; // rcx
  __int64 result; // rax

  ExEnterCriticalRegionAndAcquireFastMutexUnsafe(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
  DeviceRoutine = WPP_MAIN_CB.Queue.Wcb.DeviceRoutine;
  if ( WPP_MAIN_CB.Queue.Wcb.DeviceRoutine )
  {
    WPP_MAIN_CB.Queue.Wcb.DeviceRoutine = 0LL;
    ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
    IoUnregisterPlugPlayNotification(DeviceRoutine);
    ExEnterCriticalRegionAndAcquireFastMutexUnsafe(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
  }
  while ( 1 )
  {
    Flink = gCDROMNotifyList.Flink;
    if ( gCDROMNotifyList.Flink->Blink != &gCDROMNotifyList
      || (v2 = gCDROMNotifyList.Flink->Flink, gCDROMNotifyList.Flink->Flink->Blink != gCDROMNotifyList.Flink) )
    {
      __fastfail(3u);
    }
    v3 = *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels;
    gCDROMNotifyList.Flink = gCDROMNotifyList.Flink->Flink;
    v2->Blink = &gCDROMNotifyList;
    result = ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(v3);
    if ( Flink == &gCDROMNotifyList )
      break;
    IoUnregisterPlugPlayNotification(Flink[1].Blink);
    Win32FreePool(Flink);
    ExEnterCriticalRegionAndAcquireFastMutexUnsafe(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
  }
  return result;
}
