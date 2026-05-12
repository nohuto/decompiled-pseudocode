/*
 * XREFs of PortMapOpenKey @ 0x1C001C60C
 * Callers:
 *     RaidAdapterCreateDevmapEntry @ 0x1C001C738 (RaidAdapterCreateDevmapEntry.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall PortMapOpenKey(_QWORD *a1)
{
  void *v2; // rbx
  NTSTATUS result; // eax
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-48h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-38h] BYREF
  ULONG Disposition; // [rsp+98h] [rbp+10h] BYREF
  void *KeyHandle; // [rsp+A0h] [rbp+18h] BYREF

  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\Hardware\\DeviceMap\\Scsi");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Attributes = 576;
  v2 = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwCreateKey(&KeyHandle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 1u, &Disposition);
  if ( result >= 0 )
    v2 = KeyHandle;
  *a1 = v2;
  return result;
}
