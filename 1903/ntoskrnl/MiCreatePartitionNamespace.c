/*
 * XREFs of MiCreatePartitionNamespace @ 0x14074F30C
 * Callers:
 *     MiInitializeMemoryEvents @ 0x14074EE8C (MiInitializeMemoryEvents.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     ZwCreateDirectoryObjectEx @ 0x1401C1530 (ZwCreateDirectoryObjectEx.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ObCleanupSecurityDescriptor @ 0x14074F438 (ObCleanupSecurityDescriptor.c)
 *     ObCreateKernelObjectsSD @ 0x14074F478 (ObCreateKernelObjectsSD.c)
 */

__int64 __fastcall MiCreatePartitionNamespace(__int64 a1)
{
  int DirectoryObject; // ebx
  __int64 v3; // rax
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-19h] BYREF
  _BYTE SecurityDescriptor[40]; // [rsp+48h] [rbp-9h] BYREF
  _QWORD v7[7]; // [rsp+70h] [rbp+1Fh] BYREF

  memset(v7, 0, 0x30uLL);
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  RtlInitUnicodeString(&DestinationString, 0LL);
  v7[1] = 0LL;
  v7[5] = 0LL;
  v7[2] = &DestinationString;
  v7[4] = SePublicDefaultUnrestrictedSd;
  LODWORD(v7[0]) = 48;
  LODWORD(v7[3]) = 576;
  DirectoryObject = ZwCreateDirectoryObjectEx(a1 + 224, 983055LL, (__int64)v7);
  if ( DirectoryObject >= 0 )
  {
    DirectoryObject = ObCreateKernelObjectsSD(SecurityDescriptor);
    if ( DirectoryObject >= 0 )
    {
      v3 = *(_QWORD *)(a1 + 224);
      v7[5] = 0LL;
      v7[1] = v3;
      LODWORD(v7[0]) = 48;
      v7[2] = &MiKernelObjectsDirectoryName;
      v7[4] = SecurityDescriptor;
      LODWORD(v7[3]) = 576;
      DirectoryObject = ZwCreateDirectoryObjectEx(a1 + 232, 983055LL, (__int64)v7);
    }
  }
  ObCleanupSecurityDescriptor(SecurityDescriptor);
  return (unsigned int)DirectoryObject;
}
