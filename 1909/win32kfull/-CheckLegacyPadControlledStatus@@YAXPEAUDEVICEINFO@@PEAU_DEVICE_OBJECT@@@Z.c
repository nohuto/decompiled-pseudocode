/*
 * XREFs of ?CheckLegacyPadControlledStatus@@YAXPEAUDEVICEINFO@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C0165688
 * Callers:
 *     IsLegacyTouchPadDevice @ 0x1C01054A0 (IsLegacyTouchPadDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     ?GetMouseDeviceHardwareId@@YAJPEAUDEVICEINFO@@PEAU_DEVICE_OBJECT@@PEAU_UNICODE_STRING@@@Z @ 0x1C0165850 (-GetMouseDeviceHardwareId@@YAJPEAUDEVICEINFO@@PEAU_DEVICE_OBJECT@@PEAU_UNICODE_STRING@@@Z.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

void __fastcall CheckLegacyPadControlledStatus(struct DEVICEINFO *a1, struct _DEVICE_OBJECT *a2)
{
  __int64 v4; // rbx
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  void *KeyHandle; // [rsp+38h] [rbp-C8h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+40h] [rbp-C0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  char v10; // [rsp+90h] [rbp-70h] BYREF

  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  *(_QWORD *)&ValueName.Length = 13107200LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  ResultLength = 0;
  ValueName.Buffer = (PWSTR)&v10;
  if ( GetMouseDeviceHardwareId(a1, a2, &ValueName) >= 0 )
  {
    RtlInitUnicodeString(
      &DestinationString,
      L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\PrecisionTouchPad\\LegacyControlled");
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
    {
      if ( ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, 0LL, 0, &ResultLength) != -1073741772 )
      {
        if ( ResultLength )
        {
          v4 = Win32AllocPool(ResultLength, 2019914581LL);
          if ( v4 )
          {
            if ( ZwQueryValueKey(
                   KeyHandle,
                   &ValueName,
                   KeyValuePartialInformation,
                   (PVOID)v4,
                   ResultLength,
                   &ResultLength) >= 0
              && *(_DWORD *)(v4 + 4) == 4
              && (*(_BYTE *)(v4 + 12) & 1) != 0 )
            {
              gTouchPadParameters[1] |= *(_BYTE *)(v4 + 12) & 7;
            }
            Win32FreePool(v4);
          }
        }
      }
      ZwClose(KeyHandle);
    }
  }
}
