/*
 * XREFs of UsbhSignalSyncDeviceResetPdo @ 0x1C000C848
 * Callers:
 *     UsbhDriverResetPort @ 0x1C0001CB0 (UsbhDriverResetPort.c)
 *     Usbh_PCE_psPAUSED_Action @ 0x1C0009E00 (Usbh_PCE_psPAUSED_Action.c)
 *     UsbhFreePortChangeQueueObject @ 0x1C000AB44 (UsbhFreePortChangeQueueObject.c)
 *     Usbh_PCE_QueueDriverReset_Action @ 0x1C000B18C (Usbh_PCE_QueueDriverReset_Action.c)
 *     UsbhBusConnectPdo @ 0x1C000EBD0 (UsbhBusConnectPdo.c)
 *     Usbh_PCE_QueueChange_Action @ 0x1C0013140 (Usbh_PCE_QueueChange_Action.c)
 *     UsbhHubDispatchPortEvent @ 0x1C0015D90 (UsbhHubDispatchPortEvent.c)
 *     UsbhFreePortChangeQueueTimeoutObject @ 0x1C00441B8 (UsbhFreePortChangeQueueTimeoutObject.c)
 *     Usbh_PCE_wChangeERROR_Action @ 0x1C004663C (Usbh_PCE_wChangeERROR_Action.c)
 *     UsbhDeregisterPdo @ 0x1C0046F90 (UsbhDeregisterPdo.c)
 *     UsbhSoftDisconnectPdo @ 0x1C00484C0 (UsbhSoftDisconnectPdo.c)
 *     Usbh_BusPause_PdoEvent @ 0x1C0048B04 (Usbh_BusPause_PdoEvent.c)
 *     UsbhFailDriverResetPort @ 0x1C0054D20 (UsbhFailDriverResetPort.c)
 *     UsbhReset1Debounce @ 0x1C00558D0 (UsbhReset1Debounce.c)
 *     UsbhSetEnumerationFailed @ 0x1C0056594 (UsbhSetEnumerationFailed.c)
 *     UsbhResetPortData @ 0x1C005A1EC (UsbhResetPortData.c)
 * Callees:
 *     PdoExt @ 0x1C0010C40 (PdoExt.c)
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     Log @ 0x1C0012D10 (Log.c)
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
