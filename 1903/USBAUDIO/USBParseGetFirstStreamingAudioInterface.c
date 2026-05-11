/*
 * XREFs of USBParseGetFirstStreamingAudioInterface @ 0x1C002BC14
 * Callers:
 *     USBParseGetTerminalLinkFromPinId @ 0x1C002C528 (USBParseGetTerminalLinkFromPinId.c)
 *     USBParseCountFormatsForAudioStreamingInterface @ 0x1C002DD84 (USBParseCountFormatsForAudioStreamingInterface.c)
 *     USBParseGetAudioStreamingDataranges @ 0x1C002E20C (USBParseGetAudioStreamingDataranges.c)
 *     USBParseGetMIDIStreamingDatarange @ 0x1C002E48C (USBParseGetMIDIStreamingDatarange.c)
 * Callees:
 *     <none>
 */

PUSB_INTERFACE_DESCRIPTOR __fastcall USBParseGetFirstStreamingAudioInterface(
        struct _USB_CONFIGURATION_DESCRIPTOR *StartPosition,
        LONG InterfaceNumber,
        LONG InterfaceSubClass)
{
  return USBD_ParseConfigurationDescriptorEx(
           StartPosition,
           StartPosition,
           InterfaceNumber,
           -1,
           1,
           InterfaceSubClass,
           -1);
}
