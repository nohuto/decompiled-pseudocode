/*
 * XREFs of MiAllocateImportList @ 0x1406C9B44
 * Callers:
 *     MiCompressImportList @ 0x1406C9A38 (MiCompressImportList.c)
 *     MiPrepareImportList @ 0x1406C9AF0 (MiPrepareImportList.c)
 *     MiApplyDriverHotPatch @ 0x1408552E0 (MiApplyDriverHotPatch.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

unsigned __int64 *__fastcall MiAllocateImportList(unsigned __int64 a1)
{
  SIZE_T v2; // rsi
  unsigned __int64 *PoolWithTag; // rax
  unsigned __int64 *v4; // rbx

  if ( a1 > 0x1FFFFFFE )
    return 0LL;
  v2 = (unsigned int)(8 * a1 + 8);
  PoolWithTag = (unsigned __int64 *)ExAllocatePoolWithTag(PagedPool, v2, 0x54446D4Du);
  v4 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, (unsigned int)v2);
    *v4 = a1;
  }
  return v4;
}
