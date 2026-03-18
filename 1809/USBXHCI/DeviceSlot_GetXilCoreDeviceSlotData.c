/*
 * XREFs of DeviceSlot_GetXilCoreDeviceSlotData @ 0x1C00131F0
 * Callers:
 *     XilDeviceSlot_Create @ 0x1C001342C (XilDeviceSlot_Create.c)
 *     XilDeviceSlot_SetDeviceContext @ 0x1C0013F38 (XilDeviceSlot_SetDeviceContext.c)
 *     UsbDevice_DisableCompletion @ 0x1C0034D40 (UsbDevice_DisableCompletion.c)
 *     UsbDevice_SetDeviceDisabled @ 0x1C0036E4C (UsbDevice_SetDeviceDisabled.c)
 * Callees:
 *     Debug_FreAssertMsg @ 0x1C0012DEC (Debug_FreAssertMsg.c)
 */

__int64 __fastcall DeviceSlot_GetXilCoreDeviceSlotData(__int64 a1)
{
  __int64 result; // rax

  result = a1 + 16;
  if ( *(_BYTE *)(a1 + 80) )
  {
    Debug_FreAssertMsg(
      (__int64)"Unexpected code path hit",
      0,
      (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\deviceslot.c",
      123);
    return 0LL;
  }
  return result;
}
