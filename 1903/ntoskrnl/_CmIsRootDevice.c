/*
 * XREFs of _CmIsRootDevice @ 0x1406F17E4
 * Callers:
 *     _CmGetDeviceParent @ 0x1406F1670 (_CmGetDeviceParent.c)
 *     _CmUpdateDevicePanel @ 0x1406FF59C (_CmUpdateDevicePanel.c)
 *     _CmSetDeviceMappedProperty @ 0x14070181C (_CmSetDeviceMappedProperty.c)
 *     _CmSetDeviceRegPropWorker @ 0x140703D44 (_CmSetDeviceRegPropWorker.c)
 *     PiCMGetRelatedDeviceInstance @ 0x140717AD8 (PiCMGetRelatedDeviceInstance.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x1408641A0 (PiDcResetChildDeviceContainerCallback.c)
 *     PiCMCreateDevice @ 0x140871190 (PiCMCreateDevice.c)
 *     PiCMDeleteDevice @ 0x140871BB4 (PiCMDeleteDevice.c)
 *     PiCMDeviceAction @ 0x140872420 (PiCMDeviceAction.c)
 *     PiCMQueryRemove @ 0x140873214 (PiCMQueryRemove.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140002C70 (RtlInitUnicodeStringEx.c)
 *     RtlEqualUnicodeString @ 0x140653D20 (RtlEqualUnicodeString.c)
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
