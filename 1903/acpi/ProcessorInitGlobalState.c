/*
 * XREFs of ProcessorInitGlobalState @ 0x1C00BEE78
 * Callers:
 *     AcpiIrqLibInitializeGlobalState @ 0x1C00BED50 (AcpiIrqLibInitializeGlobalState.c)
 * Callees:
 *     memset @ 0x1C0031D40 (memset.c)
 */

__int64 ProcessorInitGlobalState()
{
  SIZE_T v0; // rbx
  PVOID PoolWithTag; // rax
  SIZE_T v2; // rbx
  PVOID v3; // rax

  v0 = 8LL * KeQueryMaximumProcessorCountEx(0xFFFFu);
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v0, 0x49706341u);
  ProcessorByNtNumber = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v0);
    qword_1C0081588 = (__int64)&ProcessorGroupListHead;
    ProcessorGroupListHead = (__int64)&ProcessorGroupListHead;
    v2 = 8LL * KeQueryMaximumGroupCount();
    v3 = ExAllocatePoolWithTag(PagedPool, v2, 0x49706341u);
    ProcessorGroupByNumber = (__int64)v3;
    if ( v3 )
    {
      memset(v3, 0, v2);
      return 0LL;
    }
    ExFreePoolWithTag(ProcessorByNtNumber, 0);
    ProcessorByNtNumber = 0LL;
  }
  return 3221225626LL;
}
