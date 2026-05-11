/*
 * XREFs of USBParseGetAudioSpecificInterface @ 0x1C002BD90
 * Callers:
 *     USBDeviceStart @ 0x1C00291B0 (USBDeviceStart.c)
 *     IsSupportedFormat @ 0x1C002BE84 (IsSupportedFormat.c)
 *     USBParseCreateInterfaceList @ 0x1C002C018 (USBParseCreateInterfaceList.c)
 *     USBParseGetTerminalLinkFromPinId @ 0x1C002C548 (USBParseGetTerminalLinkFromPinId.c)
 *     USBParseConvertControlUnits @ 0x1C002DB7C (USBParseConvertControlUnits.c)
 *     USBParseConvertInterfaceToDataRange @ 0x1C002DE98 (USBParseConvertInterfaceToDataRange.c)
 * Callees:
 *     USBParseGetNextAudioInterface @ 0x1C002BC6C (USBParseGetNextAudioInterface.c)
 *     USBParseFindDescriptorInConfiguration @ 0x1C002BCB8 (USBParseFindDescriptorInConfiguration.c)
 */

PUSB_COMMON_DESCRIPTOR __fastcall USBParseGetAudioSpecificInterface(
        struct _USB_CONFIGURATION_DESCRIPTOR *a1,
        unsigned __int8 *a2,
        __int64 a3,
        unsigned __int64 a4)
{
  PUSB_INTERFACE_DESCRIPTOR NextAudioInterface; // rdi
  char *i; // rdx
  PUSB_COMMON_DESCRIPTOR result; // rax

  NextAudioInterface = USBParseGetNextAudioInterface(a1, a2);
  for ( i = (char *)&a2[*a2]; ; i = (char *)(&result->bLength + result->bLength) )
  {
    result = USBParseFindDescriptorInConfiguration((unsigned __int16 *)&a1->bLength, i, 36, a4);
    if ( !result || NextAudioInterface && result > (PUSB_COMMON_DESCRIPTOR)NextAudioInterface )
      break;
    if ( result->bLength < 3u )
      break;
    if ( result[1].bLength == 1 )
      return result;
  }
  return 0LL;
}
