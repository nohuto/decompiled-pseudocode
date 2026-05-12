/*
 * XREFs of PortpOpenParametersKey @ 0x1C006D5FC
 * Callers:
 *     PortGetIoTimeoutValue @ 0x1C006C690 (PortGetIoTimeoutValue.c)
 *     PortGetIoLatencyCapValue @ 0x1C006C798 (PortGetIoLatencyCapValue.c)
 *     PortGetBusyPauseTimeValue @ 0x1C006C858 (PortGetBusyPauseTimeValue.c)
 *     PortReadStorageBusType @ 0x1C006D178 (PortReadStorageBusType.c)
 *     PortOpenDeviceKey @ 0x1C006D37C (PortOpenDeviceKey.c)
 *     PortGetBusyRetryCountValue @ 0x1C006E4C4 (PortGetBusyRetryCountValue.c)
 * Callees:
 *     <none>
 */

void *__fastcall PortpOpenParametersKey(struct _UNICODE_STRING *a1)
{
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  void *KeyHandle; // [rsp+70h] [rbp+10h] BYREF
  void *v5; // [rsp+78h] [rbp+18h] BYREF

  KeyHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = a1;
  ObjectAttributes.Length = 48;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.Attributes = 576;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) < 0 )
    return KeyHandle;
  RtlInitUnicodeString(&DestinationString, L"Parameters");
  ObjectAttributes.RootDirectory = KeyHandle;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&v5, 0x20019u, &ObjectAttributes) < 0 )
    return KeyHandle;
  ZwClose(KeyHandle);
  return v5;
}
