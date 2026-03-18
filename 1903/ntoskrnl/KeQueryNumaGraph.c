/*
 * XREFs of KeQueryNumaGraph @ 0x140A3BB18
 * Callers:
 *     MmInitSystem @ 0x1409F0DC4 (MmInitSystem.c)
 * Callees:
 *     memmove @ 0x1401D6880 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

PVOID KeQueryNumaGraph()
{
  SIZE_T v0; // rdi
  PVOID PoolWithTag; // rax
  PVOID v2; // rbx

  v0 = 2LL * (unsigned __int16)KeNumberNodes * (unsigned __int16)KeNumberNodes;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v0, 0x616D754Eu);
  v2 = PoolWithTag;
  if ( PoolWithTag )
    memmove(PoolWithTag, KiNodeGraph, v0);
  return v2;
}
