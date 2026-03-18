/*
 * XREFs of UsbhFreePortChangeQueueTimeoutObject @ 0x1C00441B8
 * Callers:
 *     UsbhFreePortChangeQueueObject @ 0x1C000AB44 (UsbhFreePortChangeQueueObject.c)
 *     Usbh_PCE_QueueChange_Action @ 0x1C0013140 (Usbh_PCE_QueueChange_Action.c)
 * Callees:
 *     UsbhLogSignalDriverResetEvent @ 0x1C000C098 (UsbhLogSignalDriverResetEvent.c)
 *     UsbhSignalSyncDeviceResetPdo @ 0x1C000C848 (UsbhSignalSyncDeviceResetPdo.c)
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     Log @ 0x1C0012D10 (Log.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040078 (WPP_RECORDER_SF_d.c)
 *     UsbhSetPcqEventStatus @ 0x1C0045628 (UsbhSetPcqEventStatus.c)
 */

void __fastcall UsbhFreePortChangeQueueTimeoutObject(__int64 a1, __int64 a2, void *a3, char a4)
{
  KSPIN_LOCK *v8; // rdi
  KIRQL v9; // al
  KIRQL v10; // bl
  __int64 v11; // rdx
  int v12; // [rsp+28h] [rbp-20h]

  Log(a1, 512, 1718898755, 0LL, *(unsigned __int16 *)(a2 + 4));
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v12 = *(unsigned __int16 *)(a2 + 4);
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x35u,
      (__int64)&WPP_5739628a84103faf3c5119bfd97a7d41_Traceguids,
      v12);
  }
  v8 = (KSPIN_LOCK *)(FdoExt(a1) + 1236);
  v9 = KeAcquireSpinLockRaiseToDpc(v8);
  *(_QWORD *)(a2 + 680) = 0LL;
  *(_DWORD *)(a2 + 696) = 0;
  v10 = v9;
  KeSetEvent((PRKEVENT)(a2 + 768), 0, 0);
  KeReleaseSpinLock(v8, v10);
  v11 = *(_QWORD *)(a2 + 392);
  if ( v11 )
  {
    if ( a4 )
    {
      UsbhSignalSyncDeviceResetPdo(a1, v11, -1073741823);
      if ( (unsigned int)UsbhLogSignalDriverResetEvent(a1, a2) )
        UsbhSetPcqEventStatus(a1, a2, 3LL);
    }
  }
  if ( a3 )
    ExFreePoolWithTag(a3, 0);
}
