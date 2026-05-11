/*
 * XREFs of USBParseGetEndpointDescriptor @ 0x1C002AA90
 * Callers:
 *     USBHwSelectStreamingAudioInterface @ 0x1C0029C54 (USBHwSelectStreamingAudioInterface.c)
 *     USBParseGetTerminalLinkFromPinId @ 0x1C002B1B4 (USBParseGetTerminalLinkFromPinId.c)
 *     USBParseCountFormatsForAudioStreamingInterface @ 0x1C002CA14 (USBParseCountFormatsForAudioStreamingInterface.c)
 *     USBParseConvertInterfaceToDataRange @ 0x1C002CB08 (USBParseConvertInterfaceToDataRange.c)
 *     USBParseGetAudioStreamingDataranges @ 0x1C002CE9C (USBParseGetAudioStreamingDataranges.c)
 * Callees:
 *     USBParseGetNextAudioInterface @ 0x1C002A8EC (USBParseGetNextAudioInterface.c)
 *     USBParseFindDescriptorInConfiguration @ 0x1C002A938 (USBParseFindDescriptorInConfiguration.c)
 */

PUSB_COMMON_DESCRIPTOR __fastcall USBParseGetEndpointDescriptor(
        struct _USB_CONFIGURATION_DESCRIPTOR *a1,
        unsigned __int8 *a2,
        char a3)
{
  PUSB_INTERFACE_DESCRIPTOR NextAudioInterface; // rbp
  PUSB_COMMON_DESCRIPTOR result; // rax

  NextAudioInterface = USBParseGetNextAudioInterface(a1, a2);
  result = USBParseFindDescriptorInConfiguration((unsigned __int16 *)&a1->bLength, (char *)a2, a3 != 0 ? 37 : 5, 7uLL);
  if ( result && NextAudioInterface && result > (PUSB_COMMON_DESCRIPTOR)NextAudioInterface )
    return 0LL;
  return result;
}
