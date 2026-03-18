/*
 * XREFs of MiZeroPageFileFirstPage @ 0x140774B20
 * Callers:
 *     MiCreatePagingFile @ 0x140773BF8 (MiCreatePagingFile.c)
 * Callees:
 *     KeInitializeEvent @ 0x14000AB10 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     MmUnmapLockedPages @ 0x14006AF70 (MmUnmapLockedPages.c)
 *     MiSynchronousPageWrite @ 0x140193838 (MiSynchronousPageWrite.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 */

__int64 __fastcall MiZeroPageFileFirstPage(struct _FILE_OBJECT *a1)
{
  NTSTATUS Status; // ebx
  __int64 v4; // [rsp+40h] [rbp-19h] BYREF
  struct _IO_STATUS_BLOCK v5; // [rsp+48h] [rbp-11h] BYREF
  struct _KEVENT Event; // [rsp+58h] [rbp-1h] BYREF
  struct _MDL MemoryDescriptorList; // [rsp+70h] [rbp+17h] BYREF
  __int64 v8; // [rsp+A0h] [rbp+47h]

  *(_DWORD *)&MemoryDescriptorList.Size = 1073872952;
  v4 = 0LL;
  MemoryDescriptorList.Next = 0LL;
  MemoryDescriptorList.ByteOffset = 0;
  memset(&Event, 0, sizeof(Event));
  v5.Pointer = 0LL;
  v5.Information = 0LL;
  v8 = qword_140466560;
  memset(&MemoryDescriptorList.MdlFlags + 1, 0, 28);
  MemoryDescriptorList.ByteCount = 4096;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  Status = MiSynchronousPageWrite(a1, &MemoryDescriptorList, &v4, &Event, 0, 0LL, &v5);
  if ( Status >= 0 )
  {
    KeWaitForSingleObject(&Event, WrVirtualMemory, 0, 0, 0LL);
    Status = v5.Status;
  }
  if ( (MemoryDescriptorList.MdlFlags & 1) != 0 )
    MmUnmapLockedPages(MemoryDescriptorList.MappedSystemVa, &MemoryDescriptorList);
  return (unsigned int)Status;
}
