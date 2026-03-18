/*
 * XREFs of SmKmStoreFileDelete @ 0x1408EAD04
 * Callers:
 *     SmKmStoreFileCreate @ 0x1408EA5A4 (SmKmStoreFileCreate.c)
 *     SmKmStoreFileCreateForIoType @ 0x1408EAA54 (SmKmStoreFileCreateForIoType.c)
 *     SmcCacheCleanup @ 0x1408EB9A4 (SmcCacheCleanup.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     IoSetThreadHardErrorMode @ 0x1400E50E0 (IoSetThreadHardErrorMode.c)
 *     ZwSetInformationFile @ 0x1401C05B0 (ZwSetInformationFile.c)
 */

__int64 __fastcall SmKmStoreFileDelete(__int64 a1)
{
  unsigned int v2; // ebx
  BOOLEAN v3; // al
  void *v4; // rcx
  BOOLEAN v5; // si
  NTSTATUS Status; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-18h] BYREF
  char FileInformation; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0;
  IoStatusBlock.Pointer = 0LL;
  FileInformation = 0;
  IoStatusBlock.Information = 0LL;
  v3 = IoSetThreadHardErrorMode(0);
  v4 = *(void **)a1;
  FileInformation = 1;
  v5 = v3;
  Status = ZwSetInformationFile(v4, &IoStatusBlock, &FileInformation, 1u, FileDispositionInformation);
  if ( Status == 259 )
  {
    KeWaitForSingleObject((PVOID)(*(_QWORD *)(a1 + 8) + 152LL), Executive, 0, 0, 0LL);
    Status = IoStatusBlock.Status;
  }
  if ( Status < 0 )
    v2 = Status;
  IoSetThreadHardErrorMode(v5);
  return v2;
}
