/*
 * XREFs of AccessPTPEnabledStatus @ 0x1C0128920
 * Callers:
 *     CheckPointerDeviceConfiguration @ 0x1C01287C0 (CheckPointerDeviceConfiguration.c)
 *     SetUserPTPEnabledPreference @ 0x1C01BBE60 (SetUserPTPEnabledPreference.c)
 * Callees:
 *     RtlUnicodeStringCatString @ 0x1C00AC764 (RtlUnicodeStringCatString.c)
 *     RtlUnicodeStringCopy @ 0x1C00AC8B4 (RtlUnicodeStringCopy.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

__int64 __fastcall AccessPTPEnabledStatus(int a1, int a2, _DWORD *a3)
{
  unsigned int v3; // ebx
  void *KeyHandle; // [rsp+30h] [rbp-D0h] BYREF
  int Data; // [rsp+38h] [rbp-C8h] BYREF
  ULONG ResultLength; // [rsp+40h] [rbp-C0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+58h] [rbp-A8h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-98h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+98h] [rbp-68h] BYREF
  int v14; // [rsp+9Ch] [rbp-64h]
  int v15; // [rsp+A0h] [rbp-60h]
  int v16; // [rsp+A4h] [rbp-5Ch]
  char v17; // [rsp+B0h] [rbp-50h] BYREF

  v3 = 0;
  Data = a1;
  KeyHandle = 0LL;
  ResultLength = 0;
  if ( a3 )
    *a3 = 1;
  *(_DWORD *)&DestinationString.Length = 45875200;
  DestinationString.Buffer = (PWSTR)&v17;
  if ( RtlUnicodeStringCopy(&DestinationString, (PCUNICODE_STRING)(grpWinStaList + 168LL)) >= 0
    && RtlUnicodeStringCatString(
         &DestinationString,
         L"Software\\Microsoft\\Windows\\CurrentVersion\\PrecisionTouchPad\\Status") >= 0 )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes) >= 0 )
    {
      RtlInitUnicodeString(&ValueName, L"Enabled");
      if ( a2 )
      {
        if ( ZwQueryValueKey(
               KeyHandle,
               &ValueName,
               KeyValuePartialInformation,
               KeyValueInformation,
               0x14u,
               &ResultLength) < 0
          || v14 != 4
          || v15 != 4 )
        {
          goto LABEL_13;
        }
        if ( !v16 )
          *a3 = 0;
      }
      else if ( ZwSetValueKey(KeyHandle, &ValueName, 0, 4u, &Data, 4u) < 0 )
      {
        goto LABEL_13;
      }
      v3 = 1;
LABEL_13:
      ZwClose(KeyHandle);
    }
  }
  return v3;
}
