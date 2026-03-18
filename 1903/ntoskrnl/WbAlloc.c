/*
 * XREFs of WbAlloc @ 0x1405CA590
 * Callers:
 *     sub_1405B3558 @ 0x1405B3558 (sub_1405B3558.c)
 *     WbValidateEncryptionSegmentArguments @ 0x1405B3AD0 (WbValidateEncryptionSegmentArguments.c)
 *     WbInitializeEncryptionSegment @ 0x1405B4334 (WbInitializeEncryptionSegment.c)
 *     WbDispatchOperation @ 0x1405CA8A0 (WbDispatchOperation.c)
 *     WbAllocateMemoryBlock @ 0x1406ADCAC (WbAllocateMemoryBlock.c)
 *     WbCreateHeapExecutedBlock @ 0x1406ADFB0 (WbCreateHeapExecutedBlock.c)
 *     WbHashData @ 0x1406AE70C (WbHashData.c)
 *     WbReAlloc @ 0x1406AF464 (WbReAlloc.c)
 *     WbProcessModuleUnload @ 0x1406D5B04 (WbProcessModuleUnload.c)
 *     WbCreateWarbirdProcess @ 0x1406EDFEC (WbCreateWarbirdProcess.c)
 *     WbProcessStartup @ 0x1406EE3B4 (WbProcessStartup.c)
 *     sub_1406EF65C @ 0x1406EF65C (sub_1406EF65C.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
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
