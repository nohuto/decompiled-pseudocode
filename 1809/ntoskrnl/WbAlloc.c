/*
 * XREFs of WbAlloc @ 0x140624D14
 * Callers:
 *     sub_140583D70 @ 0x140583D70 (sub_140583D70.c)
 *     WbValidateEncryptionSegmentArguments @ 0x1405842C0 (WbValidateEncryptionSegmentArguments.c)
 *     WbInitializeEncryptionSegment @ 0x140584B2C (WbInitializeEncryptionSegment.c)
 *     WbDispatchOperation @ 0x140625364 (WbDispatchOperation.c)
 *     WbAllocateMemoryBlock @ 0x14068FD80 (WbAllocateMemoryBlock.c)
 *     sub_1406901F0 @ 0x1406901F0 (sub_1406901F0.c)
 *     WbHashData @ 0x140691168 (WbHashData.c)
 *     WbReAlloc @ 0x1406918D0 (WbReAlloc.c)
 *     WbProcessModuleUnload @ 0x1406B09E4 (WbProcessModuleUnload.c)
 *     WbCreateWarbirdProcess @ 0x1406CFA88 (WbCreateWarbirdProcess.c)
 *     WbProcessStartup @ 0x1406CFE14 (WbProcessStartup.c)
 *     sub_1406D0370 @ 0x1406D0370 (sub_1406D0370.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
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
