/*
 * XREFs of UsbhEtwRundown @ 0x1C002B2BC
 * Callers:
 *     UsbhEtwEnableCallback @ 0x1C002B290 (UsbhEtwEnableCallback.c)
 * Callees:
 *     UsbhAcquirePdoStateLock @ 0x1C00029B0 (UsbhAcquirePdoStateLock.c)
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     UsbhReleaseFdoPnpLock @ 0x1C001D39C (UsbhReleaseFdoPnpLock.c)
 *     UsbhEtwLogDeviceDescription @ 0x1C001F95C (UsbhEtwLogDeviceDescription.c)
 *     UsbhEtwLogHubInformation @ 0x1C001FA68 (UsbhEtwLogHubInformation.c)
 *     UsbhEtwLogPortInformation @ 0x1C001FB60 (UsbhEtwLogPortInformation.c)
 *     UsbhAcquireFdoPnpLock @ 0x1C0042BD4 (UsbhAcquireFdoPnpLock.c)
 *     UsbhEtwLogDeviceInformation @ 0x1C005CB38 (UsbhEtwLogDeviceInformation.c)
 *     UsbhEtwLogHubPastExceptions @ 0x1C005CE78 (UsbhEtwLogHubPastExceptions.c)
 */

LONG UsbhEtwRundown()
{
  struct _DEVICE_OBJECT *i; // rdi
  void (__fastcall **p_DeferredRoutine)(_KDPC *, void *, void *, void *); // rbx
  __int64 Flink; // rsi
  unsigned int v4; // eax
  _DWORD *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  char *j; // r14
  _DWORD *v9; // rax
  _DWORD *v10; // rax

  KeWaitForSingleObject(&WPP_MAIN_CB.Queue.Wcb.DeviceRoutine, Executive, 0, 0, 0LL);
  for ( i = (struct _DEVICE_OBJECT *)WPP_MAIN_CB.Queue.Wcb.DeviceObject;
        i != (struct _DEVICE_OBJECT *)&WPP_MAIN_CB.Queue.Wcb.DeviceObject;
        i = *(struct _DEVICE_OBJECT **)&i->Type )
  {
    p_DeferredRoutine = &i[-16].Dpc.DeferredRoutine;
    Flink = (__int64)i[-12].Queue.ListEntry.Flink;
    v4 = (unsigned int)FdoExt(Flink);
    if ( (unsigned int)UsbhAcquireFdoPnpLock(Flink, v4 + 1384, 13, 0, 1) == 5 )
    {
      UsbhEtwLogHubInformation((__int64)&i[-16].Dpc.DeferredRoutine);
      UsbhEtwLogHubPastExceptions(&i[-16].Dpc.DeferredRoutine);
      UsbhEtwLogPortInformation(Flink);
      v5 = FdoExt(Flink);
      UsbhAcquirePdoStateLock(v6, (__int64)(v5 + 346), 25);
      for ( j = (char *)p_DeferredRoutine[601]; j != (char *)(p_DeferredRoutine + 601); j = *(char **)j )
      {
        LOBYTE(v7) = 1;
        UsbhEtwLogDeviceInformation(j - 1320, &USBHUB_ETW_EVENT_DEVICE_INFORMATION, v7);
        UsbhEtwLogDeviceDescription((__int64)(j - 1320), &USBHUB_ETW_EVENT_DEVICE_DESCRIPTION);
      }
      v9 = FdoExt(Flink) + 346;
      v9[34] = 0;
      WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
      v9[22] = 1734964085;
      KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, *((_BYTE *)v9 + 132));
    }
    v10 = FdoExt(Flink);
    UsbhReleaseFdoPnpLock(Flink, (__int64)(v10 + 346));
  }
  return KeSetEvent((PRKEVENT)&WPP_MAIN_CB.Queue.Wcb.DeviceRoutine, 0, 0);
}
