/*
 * XREFs of UsbhDisablePort @ 0x1C0048A8C
 * Callers:
 *     UsbhCancelResetTimeout @ 0x1C00113C0 (UsbhCancelResetTimeout.c)
 *     UsbhReset2Complete @ 0x1C0012CC0 (UsbhReset2Complete.c)
 *     UsbhFinishStart @ 0x1C001D540 (UsbhFinishStart.c)
 *     UsbhPortConnect @ 0x1C001FB60 (UsbhPortConnect.c)
 *     UsbhBusPnpStop_Action @ 0x1C0043EC0 (UsbhBusPnpStop_Action.c)
 *     UsbhQueueSoftConnectChange @ 0x1C0046B5C (UsbhQueueSoftConnectChange.c)
 *     Usbh_PdoRemove_PdoEvent @ 0x1C004AE88 (Usbh_PdoRemove_PdoEvent.c)
 *     UsbhDriverNotFoundWorker @ 0x1C0051440 (UsbhDriverNotFoundWorker.c)
 *     UsbhReset1TimeoutBadEnable @ 0x1C0058270 (UsbhReset1TimeoutBadEnable.c)
 *     UsbhReset2TimeoutBadEnable @ 0x1C0058830 (UsbhReset2TimeoutBadEnable.c)
 *     UsbhSetEnumerationFailed @ 0x1C0058924 (UsbhSetEnumerationFailed.c)
 * Callees:
 *     Usb_Disconnected @ 0x1C0004AFC (Usb_Disconnected.c)
 *     UsbhSyncSendCommand @ 0x1C00182D0 (UsbhSyncSendCommand.c)
 *     UsbhException @ 0x1C0055A68 (UsbhException.c)
 */

char __fastcall UsbhDisablePort(__int64 a1, __int64 a2)
{
  int v3; // edi
  int v4; // edx
  char result; // al
  int v6; // edx
  int v7; // [rsp+20h] [rbp-48h]
  int v8; // [rsp+48h] [rbp-20h]
  __int16 v9; // [rsp+78h] [rbp+10h] BYREF
  int v10; // [rsp+80h] [rbp+18h] BYREF
  int v11; // [rsp+88h] [rbp+20h] BYREF
  __int16 v12; // [rsp+8Ch] [rbp+24h]
  __int16 v13; // [rsp+8Eh] [rbp+26h]

  v12 = *(_WORD *)(a2 + 4);
  v10 = 0;
  v9 = 0;
  v11 = 65827;
  v3 = a1;
  v13 = 0;
  v4 = UsbhSyncSendCommand(a1, (__int64)&v11, 0LL, &v9, v7, &v10);
  result = 0;
  if ( (v4 & 0xC0000000) == 0xC0000000 )
  {
    result = Usb_Disconnected(v4);
    if ( !result )
    {
      LOBYTE(v8) = 0;
      return UsbhException(v3, *(unsigned __int16 *)(a2 + 4), 20, 0, 0, v6, v10, usbfile_bus_c, 2257, v8);
    }
  }
  return result;
}
