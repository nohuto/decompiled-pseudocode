/*
 * XREFs of MmIsNonPagedPoolNx @ 0x14009B388
 * Callers:
 *     ExFreeLargePool @ 0x14009AD10 (ExFreeLargePool.c)
 *     EtwTracePool @ 0x1401B7350 (EtwTracePool.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 */

_BOOL8 __fastcall MmIsNonPagedPoolNx(unsigned __int64 a1)
{
  __int64 v1; // rax
  unsigned __int64 v2; // r9

  v1 = MI_READ_PTE_LOCK_FREE(((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
  if ( (v1 & 0x80u) == 0LL )
    v1 = MI_READ_PTE_LOCK_FREE(((v2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  return v1 < 0;
}
