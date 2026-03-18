/*
 * XREFs of SddlpReAlloc @ 0x1408A6C98
 * Callers:
 *     GetOperandValue @ 0x1408A7858 (GetOperandValue.c)
 *     GetPrintableOperandValue @ 0x1408A8268 (GetPrintableOperandValue.c)
 * Callees:
 *     memmove @ 0x1401D1440 (memmove.c)
 *     memset @ 0x1401D1780 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 */

void *__fastcall SddlpReAlloc(size_t Size, SIZE_T a2, PVOID P)
{
  PVOID PoolWithTag; // rax
  void *v7; // rbx

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, a2, 0x64536553u);
  v7 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, a2);
    memmove(v7, P, Size);
  }
  ExFreePoolWithTag(P, 0);
  return v7;
}
