/*
 * XREFs of MmCreateMdl @ 0x140113CB0
 * Callers:
 *     MiPfAllocateMdls @ 0x140699460 (MiPfAllocateMdls.c)
 *     SmKmStoreFileWriteHeader @ 0x1408AF6B0 (SmKmStoreFileWriteHeader.c)
 *     MiLockRetpolineStubs @ 0x1409F8180 (MiLockRetpolineStubs.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

PMDL __stdcall MmCreateMdl(PMDL MemoryDescriptorList, PVOID Base, SIZE_T Length)
{
  struct _MDL *PoolWithTag; // r9
  __int16 v6; // di
  PMDL result; // rax

  PoolWithTag = MemoryDescriptorList;
  if ( Length >= 0x100000000LL )
    return 0LL;
  v6 = (__int16)Base;
  if ( !MemoryDescriptorList )
  {
    PoolWithTag = (struct _MDL *)ExAllocatePoolWithTag(
                                   NonPagedPoolNx,
                                   8 * ((((unsigned __int16)Base & 0xFFF) + Length + 4095) >> 12) + 48,
                                   0x6C646D4Du);
    if ( !PoolWithTag )
      return 0LL;
  }
  PoolWithTag->Next = 0LL;
  PoolWithTag->MdlFlags = 0;
  PoolWithTag->ByteCount = Length;
  PoolWithTag->StartVa = (PVOID)((unsigned __int64)Base & 0xFFFFFFFFFFFFF000uLL);
  result = PoolWithTag;
  PoolWithTag->Size = 8 * ((((v6 & 0xFFF) + Length + 4095) >> 12) + 6);
  PoolWithTag->ByteOffset = v6 & 0xFFF;
  return result;
}
