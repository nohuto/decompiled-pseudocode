/*
 * XREFs of _CmIsRootDevice @ 0x1406E978C
 * Callers:
 *     _CmSetDeviceRegPropWorker @ 0x1406E2B88 (_CmSetDeviceRegPropWorker.c)
 *     _CmUpdateDevicePanel @ 0x1406E85D8 (_CmUpdateDevicePanel.c)
 *     PiCMGetRelatedDeviceInstance @ 0x1406E91A4 (PiCMGetRelatedDeviceInstance.c)
 *     _CmSetDeviceMappedProperty @ 0x1406E9434 (_CmSetDeviceMappedProperty.c)
 *     _CmGetDeviceParent @ 0x1406E9624 (_CmGetDeviceParent.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x140829A40 (PiDcResetChildDeviceContainerCallback.c)
 *     PiCMCreateDevice @ 0x1408367B4 (PiCMCreateDevice.c)
 *     PiCMDeleteDevice @ 0x140837188 (PiCMDeleteDevice.c)
 *     PiCMDeviceAction @ 0x140837978 (PiCMDeviceAction.c)
 *     PiCMQueryRemove @ 0x140838634 (PiCMQueryRemove.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140015EB0 (RtlInitUnicodeStringEx.c)
 *     RtlEqualUnicodeString @ 0x140625D40 (RtlEqualUnicodeString.c)
 */

BOOLEAN __fastcall CmIsRootDevice(PCWSTR SourceString)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  if ( RtlInitUnicodeStringEx(&DestinationString, SourceString) < 0 )
    return 0;
  else
    return RtlEqualUnicodeString(&DestinationString, &String2, 1u);
}
