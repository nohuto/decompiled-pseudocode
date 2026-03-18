/*
 * XREFs of WbAlloc @ 0x1405CAA90
 * Callers:
 *     sub_1405B3934 @ 0x1405B3934 (sub_1405B3934.c)
 *     WbValidateEncryptionSegmentArguments @ 0x1405B3EAC (WbValidateEncryptionSegmentArguments.c)
 *     WbInitializeEncryptionSegment @ 0x1405B4710 (WbInitializeEncryptionSegment.c)
 *     WbDispatchOperation @ 0x1405CADA0 (WbDispatchOperation.c)
 *     WbAllocateMemoryBlock @ 0x1406AFBDC (WbAllocateMemoryBlock.c)
 *     WbCreateHeapExecutedBlock @ 0x1406AFEE0 (WbCreateHeapExecutedBlock.c)
 *     WbHashData @ 0x1406B063C (WbHashData.c)
 *     WbReAlloc @ 0x1406B1394 (WbReAlloc.c)
 *     WbProcessModuleUnload @ 0x1406D5338 (WbProcessModuleUnload.c)
 *     WbCreateWarbirdProcess @ 0x1406EF6EC (WbCreateWarbirdProcess.c)
 *     WbProcessStartup @ 0x1406EFAD4 (WbProcessStartup.c)
 *     sub_1406F12CC @ 0x1406F12CC (sub_1406F12CC.c)
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
