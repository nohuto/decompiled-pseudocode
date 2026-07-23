/*
 * XREFs of CmpInterlockedFunction @ 0x1407368A8
 * Callers:
 *     CmpFinishSystemHivesLoad @ 0x140733770 (CmpFinishSystemHivesLoad.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401B8530 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1401B85D0 (ZwQueryValueKey.c)
 *     ZwSetValueKey @ 0x1401B8EF0 (ZwSetValueKey.c)
 *     ZwFlushKey @ 0x1401B9F50 (ZwFlushKey.c)
 */

NTSTATUS CmpInterlockedFunction()
{
  NTSTATUS result; // eax
  NTSTATUS v1; // ebx
  int Data; // [rsp+30h] [rbp-29h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-21h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-19h] BYREF
  ULONG ResultLength; // [rsp+48h] [rbp-11h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+7h] BYREF
  _BYTE KeyValueInformation[12]; // [rsp+90h] [rbp+37h] BYREF
  unsigned __int8 v9; // [rsp+9Ch] [rbp+43h]

  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &CmRegistryMachineSystemCurrentControlSet;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.Length = 48;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 0x2001Fu, &ObjectAttributes);
  if ( result >= 0 )
  {
    ObjectAttributes.RootDirectory = KeyHandle;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)L".0";
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v1 = ZwOpenKey(&Handle, 0x2001Fu, &ObjectAttributes);
    ZwClose(KeyHandle);
    if ( v1 < 0 )
      return v1;
    RtlInitUnicodeString(&DestinationString, L"ProcessorControl");
    v1 = ZwQueryValueKey(
           Handle,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x14u,
           &ResultLength);
    if ( v1 >= 0 )
    {
      Data = v9;
      if ( v9 == 2 )
      {
LABEL_5:
        ZwClose(Handle);
        return v1;
      }
      if ( v9 == 1 )
      {
        v1 = -1073741823;
        goto LABEL_5;
      }
    }
    Data = 1;
    ZwSetValueKey(Handle, &DestinationString, 0, 4u, &Data, 4u);
    ZwFlushKey(Handle);
    if ( Data != 2 )
    {
      Data = 2;
      ZwSetValueKey(Handle, &DestinationString, 0, 4u, &Data, 4u);
    }
    goto LABEL_5;
  }
  return result;
}
