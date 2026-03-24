/*
 * XREFs of IdnaMemAlloc @ 0x1402F4444
 * Callers:
 *     RtlpIdnToUnicodeWorker @ 0x1402F44B8 (RtlpIdnToUnicodeWorker.c)
 *     RtlIdnToUnicode @ 0x140896CA0 (RtlIdnToUnicode.c)
 *     RtlpNameprepAsciiWorker @ 0x140896D30 (RtlpNameprepAsciiWorker.c)
 * Callees:
 *     memset @ 0x1401D1880 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall IdnaMemAlloc(size_t Size)
{
  PVOID PoolWithTag; // rax
  PVOID v3; // rbx

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, Size, 0x456E6449u);
  v3 = PoolWithTag;
  if ( PoolWithTag )
    memset(PoolWithTag, 0, Size);
  return v3;
}
