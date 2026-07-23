/*
 * XREFs of BvgaSaveResources @ 0x1409D81A8
 * Callers:
 *     BvgaDriverInitialize @ 0x1409D8020 (BvgaDriverInitialize.c)
 * Callees:
 *     KeBugCheck @ 0x1401BBD00 (KeBugCheck.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

void BvgaSaveResources()
{
  const void **v0; // rbx
  unsigned __int64 v1; // rsi
  unsigned int *v2; // rdi
  PVOID PoolWithTag; // rax
  PVOID v4; // rbp

  v0 = (const void **)ResourceList;
  v1 = 4LL;
  v2 = (unsigned int *)&ResourceSize;
  do
  {
    if ( *v0 )
    {
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, *v2, 0x6D427642u);
      v4 = PoolWithTag;
      if ( !PoolWithTag )
        KeBugCheck(0x7Du);
      memmove(PoolWithTag, *v0, *v2);
      *v0 = v4;
    }
    v1 += 4LL;
    ++v2;
    ++v0;
  }
  while ( v1 < 0x1C );
}
