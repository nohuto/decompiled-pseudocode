/*
 * XREFs of UsbhSignalSyncDeviceResetPdo @ 0x1C000CFB4
 * Callers:
 *     UsbhDriverResetPort @ 0x1C0001D70 (UsbhDriverResetPort.c)
 *     Usbh_PCE_psPAUSED_Action @ 0x1C000A370 (Usbh_PCE_psPAUSED_Action.c)
 *     UsbhFreePortChangeQueueObject @ 0x1C000B110 (UsbhFreePortChangeQueueObject.c)
 *     Usbh_PCE_QueueDriverReset_Action @ 0x1C000B77C (Usbh_PCE_QueueDriverReset_Action.c)
 *     UsbhBusConnectPdo @ 0x1C000F090 (UsbhBusConnectPdo.c)
 *     Usbh_PCE_QueueChange_Action @ 0x1C00137C0 (Usbh_PCE_QueueChange_Action.c)
 *     UsbhHubDispatchPortEvent @ 0x1C00164A0 (UsbhHubDispatchPortEvent.c)
 *     UsbhFreePortChangeQueueTimeoutObject @ 0x1C00458A8 (UsbhFreePortChangeQueueTimeoutObject.c)
 *     Usbh_PCE_wChangeERROR_Action @ 0x1C0047EB4 (Usbh_PCE_wChangeERROR_Action.c)
 *     UsbhDeregisterPdo @ 0x1C0048838 (UsbhDeregisterPdo.c)
 *     UsbhSoftDisconnectPdo @ 0x1C0049E24 (UsbhSoftDisconnectPdo.c)
 *     Usbh_BusPause_PdoEvent @ 0x1C004A4AC (Usbh_BusPause_PdoEvent.c)
 *     UsbhFailDriverResetPort @ 0x1C0056F20 (UsbhFailDriverResetPort.c)
 *     UsbhReset1Debounce @ 0x1C0057B80 (UsbhReset1Debounce.c)
 *     UsbhSetEnumerationFailed @ 0x1C0058924 (UsbhSetEnumerationFailed.c)
 *     UsbhResetPortData @ 0x1C005C5C4 (UsbhResetPortData.c)
 * Callees:
 *     PdoExt @ 0x1C0011270 (PdoExt.c)
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     Log @ 0x1C0013360 (Log.c)
 */

void __fastcall UsbhSignalSyncDeviceResetPdo(__int64 a1, __int64 a2, int a3)
{
  int v5; // ebp
  KSPIN_LOCK *v6; // rdi
  KIRQL v7; // si
  __int64 v8; // rax

  v5 = a1;
  v6 = (KSPIN_LOCK *)(FdoExt(a1) + 5168);
  v7 = KeAcquireSpinLockRaiseToDpc(v6);
  if ( a2 && *(_QWORD *)(PdoExt(a2) + 864) )
  {
    *(_DWORD *)(PdoExt(a2) + 872) = a3;
    Log(v5, 4, 1936287557, a2, 0LL);
    v8 = PdoExt(a2);
    KeSetEvent(*(PRKEVENT *)(v8 + 864), 0, 0);
  }
  KeReleaseSpinLock(v6, v7);
}
