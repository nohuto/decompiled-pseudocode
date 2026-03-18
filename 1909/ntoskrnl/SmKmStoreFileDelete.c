/*
 * XREFs of SmKmStoreFileDelete @ 0x1408EA60C
 * Callers:
 *     SmKmStoreFileCreate @ 0x1408E9EAC (SmKmStoreFileCreate.c)
 *     SmKmStoreFileCreateForIoType @ 0x1408EA35C (SmKmStoreFileCreateForIoType.c)
 *     SmcCacheCleanup @ 0x1408EB2AC (SmcCacheCleanup.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     IoSetThreadHardErrorMode @ 0x1400EA080 (IoSetThreadHardErrorMode.c)
 *     ZwSetInformationFile @ 0x1401C1130 (ZwSetInformationFile.c)
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
