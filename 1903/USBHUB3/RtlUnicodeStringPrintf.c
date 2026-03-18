/*
 * XREFs of RtlUnicodeStringPrintf @ 0x1C000B2B8
 * Callers:
 *     HUBID_BuildDeviceID @ 0x1C001AA1C (HUBID_BuildDeviceID.c)
 *     HUBID_BuildHardwareID @ 0x1C001AC34 (HUBID_BuildHardwareID.c)
 *     HUBID_BuildClassCompatibleID @ 0x1C001B0A4 (HUBID_BuildClassCompatibleID.c)
 *     HUBID_BuildContainerID @ 0x1C001B504 (HUBID_BuildContainerID.c)
 *     HUBFDO_RegisterSleepstudyBlockerReason @ 0x1C0074970 (HUBFDO_RegisterSleepstudyBlockerReason.c)
 *     HUBPDO_MakePdoName @ 0x1C00760C0 (HUBPDO_MakePdoName.c)
 *     HUBREG_OpenCreateUsbflagsDeviceKey @ 0x1C0079C4C (HUBREG_OpenCreateUsbflagsDeviceKey.c)
 *     HUBREG_QueryUsbHardwareVerifierValue @ 0x1C007A028 (HUBREG_QueryUsbHardwareVerifierValue.c)
 *     HUBREG_QueryUsbflagsValuesForDevice @ 0x1C007A778 (HUBREG_QueryUsbflagsValuesForDevice.c)
 *     HUBREG_QueryUxdPortKey @ 0x1C007D08C (HUBREG_QueryUxdPortKey.c)
 *     HUBREG_QueryUxdDeviceKey @ 0x1C007D314 (HUBREG_QueryUxdDeviceKey.c)
 *     HUBREG_DeleteUxdDeviceKey @ 0x1C007D490 (HUBREG_DeleteUxdDeviceKey.c)
 *     HUBREG_DeleteUxdPortKey @ 0x1C007D918 (HUBREG_DeleteUxdPortKey.c)
 *     FWUPDATE_AddIdsForFirmwareUpdateDevice @ 0x1C0081E80 (FWUPDATE_AddIdsForFirmwareUpdateDevice.c)
 *     FWUPDATE_CreateFirmwareUpdateDevice @ 0x1C00821AC (FWUPDATE_CreateFirmwareUpdateDevice.c)
 * Callees:
 *     <none>
 */

NTSTATUS RtlUnicodeStringPrintf(PUNICODE_STRING DestinationString, NTSTRSAFE_PCWSTR pszFormat, ...)
{
  unsigned __int16 Length; // cx
  wchar_t *Buffer; // r10
  size_t v5; // rdi
  NTSTATUS v6; // ebx
  unsigned __int16 MaximumLength; // ax
  int v8; // eax
  va_list Args; // [rsp+60h] [rbp+18h] BYREF

  va_start(Args, pszFormat);
  Length = DestinationString->Length;
  Buffer = 0LL;
  v5 = 0LL;
  v6 = 0;
  if ( (Length & 1) != 0 )
    return -1073741811;
  MaximumLength = DestinationString->MaximumLength;
  if ( (MaximumLength & 1) != 0 || Length > MaximumLength || MaximumLength == 0xFFFF )
    return -1073741811;
  if ( !DestinationString->Buffer && (Length || MaximumLength) )
  {
    v6 = -1073741811;
  }
  else
  {
    Buffer = DestinationString->Buffer;
    v5 = (unsigned __int64)MaximumLength >> 1;
  }
  if ( v6 >= 0 )
  {
    v6 = 0;
    v8 = _vsnwprintf(Buffer, v5, pszFormat, Args);
    if ( v8 < 0 || v8 > v5 )
    {
      LOWORD(v8) = v5;
      v6 = -2147483643;
    }
    DestinationString->Length = 2 * v8;
  }
  return v6;
}
