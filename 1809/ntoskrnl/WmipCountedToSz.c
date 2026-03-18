/*
 * XREFs of WmipCountedToSz @ 0x140612C58
 * Callers:
 *     WmipPrepareWnodeSI @ 0x140612888 (WmipPrepareWnodeSI.c)
 *     WmipAddDataSource @ 0x1407075F0 (WmipAddDataSource.c)
 * Callees:
 *     memmove @ 0x1401D1440 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 */

_WORD *__fastcall WmipCountedToSz(unsigned __int16 *a1)
{
  unsigned __int64 v1; // rdi
  _WORD *PoolWithTag; // rax
  _WORD *v4; // rbx

  v1 = *a1;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v1 + 2, 0x70696D57u);
  v4 = PoolWithTag;
  if ( PoolWithTag )
  {
    memmove(PoolWithTag, a1 + 1, (unsigned int)v1);
    v4[v1 >> 1] = 0;
  }
  return v4;
}
