/*
 * XREFs of USBParseGetFirstStreamingAudioInterface @ 0x1C002A8B4
 * Callers:
 *     USBParseGetTerminalLinkFromPinId @ 0x1C002B1B4 (USBParseGetTerminalLinkFromPinId.c)
 *     USBParseCountFormatsForAudioStreamingInterface @ 0x1C002CA14 (USBParseCountFormatsForAudioStreamingInterface.c)
 *     USBParseGetAudioStreamingDataranges @ 0x1C002CE9C (USBParseGetAudioStreamingDataranges.c)
 *     USBParseGetMIDIStreamingDatarange @ 0x1C002D100 (USBParseGetMIDIStreamingDatarange.c)
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
