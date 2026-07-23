/*
 * XREFs of WbAlloc @ 0x140625D34
 * Callers:
 *     sub_140584D70 @ 0x140584D70 (sub_140584D70.c)
 *     WbValidateEncryptionSegmentArguments @ 0x1405852C0 (WbValidateEncryptionSegmentArguments.c)
 *     WbInitializeEncryptionSegment @ 0x140585B2C (WbInitializeEncryptionSegment.c)
 *     WbDispatchOperation @ 0x140626384 (WbDispatchOperation.c)
 *     WbAllocateMemoryBlock @ 0x140690F20 (WbAllocateMemoryBlock.c)
 *     sub_140691390 @ 0x140691390 (sub_140691390.c)
 *     WbHashData @ 0x140692308 (WbHashData.c)
 *     WbReAlloc @ 0x140692A70 (WbReAlloc.c)
 *     WbProcessModuleUnload @ 0x1406B1C64 (WbProcessModuleUnload.c)
 *     WbCreateWarbirdProcess @ 0x1406D0D08 (WbCreateWarbirdProcess.c)
 *     WbProcessStartup @ 0x1406D1094 (WbProcessStartup.c)
 *     sub_1406D15F0 @ 0x1406D15F0 (sub_1406D15F0.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall WbAlloc(SIZE_T NumberOfBytes, _QWORD *a2)
{
  unsigned int v2; // ebx
  PVOID PoolWithTag; // rax

  v2 = 0;
  PoolWithTag = 0LL;
  if ( (_DWORD)NumberOfBytes
    && (PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x42524157u)) == 0LL )
  {
    return (unsigned int)-1073741801;
  }
  else
  {
    if ( a2 )
    {
      *a2 = PoolWithTag;
      PoolWithTag = 0LL;
    }
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0x42524157u);
  }
  return v2;
}
