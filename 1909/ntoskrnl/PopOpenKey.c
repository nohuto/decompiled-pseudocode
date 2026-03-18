/*
 * XREFs of PopOpenKey @ 0x140182C28
 * Callers:
 *     PopOpenPowerKey @ 0x140182C04 (PopOpenPowerKey.c)
 *     PpmInitIllegalThrottleLogging @ 0x14019795C (PpmInitIllegalThrottleLogging.c)
 *     PopLoadResumeContext @ 0x14072A584 (PopLoadResumeContext.c)
 *     PopSaveHibernateEnabled @ 0x1408A1F24 (PopSaveHibernateEnabled.c)
 *     PopSetHiberFileSize @ 0x1408A7CFC (PopSetHiberFileSize.c)
 *     PopSetHiberFileType @ 0x1408A7E10 (PopSetHiberFileType.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ZwOpenKey @ 0x1401C0E90 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x1401C0FF0 (ZwCreateKey.c)
 */

__int64 __fastcall PopOpenKey(HANDLE *a1, const WCHAR *a2, ACCESS_MASK a3)
{
  NTSTATUS v6; // ebx
  HANDLE KeyHandle; // [rsp+40h] [rbp-9h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-1h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp+Fh] BYREF
  HANDLE v11; // [rsp+C8h] [rbp+7Fh] BYREF

  ObjectAttributes.Length = 48;
  *(&ObjectAttributes.Length + 1) = 0;
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  KeyHandle = 0LL;
  v11 = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = &CmRegistryMachineSystemCurrentControlSet;
  v6 = ZwOpenKey(&KeyHandle, 0x2001Fu, &ObjectAttributes);
  if ( v6 >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, a2);
    ObjectAttributes.RootDirectory = KeyHandle;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v6 = ZwCreateKey(&v11, a3, &ObjectAttributes, 0, 0LL, 0, 0LL);
    if ( v6 < 0 )
      v11 = 0LL;
    else
      *a1 = v11;
    if ( KeyHandle )
      ZwClose(KeyHandle);
  }
  return (unsigned int)v6;
}
