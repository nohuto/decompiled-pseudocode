/*
 * XREFs of __security_check_cookie @ 0x1C0010C20
 * Callers:
 *     McTemplateK0 @ 0x1C0001AA0 (McTemplateK0.c)
 *     McTemplateK0q @ 0x1C0001AE0 (McTemplateK0q.c)
 *     McTemplateK0zq @ 0x1C0001B44 (McTemplateK0zq.c)
 *     WmiLogEvent @ 0x1C00024A0 (WmiLogEvent.c)
 *     WmiLogStreamPosition @ 0x1C00025BC (WmiLogStreamPosition.c)
 *     USBD_CreateHandle @ 0x1C0010034 (USBD_CreateHandle.c)
 *     USBD_QueryUsbCapability @ 0x1C0010908 (USBD_QueryUsbCapability.c)
 *     __GSHandlerCheckCommon @ 0x1C0010C9C (__GSHandlerCheckCommon.c)
 *     _handle_error @ 0x1C0011178 (_handle_error.c)
 *     RaiseException @ 0x1C00113C0 (RaiseException.c)
 *     PinMatchChannelConfigToFormat @ 0x1C00219E4 (PinMatchChannelConfigToFormat.c)
 *     PinCreate @ 0x1C0021E20 (PinCreate.c)
 *     PropertyGetAudioPosition @ 0x1C00257F0 (PropertyGetAudioPosition.c)
 *     PropertyDrmAudioStream_SetContentId @ 0x1C00260A0 (PropertyDrmAudioStream_SetContentId.c)
 *     RegistryReadNameValue @ 0x1C0027E48 (RegistryReadNameValue.c)
 *     USBDeviceStart @ 0x1C00291B0 (USBDeviceStart.c)
 *     USBParseGetMicArrayDescriptor @ 0x1C002C14C (USBParseGetMicArrayDescriptor.c)
 * Callees:
 *     <none>
 */

void __cdecl _security_check_cookie(uintptr_t StackCookie)
{
  __int64 v1; // rcx

  if ( StackCookie != _security_cookie )
ReportFailure:
    _report_gsfailure(StackCookie);
  v1 = __ROL8__(StackCookie, 16);
  if ( (_WORD)v1 )
  {
    StackCookie = __ROR8__(v1, 16);
    goto ReportFailure;
  }
}
