/*
 * XREFs of UsbhUpdateRegSurpriseRemovalCount @ 0x1C0050C50
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C002B380 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040078 (WPP_RECORDER_SF_d.c)
 */

NTSTATUS __fastcall UsbhUpdateRegSurpriseRemovalCount(__int64 a1, __int64 a2, _BYTE *a3)
{
  NTSTATUS result; // eax
  PDEVICE_OBJECT v5; // rcx
  unsigned __int16 v6; // r9
  int v7; // eax
  void *v8; // rcx
  ULONG CreateOptions[2]; // [rsp+28h] [rbp-41h]
  void *KeyHandle; // [rsp+40h] [rbp-29h] BYREF
  int Data; // [rsp+48h] [rbp-21h] BYREF
  ULONG ResultLength; // [rsp+4Ch] [rbp-1Dh] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+50h] [rbp-19h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-9h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp+7h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+A0h] [rbp+37h] BYREF
  int v17; // [rsp+A4h] [rbp+3Bh]
  int v18; // [rsp+ACh] [rbp+43h]

  KeyHandle = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Usb\\Ceip");
  RtlInitUnicodeString(&ValueName, L"BootPathSurpriseRemovalCount");
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwCreateKey(&KeyHandle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 0, 0LL);
  if ( result < 0 )
  {
    v5 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_12;
    v6 = 93;
    goto LABEL_11;
  }
  if ( ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x10u, &ResultLength) >= 0
    && v17 == 4 )
  {
    v7 = v18 + 1;
  }
  else
  {
    v7 = 1;
  }
  Data = v7;
  result = ZwSetValueKey(KeyHandle, &ValueName, 0, 4u, &Data, 4u);
  if ( result < 0 )
  {
    v5 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v6 = 94;
LABEL_11:
      CreateOptions[0] = result;
      result = WPP_RECORDER_SF_d(
                 (__int64)v5->DeviceExtension,
                 0,
                 1u,
                 v6,
                 (__int64)&WPP_7b579768642e3c85c7e1c1dccc25cdce_Traceguids,
                 *(_QWORD *)CreateOptions);
    }
  }
LABEL_12:
  v8 = KeyHandle;
  *a3 = 0;
  if ( v8 )
    return ZwClose(v8);
  return result;
}
