/*
 * XREFs of UsbhFdoWaitWake_IoCompletion @ 0x1C000C200
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     Log @ 0x1C0012D10 (Log.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C001B740 (UsbhEtwLogHubIrpEvent.c)
 *     WPP_RECORDER_SF_ @ 0x1C003FFA4 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall UsbhFdoWaitWake_IoCompletion(PDEVICE_OBJECT DeviceObject, PIRP Irp, PVOID Context)
{
  __int64 v5; // rbx
  unsigned int v6; // edi

  Log((_DWORD)DeviceObject, 16, 1717000041, 0, (__int64)Irp);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      12,
      (__int64)&WPP_d7f5712d72fd3bbd6a7d18dfcf7fb5d1_Traceguids);
  v5 = FdoExt(DeviceObject);
  if ( _InterlockedExchange((volatile __int32 *)(v5 + 4884), 7) == 4 )
  {
    v6 = 0;
    *(_DWORD *)(v5 + 2560) = (PoGetSystemWake(Irp) != 0 ? 0x4000000 : 0) | *(_DWORD *)(v5 + 2560) & 0xFBFFFFFF;
  }
  else
  {
    v6 = -1073741802;
  }
  UsbhEtwLogHubIrpEvent(DeviceObject, Irp, 0LL, &USBHUB_ETW_EVENT_HUB_WAIT_WAKE_COMPLETE, 0, v6);
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v5 + 1224), Irp, 0x20u);
  return v6;
}
