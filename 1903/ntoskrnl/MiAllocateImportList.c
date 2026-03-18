/*
 * XREFs of MiAllocateImportList @ 0x14070F718
 * Callers:
 *     MiPrepareImportList @ 0x14070F6C4 (MiPrepareImportList.c)
 *     MiCompressImportList @ 0x14071090C (MiCompressImportList.c)
 *     MiApplyDriverHotPatch @ 0x14088D4B4 (MiApplyDriverHotPatch.c)
 * Callees:
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
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
