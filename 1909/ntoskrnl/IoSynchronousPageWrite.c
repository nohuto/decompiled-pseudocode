/*
 * XREFs of IoSynchronousPageWrite @ 0x140091F60
 * Callers:
 *     SmKmStoreFileWriteHeader @ 0x1408EAD40 (SmKmStoreFileWriteHeader.c)
 * Callees:
 *     IoSynchronousPageWriteEx @ 0x140094EEC (IoSynchronousPageWriteEx.c)
 */

NTSTATUS __stdcall IoSynchronousPageWrite(
        PFILE_OBJECT FileObject,
        PMDL MemoryDescriptorList,
        PLARGE_INTEGER StartingOffset,
        PKEVENT Event,
        PIO_STATUS_BLOCK IoStatusBlock)
{
  return IoSynchronousPageWriteEx(
           (_DWORD)FileObject,
           (_DWORD)MemoryDescriptorList,
           (_DWORD)StartingOffset,
           (_DWORD)Event,
           0,
           0LL,
           (__int64)IoStatusBlock);
}
