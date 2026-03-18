/*
 * XREFs of UsbhUpdateRegSurpriseRemovalCount @ 0x1C0052A40
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C002C5B0 (__security_check_cookie.c)
 *     memset @ 0x1C002CA00 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C00416A0 (WPP_RECORDER_SF_d.c)
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
  struct _UNICODE_STRING ValueName; // [rsp+50h] [rbp-19h] BYREF
  ULONG ResultLength; // [rsp+60h] [rbp-9h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+68h] [rbp-1h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp+Fh] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+A8h] [rbp+3Fh] BYREF
  int v17; // [rsp+ACh] [rbp+43h]
  int v18; // [rsp+B4h] [rbp+4Bh]

  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  *(_QWORD *)&ValueName.Length = 0LL;
  ValueName.Buffer = 0LL;
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
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_14;
    v5 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_14;
    v6 = 93;
    goto LABEL_13;
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
  if ( result < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v5 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v6 = 94;
LABEL_13:
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
LABEL_14:
  v8 = KeyHandle;
  *a3 = 0;
  if ( v8 )
    return ZwClose(v8);
  return result;
}
