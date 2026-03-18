/*
 * XREFs of IdnaMemAlloc @ 0x140312A10
 * Callers:
 *     RtlpIdnToUnicodeWorker @ 0x140312A84 (RtlpIdnToUnicodeWorker.c)
 *     RtlIdnToUnicode @ 0x1408D4DC0 (RtlIdnToUnicode.c)
 *     RtlpNameprepAsciiWorker @ 0x1408D4E50 (RtlpNameprepAsciiWorker.c)
 * Callees:
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
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
