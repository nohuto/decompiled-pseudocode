/*
 * XREFs of ?CheckLegacyPadControlledStatus@@YAXPEAU_DEVICE_OBJECT@@@Z @ 0x1C020F390
 * Callers:
 *     IsLegacyTouchPadDevice @ 0x1C012A240 (IsLegacyTouchPadDevice.c)
 * Callees:
 *     GetPointerDeviceId @ 0x1C012A990 (GetPointerDeviceId.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memset @ 0x1C0166840 (memset.c)
 */

void __fastcall CheckLegacyPadControlledStatus(PDEVICE_OBJECT DeviceObject)
{
  __int64 v2; // rbx
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  void *KeyHandle; // [rsp+38h] [rbp-C8h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+40h] [rbp-C0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  char v8; // [rsp+90h] [rbp-70h] BYREF

  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  *(_QWORD *)&ValueName.Length = 13107200LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  ResultLength = 0;
  ValueName.Buffer = (PWSTR)&v8;
  if ( (int)GetPointerDeviceId(DeviceObject, &ValueName) >= 0 )
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
          v2 = Win32AllocPool(ResultLength, 2019914581LL);
          if ( v2 )
          {
            if ( ZwQueryValueKey(
                   KeyHandle,
                   &ValueName,
                   KeyValuePartialInformation,
                   (PVOID)v2,
                   ResultLength,
                   &ResultLength) >= 0
              && *(_DWORD *)(v2 + 4) == 4
              && (*(_BYTE *)(v2 + 12) & 1) != 0 )
            {
              gTouchPadParameters[1] |= *(_BYTE *)(v2 + 12) & 7;
            }
            Win32FreePool(v2);
          }
        }
      }
      ZwClose(KeyHandle);
    }
  }
}
