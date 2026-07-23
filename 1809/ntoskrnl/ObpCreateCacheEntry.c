/*
 * XREFs of ObpCreateCacheEntry @ 0x1405CB164
 * Callers:
 *     ObLogSecurityDescriptor @ 0x1405CAE70 (ObLogSecurityDescriptor.c)
 * Callees:
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

_QWORD *__fastcall ObpCreateCacheEntry(void *Src, size_t Size, __int64 a3, unsigned int a4)
{
  unsigned int v4; // edi
  __int64 v6; // rsi
  _QWORD *PoolWithTag; // rax
  _QWORD *v9; // rbx

  v4 = Size;
  v6 = a4;
  if ( (int)Size + 40 < (unsigned int)Size )
    return 0LL;
  PoolWithTag = ExAllocatePoolWithTag(PagedPoolCacheAligned, (unsigned int)(Size + 40), 0x6353624Fu);
  v9 = PoolWithTag;
  if ( !PoolWithTag )
    return 0LL;
  memset(PoolWithTag, 0, 0x28uLL);
  v9[1] = v6;
  v9[2] = a3;
  *((_DWORD *)v9 + 6) = v4;
  memmove(v9 + 4, Src, v4);
  return v9;
}
