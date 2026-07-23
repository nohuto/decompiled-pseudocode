/*
 * XREFs of IdnaMemAlloc @ 0x1402F4634
 * Callers:
 *     RtlpIdnToUnicodeWorker @ 0x1402F46A8 (RtlpIdnToUnicodeWorker.c)
 *     RtlIdnToUnicode @ 0x140897F00 (RtlIdnToUnicode.c)
 *     RtlpNameprepAsciiWorker @ 0x140897F90 (RtlpNameprepAsciiWorker.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
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
