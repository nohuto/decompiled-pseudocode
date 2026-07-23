/*
 * XREFs of PiDrvDbEnumDriverStoreNodes @ 0x14073C768
 * Callers:
 *     PiPnpRtlInit @ 0x14073B710 (PiPnpRtlInit.c)
 *     PiDrvDbInit @ 0x14073B8D0 (PiDrvDbInit.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwOpenDirectoryObject @ 0x1401B8DF0 (ZwOpenDirectoryObject.c)
 *     ZwQueryDirectoryObject @ 0x1401BAA70 (ZwQueryDirectoryObject.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDrvDbEnumDriverStoreNodes(unsigned __int8 (__fastcall *a1)(_QWORD, __int64), __int64 a2)
{
  _WORD *PoolWithTag; // rdi
  NTSTATUS v5; // ebx
  NTSTATUS i; // eax
  _QWORD *v7; // rbx
  HANDLE DirectoryHandle; // [rsp+40h] [rbp-19h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-11h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-1h] BYREF
  ULONG ReturnLength; // [rsp+D0h] [rbp+77h] BYREF
  ULONG Context; // [rsp+D8h] [rbp+7Fh] BYREF

  DirectoryHandle = 0LL;
  Context = 0;
  ReturnLength = 0;
  PoolWithTag = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\DriverStores");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v5 = ZwOpenDirectoryObject(&DirectoryHandle, 1u, &ObjectAttributes);
  if ( v5 >= 0 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x400uLL, 0x62647050u);
    if ( PoolWithTag )
    {
      for ( i = ZwQueryDirectoryObject(DirectoryHandle, PoolWithTag, 0x400u, 1u, 1u, &Context, &ReturnLength);
            ;
            i = ZwQueryDirectoryObject(DirectoryHandle, PoolWithTag, 0x400u, 1u, 0, &Context, &ReturnLength) )
      {
        v5 = i;
        if ( i == -2147483622 )
          break;
        if ( i < 0 )
          goto LABEL_11;
        v7 = PoolWithTag;
        if ( *PoolWithTag )
        {
          do
          {
            if ( !a1(v7[1], a2) )
              break;
            v7 += 4;
          }
          while ( *(_WORD *)v7 );
        }
      }
      v5 = 0;
    }
    else
    {
      v5 = -1073741670;
    }
  }
LABEL_11:
  if ( DirectoryHandle )
    ZwClose(DirectoryHandle);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)v5;
}
