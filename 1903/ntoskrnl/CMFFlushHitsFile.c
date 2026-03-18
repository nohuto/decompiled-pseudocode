/*
 * XREFs of CMFFlushHitsFile @ 0x140915E7C
 * Callers:
 *     NtMapCMFModule @ 0x140916F00 (NtMapCMFModule.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     RtlStringCchPrintfW @ 0x140087CC8 (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwWaitForSingleObject @ 0x1401C0150 (ZwWaitForSingleObject.c)
 *     ZwWriteFile @ 0x1401C01D0 (ZwWriteFile.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwOpenFile @ 0x1401C0730 (ZwOpenFile.c)
 *     ZwCreateEvent @ 0x1401C09D0 (ZwCreateEvent.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     MmFlushVirtualMemory @ 0x14069E9FC (MmFlushVirtualMemory.c)
 *     CMFGetFileSizeEx @ 0x140916198 (CMFGetFileSizeEx.c)
 */

__int64 __fastcall CMFFlushHitsFile(void *Src, unsigned __int64 Length)
{
  void *Buffer; // rsi
  __int64 result; // rax
  NTSTATUS v6; // edi
  ULONG v7; // edi
  PVOID PoolWithTag; // rax
  HANDLE FileHandle; // [rsp+50h] [rbp-2B8h] BYREF
  HANDLE EventHandle; // [rsp+58h] [rbp-2B0h] BYREF
  _DWORD v11[2]; // [rsp+60h] [rbp-2A8h] BYREF
  void *v12; // [rsp+68h] [rbp-2A0h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+70h] [rbp-298h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-288h] BYREF
  unsigned __int64 v15; // [rsp+B0h] [rbp-258h] BYREF
  LARGE_INTEGER ByteOffset; // [rsp+B8h] [rbp-250h] BYREF
  UNICODE_STRING DestinationString; // [rsp+C0h] [rbp-248h] BYREF
  wchar_t pszDest[264]; // [rsp+D0h] [rbp-238h] BYREF

  FileHandle = 0LL;
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  EventHandle = 0LL;
  ByteOffset.QuadPart = 0LL;
  Buffer = 0LL;
  if ( !Src )
    return 3221225485LL;
  if ( (CMFFlagsCache & 8) != 0
    || (v12 = Src,
        v15 = Length,
        result = MmFlushVirtualMemory(
                   KeGetCurrentThread()->ApcState.Process,
                   (unsigned __int64 *)&v12,
                   &v15,
                   (unsigned int *)&IoStatusBlock),
        (_DWORD)result == -1073741688) )
  {
    v6 = RtlStringCchPrintfW(pszDest, 0x104uLL, L"%s\\rc%04u\\rescache.hit", L"\\SystemRoot\\Rescache", CMFCacheIndex);
    if ( v6 >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, pszDest);
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      ObjectAttributes.ObjectName = &DestinationString;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v6 = ZwOpenFile(&FileHandle, 0xC0000000, &ObjectAttributes, &IoStatusBlock, 7u, 0);
      if ( (v6 & 0xC0000000) == 0xC0000000 )
      {
        FileHandle = 0LL;
      }
      else
      {
        ObjectAttributes.Length = 48;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 512;
        ObjectAttributes.ObjectName = 0LL;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v6 = ZwCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, SynchronizationEvent, 0);
        if ( (v6 & 0xC0000000) != 0xC0000000 )
        {
          v11[0] = 0;
          v11[1] = 0;
          v6 = CMFGetFileSizeEx(FileHandle, v11);
          if ( (v6 & 0xC0000000) != 0xC0000000 )
          {
            v7 = v11[0];
            if ( Length < v11[0] )
              v7 = Length;
            PoolWithTag = ExAllocatePoolWithTag(PagedPool, v7, 0x636D6650u);
            Buffer = PoolWithTag;
            v12 = PoolWithTag;
            if ( PoolWithTag )
            {
              memmove(PoolWithTag, Src, v7);
              v6 = ZwWriteFile(FileHandle, EventHandle, 0LL, 0LL, &IoStatusBlock, Buffer, v7, &ByteOffset, 0LL);
              if ( v6 == 259 )
                v6 = ZwWaitForSingleObject(EventHandle, 0, 0LL);
            }
            else
            {
              v6 = -1073741801;
            }
          }
        }
      }
    }
    if ( Buffer )
      ExFreePoolWithTag(Buffer, 0);
    if ( EventHandle )
      ZwClose(EventHandle);
    if ( FileHandle )
      ZwClose(FileHandle);
    return (unsigned int)v6;
  }
  return result;
}
