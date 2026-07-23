/*
 * XREFs of MiCreatePartitionNamespace @ 0x14074FD9C
 * Callers:
 *     MiInitializeMemoryEvents @ 0x14074F91C (MiInitializeMemoryEvents.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     ZwCreateDirectoryObjectEx @ 0x1401C20B0 (ZwCreateDirectoryObjectEx.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ObCleanupSecurityDescriptor @ 0x14074FEC8 (ObCleanupSecurityDescriptor.c)
 *     ObCreateKernelObjectsSD @ 0x14074FF08 (ObCreateKernelObjectsSD.c)
 */

__int64 __fastcall MiCreatePartitionNamespace(__int64 a1)
{
  NTSTATUS KernelObjectsSD; // ebx
  void *v3; // rax
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-19h] BYREF
  _BYTE SecurityDescriptor[40]; // [rsp+48h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp+1Fh] BYREF

  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  RtlInitUnicodeString(&DestinationString, 0LL);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.SecurityDescriptor = (PVOID)SePublicDefaultUnrestrictedSd;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  KernelObjectsSD = ZwCreateDirectoryObjectEx((PHANDLE)(a1 + 224), 0xF000Fu, &ObjectAttributes, 0LL, 2u);
  if ( KernelObjectsSD >= 0 )
  {
    KernelObjectsSD = ObCreateKernelObjectsSD(SecurityDescriptor);
    if ( KernelObjectsSD >= 0 )
    {
      v3 = *(void **)(a1 + 224);
      ObjectAttributes.SecurityQualityOfService = 0LL;
      ObjectAttributes.RootDirectory = v3;
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)&MiKernelObjectsDirectoryName;
      ObjectAttributes.SecurityDescriptor = SecurityDescriptor;
      ObjectAttributes.Attributes = 576;
      KernelObjectsSD = ZwCreateDirectoryObjectEx((PHANDLE)(a1 + 232), 0xF000Fu, &ObjectAttributes, 0LL, 0);
    }
  }
  ObCleanupSecurityDescriptor(SecurityDescriptor);
  return (unsigned int)KernelObjectsSD;
}
