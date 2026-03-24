/*
 * XREFs of MiCreatePartitionNamespace @ 0x14072BE08
 * Callers:
 *     MiInitializeMemoryEvents @ 0x14072B99C (MiInitializeMemoryEvents.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B9A90 (RtlInitUnicodeString.c)
 *     ZwCreateDirectoryObjectEx @ 0x1401B95D0 (ZwCreateDirectoryObjectEx.c)
 *     memset @ 0x1401D1880 (memset.c)
 *     ObCleanupSecurityDescriptor @ 0x14072BF1C (ObCleanupSecurityDescriptor.c)
 *     ObCreateKernelObjectsSD @ 0x14072BF5C (ObCreateKernelObjectsSD.c)
 */

__int64 __fastcall MiCreatePartitionNamespace(__int64 a1)
{
  int DirectoryObject; // ebx
  __int64 v3; // rax
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-19h] BYREF
  _BYTE SecurityDescriptor[40]; // [rsp+48h] [rbp-9h] BYREF
  int v7; // [rsp+70h] [rbp+1Fh] BYREF
  __int64 v8; // [rsp+78h] [rbp+27h]
  UNICODE_STRING *p_DestinationString; // [rsp+80h] [rbp+2Fh]
  int v10; // [rsp+88h] [rbp+37h]
  _BYTE *v11; // [rsp+90h] [rbp+3Fh]
  __int64 v12; // [rsp+98h] [rbp+47h]

  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  RtlInitUnicodeString(&DestinationString, 0LL);
  v8 = 0LL;
  v12 = 0LL;
  p_DestinationString = &DestinationString;
  v11 = (_BYTE *)SePublicDefaultUnrestrictedSd;
  v7 = 48;
  v10 = 576;
  DirectoryObject = ZwCreateDirectoryObjectEx(a1 + 224, 983055LL, (__int64)&v7);
  if ( DirectoryObject >= 0 )
  {
    DirectoryObject = ObCreateKernelObjectsSD(SecurityDescriptor);
    if ( DirectoryObject >= 0 )
    {
      v3 = *(_QWORD *)(a1 + 224);
      v12 = 0LL;
      v8 = v3;
      v7 = 48;
      p_DestinationString = (UNICODE_STRING *)&MiKernelObjectsDirectoryName;
      v11 = SecurityDescriptor;
      v10 = 576;
      DirectoryObject = ZwCreateDirectoryObjectEx(a1 + 232, 983055LL, (__int64)&v7);
    }
  }
  ObCleanupSecurityDescriptor(SecurityDescriptor);
  return (unsigned int)DirectoryObject;
}
