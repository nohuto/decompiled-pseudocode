/*
 * XREFs of _CmIsRootDevice @ 0x1406F3284
 * Callers:
 *     _CmGetDeviceParent @ 0x1406F3110 (_CmGetDeviceParent.c)
 *     _CmUpdateDevicePanel @ 0x14070137C (_CmUpdateDevicePanel.c)
 *     _CmSetDeviceMappedProperty @ 0x1407035FC (_CmSetDeviceMappedProperty.c)
 *     _CmSetDeviceRegPropWorker @ 0x140705B24 (_CmSetDeviceRegPropWorker.c)
 *     PiCMGetRelatedDeviceInstance @ 0x1407198C8 (PiCMGetRelatedDeviceInstance.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x1408638A0 (PiDcResetChildDeviceContainerCallback.c)
 *     PiCMCreateDevice @ 0x140870890 (PiCMCreateDevice.c)
 *     PiCMDeleteDevice @ 0x1408712B4 (PiCMDeleteDevice.c)
 *     PiCMDeviceAction @ 0x140871B20 (PiCMDeviceAction.c)
 *     PiCMQueryRemove @ 0x140872914 (PiCMQueryRemove.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140002C70 (RtlInitUnicodeStringEx.c)
 *     RtlEqualUnicodeString @ 0x140666E20 (RtlEqualUnicodeString.c)
 */

BOOLEAN __fastcall CmIsRootDevice(PCWSTR SourceString)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  if ( RtlInitUnicodeStringEx(&DestinationString, SourceString) < 0 )
    return 0;
  else
    return RtlEqualUnicodeString(&DestinationString, &stru_140370760, 1u);
}
