/*
 * XREFs of __security_check_cookie @ 0x1C000F7E0
 * Callers:
 *     McTemplateK0 @ 0x1C0001AA0 (McTemplateK0.c)
 *     McTemplateK0q @ 0x1C0001AE0 (McTemplateK0q.c)
 *     McTemplateK0zq @ 0x1C0001B44 (McTemplateK0zq.c)
 *     EvaluateCurrentStateFromRegistry @ 0x1C0001BE0 (EvaluateCurrentStateFromRegistry.c)
 *     WmiLogEvent @ 0x1C0002640 (WmiLogEvent.c)
 *     WmiLogStreamPosition @ 0x1C0002764 (WmiLogStreamPosition.c)
 *     USBD_CreateHandle @ 0x1C000EBF8 (USBD_CreateHandle.c)
 *     USBD_QueryUsbCapability @ 0x1C000F4C4 (USBD_QueryUsbCapability.c)
 *     __GSHandlerCheckCommon @ 0x1C000F85C (__GSHandlerCheckCommon.c)
 *     _handle_error @ 0x1C000FD34 (_handle_error.c)
 *     RaiseException @ 0x1C000FF80 (RaiseException.c)
 *     PinMatchChannelConfigToFormat @ 0x1C0020884 (PinMatchChannelConfigToFormat.c)
 *     PinCreate @ 0x1C0020C80 (PinCreate.c)
 *     PropertyGetAudioPosition @ 0x1C0024650 (PropertyGetAudioPosition.c)
 *     PropertyDrmAudioStream_SetContentId @ 0x1C0024ED0 (PropertyDrmAudioStream_SetContentId.c)
 *     RegistryReadNameValue @ 0x1C0026D28 (RegistryReadNameValue.c)
 *     USBDeviceStart @ 0x1C0028000 (USBDeviceStart.c)
 *     USBParseGetMicArrayDescriptor @ 0x1C002ADCC (USBParseGetMicArrayDescriptor.c)
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
