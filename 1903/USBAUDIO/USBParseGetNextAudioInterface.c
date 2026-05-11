/*
 * XREFs of USBParseGetNextAudioInterface @ 0x1C002BC4C
 * Callers:
 *     USBParseGetAudioSpecificInterface @ 0x1C002BD70 (USBParseGetAudioSpecificInterface.c)
 *     USBParseGetEndpointDescriptor @ 0x1C002BDF0 (USBParseGetEndpointDescriptor.c)
 *     USBParseGetTerminalLinkFromPinId @ 0x1C002C528 (USBParseGetTerminalLinkFromPinId.c)
 *     USBParseCountFormatsForAudioStreamingInterface @ 0x1C002DD84 (USBParseCountFormatsForAudioStreamingInterface.c)
 *     USBParseConvertInterfaceToDataRange @ 0x1C002DE78 (USBParseConvertInterfaceToDataRange.c)
 *     USBParseGetAudioStreamingDataranges @ 0x1C002E20C (USBParseGetAudioStreamingDataranges.c)
 * Callees:
 *     <none>
 */

PUSB_INTERFACE_DESCRIPTOR __fastcall USBParseGetNextAudioInterface(
        struct _USB_CONFIGURATION_DESCRIPTOR *a1,
        unsigned __int8 *a2)
{
  if ( a2 )
    return USBD_ParseConfigurationDescriptorEx(a1, &a2[*a2], a2[2], -1, 1, a2[6], -1);
  return (PUSB_INTERFACE_DESCRIPTOR)a2;
}
